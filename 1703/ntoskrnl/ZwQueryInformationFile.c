/*
 * XREFs of ZwQueryInformationFile @ 0x14017E160
 * Callers:
 *     KsepShimDbChanged @ 0x14015689C (KsepShimDbChanged.c)
 *     DbgkCaptureLiveKernelDump @ 0x1401E23D8 (DbgkCaptureLiveKernelDump.c)
 *     RtlFileMapMapView @ 0x140262BA0 (RtlFileMapMapView.c)
 *     BiLogFileOwnerProcess @ 0x140265F0C (BiLogFileOwnerProcess.c)
 *     AslFileMappingCreate @ 0x1404B445C (AslFileMappingCreate.c)
 *     CmpCmdHiveClose @ 0x1404CD78C (CmpCmdHiveClose.c)
 *     CmpGetFileSize @ 0x1404D3B40 (CmpGetFileSize.c)
 *     CmpInitHiveFromFile @ 0x1404D6800 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x1404D7AAC (CmpOpenHiveFile.c)
 *     EtwpUpdateFileHeader @ 0x14055830C (EtwpUpdateFileHeader.c)
 *     PopValidateHiberFileSize @ 0x14057B598 (PopValidateHiberFileSize.c)
 *     EtwpRealtimeRestoreState @ 0x1405CF3FC (EtwpRealtimeRestoreState.c)
 *     PopValidateExistingHiberFile @ 0x1405D7644 (PopValidateExistingHiberFile.c)
 *     HvpGetLogHeader @ 0x140676C8C (HvpGetLogHeader.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x14068F510 (IopLiveDumpValidateDumpFileHandle.c)
 *     IopFileUtilClearAttributes @ 0x1406A8F58 (IopFileUtilClearAttributes.c)
 *     PfpQueryFileExtentsRequest @ 0x1406C3FD8 (PfpQueryFileExtentsRequest.c)
 *     PopZeroHiberFile @ 0x1406C9DDC (PopZeroHiberFile.c)
 *     SmKmStoreFileCreate @ 0x140702BF0 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileWriteHeader @ 0x1407039F0 (SmKmStoreFileWriteHeader.c)
 *     CMFGetFileSizeEx @ 0x140721918 (CMFGetFileSizeEx.c)
 *     EmInitSystem @ 0x140804CF0 (EmInitSystem.c)
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
