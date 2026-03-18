/*
 * XREFs of RtlAppendUnicodeToString @ 0x1400DEC60
 * Callers:
 *     LdrpGetResourceFileName @ 0x140131944 (LdrpGetResourceFileName.c)
 *     KsepEvntLogShimsApplied @ 0x1401596AC (KsepEvntLogShimsApplied.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14028EEE0 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14028F964 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x14028FD28 (AdtpFormatPrefix.c)
 *     CmpOpenHiveFile @ 0x1404E0664 (CmpOpenHiveFile.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1404E11A0 (RtlFormatCurrentUserKeyPath.c)
 *     IopLoadDriver @ 0x140517490 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x14051A450 (IopGetDriverNameFromKeyNode.c)
 *     RtlpGetRegistryHandle @ 0x140521EDC (RtlpGetRegistryHandle.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1405565F0 (IopBuildGlobalSymbolicLinkString.c)
 *     PnpBuildCmResourceList @ 0x140558FE8 (PnpBuildCmResourceList.c)
 *     CmpQueryHiveRedirectionFileList @ 0x140596AD0 (CmpQueryHiveRedirectionFileList.c)
 *     CmpMountPreloadedHives @ 0x1405C2F10 (CmpMountPreloadedHives.c)
 *     PiDrvDbCreateNode @ 0x1405C6554 (PiDrvDbCreateNode.c)
 *     MmCallDllInitialize @ 0x1405C90B8 (MmCallDllInitialize.c)
 *     IopSymlinkRememberJunction @ 0x1405CE168 (IopSymlinkRememberJunction.c)
 *     pIoQueryDeviceDescription @ 0x1405D2770 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x1405D2CF4 (pIoQueryBusDescription.c)
 *     IoReportDetectedDevice @ 0x1405DF730 (IoReportDetectedDevice.c)
 *     CmpInitializeSystemHivesLoad @ 0x1405E18B4 (CmpInitializeSystemHivesLoad.c)
 *     IoReportRootDevice @ 0x1405E3820 (IoReportRootDevice.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1405E7F0C (IopFileUtilWalkDirectoryTreeHelper.c)
 *     CmRealKCBToVirtualPath @ 0x1406909A4 (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualizationID @ 0x1406921DC (CmpGetVirtualizationID.c)
 *     CmpFlushBackupHive @ 0x1406951B8 (CmpFlushBackupHive.c)
 *     CmpLoadHiveVolatile @ 0x14069DCAC (CmpLoadHiveVolatile.c)
 *     VrpPreLoadKey @ 0x1406A6F7C (VrpPreLoadKey.c)
 *     VrpBuildKeyPath @ 0x1406A95FC (VrpBuildKeyPath.c)
 *     IopSafebootDriverLoad @ 0x1406B5A20 (IopSafebootDriverLoad.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140722598 (RtlpGetTokenNamedObjectPath.c)
 *     IoWMISuggestInstanceName @ 0x140740940 (IoWMISuggestInstanceName.c)
 *     ExpValidateLocale @ 0x140755B08 (ExpValidateLocale.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x140762CA0 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     ApiSetpConstructPathToExtension @ 0x140764A54 (ApiSetpConstructPathToExtension.c)
 *     SdbResolveDatabaseEx @ 0x140770970 (SdbResolveDatabaseEx.c)
 *     AslRegistryBuildMachinePath @ 0x1407722CC (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x140772374 (AslRegistryBuildUserPath.c)
 *     AdtpBuildSidListString @ 0x14077799C (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x140777CB4 (AdtpBuildStringListString.c)
 *     AdtpBuildAccessesString @ 0x140778114 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x140778790 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x14077882C (AdtpBuildUserAccountControlString.c)
 *     BiResolveLocateDevice @ 0x140779538 (BiResolveLocateDevice.c)
 *     CmpAddDriverToList @ 0x1408365C8 (CmpAddDriverToList.c)
 *     CmpInitializePreloadedHive @ 0x14083C6D0 (CmpInitializePreloadedHive.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x14086A990 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x140192C00 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendUnicodeToString(PUNICODE_STRING Destination, PCWSTR Source)
{
  unsigned __int16 Length; // bp
  wchar_t *v5; // r14
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( !Source )
    return 0;
  if ( RtlInitUnicodeStringEx(&DestinationString, Source) >= 0 )
  {
    Length = DestinationString.Length;
    if ( Destination->Length + (unsigned int)DestinationString.Length <= Destination->MaximumLength )
    {
      v5 = &Destination->Buffer[(unsigned __int64)Destination->Length >> 1];
      memmove(v5, Source, DestinationString.Length);
      Destination->Length += Length;
      if ( (unsigned int)Destination->Length + 1 < Destination->MaximumLength )
        v5[(unsigned __int64)Length >> 1] = 0;
      return 0;
    }
  }
  return -1073741789;
}
