/*
 * XREFs of sin @ 0x18008E2B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008E6F0 @ 0x18008E6F0 (sub_18008E6F0.c)
 *     sub_180092E5C @ 0x180092E5C (sub_180092E5C.c)
 *     sub_180092F8C @ 0x180092F8C (sub_180092F8C.c)
 *     sub_1800930B4 @ 0x1800930B4 (sub_1800930B4.c)
 */

double __cdecl sin(double X)
{
  double v1; // xmm6_8
  double v2; // rcx
  unsigned __int64 v3; // rdx
  _BOOL8 v4; // rbx
  int v5; // ecx
  double v6; // xmm3_8
  double v7; // xmm2_8
  double v8; // xmm6_8
  unsigned __int64 v9; // r8
  double v10; // xmm1_8
  double v11; // xmm1_8
  int v12; // ecx
  double v13; // xmm7_8
  double v14; // xmm6_8
  int v15; // ecx
  int v16; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // [rsp+A0h] [rbp+8h] BYREF
  double v21; // [rsp+A8h] [rbp+10h]
  double v22; // [rsp+B0h] [rbp+18h] BYREF
  double v23; // [rsp+B8h] [rbp+20h] BYREF

  v1 = X;
  v21 = X;
  v2 = X;
  v3 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) > 0x3FE921FB54442D18LL )
  {
    if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
    {
      X = 0.0;
      if ( (*(_QWORD *)&v2 & 0xFFFFFFFFFFFFFLL) != 0 )
        sub_180092F8C((unsigned int)"sin", 30, LODWORD(v2), 1, 0, 33, *(__int64 *)&v1, 0LL, 1);
      else
        sub_180092F8C((unsigned int)"sin", 30, 0, 1, 8, 33, *(__int64 *)&v1, 0LL, 1);
      return X;
    }
    v4 = v3 != *(_QWORD *)&X;
    if ( v3 != *(_QWORD *)&X )
      v1 = -X;
    if ( v1 >= 500000.0 )
    {
      sub_1800930B4(*(_QWORD *)&X, &v22, &v23, &v20);
      v12 = v20;
      v13 = v22;
      v14 = v23;
    }
    else
    {
      if ( v3 > 0x400F6A7A2955385ELL )
      {
        if ( v3 > 0x401C463ABECCB2BBLL )
          v5 = (int)(v1 * 0.6366197723675814 + 0.5);
        else
          v5 = (v3 > 0x4015FDBBE9BBA775LL) + 3;
      }
      else
      {
        v5 = (v3 > 0x4002D97C7F3321D2LL) + 1;
      }
      v6 = (double)v5;
      v7 = (double)v5 * 6.077100506506192e-11;
      v8 = v1 - (double)v5 * 1.570796326734126;
      v21 = v8;
      v9 = (v3 >> 52) - ((*(_QWORD *)&v8 >> 52) & 0x7FFLL);
      if ( v9 > 0xF )
      {
        v10 = v8;
        v8 = v8 - v6 * 6.077100506303966e-11;
        v7 = v6 * 2.022266248795951e-21 - (v10 - v8 - v6 * 6.077100506303966e-11);
        if ( v9 > 0x30 )
        {
          v11 = v8;
          v8 = v8 - v6 * 2.022266248711166e-21;
          v7 = v6 * 8.4784276603689e-32 - (v11 - v8 - v6 * 2.022266248711166e-21);
        }
      }
      v12 = v5 & 3;
      v13 = v8 - v7;
      v14 = v8 - (v8 - v7) - v7;
    }
    if ( v4 )
    {
      v15 = v12 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 != 1 )
            return -((double (*)(void))sub_18008E6F0)();
          return (((((0.000000002087614638223296 - v13 * v13 * 1.138263980679449e-11) * (v13 * v13)
                   - 0.0000002755731727234419)
                  * (v13
                   * v13)
                  + 0.00002480158729876704)
                 * (v13
                  * v13)
                 - 0.00138888888888874)
                * (v13
                 * v13)
                + 0.04166666666666666)
               * (v13
                * v13
                * (v13
                 * v13))
               + 1.0
               - (1.0
                - v13 * v13 * 0.5)
               - v13 * v13 * 0.5
               - v14 * v13
               + 1.0
               - v13 * v13 * 0.5;
        }
        goto LABEL_35;
      }
    }
    else
    {
      v18 = v12 - 1;
      if ( !v18 )
        return (((((0.000000002087614638223296 - v13 * v13 * 1.138263980679449e-11) * (v13 * v13)
                 - 0.0000002755731727234419)
                * (v13
                 * v13)
                + 0.00002480158729876704)
               * (v13
                * v13)
               - 0.00138888888888874)
              * (v13
               * v13)
              + 0.04166666666666666)
             * (v13
              * v13
              * (v13
               * v13))
             + 1.0
             - (1.0
              - v13 * v13 * 0.5)
             - v13 * v13 * 0.5
             - v14 * v13
             + 1.0
             - v13 * v13 * 0.5;
      v19 = v18 - 1;
      if ( !v19 )
        return -((double (*)(void))sub_18008E6F0)();
      if ( v19 != 1 )
      {
LABEL_35:
        X = v13;
        goto LABEL_8;
      }
    }
    return -((((((0.000000002087614638223296 - v13 * v13 * 1.138263980679449e-11) * (v13 * v13)
               - 0.0000002755731727234419)
              * (v13
               * v13)
              + 0.00002480158729876704)
             * (v13
              * v13)
             - 0.00138888888888874)
            * (v13
             * v13)
            + 0.04166666666666666)
           * (v13
            * v13
            * (v13
             * v13))
           + 1.0
           - (1.0
            - v13 * v13 * 0.5)
           - v13 * v13 * 0.5
           - v14 * v13
           + 1.0
           - v13 * v13 * 0.5);
  }
  if ( v3 >= 0x3F20000000000000LL )
  {
LABEL_8:
    sub_18008E6F0();
    return X;
  }
  if ( v3 >= 0x3E40000000000000LL )
    return X - X * X * X * 0.1666666666666667;
  if ( !v3 )
    return X;
  sub_180092E5C(16LL, 16LL);
  return v1;
}
