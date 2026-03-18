/*
 * XREFs of IopGetRegistryValue @ 0x1404D9A74
 * Callers:
 *     PnpBootDeviceWait @ 0x140153E58 (PnpBootDeviceWait.c)
 *     IopIsBitlockerOn @ 0x1401595AC (IopIsBitlockerOn.c)
 *     IopInitializeOfflineCrashDump @ 0x140159E68 (IopInitializeOfflineCrashDump.c)
 *     SecureDump_ReadRegistry @ 0x14015A1A8 (SecureDump_ReadRegistry.c)
 *     IopReadDumpRegistry @ 0x14015A28C (IopReadDumpRegistry.c)
 *     IopAllowRemoteDASD @ 0x1401F6E38 (IopAllowRemoteDASD.c)
 *     PiDevCfgQueryResolveValue @ 0x1401F9854 (PiDevCfgQueryResolveValue.c)
 *     PnpPrepareDriverLoading @ 0x1404B3CA8 (PnpPrepareDriverLoading.c)
 *     IopLoadDriver @ 0x1404D8F84 (IopLoadDriver.c)
 *     IopBuildFullDriverPath @ 0x1404D9704 (IopBuildFullDriverPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x1404D98B8 (IopGetDriverNameFromKeyNode.c)
 *     PipCheckForDenyExecute @ 0x14055624C (PipCheckForDenyExecute.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140559660 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     IopInitializeDeviceInstanceKey @ 0x140559998 (IopInitializeDeviceInstanceKey.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x14055BDB4 (PnpGetDeviceResourcesFromRegistry.c)
 *     IopGetRegistryValues @ 0x140586ACC (IopGetRegistryValues.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14058E87C (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgVerifyService @ 0x140590184 (PiDevCfgVerifyService.c)
 *     PiDevCfgBuildIndirectString @ 0x14059187C (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgMigrateDevice @ 0x14059389C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgCopyDeviceKey @ 0x140593BA4 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveVariable @ 0x140594210 (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1405944B0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     NtEnableLastKnownGood @ 0x140597E60 (NtEnableLastKnownGood.c)
 *     PipApplyFunctionToServiceInstances @ 0x14059C6CC (PipApplyFunctionToServiceInstances.c)
 *     PiFindDevInstMatch @ 0x14059CC04 (PiFindDevInstMatch.c)
 *     PnpCheckPossibleBootStartDriver @ 0x1405ADA64 (PnpCheckPossibleBootStartDriver.c)
 *     IopIsReportedAlready @ 0x1405B0350 (IopIsReportedAlready.c)
 *     PnpReadDeviceConfiguration @ 0x1405B098C (PnpReadDeviceConfiguration.c)
 *     PnpDriverLoadingFailed @ 0x1405D38F8 (PnpDriverLoadingFailed.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405D6404 (IopCopyBootLogRegistryToFile.c)
 *     PiGetDeviceRegistryProperty @ 0x1406938D8 (PiGetDeviceRegistryProperty.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1406954A0 (PipServiceInstanceToDeviceInstance.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140699B70 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14069A874 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x14069AA94 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14069B1C8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14069B660 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14069B6D4 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x14069C2D0 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableExpression @ 0x14069C3A0 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14069D540 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x14069DB70 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14069DC50 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x14069E410 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14069E5F0 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiRearrangeDeviceInstances @ 0x1406A70F0 (PiRearrangeDeviceInstances.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406AA480 (PiCreateDriverSwDeviceCallback.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x14074764C (PnpGetDeviceInstanceRegistryValue.c)
 *     PiInitCacheGroupInformation @ 0x1407F7F14 (PiInitCacheGroupInformation.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1407F84FC (PipCheckSystemFirmwareUpdated.c)
 *     IopInitializeSystemDrivers @ 0x1407F8D84 (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x1407F9010 (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x1407F91C4 (IopInitializeBootDrivers.c)
 *     PpInitGetGroupOrderIndex @ 0x1407FA084 (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x1407FA19C (PipCheckDependencies.c)
 *     IopInitializePlugPlayServices @ 0x1407FAEC0 (IopInitializePlugPlayServices.c)
 *     PipHardwareConfigInit @ 0x14080CF9C (PipHardwareConfigInit.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x140826290 (IopQueryDeviceResetRegistrySettings.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 *     ZwQueryValueKey @ 0x14017E220 (ZwQueryValueKey.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopGetRegistryValue(HANDLE KeyHandle, const WCHAR *a2, int a3, _QWORD *a4)
{
  NTSTATUS result; // eax
  __int64 v9; // rax
  int v10; // ebx
  ULONG Length; // ebx
  PVOID PoolWithTagPriority; // rax
  void *v13; // rdi
  NTSTATUS v14; // ebx
  PVOID PoolWithTag; // rax
  void *v16; // rbx
  NTSTATUS v17; // edi
  ULONG ResultLength; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-20h] BYREF

  result = RtlInitUnicodeStringEx(&ValueName, a2);
  if ( result >= 0 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a2[v9] );
    v10 = (2 * v9 + 31) & 0xFFFFFFF8;
    if ( a3 )
      Length = (a3 + v10 + 7) & 0xFFFFFFF8;
    else
      Length = v10 + 4;
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                              PagedPool,
                              Length,
                              0x20206F49u,
                              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTagPriority = ExAllocatePoolWithTag(PagedPool, Length, 0x20206F49u);
    v13 = PoolWithTagPriority;
    if ( PoolWithTagPriority )
    {
      v14 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, PoolWithTagPriority, Length, &ResultLength);
      if ( v14 >= 0 )
      {
        *a4 = v13;
        return 0;
      }
      ExFreePoolWithTag(v13, 0);
      if ( v14 != -2147483643 && v14 != -1073741789 )
        return v14;
      if ( ViVerifierDriverAddedThunkListHead )
        PoolWithTag = ExAllocatePoolWithTagPriority(
                        PagedPool,
                        ResultLength,
                        0x20206F49u,
                        (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
      else
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x20206F49u);
      v16 = PoolWithTag;
      if ( PoolWithTag )
      {
        v17 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, PoolWithTag, ResultLength, &ResultLength);
        if ( v17 < 0 )
        {
          ExFreePoolWithTag(v16, 0);
          return v17;
        }
        *a4 = v16;
        return 0;
      }
    }
    return -1073741670;
  }
  return result;
}
