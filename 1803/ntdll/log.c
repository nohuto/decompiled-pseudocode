/*
 * XREFs of log @ 0x18008EAB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180092F8C @ 0x180092F8C (sub_180092F8C.c)
 */

double __cdecl log(double X)
{
  double v1; // rdx
  __int64 v2; // xmm4_8
  int v3; // edx
  int v4; // r8d
  int v5; // r8d
  double v6; // xmm4_8
  double v7; // xmm3_8
  double v8; // xmm2_8
  __int64 v9; // rax
  int v10; // edx
  double v11; // xmm3_8
  int v12; // [rsp+20h] [rbp-38h]
  __int64 v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp+8h]

  v1 = X;
  v2 = *(_QWORD *)&X;
  if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
  {
    if ( (*(_QWORD *)&X & 0xFFFFFFFFFFFFFLL) != 0 )
    {
      v3 = LODWORD(X);
      X = 0.0;
      v13 = v2;
      v12 = 0;
      v4 = v3;
LABEL_4:
      sub_180092F8C((unsigned int)&unk_1801178D8, 26, v4, 1, v12, 33, v13, 0LL, 1);
      return X;
    }
    if ( X >= 0.0 )
      return X;
LABEL_7:
    X = 0.0;
    v4 = 0;
    v13 = v2;
    v12 = 8;
    goto LABEL_4;
  }
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL) == 0 )
  {
    X = 0.0;
    sub_180092F8C((unsigned int)&unk_1801178D8, 26, 0, 2, 4, 34, v2, 0LL, 1);
    return X;
  }
  v5 = 0;
  if ( X < 0.0 )
    goto LABEL_7;
  if ( (unsigned __int64)(*(_QWORD *)&X - 0x3FEE0FAA00000000LL) > 0x2F88200000000LL )
  {
    if ( *(_QWORD *)&X < 0x10000000000000uLL )
    {
      v5 = 60;
      v1 = COERCE_DOUBLE(*(_QWORD *)&X | 0x3D0000000000000LL) - 2.565335500811485e-290;
    }
    v14 = *(_QWORD *)&v1 & 0xFFFFFFFFFFFFFLL | 0x3FE0000000000000LL;
    v9 = ((*(_QWORD *)&v1 >> 45) & 1) + ((*(_QWORD *)&v1 >> 46) & 0x3F | 0x40);
    v10 = ((*(_QWORD *)&v1 >> 52) & 0x7FF) - v5 - 1023;
    v11 = (*(double *)&v14 - (double)(int)v9 * 0.0078125)
        / ((*(double *)&v14 - (double)(int)v9 * 0.0078125) * 0.5 + (double)(int)v9 * 0.0078125);
    return ((v11 * v11 * 0.002232198107585598 + 0.01249999999781387) * (v11 * v11) + 0.08333333333333336)
         * (v11
          * v11)
         * v11
         + v11
         + qword_1801174D0[v9]
         + (double)v10 * 0.00000005769999047543285
         + (double)v10 * 0.6931471228599548
         + qword_1801172C0[v9];
  }
  else
  {
    v6 = X - 1.0;
    v7 = v6 / (v6 + 2.0);
    v8 = v7 + v7;
    return (((v8 * v8 * 0.0004348877777076146 + 0.002232139987919448) * (v8 * v8) + 0.01250000000377175) * (v8 * v8)
          + 0.08333333333333179)
         * (v8
          * v8
          * v8)
         - v7 * v6
         + v6;
  }
}
