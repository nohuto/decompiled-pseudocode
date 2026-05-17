/*
 * XREFs of fabs @ 0x18008E7A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800936D0 @ 0x1800936D0 (sub_1800936D0.c)
 *     sub_180093A28 @ 0x180093A28 (sub_180093A28.c)
 *     sub_180093F64 @ 0x180093F64 (sub_180093F64.c)
 *     sub_180093FF8 @ 0x180093FF8 (sub_180093FF8.c)
 */

double __cdecl fabs(double X)
{
  double v1; // xmm6_8
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // rdx
  int v5; // r8d
  int v6; // r9d
  int v7; // eax

  v1 = X;
  v2 = sub_180093FF8(8064LL, 65472LL);
  if ( (HIWORD(X) & 0x7FF0) != 0x7FF0 )
  {
    sub_180093FF8(v2, 65472LL);
    *(_QWORD *)&X &= ~0x8000000000000000uLL;
    return X;
  }
  v3 = sub_180093F64() - 1;
  if ( !v3 )
  {
    sub_180093FF8(v2, 65472LL);
    return v1;
  }
  v7 = v3 - 1;
  if ( !v7 )
  {
    sub_180093FF8(v2, 65472LL);
    return -X;
  }
  if ( v7 == 1 )
    sub_180093A28(21LL, v4, v2);
  else
    sub_1800936D0(8, 21, v5, v6, v2);
  return X;
}
