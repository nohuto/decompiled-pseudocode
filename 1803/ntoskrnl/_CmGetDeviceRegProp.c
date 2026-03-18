/*
 * XREFs of _CmGetDeviceRegProp @ 0x140504CD4
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140504E60 (PiPnpRtlCmActionCallback.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405083FC (_CmGetDeviceRegPropWorker.c)
 *     PiCMGetRegistryProperty @ 0x14050BA28 (PiCMGetRegistryProperty.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14051FDD4 (PiDcHandleCustomDeviceEvent.c)
 *     PiControlGetPropertyData @ 0x140525790 (PiControlGetPropertyData.c)
 *     IoGetDeviceProperty @ 0x140525CB0 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x1405261D8 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140565484 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceSoftwareKey @ 0x14056AA94 (_CmGetDeviceSoftwareKey.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x140584DD4 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceStatus @ 0x140585D34 (_CmGetDeviceStatus.c)
 *     PipProcessStartPhase3 @ 0x1405CACE8 (PipProcessStartPhase3.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1405CC298 (PipGetRegistrySecurityWithFallback.c)
 *     PiDeviceRegistration @ 0x1405CC58C (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x1405CCEDC (PpForEachDeviceInstanceDriver.c)
 *     PipGetRegistryDwordWithFallback @ 0x1405CD4A8 (PipGetRegistryDwordWithFallback.c)
 *     PipCallDriverAddDevice @ 0x1405CE418 (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1405CF254 (PnpCallDriverQueryServiceHelper.c)
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x1405D1C74 (PiPnpRtlSetObjectProperty.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1405D5280 (PiDcUpdateDeviceContainerMembership.c)
 *     PiDevCfgProcessDevice @ 0x1405D6D84 (PiDevCfgProcessDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405D9834 (IopInitializeDeviceInstanceKey.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1405DA058 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDevCfgEnumDeviceKeys @ 0x1405DAB98 (PiDevCfgEnumDeviceKeys.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1405DC404 (PnpIsDeviceInstanceEnabled.c)
 *     IopPnPDispatch @ 0x1405DC950 (IopPnPDispatch.c)
 *     PiQueryRemovableDeviceOverride @ 0x1405DE074 (PiQueryRemovableDeviceOverride.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1405E2A54 (_CmIsDeviceSafeRemovalRequired.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x1405E6214 (PpHotSwapUpdateRemovalPolicy.c)
 *     PipGenerateContainerID @ 0x1405E6814 (PipGenerateContainerID.c)
 *     _CmIsLocalMachineContainer @ 0x1405E8E10 (_CmIsLocalMachineContainer.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1405F0D00 (PiPnpRtlServiceFilterCallback.c)
 *     PnpCheckDeviceIdsChanged @ 0x140602BF8 (PnpCheckDeviceIdsChanged.c)
 *     PpDevCfgProcessDeviceOperations @ 0x1406046D0 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1406433E0 (PiDevCfgProcessDeviceCallback.c)
 *     IopIsReportedAlready @ 0x140648750 (IopIsReportedAlready.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x1407288E0 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1407294D0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140729724 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14072B048 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x14072CA60 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140730170 (PiDevCfgResolveVariableKeyHandle.c)
 *     PpDevCfgProcessDeviceClass @ 0x140730D6C (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1407310F0 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x14073174C (PpDevCfgProcessDeviceReset.c)
 *     PiCMCreateDevice @ 0x140735F78 (PiCMCreateDevice.c)
 *     PiCMQueryRemove @ 0x140737E40 (PiCMQueryRemove.c)
 *     PiInitializeDevice @ 0x14073B304 (PiInitializeDevice.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14073F390 (PiCreateDriverSwDeviceCallback.c)
 *     _CmDeleteDeviceWorker @ 0x1407E8498 (_CmDeleteDeviceWorker.c)
 *     _CmClassFilterCallback @ 0x1407EB5F0 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x1407EB960 (_CmServiceFilterCallback.c)
 *     PipMigrateResetDeviceCallback @ 0x1408DEF30 (PipMigrateResetDeviceCallback.c)
 *     PipResetDevice @ 0x1408DF0B8 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405083FC (_CmGetDeviceRegPropWorker.c)
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

  memset(v20, 0, 0x58uLL);
  v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, _QWORD *))(a1 + 504);
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
