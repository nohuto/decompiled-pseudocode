/*
 * XREFs of ZwSetInformationFile @ 0x14017DDA0
 * Callers:
 *     CmpCmdHiveClose @ 0x14046FEEC (CmpCmdHiveClose.c)
 *     CmpOpenHiveFile @ 0x1404E0664 (CmpOpenHiveFile.c)
 *     CmpDoFileSetSizeEx @ 0x1404E657C (CmpDoFileSetSizeEx.c)
 *     EtwpFinalizeHeader @ 0x1405776D0 (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x140577D70 (EtwpCreateLogFile.c)
 *     EtwpUpdateFileHeader @ 0x140578090 (EtwpUpdateFileHeader.c)
 *     MiCreatePagingFile @ 0x1405D3FF0 (MiCreatePagingFile.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x1405EA2EC (EtwpRealtimeZeroTruncateLogfile.c)
 *     CmpCmdRenameHive @ 0x1406943BC (CmpCmdRenameHive.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140694600 (CmpOpenFileWithExtremePrejudice.c)
 *     CmpFlushBackupHive @ 0x1406951B8 (CmpFlushBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x140695C14 (CmpWriteOffsetArrayToFile.c)
 *     PpLastGoodDeleteFilesCallback @ 0x1406C11A0 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1406D3ABC (IopFileUtilClearAttributes.c)
 *     PopCreateHiberFile @ 0x1406FB4BC (PopCreateHiberFile.c)
 *     PopResizeHiberFile @ 0x1406FC068 (PopResizeHiberFile.c)
 *     PopValidateExistingHiberFile @ 0x1406FC55C (PopValidateExistingHiberFile.c)
 *     SmKmStoreFileCreate @ 0x14073AEF4 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x14073B5F8 (SmKmStoreFileDelete.c)
 *     EtwpRealtimeSaveState @ 0x140752394 (EtwpRealtimeSaveState.c)
 *     EtwpSavePersistedLogger @ 0x140753024 (EtwpSavePersistedLogger.c)
 *     IopFileUtilRename @ 0x140853724 (IopFileUtilRename.c)
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
