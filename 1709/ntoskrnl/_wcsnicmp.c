/*
 * XREFs of _wcsnicmp @ 0x14015EC50
 * Callers:
 *     PiDevCfgMatchDriverConfigurationId @ 0x1401FF4D8 (PiDevCfgMatchDriverConfigurationId.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1404DD394 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     WmipPrepareWnodeSI @ 0x14051F40C (WmipPrepareWnodeSI.c)
 *     SdbpResolveMatchingFile @ 0x140542220 (SdbpResolveMatchingFile.c)
 *     AslEnvVarQuery @ 0x140542624 (AslEnvVarQuery.c)
 *     AslpEnvResolveVars @ 0x140542880 (AslpEnvResolveVars.c)
 *     MiDriverLoadSucceeded @ 0x140543B6C (MiDriverLoadSucceeded.c)
 *     PiSwFindSwDevice @ 0x14055E74C (PiSwFindSwDevice.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1405607E0 (IoVolumeDeviceNameToGuidPath.c)
 *     LocalGetAclForString @ 0x14057BEE8 (LocalGetAclForString.c)
 *     LookupAccessMaskInTable @ 0x14057C44C (LookupAccessMaskInTable.c)
 *     LookupSidInTable @ 0x14057C5D8 (LookupSidInTable.c)
 *     LookupAceTypeInTable @ 0x14057C714 (LookupAceTypeInTable.c)
 *     FContainCallBackAce @ 0x14057C934 (FContainCallBackAce.c)
 *     LocalGetSDControlForString @ 0x14057CA58 (LocalGetSDControlForString.c)
 *     BiCleanupLoadedStores @ 0x1405ADCF8 (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x1405AECB4 (BiOpenSystemStore.c)
 *     BiCreatePartitionDevice @ 0x1405B0C38 (BiCreatePartitionDevice.c)
 *     PiSwIrpCleanup @ 0x1405BBE50 (PiSwIrpCleanup.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x1405E5038 (WmipGetGuidObjectInstanceInfo.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x1405E54D0 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     CmpPreserveSystemHiveData @ 0x140699C54 (CmpPreserveSystemHiveData.c)
 *     VrpComparePath @ 0x1406A96C8 (VrpComparePath.c)
 *     IopCheckIfNotNativeDriver @ 0x1406B4A60 (IopCheckIfNotNativeDriver.c)
 *     IopReplaceSymlinkPath @ 0x1406B8A48 (IopReplaceSymlinkPath.c)
 *     punycode_decode @ 0x140724B0C (punycode_decode.c)
 *     punycode_encode @ 0x140725184 (punycode_encode.c)
 *     LookupAceFlagsInTable @ 0x140733614 (LookupAceFlagsInTable.c)
 *     GetAttributeName @ 0x14073461C (GetAttributeName.c)
 *     GetOperandValue @ 0x140734AFC (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x14073513C (GetOperatorIndexByName.c)
 *     GetValueType @ 0x140735D48 (GetValueType.c)
 *     LocalpGetStringForCondition @ 0x140737BE0 (LocalpGetStringForCondition.c)
 *     EtwpApplyExeFilter @ 0x1407507E8 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x140750908 (EtwpApplyPackageIdFilter.c)
 *     NtSetSystemEnvironmentValueEx @ 0x14075DF18 (NtSetSystemEnvironmentValueEx.c)
 *     SdbpGetProcessHistory @ 0x140770114 (SdbpGetProcessHistory.c)
 *     BiCreateFileDeviceElement @ 0x140779D84 (BiCreateFileDeviceElement.c)
 *     SiIsValidDiskDevice @ 0x14077DF80 (SiIsValidDiskDevice.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsnicmp(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  int v3; // r9d
  const wchar_t *v4; // r10
  signed __int64 v5; // r11
  unsigned __int16 v6; // cx
  wchar_t v7; // dx

  v3 = 0;
  v4 = Str2;
  if ( MaxCount )
  {
    v5 = (char *)Str1 - (char *)Str2;
    do
    {
      v6 = *(const wchar_t *)((char *)v4 + v5);
      if ( (unsigned __int16)(v6 - 65) <= 0x19u )
        v6 += 32;
      v7 = *v4;
      if ( (unsigned __int16)(*v4 - 65) <= 0x19u )
        v7 += 32;
      ++v4;
      --MaxCount;
    }
    while ( MaxCount && v6 && v6 == v7 );
    return v6 - v7;
  }
  return v3;
}
