/*
 * XREFs of log10 @ 0x1C0008A88
 * Callers:
 *     USBCntrlGetSetDbLevel @ 0x1C0024300 (USBCntrlGetSetDbLevel.c)
 * Callees:
 *     _handle_error @ 0x1C0008EF4 (_handle_error.c)
 */

double __cdecl log10(double X)
{
  double v1; // rdx
  __int64 v2; // xmm5_8
  int v3; // edx
  int v4; // r8d
  int v5; // r8d
  double v6; // xmm4_8
  double v7; // xmm2_8
  double v8; // xmm1_8
  double v9; // xmm3_8
  __int64 v10; // rax
  double v11; // xmm2_8
  double v12; // xmm0_8
  int v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+30h] [rbp-28h]

  v1 = X;
  v2 = *(_QWORD *)&X;
  if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
  {
    if ( (*(_QWORD *)&X & 0xFFFFFFFFFFFFFLL) != 0 )
    {
      v3 = LODWORD(X);
      X = 0.0;
      v14 = v2;
      v13 = 0;
      v4 = v3;
LABEL_4:
      handle_error((unsigned int)"log10", 27, v4, 1, v13, 33, v14, 0LL, 1);
      return X;
    }
    if ( X >= 0.0 )
      return X;
LABEL_7:
    X = 0.0;
    v4 = 0;
    v14 = v2;
    v13 = 8;
    goto LABEL_4;
  }
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL) == 0 )
  {
    X = 0.0;
    handle_error((unsigned int)"log10", 27, 0, 2, 4, 34, v2, 0LL, 1);
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
    v10 = ((*(_QWORD *)&v1 >> 45) & 1) + ((*(_QWORD *)&v1 >> 46) & 0x3F | 0x40);
    v11 = (COERCE_DOUBLE(*(_QWORD *)&v1 & 0xFFFFFFFFFFFFFLL | 0x3FE0000000000000LL) - (double)(int)v10 * 0.0078125)
        / ((COERCE_DOUBLE(*(_QWORD *)&v1 & 0xFFFFFFFFFFFFFLL | 0x3FE0000000000000LL) - (double)(int)v10 * 0.0078125)
         * 0.5
         + (double)(int)v10 * 0.0078125);
    v12 = (double)(int)(((*(_QWORD *)&v1 >> 52) & 0x7FF) - v5 - 1023);
    v6 = v12 * 0.6931471228599548 + *(double *)&aOutputbufferCa[8 * v10];
    v9 = ((v11 * v11 * 0.002232198107585598 + 0.01249999999781387) * (v11 * v11) + 0.08333333333333336)
       * (v11
        * v11)
       * v11
       + v11
       + qword_1C000DD40[v10]
       + v12 * 0.00000005769999047543285;
  }
  else
  {
    *(_QWORD *)&v6 = COERCE_UNSIGNED_INT64(X - 1.0) & 0xFFFFFFFF00000000uLL;
    v7 = (X - 1.0) / (X - 1.0 + 2.0);
    v8 = v7 + v7;
    v9 = (((v8 * v8 * 0.0004348877777076146 + 0.002232139987919448) * (v8 * v8) + 0.01250000000377175) * (v8 * v8)
        + 0.08333333333333179)
       * (v8
        * v8
        * v8)
       - v7 * (X - 1.0)
       + X
       - 1.0
       - v6;
  }
  return v9 * 0.0000007349550096401511
       + v6 * 0.0000007349550096401511
       + v9 * 0.4342937469482422
       + v6 * 0.4342937469482422;
}
