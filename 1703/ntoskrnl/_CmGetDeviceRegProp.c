/*
 * XREFs of _CmGetDeviceRegProp @ 0x1404831A0
 * Callers:
 *     PiQueryRemovableDeviceOverride @ 0x1404462B0 (PiQueryRemovableDeviceOverride.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x1404501DC (PpHotSwapUpdateRemovalPolicy.c)
 *     PipGetRegistrySecurityWithFallback @ 0x140453108 (PipGetRegistrySecurityWithFallback.c)
 *     PipGenerateContainerID @ 0x140453598 (PipGenerateContainerID.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140457A84 (PiDcHandleCustomDeviceEvent.c)
 *     _CmIsLocalMachineContainer @ 0x1404690C8 (_CmIsLocalMachineContainer.c)
 *     PiPnpRtlCmActionCallback @ 0x140483340 (PiPnpRtlCmActionCallback.c)
 *     _CmGetDeviceRegPropWorker @ 0x140484810 (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x14048873C (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     PiCMGetRegistryProperty @ 0x14048A5E0 (PiCMGetRegistryProperty.c)
 *     PipProcessStartPhase3 @ 0x1404A7014 (PipProcessStartPhase3.c)
 *     PiDeviceRegistration @ 0x1404D9C6C (PiDeviceRegistration.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1404DA754 (PiDcUpdateDeviceContainerMembership.c)
 *     PnpCheckDeviceIdsChanged @ 0x1404DBF74 (PnpCheckDeviceIdsChanged.c)
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x1404DD774 (PiPnpRtlSetObjectProperty.c)
 *     PpForEachDeviceInstanceDriver @ 0x1404DE560 (PpForEachDeviceInstanceDriver.c)
 *     PipCallDriverAddDevice @ 0x1404E1D64 (PipCallDriverAddDevice.c)
 *     _CmGetDeviceSoftwareKey @ 0x1404E2AA8 (_CmGetDeviceSoftwareKey.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1404E2D2C (PnpCallDriverQueryServiceHelper.c)
 *     PipGetRegistryDwordWithFallback @ 0x1404E3C00 (PipGetRegistryDwordWithFallback.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1404E5E60 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1404E6E2C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceStatus @ 0x1404E7B28 (_CmGetDeviceStatus.c)
 *     PpDevCfgProcessDeviceOperations @ 0x140559390 (PpDevCfgProcessDeviceOperations.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1405594C0 (PnpIsDeviceInstanceEnabled.c)
 *     IopInitializeDeviceInstanceKey @ 0x140559998 (IopInitializeDeviceInstanceKey.c)
 *     IopPnPDispatch @ 0x14055A4F0 (IopPnPDispatch.c)
 *     PiControlGetPropertyData @ 0x14055AC30 (PiControlGetPropertyData.c)
 *     IoGetDeviceProperty @ 0x14055AE70 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x14055B3C0 (PiGetDeviceRegProperty.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14058ECB4 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDevCfgProcessDevice @ 0x14059040C (PiDevCfgProcessDevice.c)
 *     PiDevCfgEnumDeviceKeys @ 0x14059326C (PiDevCfgEnumDeviceKeys.c)
 *     PiCMQueryRemove @ 0x140597828 (PiCMQueryRemove.c)
 *     IopIsReportedAlready @ 0x1405B0350 (IopIsReportedAlready.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1405C1710 (PiDevCfgProcessDeviceCallback.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140696CE0 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1406970F0 (PiPnpRtlServiceFilterCallback.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140697970 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140697BC4 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140698E74 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x14069A650 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgResolveDeviceDependencies @ 0x14069C020 (PiDevCfgResolveDeviceDependencies.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14069DC50 (PiDevCfgResolveVariableKeyHandle.c)
 *     PpDevCfgProcessDeviceClass @ 0x14069E850 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14069EB7C (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x14069F1F4 (PpDevCfgProcessDeviceReset.c)
 *     PiCMCreateDevice @ 0x1406A3D38 (PiCMCreateDevice.c)
 *     PiInitializeDevice @ 0x1406A8758 (PiInitializeDevice.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406AA480 (PiCreateDriverSwDeviceCallback.c)
 *     _CmDeleteDeviceWorker @ 0x14073B0CC (_CmDeleteDeviceWorker.c)
 *     _CmClassFilterCallback @ 0x14073E0A0 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x14073E410 (_CmServiceFilterCallback.c)
 *     PipMigrateResetDeviceCallback @ 0x140833620 (PipMigrateResetDeviceCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     _CmGetDeviceRegPropWorker @ 0x140484810 (_CmGetDeviceRegPropWorker.c)
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
  __int64 (__fastcall *v12)(__int64, __int64, __int64); // r15
  int v13; // eax
  __int64 result; // rax
  unsigned int v15; // ebx
  int v16; // eax
  unsigned int v17; // [rsp+40h] [rbp-B8h]
  int pszDest[20]; // [rsp+48h] [rbp-B0h] BYREF

  v17 = 0;
  memset(pszDest, 0, sizeof(pszDest));
  v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 328);
  *(_QWORD *)&pszDest[2] = a3;
  pszDest[4] = a4;
  *(_QWORD *)&pszDest[6] = a5;
  *(_QWORD *)&pszDest[8] = a6;
  *(_QWORD *)&pszDest[10] = a7;
  pszDest[12] = a8;
  if ( v12 )
  {
    v13 = v12(a1, a2, 1LL);
    if ( v13 == -1073741822 )
    {
      v12 = 0LL;
    }
    else
    {
      if ( v13 == -1073741536 )
        return v17;
      if ( v13 )
        return 3221225701LL;
    }
  }
  result = CmGetDeviceRegPropWorker(
             a1,
             a2,
             pszDest[2],
             pszDest[4],
             *(__int64 *)&pszDest[6],
             *(NTSTRSAFE_PWSTR *)&pszDest[8],
             *(__int64 *)&pszDest[10],
             pszDest[12]);
  v15 = result;
  if ( !v12 )
    return result;
  v17 = result;
  v16 = v12(a1, a2, 1LL);
  if ( v16 != -1073741822 )
  {
    if ( v16 != -1073741536 )
    {
      if ( !v16 )
        return v15;
      return 3221225701LL;
    }
    return v17;
  }
  return v15;
}
