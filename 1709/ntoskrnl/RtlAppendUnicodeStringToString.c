/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x1400DE270
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1401596AC (KsepEvntLogShimsApplied.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14028EEE0 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14028F964 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x14028FD28 (AdtpFormatPrefix.c)
 *     MiResolveImageReferences @ 0x1404DC360 (MiResolveImageReferences.c)
 *     CmpOpenHiveFile @ 0x1404E0664 (CmpOpenHiveFile.c)
 *     CmpNameFromAttributes @ 0x1404E3564 (CmpNameFromAttributes.c)
 *     CmpQueryNameString @ 0x14050A728 (CmpQueryNameString.c)
 *     CmpInitCmRM @ 0x14050A840 (CmpInitCmRM.c)
 *     IopGetDriverNameFromKeyNode @ 0x14051A450 (IopGetDriverNameFromKeyNode.c)
 *     RtlpGetRegistryHandle @ 0x140521EDC (RtlpGetRegistryHandle.c)
 *     MiGenerateSystemImageNames @ 0x1405439F8 (MiGenerateSystemImageNames.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x14055EA44 (PnpQueryRemoveLockedDeviceNode.c)
 *     IopBootLog @ 0x14059BC30 (IopBootLog.c)
 *     PopDeleteHiberFile @ 0x1405ADA44 (PopDeleteHiberFile.c)
 *     MmCallDllInitialize @ 0x1405C90B8 (MmCallDllInitialize.c)
 *     IopSymlinkRememberJunction @ 0x1405CE168 (IopSymlinkRememberJunction.c)
 *     pIoQueryDeviceDescription @ 0x1405D2770 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x1405D2BE0 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x1405D2CF4 (pIoQueryBusDescription.c)
 *     IoReportDetectedDevice @ 0x1405DF730 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1405E3820 (IoReportRootDevice.c)
 *     CmpStartCLFSLog @ 0x1405E4A9C (CmpStartCLFSLog.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1405E4D1C (CmpAddRemoveContainerToCLFSLog.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1405E7F0C (IopFileUtilWalkDirectoryTreeHelper.c)
 *     CmRealKCBToVirtualPath @ 0x1406909A4 (CmRealKCBToVirtualPath.c)
 *     CmVirtualKCBToRealPath @ 0x140690D1C (CmVirtualKCBToRealPath.c)
 *     CmpLoadHiveVolatile @ 0x14069DCAC (CmpLoadHiveVolatile.c)
 *     VrpPreLoadKey @ 0x1406A6F7C (VrpPreLoadKey.c)
 *     VrpBuildKeyPath @ 0x1406A95FC (VrpBuildKeyPath.c)
 *     IopSafebootDriverLoad @ 0x1406B5A20 (IopSafebootDriverLoad.c)
 *     IopValidateJunctionTarget @ 0x1406B68DC (IopValidateJunctionTarget.c)
 *     PopCreateHiberFile @ 0x1406FB4BC (PopCreateHiberFile.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1407159B0 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140722598 (RtlpGetTokenNamedObjectPath.c)
 *     SdbResolveDatabaseEx @ 0x140770970 (SdbResolveDatabaseEx.c)
 *     AslRegistryBuildMachinePath @ 0x1407722CC (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x140772374 (AslRegistryBuildUserPath.c)
 *     AdtpBuildSidListString @ 0x14077799C (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x140777CB4 (AdtpBuildStringListString.c)
 *     AdtpAppendString @ 0x140777F1C (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x140778114 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x140778790 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x14077882C (AdtpBuildUserAccountControlString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140785700 (_SysCtxRegOpenCurrentUserKey.c)
 *     ObGetSiloRootDirectoryPath @ 0x14078A24C (ObGetSiloRootDirectoryPath.c)
 *     CmpAddDriverToList @ 0x1408365C8 (CmpAddDriverToList.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x14086A990 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendUnicodeStringToString(PUNICODE_STRING Destination, PCUNICODE_STRING Source)
{
  unsigned __int16 Length; // si
  unsigned __int64 v4; // rcx
  wchar_t *v5; // r14

  Length = Source->Length;
  if ( !Source->Length )
    return 0;
  v4 = Destination->Length;
  if ( (unsigned int)v4 + Length <= Destination->MaximumLength )
  {
    v5 = &Destination->Buffer[v4 >> 1];
    memmove(v5, Source->Buffer, Length);
    Destination->Length += Length;
    if ( (unsigned int)Destination->Length + 1 < Destination->MaximumLength )
      v5[(unsigned __int64)Length >> 1] = 0;
    return 0;
  }
  return -1073741789;
}
