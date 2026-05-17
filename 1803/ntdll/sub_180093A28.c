/*
 * XREFs of sub_180093A28 @ 0x180093A28
 * Callers:
 *     fabs @ 0x18008E7A0 (fabs.c)
 * Callees:
 *     _errno @ 0x180083380 (_errno.c)
 *     sub_180093D58 @ 0x180093D58 (sub_180093D58.c)
 *     sub_180093FF8 @ 0x180093FF8 (sub_180093FF8.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_180093A28(int a1, double a2, __int64 a3, int a4)
{
  __m128 result; // xmm0

  if ( dword_180156EF0 )
  {
    *errno() = 33;
    sub_180093FF8(a3, 65472LL);
    return *(__m128 *)&a2;
  }
  else
  {
    sub_180093D58(1, a1, a3, a4, *(__int64 *)&a2, a3);
  }
  return result;
}
