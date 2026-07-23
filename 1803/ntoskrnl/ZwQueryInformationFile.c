/*
 * XREFs of ZwQueryInformationFile @ 0x1401A76E0
 * Callers:
 *     KsepShimDbChanged @ 0x140170554 (KsepShimDbChanged.c)
 *     DbgkCaptureLiveKernelDump @ 0x140223BFC (DbgkCaptureLiveKernelDump.c)
 *     RtlFileMapMapView @ 0x1402C28B0 (RtlFileMapMapView.c)
 *     BiLogFileOwnerProcess @ 0x1402C5E00 (BiLogFileOwnerProcess.c)
 *     CmpGetFileSize @ 0x140498C14 (CmpGetFileSize.c)
 *     CmpInitHiveFromFile @ 0x14049DBFC (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x14049E1B8 (CmpOpenHiveFile.c)
 *     CmpCmdHiveClose @ 0x14054DC44 (CmpCmdHiveClose.c)
 *     EtwpUpdateFileHeader @ 0x1405887F0 (EtwpUpdateFileHeader.c)
 *     PopValidateHiberFileSize @ 0x1405F06DC (PopValidateHiberFileSize.c)
 *     AslFileMappingCreate @ 0x1405FC418 (AslFileMappingCreate.c)
 *     PopValidateExistingHiberFile @ 0x1406268EC (PopValidateExistingHiberFile.c)
 *     EtwpRealtimeRestoreState @ 0x14064C26C (EtwpRealtimeRestoreState.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x140720190 (IopLiveDumpValidateDumpFileHandle.c)
 *     IopFileUtilClearAttributes @ 0x14073BE98 (IopFileUtilClearAttributes.c)
 *     PfpQueryFileExtentsRequest @ 0x14075BDB8 (PfpQueryFileExtentsRequest.c)
 *     PopZeroHiberFile @ 0x140762A08 (PopZeroHiberFile.c)
 *     SmKmStoreFileCreate @ 0x14079DEF8 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileWriteHeader @ 0x14079ECF8 (SmKmStoreFileWriteHeader.c)
 *     CMFGetFileSizeEx @ 0x1407C8C84 (CMFGetFileSizeEx.c)
 *     EmInitSystem @ 0x1408A92A4 (EmInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationFile(
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
