/*
 * XREFs of ZwSetInformationFile @ 0x1401A79A0
 * Callers:
 *     CmpOpenHiveFile @ 0x14049E1B8 (CmpOpenHiveFile.c)
 *     CmpCmdHiveClose @ 0x14054DC44 (CmpCmdHiveClose.c)
 *     CmpDoFileSetSizeEx @ 0x140566A0C (CmpDoFileSetSizeEx.c)
 *     EtwpFinalizeHeader @ 0x1405879E8 (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x1405884D0 (EtwpCreateLogFile.c)
 *     EtwpUpdateFileHeader @ 0x1405887F0 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeSaveState @ 0x1405C3F44 (EtwpRealtimeSaveState.c)
 *     PopResizeHiberFile @ 0x1405F0590 (PopResizeHiberFile.c)
 *     PopCreateHiberFile @ 0x140625404 (PopCreateHiberFile.c)
 *     PopValidateExistingHiberFile @ 0x1406268EC (PopValidateExistingHiberFile.c)
 *     MiCreatePagingFile @ 0x14063BE50 (MiCreatePagingFile.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x14064FA8C (EtwpRealtimeZeroTruncateLogfile.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x1406F7790 (CmpOpenFileWithExtremePrejudice.c)
 *     CmpFlushBackupHive @ 0x1406F9154 (CmpFlushBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x1406F969C (CmpWriteOffsetArrayToFile.c)
 *     CmpCmdRenameHive @ 0x1406FBAB4 (CmpCmdRenameHive.c)
 *     PpLastGoodDeleteFilesCallback @ 0x140726E80 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x14073BE98 (IopFileUtilClearAttributes.c)
 *     SmKmStoreFileCreate @ 0x14079DEF8 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x14079E600 (SmKmStoreFileDelete.c)
 *     EtwpSavePersistedLogger @ 0x1407B9DC4 (EtwpSavePersistedLogger.c)
 *     IopFileUtilRename @ 0x1408C55D8 (IopFileUtilRename.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
