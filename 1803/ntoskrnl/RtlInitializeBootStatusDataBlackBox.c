/*
 * XREFs of RtlInitializeBootStatusDataBlackBox @ 0x1406231C4
 * Callers:
 *     PoClearTransitionMarker @ 0x1406230BC (PoClearTransitionMarker.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwReadFile @ 0x1401A7580 (ZwReadFile.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlpRecordBootStatusData @ 0x14060F678 (RtlpRecordBootStatusData.c)
 */

NTSTATUS __fastcall RtlInitializeBootStatusDataBlackBox(HANDLE FileHandle)
{
  NTSTATUS result; // eax
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-C8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-C0h] BYREF
  _BYTE Buffer[144]; // [rsp+70h] [rbp-A8h] BYREF

  memset(Buffer, 0, 0x88uLL);
  ByteOffset.QuadPart = 0LL;
  result = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x88u, &ByteOffset, 0LL);
  if ( result >= 0 )
  {
    result = RtlpRecordBootStatusData(0, (__int64)Buffer, 0LL, 136LL);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
