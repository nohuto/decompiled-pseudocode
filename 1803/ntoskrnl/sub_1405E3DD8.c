/*
 * XREFs of sub_1405E3DD8 @ 0x1405E3DD8
 * Callers:
 *     sub_1405D49A0 @ 0x1405D49A0 (sub_1405D49A0.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x1405E3818 (ExpHwidSysVolIfGetDiskInfo.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     sub_1405E3E1C @ 0x1405E3E1C (sub_1405E3E1C.c)
 */

__int64 __fastcall sub_1405E3DD8(char *a1)
{
  memset(a1, 0, 0x58uLL);
  sub_1405E3E1C(a1);
  sub_1405E3E1C(a1 + 40);
  sub_1405E3E1C(a1 + 56);
  return sub_1405E3E1C(a1 + 72);
}
