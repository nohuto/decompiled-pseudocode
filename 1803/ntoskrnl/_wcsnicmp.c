/*
 * XREFs of _wcsnicmp @ 0x1401889A0
 * Callers:
 *     PiDevCfgMatchDriverConfigurationId @ 0x14023BF0C (PiDevCfgMatchDriverConfigurationId.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140495F50 (IoVolumeDeviceNameToGuidPath.c)
 *     WmipPrepareWnodeSI @ 0x14051B448 (WmipPrepareWnodeSI.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x14056D76C (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     PiSwIrpCleanup @ 0x1405C529C (PiSwIrpCleanup.c)
 *     PiSwFindSwDevice @ 0x1405C8F4C (PiSwFindSwDevice.c)
 *     MiDriverLoadSucceeded @ 0x1405FA544 (MiDriverLoadSucceeded.c)
 *     LocalGetAclForString @ 0x140601100 (LocalGetAclForString.c)
 *     LookupAccessMaskInTable @ 0x140601690 (LookupAccessMaskInTable.c)
 *     LookupSidInTable @ 0x14060181C (LookupSidInTable.c)
 *     LookupAceTypeInTable @ 0x140601958 (LookupAceTypeInTable.c)
 *     FContainCallBackAce @ 0x140601B78 (FContainCallBackAce.c)
 *     LocalGetSDControlForString @ 0x140601C9C (LocalGetSDControlForString.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140605B7C (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     BiCleanupLoadedStores @ 0x140606C04 (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x140608164 (BiOpenSystemStore.c)
 *     BiCreatePartitionDevice @ 0x140609914 (BiCreatePartitionDevice.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x1406130F8 (WmipGetGuidObjectInstanceInfo.c)
 *     SdbpResolveMatchingFile @ 0x14061E914 (SdbpResolveMatchingFile.c)
 *     AslpEnvResolveVars @ 0x14061ED10 (AslpEnvResolveVars.c)
 *     AslEnvVarQuery @ 0x14061F0D4 (AslEnvVarQuery.c)
 *     CmpPreserveSystemHiveData @ 0x1406FE2C0 (CmpPreserveSystemHiveData.c)
 *     VrpComparePath @ 0x14070DDF4 (VrpComparePath.c)
 *     IopCheckIfNotNativeDriver @ 0x140719710 (IopCheckIfNotNativeDriver.c)
 *     IopReplaceSymlinkPath @ 0x14071D76C (IopReplaceSymlinkPath.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14073C89C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14073DB74 (PiDrvDbResolveSystemFilePath.c)
 *     punycode_decode @ 0x1407883DC (punycode_decode.c)
 *     punycode_encode @ 0x140788A6C (punycode_encode.c)
 *     LookupAceFlagsInTable @ 0x140796EB8 (LookupAceFlagsInTable.c)
 *     GetAttributeName @ 0x140797E80 (GetAttributeName.c)
 *     GetOperandValue @ 0x140798348 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x140798974 (GetOperatorIndexByName.c)
 *     GetValueType @ 0x140799594 (GetValueType.c)
 *     LocalpGetStringForCondition @ 0x14079B478 (LocalpGetStringForCondition.c)
 *     EtwpApplyExeFilter @ 0x1407B14BC (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x1407B15DC (EtwpApplyPackageIdFilter.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1407C4F40 (NtSetSystemEnvironmentValueEx.c)
 *     SdbpGetProcessHistory @ 0x1407D73D8 (SdbpGetProcessHistory.c)
 *     AslPathCleanUstr @ 0x1407D9D08 (AslPathCleanUstr.c)
 *     AslpPathWildcardMakeLeaves @ 0x1407DB938 (AslpPathWildcardMakeLeaves.c)
 *     BiCreateFileDeviceElement @ 0x1407E2758 (BiCreateFileDeviceElement.c)
 *     SiIsValidDiskDevice @ 0x1407E69A0 (SiIsValidDiskDevice.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x1408DD7A8 (CmpGetSystemRelativeRegistryHiveFilePath.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsnicmp(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  int v3; // r9d
  size_t v4; // rbx
  const wchar_t *v5; // r11
  signed __int64 v6; // r10
  __int16 v7; // cx
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // r8

  v3 = 0;
  v4 = MaxCount;
  v5 = Str2;
  if ( MaxCount )
  {
    v6 = (char *)Str1 - (char *)Str2;
    do
    {
      v7 = *(const wchar_t *)((char *)v5 + v6);
      v8 = v7 + 32;
      if ( (unsigned __int16)(v7 - 65) > 0x19u )
        v8 = *(const wchar_t *)((char *)v5 + v6);
      v9 = *v5++;
      v10 = v9 + 32;
      if ( (unsigned __int16)(v9 - 65) > 0x19u )
        v10 = v9;
      --v4;
    }
    while ( v4 && v8 && v8 == v10 );
    return v8 - v10;
  }
  return v3;
}
