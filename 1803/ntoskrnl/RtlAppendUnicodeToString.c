/*
 * XREFs of RtlAppendUnicodeToString @ 0x14006DCF0
 * Callers:
 *     LdrpGetResourceFileName @ 0x14016DD70 (LdrpGetResourceFileName.c)
 *     KsepEvntLogShimsApplied @ 0x14024D0F8 (KsepEvntLogShimsApplied.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1402C4B50 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1402C55DC (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1402C59A0 (AdtpFormatPrefix.c)
 *     CmpOpenHiveFile @ 0x14049E1B8 (CmpOpenHiveFile.c)
 *     IopSymlinkRememberJunction @ 0x1404E0CD0 (IopSymlinkRememberJunction.c)
 *     RtlpGetRegistryHandle @ 0x140506008 (RtlpGetRegistryHandle.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140519C30 (RtlFormatCurrentUserKeyPath.c)
 *     CmpQueryHiveRedirectionFileList @ 0x14057F47C (CmpQueryHiveRedirectionFileList.c)
 *     CmRealKCBToVirtualPath @ 0x1405C06B0 (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualizationID @ 0x1405C08C4 (CmpGetVirtualizationID.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1405F3118 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1405F5140 (IopBuildGlobalSymbolicLinkString.c)
 *     IopGetDriverNameFromKeyNode @ 0x1405F76D4 (IopGetDriverNameFromKeyNode.c)
 *     IopLoadDriver @ 0x1405F7CAC (IopLoadDriver.c)
 *     pIoQueryDeviceDescription @ 0x14060F7F0 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14060FD74 (pIoQueryBusDescription.c)
 *     MmCallDllInitialize @ 0x140611478 (MmCallDllInitialize.c)
 *     PnpBuildCmResourceList @ 0x140616220 (PnpBuildCmResourceList.c)
 *     AslRegistryBuildMachinePath @ 0x14061FC58 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x14061FD0C (AslRegistryBuildUserPath.c)
 *     PiDrvDbCreateNode @ 0x140622B38 (PiDrvDbCreateNode.c)
 *     CmpMountPreloadedHives @ 0x1406309E0 (CmpMountPreloadedHives.c)
 *     IoReportDetectedDevice @ 0x1406482A0 (IoReportDetectedDevice.c)
 *     CmpInitializeSystemHivesLoad @ 0x1406498CC (CmpInitializeSystemHivesLoad.c)
 *     IoReportRootDevice @ 0x14064B860 (IoReportRootDevice.c)
 *     CmpFlushBackupHive @ 0x1406F9154 (CmpFlushBackupHive.c)
 *     CmpLoadHiveVolatile @ 0x140702BD0 (CmpLoadHiveVolatile.c)
 *     VrpPreLoadKey @ 0x14070B60C (VrpPreLoadKey.c)
 *     VrpBuildKeyPath @ 0x14070DD28 (VrpBuildKeyPath.c)
 *     IopSafebootDriverLoad @ 0x14071A6D0 (IopSafebootDriverLoad.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14073DB74 (PiDrvDbResolveSystemFilePath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140785D38 (RtlpGetTokenNamedObjectPath.c)
 *     IoWMISuggestInstanceName @ 0x1407A2980 (IoWMISuggestInstanceName.c)
 *     ExpValidateLocale @ 0x1407BC5D4 (ExpValidateLocale.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1407CA784 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     ApiSetpConstructPathToExtension @ 0x1407CC734 (ApiSetpConstructPathToExtension.c)
 *     SdbResolveDatabaseEx @ 0x1407D7C4C (SdbResolveDatabaseEx.c)
 *     AslpProcessMatchRegNode @ 0x1407DBB08 (AslpProcessMatchRegNode.c)
 *     AdtpBuildSidListString @ 0x1407E0728 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x1407E0A38 (AdtpBuildStringListString.c)
 *     AdtpBuildAccessesString @ 0x1407E0E98 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x1407E151C (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x1407E15B8 (AdtpBuildUserAccountControlString.c)
 *     BiResolveLocateDevice @ 0x1407E21A4 (BiResolveLocateDevice.c)
 *     CmpInitializePreloadedHive @ 0x1408B0CD8 (CmpInitializePreloadedHive.c)
 *     CmpInitializeDriverStores @ 0x1408B1698 (CmpInitializeDriverStores.c)
 *     CmpOpenSystemDriverHiveContext @ 0x1408B7BC8 (CmpOpenSystemDriverHiveContext.c)
 *     CmpAddDriverToList @ 0x1408B8DEC (CmpAddDriverToList.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1408DF380 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendUnicodeToString(PUNICODE_STRING Destination, PCWSTR Source)
{
  unsigned __int16 Length; // bp
  wchar_t *v5; // r14
  UNICODE_STRING v7; // [rsp+20h] [rbp-28h] BYREF

  if ( !Source )
    return 0;
  if ( RtlInitUnicodeStringEx(&v7, Source) >= 0 )
  {
    Length = v7.Length;
    if ( Destination->Length + (unsigned int)v7.Length <= Destination->MaximumLength )
    {
      v5 = &Destination->Buffer[(unsigned __int64)Destination->Length >> 1];
      memmove(v5, Source, v7.Length);
      Destination->Length += Length;
      if ( (unsigned int)Destination->Length + 1 < Destination->MaximumLength )
        v5[(unsigned __int64)Length >> 1] = 0;
      return 0;
    }
  }
  return -1073741789;
}
