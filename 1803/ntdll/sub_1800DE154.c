/*
 * XREFs of sub_1800DE154 @ 0x1800DE154
 * Callers:
 *     sub_1800520D4 @ 0x1800520D4 (sub_1800520D4.c)
 *     sub_180053118 @ 0x180053118 (sub_180053118.c)
 *     sub_1800DE200 @ 0x1800DE200 (sub_1800DE200.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x18009AB40 (ZwWaitForSingleObject.c)
 *     ZwReadFile @ 0x18009AB80 (ZwReadFile.c)
 *     sub_1800DE900 @ 0x1800DE900 (sub_1800DE900.c)
 */

__int64 __fastcall sub_1800DE154(__int64 a1, __int64 a2, __int64 a3, int a4)
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
    result = sub_1800DE900();
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
