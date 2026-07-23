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

__int64 __fastcall sub_1800E2D04(char *Handle, __int64 a2, void *a3, ULONG a4)
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
    result = sub_1800E34A8();
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
