/*
 * XREFs of ZwFlushBuffersFile @ 0x1401A7E20
 * Callers:
 *     CmpDoFileFlush @ 0x140006EB0 (CmpDoFileFlush.c)
 *     PopFlushVolumeWorker @ 0x1404708F0 (PopFlushVolumeWorker.c)
 *     RtlpGetSetBootStatusData @ 0x14060F484 (RtlpGetSetBootStatusData.c)
 *     PopCreateHiberFile @ 0x140625404 (PopCreateHiberFile.c)
 *     CmReplaceKey @ 0x1406F1CD8 (CmReplaceKey.c)
 *     CmpWriteOffsetArrayToFile @ 0x1406F969C (CmpWriteOffsetArrayToFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
