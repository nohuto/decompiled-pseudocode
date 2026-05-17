/*
 * XREFs of sub_1800A9930 @ 0x1800A9930
 * Callers:
 *     sub_1800A9930 @ 0x1800A9930 (sub_1800A9930.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800A9930(const char *a1, unsigned __int64 a2)
{
  bool v2; // cc

  do
  {
    _mm_prefetch(a1, 0);
    a1 += 64;
    v2 = a2 <= 0x40;
    a2 -= 64LL;
  }
  while ( !v2 );
}
