/*
 * XREFs of ZwFlushBuffersFile @ 0x14017E8A0
 * Callers:
 *     PopFlushVolumeWorker @ 0x14040B800 (PopFlushVolumeWorker.c)
 *     RtlUnlockBootStatusData @ 0x140585EE0 (RtlUnlockBootStatusData.c)
 *     PopCreateHiberFile @ 0x1405D7378 (PopCreateHiberFile.c)
 *     CmReplaceKey @ 0x14066430C (CmReplaceKey.c)
 *     CmpFileFlush @ 0x14066A86C (CmpFileFlush.c)
 *     CmpWriteOffsetArrayToFile @ 0x14066B5A8 (CmpWriteOffsetArrayToFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
