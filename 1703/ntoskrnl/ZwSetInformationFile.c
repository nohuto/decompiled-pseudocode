/*
 * XREFs of ZwSetInformationFile @ 0x14017E420
 * Callers:
 *     CmpDoFileSetSizeEx @ 0x14043B560 (CmpDoFileSetSizeEx.c)
 *     EtwpRealtimeSaveState @ 0x14045ECA8 (EtwpRealtimeSaveState.c)
 *     CmpCmdHiveClose @ 0x1404CD78C (CmpCmdHiveClose.c)
 *     CmpOpenHiveFile @ 0x1404D7AAC (CmpOpenHiveFile.c)
 *     EtwpFinalizeHeader @ 0x14054E348 (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x14055808C (EtwpCreateLogFile.c)
 *     EtwpUpdateFileHeader @ 0x14055830C (EtwpUpdateFileHeader.c)
 *     PopResizeHiberFile @ 0x14057B45C (PopResizeHiberFile.c)
 *     MiCreatePagingFile @ 0x1405B967C (MiCreatePagingFile.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x1405D0660 (EtwpRealtimeZeroTruncateLogfile.c)
 *     PopCreateHiberFile @ 0x1405D7378 (PopCreateHiberFile.c)
 *     PopValidateExistingHiberFile @ 0x1405D7644 (PopValidateExistingHiberFile.c)
 *     CmpCmdRenameHive @ 0x14066959C (CmpCmdRenameHive.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140669F1C (CmpOpenFileWithExtremePrejudice.c)
 *     CmpFlushBackupHive @ 0x14066AB34 (CmpFlushBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x14066B5A8 (CmpWriteOffsetArrayToFile.c)
 *     PpLastGoodDeleteFilesCallback @ 0x1406953E0 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1406A8F58 (IopFileUtilClearAttributes.c)
 *     SmKmStoreFileCreate @ 0x140702BF0 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x1407032F4 (SmKmStoreFileDelete.c)
 *     EtwpSavePersistedLogger @ 0x140713EA4 (EtwpSavePersistedLogger.c)
 *     IopFileUtilRename @ 0x14080CD24 (IopFileUtilRename.c)
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
