/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x1400BAE30
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x14024D0F8 (KsepEvntLogShimsApplied.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1402C4B50 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1402C55DC (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1402C59A0 (AdtpFormatPrefix.c)
 *     CmpOpenHiveFile @ 0x14049E1B8 (CmpOpenHiveFile.c)
 *     CmpNameFromAttributes @ 0x14049E868 (CmpNameFromAttributes.c)
 *     IopSymlinkRememberJunction @ 0x1404E0CD0 (IopSymlinkRememberJunction.c)
 *     RtlpGetRegistryHandle @ 0x140506008 (RtlpGetRegistryHandle.c)
 *     CmpQueryNameString @ 0x140561CB8 (CmpQueryNameString.c)
 *     CmpInitCmRM @ 0x140561DC4 (CmpInitCmRM.c)
 *     CmRealKCBToVirtualPath @ 0x1405C06B0 (CmRealKCBToVirtualPath.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1405F3118 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1405F3254 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x1405F49A0 (CmpStartCLFSLog.c)
 *     IopBootLog @ 0x1405F6E00 (IopBootLog.c)
 *     IopGetDriverNameFromKeyNode @ 0x1405F76D4 (IopGetDriverNameFromKeyNode.c)
 *     MiGenerateSystemImageNames @ 0x1405FA3CC (MiGenerateSystemImageNames.c)
 *     MiResolveImageReferences @ 0x1405FABA8 (MiResolveImageReferences.c)
 *     IopBuildFullDriverPath @ 0x1405FB6D4 (IopBuildFullDriverPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x1405FB93C (IopQueryRegistryKeySystemPath.c)
 *     pIoQueryDeviceDescription @ 0x14060F7F0 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x14060FC60 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14060FD74 (pIoQueryBusDescription.c)
 *     MmCallDllInitialize @ 0x140611478 (MmCallDllInitialize.c)
 *     AslRegistryBuildMachinePath @ 0x14061FC58 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x14061FD0C (AslRegistryBuildUserPath.c)
 *     PopCreateHiberFile @ 0x140625404 (PopCreateHiberFile.c)
 *     IoReportDetectedDevice @ 0x1406482A0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14064B860 (IoReportRootDevice.c)
 *     CmVirtualKCBToRealPath @ 0x1406F456C (CmVirtualKCBToRealPath.c)
 *     CmpLoadHiveVolatile @ 0x140702BD0 (CmpLoadHiveVolatile.c)
 *     VrpPreLoadKey @ 0x14070B60C (VrpPreLoadKey.c)
 *     VrpBuildKeyPath @ 0x14070DD28 (VrpBuildKeyPath.c)
 *     IopSafebootDriverLoad @ 0x14071A6D0 (IopSafebootDriverLoad.c)
 *     IopValidateJunctionTarget @ 0x14071B5BC (IopValidateJunctionTarget.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140727C3C (PnpQueryRemoveLockedDeviceNode.c)
 *     PiDrvDbOverlayNodeHive @ 0x14073CE80 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14073DB74 (PiDrvDbResolveSystemFilePath.c)
 *     PopDeleteHiberFile @ 0x1407625E8 (PopDeleteHiberFile.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140779B40 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140785D38 (RtlpGetTokenNamedObjectPath.c)
 *     SdbResolveDatabaseEx @ 0x1407D7C4C (SdbResolveDatabaseEx.c)
 *     AdtpBuildSidListString @ 0x1407E0728 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x1407E0A38 (AdtpBuildStringListString.c)
 *     AdtpAppendString @ 0x1407E0CA4 (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x1407E0E98 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x1407E151C (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x1407E15B8 (AdtpBuildUserAccountControlString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1407F0408 (_SysCtxRegOpenCurrentUserKey.c)
 *     ObGetSiloRootDirectoryPath @ 0x1407F6710 (ObGetSiloRootDirectoryPath.c)
 *     CmpInitializeDriverStores @ 0x1408B1698 (CmpInitializeDriverStores.c)
 *     CmpOpenSystemDriverHiveContext @ 0x1408B7BC8 (CmpOpenSystemDriverHiveContext.c)
 *     CmpAddDriverToList @ 0x1408B8DEC (CmpAddDriverToList.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1408DF380 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
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
