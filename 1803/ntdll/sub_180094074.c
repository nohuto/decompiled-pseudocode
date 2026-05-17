/*
 * XREFs of sub_180094074 @ 0x180094074
 * Callers:
 *     sub_180092ED0 @ 0x180092ED0 (sub_180092ED0.c)
 *     sub_1800937C0 @ 0x1800937C0 (sub_1800937C0.c)
 * Callees:
 *     sub_1800A1370 @ 0x1800A1370 (sub_1800A1370.c)
 */

__int64 __fastcall sub_180094074(char a1)
{
  unsigned int v2; // eax

  v2 = sub_1800A1370();
  return sub_180094FF0(a1 & 0x3F | v2);
}
