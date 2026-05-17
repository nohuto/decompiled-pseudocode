/*
 * XREFs of sub_18009DBE0 @ 0x18009DBE0
 * Callers:
 *     atan @ 0x180097D10 (atan.c)
 *     atan2 @ 0x180097F70 (atan2.c)
 *     cos @ 0x180098A30 (cos.c)
 *     sin @ 0x180098E50 (sin.c)
 *     tan @ 0x18009B370 (tan.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009DBE0(int a1, int a2)
{
  return sub_18009D920(a1, a2 & 0xFFF7FFFF);
}
