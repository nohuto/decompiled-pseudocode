/*
 * XREFs of _wcsnicmp @ 0x14016A210
 * Callers:
 *     PiDevCfgMatchDriverConfigurationId @ 0x1401F9578 (PiDevCfgMatchDriverConfigurationId.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x140443E20 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140450308 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     MiDriverLoadSucceeded @ 0x1404B317C (MiDriverLoadSucceeded.c)
 *     PiSwIrpCleanup @ 0x140570744 (PiSwIrpCleanup.c)
 *     PiSwFindSwDevice @ 0x140570D30 (PiSwFindSwDevice.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140570FF0 (IoVolumeDeviceNameToGuidPath.c)
 *     LocalGetAclForString @ 0x14057F594 (LocalGetAclForString.c)
 *     LookupAccessMaskInTable @ 0x14057FAF0 (LookupAccessMaskInTable.c)
 *     LookupSidInTable @ 0x14057FC7C (LookupSidInTable.c)
 *     LookupAceTypeInTable @ 0x14057FDB8 (LookupAceTypeInTable.c)
 *     FContainCallBackAce @ 0x14057FFD8 (FContainCallBackAce.c)
 *     WmipPrepareWnodeSI @ 0x140580A10 (WmipPrepareWnodeSI.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x1405840F8 (WmipGetGuidObjectInstanceInfo.c)
 *     BiOpenSystemStore @ 0x14058A528 (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14058A710 (BiCleanupLoadedStores.c)
 *     BiCreatePartitionDevice @ 0x14058C52C (BiCreatePartitionDevice.c)
 *     SdbpResolveMatchingFile @ 0x1405BB78C (SdbpResolveMatchingFile.c)
 *     AslpEnvResolveVars @ 0x1405BBB80 (AslpEnvResolveVars.c)
 *     AslEnvVarQuery @ 0x1405BBF44 (AslEnvVarQuery.c)
 *     LocalGetSDControlForString @ 0x1405C6138 (LocalGetSDControlForString.c)
 *     CmpPreserveSystemHiveData @ 0x14066F58C (CmpPreserveSystemHiveData.c)
 *     VrpComparePath @ 0x14067E648 (VrpComparePath.c)
 *     IopCheckIfNotNativeDriver @ 0x140688A80 (IopCheckIfNotNativeDriver.c)
 *     IopReplaceSymlinkPath @ 0x14068CB18 (IopReplaceSymlinkPath.c)
 *     punycode_decode @ 0x1406EC640 (punycode_decode.c)
 *     punycode_encode @ 0x1406ECCE8 (punycode_encode.c)
 *     LookupAceFlagsInTable @ 0x1406FBC2C (LookupAceFlagsInTable.c)
 *     GetAttributeName @ 0x1406FCC24 (GetAttributeName.c)
 *     GetOperandValue @ 0x1406FD104 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1406FD724 (GetOperatorIndexByName.c)
 *     GetValueType @ 0x1406FE328 (GetValueType.c)
 *     LocalpGetStringForCondition @ 0x140700190 (LocalpGetStringForCondition.c)
 *     EtwpApplyExeFilter @ 0x140712764 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x140712820 (EtwpApplyPackageIdFilter.c)
 *     NtSetSystemEnvironmentValueEx @ 0x14071E604 (NtSetSystemEnvironmentValueEx.c)
 *     SdbpGetProcessHistory @ 0x14072CF3C (SdbpGetProcessHistory.c)
 *     BiCreateFileDeviceElement @ 0x140735940 (BiCreateFileDeviceElement.c)
 *     SiIsValidDiskDevice @ 0x140739618 (SiIsValidDiskDevice.c)
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
