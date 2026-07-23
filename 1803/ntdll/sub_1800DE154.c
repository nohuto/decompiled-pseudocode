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

__int64 __fastcall sub_1800DE154(char *Handle, __int64 a2, void *a3, ULONG a4)
{
  __int64 result; // rax
  NTSTATUS v8; // edx
  int v9; // ecx
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    result = sub_1800DE900();
    if ( (int)result < 0 )
      return result;
    v8 = ZwReadFile(Handle, 0LL, 0LL, 0LL, &IoStatusBlock, a3, a4, 0LL, 0LL);
    if ( v8 == 259 )
      v8 = ZwWaitForSingleObject(Handle, 0, 0LL);
    v9 = 0;
    if ( (v8 & 0xC0000000) != 0x80000000 )
      v9 = v8;
    if ( v9 >= 0 && a4 != LODWORD(IoStatusBlock.Information) )
      return (unsigned int)-1073741823;
  }
  return (unsigned int)v9;
}
