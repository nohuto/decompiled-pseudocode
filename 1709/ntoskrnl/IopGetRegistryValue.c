/*
 * XREFs of IopGetRegistryValue @ 0x14051A5E4
 * Callers:
 *     PnpBootDeviceWait @ 0x14014661C (PnpBootDeviceWait.c)
 *     IopReadDumpRegistry @ 0x14014F84C (IopReadDumpRegistry.c)
 *     IopInitializeOfflineCrashDump @ 0x140151610 (IopInitializeOfflineCrashDump.c)
 *     SecureDump_ReadRegistry @ 0x14015A408 (SecureDump_ReadRegistry.c)
 *     IopIsBitlockerOn @ 0x14015BEA4 (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x1401FCC8C (IopAllowRemoteDASD.c)
 *     PiDevCfgQueryResolveValue @ 0x1401FF670 (PiDevCfgQueryResolveValue.c)
 *     IopLoadDriver @ 0x140517490 (IopLoadDriver.c)
 *     IopBuildFullDriverPath @ 0x140518684 (IopBuildFullDriverPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x14051A450 (IopGetDriverNameFromKeyNode.c)
 *     PnpPrepareDriverLoading @ 0x1405445A8 (PnpPrepareDriverLoading.c)
 *     PiFindDevInstMatch @ 0x140555C60 (PiFindDevInstMatch.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x140557EA8 (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpReadDeviceConfiguration @ 0x140558428 (PnpReadDeviceConfiguration.c)
 *     PiDevCfgCopyDeviceKey @ 0x140589CD0 (PiDevCfgCopyDeviceKey.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14058C190 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x14058C7DC (PipDmgGetDriverDmarCompatLevel.c)
 *     PipCheckForDenyExecute @ 0x140592C58 (PipCheckForDenyExecute.c)
 *     PiDevCfgMigrateDevice @ 0x14059ADAC (PiDevCfgMigrateDevice.c)
 *     PiDevCfgResolveMultiSzValue @ 0x1405A0790 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x1405A096C (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1405A0C10 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgVerifyService @ 0x1405A2558 (PiDevCfgVerifyService.c)
 *     PiDevCfgBuildIndirectString @ 0x1405A38E0 (PiDevCfgBuildIndirectString.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405AD678 (IopCopyBootLogRegistryToFile.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405BA584 (IopInitializeDeviceInstanceKey.c)
 *     PnpDriverLoadingFailed @ 0x1405C8154 (PnpDriverLoadingFailed.c)
 *     IopGetRegistryValues @ 0x1405D3064 (IopGetRegistryValues.c)
 *     PnpCheckPossibleBootStartDriver @ 0x1405D8FD8 (PnpCheckPossibleBootStartDriver.c)
 *     PipApplyFunctionToServiceInstances @ 0x1405DACFC (PipApplyFunctionToServiceInstances.c)
 *     IopIsReportedAlready @ 0x1405DFBE0 (IopIsReportedAlready.c)
 *     NtEnableLastKnownGood @ 0x1405E7AE0 (NtEnableLastKnownGood.c)
 *     PiRearrangeDeviceInstances @ 0x1405EC0A4 (PiRearrangeDeviceInstances.c)
 *     PiGetDeviceRegistryProperty @ 0x1406BF5A8 (PiGetDeviceRegistryProperty.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1406C1260 (PipServiceInstanceToDeviceInstance.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1406C56F8 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1406C6478 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x1406C66B8 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1406C6DE8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x1406C7280 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1406C72F4 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x1406C77D0 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableExpression @ 0x1406C78A0 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1406C8A40 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x1406C9070 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1406C9150 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x1406C9910 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1406C9AF0 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406D56F0 (PiCreateDriverSwDeviceCallback.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140789E7C (PnpGetDeviceInstanceRegistryValue.c)
 *     PipHardwareConfigInit @ 0x1408275F0 (PipHardwareConfigInit.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x14083E2D4 (IopQueryDeviceResetRegistrySettings.c)
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 *     PiInitCacheGroupInformation @ 0x140844C14 (PiInitCacheGroupInformation.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140845294 (PipCheckSystemFirmwareUpdated.c)
 *     IopInitializeSystemDrivers @ 0x140845AEC (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x140845D34 (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x140845EE8 (IopInitializeBootDrivers.c)
 *     PpInitGetGroupOrderIndex @ 0x140846D6C (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x140846E74 (PipCheckDependencies.c)
 *     PiDmaGuardProcessRegistry @ 0x140857F90 (PiDmaGuardProcessRegistry.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x140024538 (IopVerifierExAllocatePool.c)
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopGetRegistryValue(HANDLE KeyHandle, const WCHAR *a2, int a3, _QWORD *a4)
{
  NTSTATUS result; // eax
  __int64 v9; // rax
  int v10; // ebx
  ULONG Length; // ebx
  PVOID Pool; // rdi
  NTSTATUS v13; // ebx
  PVOID v14; // rax
  void *v15; // rbx
  NTSTATUS v16; // edi
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
    Pool = IopVerifierExAllocatePool(PagedPool, Length);
    if ( Pool )
    {
      v13 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, Pool, Length, &ResultLength);
      if ( v13 >= 0 )
      {
        *a4 = Pool;
        return 0;
      }
      ExFreePoolWithTag(Pool, 0);
      if ( v13 != -2147483643 && v13 != -1073741789 )
        return v13;
      v14 = IopVerifierExAllocatePool(PagedPool, ResultLength);
      v15 = v14;
      if ( v14 )
      {
        v16 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, v14, ResultLength, &ResultLength);
        if ( v16 < 0 )
        {
          ExFreePoolWithTag(v15, 0);
          return v16;
        }
        *a4 = v15;
        return 0;
      }
    }
    return -1073741670;
  }
  return result;
}
