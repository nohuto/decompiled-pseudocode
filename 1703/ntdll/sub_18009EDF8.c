/*
 * XREFs of sub_18009EDF8 @ 0x18009EDF8
 * Callers:
 *     sub_18009DC54 @ 0x18009DC54 (sub_18009DC54.c)
 *     sub_18009E550 @ 0x18009E550 (sub_18009E550.c)
 * Callees:
 *     sub_1800ABA50 @ 0x1800ABA50 (sub_1800ABA50.c)
 */

__int64 __fastcall sub_18009EDF8(char a1)
{
  unsigned int v2; // eax

  v2 = sub_1800ABA50();
  return sub_18009FCD0(a1 & 0x3F | v2);
}
