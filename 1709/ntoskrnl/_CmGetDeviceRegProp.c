/*
 * XREFs of _CmGetDeviceRegProp @ 0x140520DD0
 * Callers:
 *     PpDevCfgProcessDeviceClass @ 0x14044EB08 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14044EE8C (PpDevCfgProcessDeviceReset.c)
 *     PnpCallDriverQueryServiceHelper @ 0x14051B03C (PnpCallDriverQueryServiceHelper.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14051B940 (PiPnpRtlServiceFilterCallback.c)
 *     PipCallDriverAddDevice @ 0x14051DC78 (PipCallDriverAddDevice.c)
 *     PiPnpRtlCmActionCallback @ 0x140520F60 (PiPnpRtlCmActionCallback.c)
 *     _CmGetDeviceRegPropWorker @ 0x14052263C (_CmGetDeviceRegPropWorker.c)
 *     PiCMGetRegistryProperty @ 0x140526810 (PiCMGetRegistryProperty.c)
 *     _CmGetDeviceStatus @ 0x140529914 (_CmGetDeviceStatus.c)
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x14052F53C (PiPnpRtlSetObjectProperty.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14054D954 (PiDcHandleCustomDeviceEvent.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14054E090 (PiDcUpdateDeviceContainerMembership.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14054F964 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140551654 (_CmIsDeviceSafeRemovalRequired.c)
 *     PipProcessStartPhase3 @ 0x140552400 (PipProcessStartPhase3.c)
 *     PiDeviceRegistration @ 0x1405554E4 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x140555688 (PpForEachDeviceInstanceDriver.c)
 *     PiControlGetPropertyData @ 0x140556C60 (PiControlGetPropertyData.c)
 *     IoGetDeviceProperty @ 0x140556EB0 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x1405573EC (PiGetDeviceRegProperty.c)
 *     PnpCheckDeviceIdsChanged @ 0x14056CD1C (PnpCheckDeviceIdsChanged.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140571004 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     PiCMQueryRemove @ 0x14057468C (PiCMQueryRemove.c)
 *     PipGetRegistryDwordWithFallback @ 0x140576B28 (PipGetRegistryDwordWithFallback.c)
 *     PipGetRegistrySecurityWithFallback @ 0x140576C08 (PipGetRegistrySecurityWithFallback.c)
 *     _CmGetDeviceSoftwareKey @ 0x14058188C (_CmGetDeviceSoftwareKey.c)
 *     PiDevCfgEnumDeviceKeys @ 0x14058983C (PiDevCfgEnumDeviceKeys.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14058B640 (PpDevCfgProcessDeviceOperations.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14058BFFC (PnpIsDeviceInstanceEnabled.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x1405909BC (PpHotSwapUpdateRemovalPolicy.c)
 *     PipGenerateContainerID @ 0x140593694 (PipGenerateContainerID.c)
 *     PiQueryRemovableDeviceOverride @ 0x140598050 (PiQueryRemovableDeviceOverride.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14059BFB0 (PiPnpRtlSetDeviceRegProperty.c)
 *     _CmIsLocalMachineContainer @ 0x14059CD48 (_CmIsLocalMachineContainer.c)
 *     PiDevCfgProcessDevice @ 0x1405A0E30 (PiDevCfgProcessDevice.c)
 *     IopPnPDispatch @ 0x1405B9E90 (IopPnPDispatch.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405BA584 (IopInitializeDeviceInstanceKey.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1405D62D0 (PiDevCfgProcessDeviceCallback.c)
 *     IopIsReportedAlready @ 0x1405DFBE0 (IopIsReportedAlready.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x1406C28B0 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1406C33F0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x1406C3644 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1406C4CA0 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x1406C6210 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1406C9150 (PiDevCfgResolveVariableKeyHandle.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1406C9D50 (PpDevCfgProcessDeviceExtensions.c)
 *     PiCMCreateDevice @ 0x1406CF00C (PiCMCreateDevice.c)
 *     PiInitializeDevice @ 0x1406D3418 (PiInitializeDevice.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406D56F0 (PiCreateDriverSwDeviceCallback.c)
 *     _CmDeleteDeviceWorker @ 0x14077F7C4 (_CmDeleteDeviceWorker.c)
 *     _CmClassFilterCallback @ 0x140782550 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x1407828C0 (_CmServiceFilterCallback.c)
 *     PipMigrateResetDeviceCallback @ 0x14086A740 (PipMigrateResetDeviceCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     _CmGetDeviceRegPropWorker @ 0x14052263C (_CmGetDeviceRegPropWorker.c)
 */

__int64 __fastcall CmGetDeviceRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int64 (__fastcall *v11)(__int64, __int64, __int64, __int64, int, _QWORD *); // r12
  int v12; // eax
  unsigned int DeviceRegPropWorker; // eax
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  _QWORD v20[12]; // [rsp+50h] [rbp-71h] BYREF

  LODWORD(v20[0]) = 0;
  memset(&v20[1], 0, 0x50uLL);
  v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, _QWORD *))(a1 + 328);
  v20[2] = a3;
  LODWORD(v20[3]) = a4;
  v20[5] = a6;
  v20[6] = a7;
  v20[4] = a5;
  LODWORD(v20[7]) = a8;
  if ( v11 )
  {
    v12 = v11(a1, a2, 1LL, 9LL, 1, v20);
    if ( v12 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
        return LODWORD(v20[0]);
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  DeviceRegPropWorker = CmGetDeviceRegPropWorker(a1, a2, v20[2], LODWORD(v20[3]), v20[4], v20[5], v20[6], v20[7]);
  v14 = DeviceRegPropWorker;
  if ( !v11 )
    return v14;
  LODWORD(v20[0]) = DeviceRegPropWorker;
  v15 = v11(a1, a2, 1LL, 9LL, 2, v20);
  v16 = v15;
  if ( v15 == -1073741822 )
    return v14;
  if ( v15 == -1073741536 )
    return LODWORD(v20[0]);
  v17 = v14;
  if ( v16 )
    return (unsigned int)-1073741595;
  return v17;
}
