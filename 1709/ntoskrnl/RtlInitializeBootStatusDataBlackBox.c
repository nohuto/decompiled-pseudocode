/*
 * XREFs of RtlInitializeBootStatusDataBlackBox @ 0x1405AC0FC
 * Callers:
 *     PoClearTransitionMarker @ 0x1405ABF50 (PoClearTransitionMarker.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwReadFile @ 0x14017D980 (ZwReadFile.c)
 *     memset @ 0x140192F40 (memset.c)
 *     RtlpRecordBootStatusData @ 0x1405ACAA0 (RtlpRecordBootStatusData.c)
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
    result = RtlpRecordBootStatusData(0LL, Buffer, 0LL, 136LL);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
