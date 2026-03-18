/*
 * XREFs of sub_1405E3D64 @ 0x1405E3D64
 * Callers:
 *     sub_1405D49A0 @ 0x1405D49A0 (sub_1405D49A0.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x1405E3818 (ExpHwidSysVolIfGetDiskInfo.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     sub_1405E3DA8 @ 0x1405E3DA8 (sub_1405E3DA8.c)
 */

void *__fastcall sub_1405E3D64(char *a1)
{
  ((void (*)(void))sub_1405E3DA8)();
  sub_1405E3DA8(a1 + 40);
  sub_1405E3DA8(a1 + 56);
  sub_1405E3DA8(a1 + 72);
  return memset(a1, 0, 0x58uLL);
}
