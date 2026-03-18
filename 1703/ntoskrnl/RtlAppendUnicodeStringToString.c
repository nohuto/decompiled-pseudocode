/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x140080110
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x140153258 (KsepEvntLogShimsApplied.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140264B94 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140265628 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1402659EC (AdtpFormatPrefix.c)
 *     CmpStartCLFSLog @ 0x14042F0D4 (CmpStartCLFSLog.c)
 *     IopBootLog @ 0x14045B6F8 (IopBootLog.c)
 *     MiGenerateSystemImageNames @ 0x1404B3008 (MiGenerateSystemImageNames.c)
 *     CmpNameFromAttributes @ 0x1404D5588 (CmpNameFromAttributes.c)
 *     CmpOpenHiveFile @ 0x1404D7AAC (CmpOpenHiveFile.c)
 *     CmRealKCBToVirtualPath @ 0x1404D8D90 (CmRealKCBToVirtualPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x1404D98B8 (IopGetDriverNameFromKeyNode.c)
 *     MiResolveImageReferences @ 0x1404F8F54 (MiResolveImageReferences.c)
 *     CmpInitCmRM @ 0x14054D650 (CmpInitCmRM.c)
 *     CmpQueryNameString @ 0x14054DFB4 (CmpQueryNameString.c)
 *     RtlpGetRegistryHandle @ 0x140556BB8 (RtlpGetRegistryHandle.c)
 *     IopSymlinkRememberJunction @ 0x14057BD70 (IopSymlinkRememberJunction.c)
 *     pIoQueryBusDescription @ 0x1405866A8 (pIoQueryBusDescription.c)
 *     MmCallDllInitialize @ 0x140586B80 (MmCallDllInitialize.c)
 *     pIoQueryDeviceDescription @ 0x140586DD0 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x140587240 (IoQueryDeviceDescription.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14059828C (IopFileUtilWalkDirectoryTreeHelper.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1405990C0 (CmpAddRemoveContainerToCLFSLog.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x14059A934 (PnpQueryRemoveLockedDeviceNode.c)
 *     PopDeleteHiberFile @ 0x14059BA44 (PopDeleteHiberFile.c)
 *     IoReportRootDevice @ 0x1405AFC40 (IoReportRootDevice.c)
 *     IoReportDetectedDevice @ 0x1405AFEA0 (IoReportDetectedDevice.c)
 *     AslRegistryBuildMachinePath @ 0x1405D6EE0 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1405D6F60 (AslRegistryBuildUserPath.c)
 *     PopCreateHiberFile @ 0x1405D7378 (PopCreateHiberFile.c)
 *     CmVirtualKCBToRealPath @ 0x140666C60 (CmVirtualKCBToRealPath.c)
 *     CmpLoadHiveVolatile @ 0x140672BD8 (CmpLoadHiveVolatile.c)
 *     VrpPreLoadKey @ 0x14067C648 (VrpPreLoadKey.c)
 *     VrpBuildKeyPath @ 0x14067E57C (VrpBuildKeyPath.c)
 *     IopSafebootDriverLoad @ 0x140689D60 (IopSafebootDriverLoad.c)
 *     IopValidateJunctionTarget @ 0x14068AC90 (IopValidateJunctionTarget.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1406DF530 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1406EA6A0 (RtlpGetTokenNamedObjectPath.c)
 *     SdbResolveDatabase @ 0x14072D64C (SdbResolveDatabase.c)
 *     AdtpBuildSidListString @ 0x14073382C (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x140733B44 (AdtpBuildStringListString.c)
 *     AdtpAppendString @ 0x140733DAC (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x140733FA4 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x140734628 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x1407346C4 (AdtpBuildUserAccountControlString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14074178C (_SysCtxRegOpenCurrentUserKey.c)
 *     ObGetSiloRootDirectoryPath @ 0x140747A10 (ObGetSiloRootDirectoryPath.c)
 *     CmpAddDriverToList @ 0x14080E330 (CmpAddDriverToList.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140833870 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
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
