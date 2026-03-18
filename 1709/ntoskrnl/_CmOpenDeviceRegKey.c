/*
 * XREFs of _CmOpenDeviceRegKey @ 0x140520CAC
 * Callers:
 *     PiDevCfgResetDeviceDriverSettings @ 0x14044F0B8 (PiDevCfgResetDeviceDriverSettings.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x1404512B0 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140459DBC (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PipCallDriverAddDevice @ 0x14051DC78 (PipCallDriverAddDevice.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140521660 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmGetDeviceRegPropWorker @ 0x14052263C (_CmGetDeviceRegPropWorker.c)
 *     _PnpDispatchDevice @ 0x140524760 (_PnpDispatchDevice.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14054F964 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1405513AC (PnpDeviceObjectToDeviceInstance.c)
 *     _CmSetDeviceRegPropWorker @ 0x140551408 (_CmSetDeviceRegPropWorker.c)
 *     PpForEachDeviceInstanceDriver @ 0x140555688 (PpForEachDeviceInstanceDriver.c)
 *     PiQueryAndAllocateBootResources @ 0x140557908 (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x140557B18 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x140557EA8 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiQueryResourceRequirements @ 0x1405581F8 (PiQueryResourceRequirements.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14055A85C (IopWriteAllocatedResourcesToRegistry.c)
 *     IopReleaseDeviceResources @ 0x14055E154 (IopReleaseDeviceResources.c)
 *     PnpCheckDeviceIdsChanged @ 0x14056CD1C (PnpCheckDeviceIdsChanged.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140571004 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     PiCMOpenDeviceKey @ 0x140573F4C (PiCMOpenDeviceKey.c)
 *     IoOpenDeviceRegistryKey @ 0x14057EF40 (IoOpenDeviceRegistryKey.c)
 *     PiDevCfgEnumDeviceKeys @ 0x14058983C (PiDevCfgEnumDeviceKeys.c)
 *     _CmCreateDeviceWorker @ 0x14058A96C (_CmCreateDeviceWorker.c)
 *     PiDevCfgInitDeviceContext @ 0x14058AA6C (PiDevCfgInitDeviceContext.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14058BFFC (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14058C190 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PipMakeGloballyUniqueId @ 0x14058CC98 (PipMakeGloballyUniqueId.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14059B174 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     IopGetRootDevices @ 0x1405BA328 (IopGetRootDevices.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1405D62D0 (PiDevCfgProcessDeviceCallback.c)
 *     PipApplyFunctionToServiceInstances @ 0x1405DACFC (PipApplyFunctionToServiceInstances.c)
 *     IoReportDetectedDevice @ 0x1405DF730 (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x1405DFBE0 (IopIsReportedAlready.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1406C2070 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1406C9150 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCMCreateDevice @ 0x1406CF00C (PiCMCreateDevice.c)
 *     PiInitializeDevice @ 0x1406D3418 (PiInitializeDevice.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14077F360 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceWorker @ 0x14077F7C4 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140783490 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140784AE0 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140789E7C (PnpGetDeviceInstanceRegistryValue.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140521660 (_CmOpenDeviceRegKeyWorker.c)
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

  LODWORD(v20[0]) = 0;
  memset(&v20[1], 0, 0x50uLL);
  v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, _QWORD *))(a1 + 328);
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
