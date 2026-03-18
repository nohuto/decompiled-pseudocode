/*
 * XREFs of IopGetRegistryValue @ 0x1405D9B94
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x14016F648 (IopInitializeOfflineCrashDump.c)
 *     PnpBootDeviceWait @ 0x14017973C (PnpBootDeviceWait.c)
 *     IopReadDumpRegistry @ 0x14017E3C8 (IopReadDumpRegistry.c)
 *     PipDmgIsDriverPotentiallyOnHiberPath @ 0x1401846A8 (PipDmgIsDriverPotentiallyOnHiberPath.c)
 *     SecureDump_ReadRegistry @ 0x140185278 (SecureDump_ReadRegistry.c)
 *     IopIsBitlockerOn @ 0x1401861DC (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x1402399C8 (IopAllowRemoteDASD.c)
 *     PiDevCfgQueryResolveValue @ 0x14023C1D8 (PiDevCfgQueryResolveValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x1405D81C8 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgBuildIndirectString @ 0x1405D8850 (PiDevCfgBuildIndirectString.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405D9834 (IopInitializeDeviceInstanceKey.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1405DA1C0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveVariable @ 0x1405DA3E0 (PiDevCfgResolveVariable.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1405DBD3C (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1405DC58C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PiDevCfgMigrateDevice @ 0x1405E6DB0 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgVerifyService @ 0x1405F23B0 (PiDevCfgVerifyService.c)
 *     PiDevCfgResolveMultiSzValue @ 0x1405F2760 (PiDevCfgResolveMultiSzValue.c)
 *     NtEnableLastKnownGood @ 0x1405F2CEC (NtEnableLastKnownGood.c)
 *     PipCheckForDenyExecute @ 0x1405F58F0 (PipCheckForDenyExecute.c)
 *     PiRearrangeDeviceInstances @ 0x1405F6A14 (PiRearrangeDeviceInstances.c)
 *     PipDmgGetDriverDmarRegistryValue @ 0x1405F6D6C (PipDmgGetDriverDmarRegistryValue.c)
 *     IopGetDriverNameFromKeyNode @ 0x1405F76D4 (IopGetDriverNameFromKeyNode.c)
 *     PiFindDevInstMatch @ 0x1405F79D4 (PiFindDevInstMatch.c)
 *     IopLoadDriver @ 0x1405F7CAC (IopLoadDriver.c)
 *     PnpPrepareDriverLoading @ 0x1405FB610 (PnpPrepareDriverLoading.c)
 *     IopBuildFullDriverPath @ 0x1405FB6D4 (IopBuildFullDriverPath.c)
 *     IopGetRegistryValues @ 0x1406100E8 (IopGetRegistryValues.c)
 *     IopCopyBootLogRegistryToFile @ 0x140624BCC (IopCopyBootLogRegistryToFile.c)
 *     PnpReadDeviceConfiguration @ 0x1406432B0 (PnpReadDeviceConfiguration.c)
 *     PnpCheckPossibleBootStartDriver @ 0x1406436A0 (PnpCheckPossibleBootStartDriver.c)
 *     PipApplyFunctionToServiceInstances @ 0x140646158 (PipApplyFunctionToServiceInstances.c)
 *     IopIsReportedAlready @ 0x140648750 (IopIsReportedAlready.c)
 *     IoOpenDriverRegistryKey @ 0x140648B50 (IoOpenDriverRegistryKey.c)
 *     PnpDriverLoadingFailed @ 0x140653954 (PnpDriverLoadingFailed.c)
 *     IopSafebootDriverLoad @ 0x14071A6D0 (IopSafebootDriverLoad.c)
 *     PiGetDeviceRegistryProperty @ 0x140724398 (PiGetDeviceRegistryProperty.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140726F40 (PipServiceInstanceToDeviceInstance.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14072BF1C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14072CF24 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x14072D164 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14072D8D8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14072DD7C (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14072DDF0 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x14072E750 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableExpression @ 0x14072E820 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14072FA50 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x140730090 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140730170 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140730930 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x140730B10 (PiDevCfgResolveVariableSwitchCase.c)
 *     PnpUpdateSetupInProgressConfiguration @ 0x140732234 (PnpUpdateSetupInProgressConfiguration.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14073D4AC (PiDrvDbResolveFilePathKeyValues.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14073F390 (PiCreateDriverSwDeviceCallback.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x1407F633C (PnpGetDeviceInstanceRegistryValue.c)
 *     IopInitializePlugPlayServices @ 0x1408A3B0C (IopInitializePlugPlayServices.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1408B4D64 (PipCheckSystemFirmwareUpdated.c)
 *     PiInitCacheGroupInformation @ 0x1408B50C8 (PiInitCacheGroupInformation.c)
 *     IopInitializeSystemDrivers @ 0x1408B5994 (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x1408B5BD8 (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x1408B5D8C (IopInitializeBootDrivers.c)
 *     PpInitGetGroupOrderIndex @ 0x1408B6C10 (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x1408B6D18 (PipCheckDependencies.c)
 *     PipHardwareConfigInit @ 0x1408C395C (PipHardwareConfigInit.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x1408C9C44 (IopQueryDeviceResetRegistrySettings.c)
 *     PiDmaGuardProcessRegistry @ 0x1408CA168 (PiDmaGuardProcessRegistry.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x140007BA0 (IopVerifierExAllocatePool.c)
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
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
