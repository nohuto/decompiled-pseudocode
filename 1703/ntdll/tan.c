/*
 * XREFs of tan @ 0x18009B370
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009B63C @ 0x18009B63C (sub_18009B63C.c)
 *     sub_18009DBE0 @ 0x18009DBE0 (sub_18009DBE0.c)
 *     sub_18009DD10 @ 0x18009DD10 (sub_18009DD10.c)
 *     sub_18009DE38 @ 0x18009DE38 (sub_18009DE38.c)
 */

double __cdecl tan(double X)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rcx
  double v3; // xmm6_8
  __int64 v4; // r8
  _BOOL8 v5; // rbx
  int v6; // r8d
  double v7; // xmm3_8
  double v8; // xmm2_8
  double v9; // xmm6_8
  double v10; // xmm1_8
  double v11; // xmm1_8
  int v12; // r8d
  int v13; // [rsp+70h] [rbp+8h] BYREF
  double v14; // [rsp+78h] [rbp+10h] BYREF
  double v15; // [rsp+80h] [rbp+18h] BYREF
  double v16; // [rsp+88h] [rbp+20h]

  v16 = X;
  v1 = *(_QWORD *)&X;
  v2 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
  v3 = X;
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) <= 0x3FE921FB54442D18LL )
  {
    if ( v2 < 0x3F20000000000000LL )
    {
      if ( v2 >= 0x3E40000000000000LL )
        return X * X * X * 0.3333333333333333 + X;
      if ( v2 )
        sub_18009DBE0(16LL, 16LL);
      return X;
    }
    v4 = 0LL;
    return sub_18009B63C(v2, v1, v4);
  }
  if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) != 0x7FF0000000000000LL )
  {
    v5 = v2 != *(_QWORD *)&X;
    if ( v2 != *(_QWORD *)&X )
      v3 = -X;
    if ( v3 >= 500000.0 )
    {
      sub_18009DE38(v2, &v14, &v15, &v13);
      LOBYTE(v12) = v13;
    }
    else
    {
      if ( v2 > 0x400F6A7A2955385ELL )
      {
        if ( v2 > 0x401C463ABECCB2BBLL )
          v6 = (int)(v3 * 0.6366197723675814 + 0.5);
        else
          v6 = (v2 > 0x4015FDBBE9BBA775LL) + 3;
      }
      else
      {
        v6 = (v2 > 0x4002D97C7F3321D2LL) + 1;
      }
      v7 = (double)v6;
      v8 = (double)v6 * 6.077100506506192e-11;
      v9 = v3 - (double)v6 * 1.570796326734126;
      v16 = v9;
      v1 = (v2 >> 52) - ((*(_QWORD *)&v9 >> 52) & 0x7FFLL);
      if ( v1 > 0xF )
      {
        v10 = v9;
        v9 = v9 - v7 * 6.077100506303966e-11;
        v8 = v7 * 2.022266248795951e-21 - (v10 - v9 - v7 * 6.077100506303966e-11);
        if ( v1 > 0x30 )
        {
          v11 = v9;
          v9 = v9 - v7 * 2.022266248711166e-21;
          v8 = v7 * 8.4784276603689e-32 - (v11 - v9 - v7 * 2.022266248711166e-21);
        }
      }
      v12 = v6 & 3;
      v13 = v12;
      v14 = v9 - v8;
      v15 = v9 - (v9 - v8) - v8;
    }
    v4 = v12 & 1;
    if ( v5 )
      return -sub_18009B63C(v2, v1, v4);
    return sub_18009B63C(v2, v1, v4);
  }
  X = 0.0;
  if ( (v1 & 0xFFFFFFFFFFFFFLL) != 0 )
    sub_18009DD10((unsigned int)"tan", 32, v1, 1, 0, 33, *(__int64 *)&v3, 0LL, 1);
  else
    sub_18009DD10((unsigned int)"tan", 32, 0, 1, 8, 33, *(__int64 *)&v3, 0LL, 1);
  return X;
}
