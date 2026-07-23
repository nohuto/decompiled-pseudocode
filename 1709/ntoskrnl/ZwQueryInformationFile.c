/*
 * XREFs of ZwQueryInformationFile @ 0x14017DAE0
 * Callers:
 *     KsepShimDbChanged @ 0x1400B5B1C (KsepShimDbChanged.c)
 *     DbgkCaptureLiveKernelDump @ 0x1401E659C (DbgkCaptureLiveKernelDump.c)
 *     RtlFileMapMapView @ 0x14028CE60 (RtlFileMapMapView.c)
 *     BiLogFileOwnerProcess @ 0x1402901A4 (BiLogFileOwnerProcess.c)
 *     CmpCmdHiveClose @ 0x14046FEEC (CmpCmdHiveClose.c)
 *     CmpInitHiveFromFile @ 0x1404DE1EC (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x1404E0664 (CmpOpenHiveFile.c)
 *     CmpGetFileSize @ 0x1404E5BE8 (CmpGetFileSize.c)
 *     AslFileMappingCreate @ 0x140545E54 (AslFileMappingCreate.c)
 *     EtwpUpdateFileHeader @ 0x140578090 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeRestoreState @ 0x1405E5B60 (EtwpRealtimeRestoreState.c)
 *     CMFGetFileSizeEx @ 0x1405EEC6C (CMFGetFileSizeEx.c)
 *     HvpGetLogHeader @ 0x1406A11C8 (HvpGetLogHeader.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x1406BB1DC (IopLiveDumpValidateDumpFileHandle.c)
 *     IopFileUtilClearAttributes @ 0x1406D3ABC (IopFileUtilClearAttributes.c)
 *     PfpQueryFileExtentsRequest @ 0x1406F2EF8 (PfpQueryFileExtentsRequest.c)
 *     PopValidateExistingHiberFile @ 0x1406FC55C (PopValidateExistingHiberFile.c)
 *     PopValidateHiberFileSize @ 0x1406FC634 (PopValidateHiberFileSize.c)
 *     PopZeroHiberFile @ 0x1406FC79C (PopZeroHiberFile.c)
 *     SmKmStoreFileCreate @ 0x14073AEF4 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileWriteHeader @ 0x14073BCF4 (SmKmStoreFileWriteHeader.c)
 *     EmInitSystem @ 0x14083306C (EmInitSystem.c)
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
