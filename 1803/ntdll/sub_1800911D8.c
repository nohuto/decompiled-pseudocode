/*
 * XREFs of sub_1800911D8 @ 0x1800911D8
 * Callers:
 *     _wtoi @ 0x18008D0E0 (_wtoi.c)
 *     _wtol @ 0x18008D130 (_wtol.c)
 * Callees:
 *     sub_180090F98 @ 0x180090F98 (sub_180090F98.c)
 */

__int64 __fastcall sub_1800911D8(unsigned __int16 *a1, unsigned __int16 **a2, unsigned int a3, int a4)
{
  return sub_180090F98((__int64)&off_180110AF8, a1, a2, a3, 0, a4);
}
