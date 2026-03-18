/*
 * XREFs of sub_1404615D0 @ 0x1404615D0
 * Callers:
 *     ExpHwidSysVolIfGetDiskInfo @ 0x14046291C (ExpHwidSysVolIfGetDiskInfo.c)
 *     sub_1404E4FF0 @ 0x1404E4FF0 (sub_1404E4FF0.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     sub_140461614 @ 0x140461614 (sub_140461614.c)
 */

__int64 __fastcall sub_1404615D0(char *a1)
{
  memset(a1, 0, 0x58uLL);
  sub_140461614(a1);
  sub_140461614(a1 + 40);
  sub_140461614(a1 + 56);
  return sub_140461614(a1 + 72);
}
