/*
 * XREFs of sub_140560F40 @ 0x140560F40
 * Callers:
 *     sub_14054EB00 @ 0x14054EB00 (sub_14054EB00.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x14055F790 (ExpHwidSysVolIfGetDiskInfo.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     sub_140560F84 @ 0x140560F84 (sub_140560F84.c)
 */

__int64 __fastcall sub_140560F40(char *a1)
{
  memset(a1, 0, 0x58uLL);
  sub_140560F84(a1);
  sub_140560F84(a1 + 40);
  sub_140560F84(a1 + 56);
  return sub_140560F84(a1 + 72);
}
