/*
 * XREFs of sub_1800E2D04 @ 0x1800E2D04
 * Callers:
 *     sub_18005AD34 @ 0x18005AD34 (sub_18005AD34.c)
 *     sub_18005BD90 @ 0x18005BD90 (sub_18005BD90.c)
 *     sub_1800E2DB0 @ 0x1800E2DB0 (sub_1800E2DB0.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x1800A5380 (ZwWaitForSingleObject.c)
 *     ZwReadFile @ 0x1800A53C0 (ZwReadFile.c)
 *     sub_1800E34A8 @ 0x1800E34A8 (sub_1800E34A8.c)
 */

__int64 __fastcall sub_1800E2D04(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  int File; // edx
  int v7; // ecx
  int v8; // [rsp+58h] [rbp-10h]

  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    result = sub_1800E34A8();
    if ( (int)result < 0 )
      return result;
    File = ZwReadFile();
    if ( File == 259 )
      File = ZwWaitForSingleObject();
    v7 = 0;
    if ( (File & 0xC0000000) != 0x80000000 )
      v7 = File;
    if ( v7 >= 0 && a4 != v8 )
      return (unsigned int)-1073741823;
  }
  return (unsigned int)v7;
}
