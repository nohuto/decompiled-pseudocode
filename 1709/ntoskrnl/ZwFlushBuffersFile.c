/*
 * XREFs of ZwFlushBuffersFile @ 0x14017E220
 * Callers:
 *     PopFlushVolumeWorker @ 0x140436680 (PopFlushVolumeWorker.c)
 *     RtlpGetSetBootStatusData @ 0x1405AC8AC (RtlpGetSetBootStatusData.c)
 *     CmReplaceKey @ 0x14068D9FC (CmReplaceKey.c)
 *     CmpFileFlush @ 0x140694EF0 (CmpFileFlush.c)
 *     CmpWriteOffsetArrayToFile @ 0x140695C14 (CmpWriteOffsetArrayToFile.c)
 *     PopCreateHiberFile @ 0x1406FB4BC (PopCreateHiberFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
