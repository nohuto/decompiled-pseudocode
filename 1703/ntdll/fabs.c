/*
 * XREFs of fabs @ 0x180099340
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009E460 @ 0x18009E460 (sub_18009E460.c)
 *     sub_18009E7B8 @ 0x18009E7B8 (sub_18009E7B8.c)
 *     sub_18009ECE8 @ 0x18009ECE8 (sub_18009ECE8.c)
 *     sub_18009ED7C @ 0x18009ED7C (sub_18009ED7C.c)
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
  v2 = sub_18009ED7C(8064LL, 65472LL);
  if ( (HIWORD(X) & 0x7FF0) != 0x7FF0 )
  {
    sub_18009ED7C(v2, 65472LL);
    *(_QWORD *)&X &= ~0x8000000000000000uLL;
    return X;
  }
  v3 = sub_18009ECE8() - 1;
  if ( !v3 )
  {
    sub_18009ED7C(v2, 65472LL);
    return v1;
  }
  v7 = v3 - 1;
  if ( !v7 )
  {
    sub_18009ED7C(v2, 65472LL);
    return -X;
  }
  if ( v7 == 1 )
    sub_18009E7B8(21LL, v4, v2);
  else
    sub_18009E460(8, 21, v5, v6, v2);
  return X;
}
