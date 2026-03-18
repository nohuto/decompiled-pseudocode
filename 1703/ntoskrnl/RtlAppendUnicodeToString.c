/*
 * XREFs of RtlAppendUnicodeToString @ 0x14004BFF0
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x140153258 (KsepEvntLogShimsApplied.c)
 *     LdrpGetResourceFileName @ 0x140156A08 (LdrpGetResourceFileName.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140264B94 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140265628 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1402659EC (AdtpFormatPrefix.c)
 *     CmpGetVirtualizationID @ 0x140452200 (CmpGetVirtualizationID.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1404C0410 (RtlFormatCurrentUserKeyPath.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1404CBB30 (CmpQueryHiveRedirectionFileList.c)
 *     CmpOpenHiveFile @ 0x1404D7AAC (CmpOpenHiveFile.c)
 *     CmRealKCBToVirtualPath @ 0x1404D8D90 (CmRealKCBToVirtualPath.c)
 *     IopLoadDriver @ 0x1404D8F84 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x1404D98B8 (IopGetDriverNameFromKeyNode.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1404E47B4 (IopBuildGlobalSymbolicLinkString.c)
 *     RtlpGetRegistryHandle @ 0x140556BB8 (RtlpGetRegistryHandle.c)
 *     IopSymlinkRememberJunction @ 0x14057BD70 (IopSymlinkRememberJunction.c)
 *     pIoQueryBusDescription @ 0x1405866A8 (pIoQueryBusDescription.c)
 *     MmCallDllInitialize @ 0x140586B80 (MmCallDllInitialize.c)
 *     pIoQueryDeviceDescription @ 0x140586DD0 (pIoQueryDeviceDescription.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14059828C (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiDrvDbCreateNode @ 0x14059E128 (PiDrvDbCreateNode.c)
 *     CmpInitializeSystemHivesLoad @ 0x1405A444C (CmpInitializeSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1405A67E8 (CmpMountPreloadedHives.c)
 *     IoReportRootDevice @ 0x1405AFC40 (IoReportRootDevice.c)
 *     IoReportDetectedDevice @ 0x1405AFEA0 (IoReportDetectedDevice.c)
 *     PnpBuildCmResourceList @ 0x1405B1360 (PnpBuildCmResourceList.c)
 *     AslRegistryBuildMachinePath @ 0x1405D6EE0 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1405D6F60 (AslRegistryBuildUserPath.c)
 *     CmpFlushBackupHive @ 0x14066AB34 (CmpFlushBackupHive.c)
 *     CmpLoadHiveVolatile @ 0x140672BD8 (CmpLoadHiveVolatile.c)
 *     VrpPreLoadKey @ 0x14067C648 (VrpPreLoadKey.c)
 *     VrpBuildKeyPath @ 0x14067E57C (VrpBuildKeyPath.c)
 *     IopSafebootDriverLoad @ 0x140689D60 (IopSafebootDriverLoad.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1406EA6A0 (RtlpGetTokenNamedObjectPath.c)
 *     IoWMISuggestInstanceName @ 0x140706DB0 (IoWMISuggestInstanceName.c)
 *     ExpValidateLocale @ 0x1407163DC (ExpValidateLocale.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1407231F0 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     ApiSetpConstructPathToExtension @ 0x140724F84 (ApiSetpConstructPathToExtension.c)
 *     SdbResolveDatabase @ 0x14072D64C (SdbResolveDatabase.c)
 *     AdtpBuildSidListString @ 0x14073382C (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x140733B44 (AdtpBuildStringListString.c)
 *     AdtpBuildAccessesString @ 0x140733FA4 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x140734628 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x1407346C4 (AdtpBuildUserAccountControlString.c)
 *     BiResolveLocateDevice @ 0x14073529C (BiResolveLocateDevice.c)
 *     CmpInitializePreloadedHive @ 0x1408082A4 (CmpInitializePreloadedHive.c)
 *     CmpAddDriverToList @ 0x14080E330 (CmpAddDriverToList.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140833870 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x140192A40 (memmove.c)
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
