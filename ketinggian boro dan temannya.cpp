#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    double n;
    double s;
    double v;
    double t;
    double prediksiKetinggian;
    double sinA;

    cin >> n;
    cin >> s;
    cin >> v;
    cin >> t;
    sinA = sin(s * 22 / 7 / 180);
    v = pow(v, 2) * pow(sinA, 20);
    cout << t << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}

