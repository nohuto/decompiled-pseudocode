/*
 * XREFs of RtlUnlockBootStatusData @ 0x180089B20
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwFsControlFile @ 0x1800A5A20 (ZwFsControlFile.c)
 *     ZwFlushBuffersFile @ 0x1800A5C60 (ZwFlushBuffersFile.c)
 */

NTSTATUS __cdecl RtlUnlockBootStatusData(HANDLE FileHandle)
{
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  __int16 v4; // [rsp+78h] [rbp+10h] BYREF

  v4 = 0;
  ZwFsControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9C040u, &v4, 2u, 0LL, 0);
  ZwFlushBuffersFile(FileHandle, &IoStatusBlock);
  return ZwClose(FileHandle);
}
