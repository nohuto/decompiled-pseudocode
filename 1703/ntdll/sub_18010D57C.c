/*
 * XREFs of sub_18010D57C @ 0x18010D57C
 * Callers:
 *     sub_18010BF68 @ 0x18010BF68 (sub_18010BF68.c)
 *     sub_18010C1E0 @ 0x18010C1E0 (sub_18010C1E0.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     ZwWaitForSingleObject @ 0x1800A5380 (ZwWaitForSingleObject.c)
 *     ZwReadFile @ 0x1800A53C0 (ZwReadFile.c)
 */

__int64 __fastcall sub_18010D57C(HANDLE Handle, PVOID Buffer, ULONG Length, _DWORD *a4)
{
  int Status; // ecx
  LONG v8; // eax
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  if ( a4 )
    *a4 = 0;
  Status = ZwReadFile(Handle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, 0LL, 0LL);
  if ( Status == 259 )
  {
    Status = ZwWaitForSingleObject(Handle, 0, 0LL);
    if ( Status < 0 )
      goto LABEL_10;
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    if ( a4 )
      *a4 = IoStatusBlock.Information;
    return 1LL;
  }
LABEL_10:
  if ( Status == -1073741807 )
  {
    *a4 = 0;
    return 1LL;
  }
  if ( (Status & 0xC0000000) == 0x80000000 )
    *a4 = IoStatusBlock.Information;
  v8 = RtlNtStatusToDosError(Status);
  RtlSetLastWin32Error(v8);
  return 0LL;
}
