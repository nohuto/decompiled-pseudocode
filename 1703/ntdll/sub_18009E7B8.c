/*
 * XREFs of sub_18009E7B8 @ 0x18009E7B8
 * Callers:
 *     fabs @ 0x180099340 (fabs.c)
 * Callees:
 *     _errno @ 0x180088F50 (_errno.c)
 *     sub_18009EAE4 @ 0x18009EAE4 (sub_18009EAE4.c)
 *     sub_18009ED7C @ 0x18009ED7C (sub_18009ED7C.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_18009E7B8(int a1, double a2, __int64 a3, int a4)
{
  __m128 result; // xmm0

  if ( dword_180155E90 )
  {
    *errno() = 33;
    sub_18009ED7C(a3, 65472LL);
    return *(__m128 *)&a2;
  }
  else
  {
    sub_18009EAE4(1, a1, a3, a4, *(__int64 *)&a2, a3);
  }
  return result;
}
