/*
 * XREFs of _CmOpenDeviceRegKey @ 0x140504BB4
 * Callers:
 *     _CmOpenDeviceRegKeyWorker @ 0x1405055A0 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405083FC (_CmGetDeviceRegPropWorker.c)
 *     _PnpDispatchDevice @ 0x140508900 (_PnpDispatchDevice.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140565484 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     IoOpenDeviceRegistryKey @ 0x140571100 (IoOpenDeviceRegistryKey.c)
 *     PiCMOpenDeviceKey @ 0x1405731B0 (PiCMOpenDeviceKey.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x140584DD4 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     IopReleaseDeviceResources @ 0x1405C8A58 (IopReleaseDeviceResources.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1405CC920 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PpForEachDeviceInstanceDriver @ 0x1405CCEDC (PpForEachDeviceInstanceDriver.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1405CDBC8 (PnpDeviceObjectToDeviceInstance.c)
 *     PipCallDriverAddDevice @ 0x1405CE418 (PipCallDriverAddDevice.c)
 *     _CmSetDeviceRegPropWorker @ 0x1405CF72C (_CmSetDeviceRegPropWorker.c)
 *     PiDevCfgInitDeviceContext @ 0x1405D7378 (PiDevCfgInitDeviceContext.c)
 *     IopGetRootDevices @ 0x1405D95DC (IopGetRootDevices.c)
 *     PiDevCfgEnumDeviceKeys @ 0x1405DAB98 (PiDevCfgEnumDeviceKeys.c)
 *     PiQueryAndAllocateBootResources @ 0x1405DB788 (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x1405DB990 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1405DBD3C (PnpGetDeviceResourcesFromRegistry.c)
 *     PiQueryResourceRequirements @ 0x1405DC08C (PiQueryResourceRequirements.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1405DC404 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1405DC58C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1405DC7A0 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmCreateDeviceWorker @ 0x1405E408C (_CmCreateDeviceWorker.c)
 *     PnpCheckDeviceIdsChanged @ 0x140602BF8 (PnpCheckDeviceIdsChanged.c)
 *     PipMakeGloballyUniqueId @ 0x140603F8C (PipMakeGloballyUniqueId.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140615AE0 (IopWriteAllocatedResourcesToRegistry.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1406433E0 (PiDevCfgProcessDeviceCallback.c)
 *     PipApplyFunctionToServiceInstances @ 0x140646158 (PipApplyFunctionToServiceInstances.c)
 *     IoReportDetectedDevice @ 0x1406482A0 (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x140648750 (IopIsReportedAlready.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1407280A4 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14072CBC0 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14072E24C (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140730170 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCMCreateDevice @ 0x140735F78 (PiCMCreateDevice.c)
 *     PiInitializeDevice @ 0x14073B304 (PiInitializeDevice.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1407E7FC8 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceWorker @ 0x1407E8498 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x1407EDB78 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1407EDCCC (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1407EF7B0 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x1407F633C (PnpGetDeviceInstanceRegistryValue.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1405055A0 (_CmOpenDeviceRegKeyWorker.c)
 */

__int64 __fastcall CmOpenDeviceRegKey(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 (__fastcall *v12)(__int64, __int64, __int64, __int64, int, _QWORD *); // r14
  int v13; // eax
  int v14; // eax
  int v15; // ebx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  _QWORD v20[12]; // [rsp+40h] [rbp-71h] BYREF

  memset(v20, 0, 0x58uLL);
  v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, _QWORD *))(a1 + 504);
  LODWORD(v20[3]) = a5;
  v20[2] = __PAIR64__(a4, a3);
  BYTE4(v20[3]) = a6;
  v20[4] = a7;
  if ( v12 )
  {
    v13 = v12(a1, a2, 1LL, 11LL, 1, v20);
    if ( v13 == -1073741822 )
    {
      v12 = 0LL;
    }
    else
    {
      if ( v13 == -1073741536 )
      {
LABEL_12:
        v15 = v20[0];
        goto LABEL_5;
      }
      if ( v13 )
        return (unsigned int)-1073741595;
    }
  }
  v14 = CmOpenDeviceRegKeyWorker(a1, a2, v20[2], HIDWORD(v20[2]), v20[3], SBYTE4(v20[3]), v20[4], (__int64)&v20[5]);
  v15 = v14;
  if ( v12 )
  {
    LODWORD(v20[0]) = v14;
    v17 = v12(a1, a2, 1LL, 11LL, 2, v20);
    v18 = v17;
    if ( v17 != -1073741822 )
    {
      if ( v17 != -1073741536 )
      {
        v19 = v15;
        if ( v18 )
          v19 = -1073741595;
        v15 = v19;
        goto LABEL_5;
      }
      goto LABEL_12;
    }
  }
LABEL_5:
  if ( v15 >= 0 && a8 )
    *a8 = v20[5];
  return (unsigned int)v15;
}
