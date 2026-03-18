/*
 * XREFs of sub_140462834 @ 0x140462834
 * Callers:
 *     ExpHwidSysVolIfGetDiskInfo @ 0x14046291C (ExpHwidSysVolIfGetDiskInfo.c)
 *     sub_1404E4FF0 @ 0x1404E4FF0 (sub_1404E4FF0.c)
 * Callees:
 *     sub_140462878 @ 0x140462878 (sub_140462878.c)
 */

void *__fastcall sub_140462834(char *a1)
{
  ((void (*)(void))sub_140462878)();
  sub_140462878(a1 + 40);
  sub_140462878(a1 + 56);
  sub_140462878(a1 + 72);
  return memset(a1, 0, 0x58uLL);
}
