/*
 * XREFs of sub_140560ECC @ 0x140560ECC
 * Callers:
 *     sub_14054EB00 @ 0x14054EB00 (sub_14054EB00.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x14055F790 (ExpHwidSysVolIfGetDiskInfo.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     sub_140560F10 @ 0x140560F10 (sub_140560F10.c)
 */

void *__fastcall sub_140560ECC(char *a1)
{
  ((void (*)(void))sub_140560F10)();
  sub_140560F10(a1 + 40);
  sub_140560F10(a1 + 56);
  sub_140560F10(a1 + 72);
  return memset(a1, 0, 0x58uLL);
}
