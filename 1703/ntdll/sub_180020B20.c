/*
 * XREFs of sub_180020B20 @ 0x180020B20
 * Callers:
 *     sub_180007334 @ 0x180007334 (sub_180007334.c)
 *     sub_1800215C8 @ 0x1800215C8 (sub_1800215C8.c)
 *     sub_180025780 @ 0x180025780 (sub_180025780.c)
 * Callees:
 *     sub_180020EF0 @ 0x180020EF0 (sub_180020EF0.c)
 */

__int64 __fastcall sub_180020B20(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rdi
  __int64 v7; // rax

  v4 = a2 & 0xFFFFFFFFFFF00000uLL;
  v7 = sub_180020EF0(a1, a2);
  return sub_180020B90(a1, v7, v4 + 32LL * (unsigned int)((a2 - v4) >> 12), a3 >> 12);
}
