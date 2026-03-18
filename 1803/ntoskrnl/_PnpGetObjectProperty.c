/*
 * XREFs of _PnpGetObjectProperty @ 0x140506D2C
 * Callers:
 *     PiRebalanceOptOut @ 0x14023DF78 (PiRebalanceOptOut.c)
 *     IopGetDeviceInterfaces @ 0x1404901A0 (IopGetDeviceInterfaces.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x1405016C8 (PiPnpRtlIsDeviceValidForSession.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x140503A10 (PiPnpRtlInterfaceFilterCallback.c)
 *     PnpGetObjectProperty @ 0x140504430 (PnpGetObjectProperty.c)
 *     PiDqPnPGetObjectProperty @ 0x1405046A0 (PiDqPnPGetObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x140506EC0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1405071E4 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405083FC (_CmGetDeviceRegPropWorker.c)
 *     PiCMGetObjectProperty @ 0x14050A040 (PiCMGetObjectProperty.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x14050AEB8 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14051ED3C (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventCacheObjectProperties @ 0x14051F420 (PiUEventCacheObjectProperties.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1405786F0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x140584DD4 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceParent @ 0x1405865D0 (_CmGetDeviceParent.c)
 *     PnpGetDevicePropertyData @ 0x140587428 (PnpGetDevicePropertyData.c)
 *     IoGetDeviceInterfaceAlias @ 0x1405C1E50 (IoGetDeviceInterfaceAlias.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x1405C47A4 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     _CmUpdateDevicePanel @ 0x1405CB46C (_CmUpdateDevicePanel.c)
 *     _CmQueryDevicePanelPldProperty @ 0x1405CBEC8 (_CmQueryDevicePanelPldProperty.c)
 *     PipCallDriverAddDevice @ 0x1405CE418 (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1405CF254 (PnpCallDriverQueryServiceHelper.c)
 *     PiDevCfgConfigureDevice @ 0x1405CF9D8 (PiDevCfgConfigureDevice.c)
 *     PiPnpRtlSetObjectProperty @ 0x1405D1C74 (PiPnpRtlSetObjectProperty.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1405D25A0 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PiDcContainerRequiresConfiguration @ 0x1405D5428 (PiDcContainerRequiresConfiguration.c)
 *     PiDevCfgProcessDevice @ 0x1405D6D84 (PiDevCfgProcessDevice.c)
 *     PiDevCfgFindDeviceDriver @ 0x1405D749C (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgCopyDeviceKey @ 0x1405D81C8 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405D91A0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgCopyObjectProperties @ 0x1405DAF28 (PiDevCfgCopyObjectProperties.c)
 *     PnpAssignResourcesToDevices @ 0x1405DB148 (PnpAssignResourcesToDevices.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1405E2A54 (_CmIsDeviceSafeRemovalRequired.c)
 *     PiUEventDeviceNeedsInstall @ 0x1405E50A8 (PiUEventDeviceNeedsInstall.c)
 *     PiDevCfgMigrateDevice @ 0x1405E6DB0 (PiDevCfgMigrateDevice.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1405E7654 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x1405E7E04 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PiDcHandleDeviceEvent @ 0x1405EA00C (PiDcHandleDeviceEvent.c)
 *     IopProcessSetInterfaceState @ 0x1405F4C6C (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x1405F5474 (IopRegisterDeviceInterface.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140601D88 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     IopDeviceObjectFromSymbolicName @ 0x1406029B8 (IopDeviceObjectFromSymbolicName.c)
 *     PiDcHandleInterfaceEvent @ 0x14060442C (PiDcHandleInterfaceEvent.c)
 *     PiDmListInitEnumCallback @ 0x140630FD0 (PiDmListInitEnumCallback.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x140727E88 (PnpGetDeviceInterfacePropertyData.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140728A34 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1407294D0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x14072C984 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14072E24C (PiDevCfgResetDeviceDriverSettings.c)
 *     PiCMUnregisterDeviceInterface @ 0x14073884C (PiCMUnregisterDeviceInterface.c)
 *     PiAuditDeviceOperation @ 0x14073C188 (PiAuditDeviceOperation.c)
 *     PiAuditDeviceStart @ 0x14073C760 (PiAuditDeviceStart.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14073D110 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmDeleteDeviceWorker @ 0x1407E8498 (_CmDeleteDeviceWorker.c)
 *     _CmMatchLastKnownParentCallback @ 0x1407E9220 (_CmMatchLastKnownParentCallback.c)
 *     _CmGetContainerBooleanPropertyCallback @ 0x1407EA1C0 (_CmGetContainerBooleanPropertyCallback.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x1407EF3CC (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 *     PnpGetDeviceInstancePropertyData @ 0x1407F6210 (PnpGetDeviceInstancePropertyData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     _PnpGetObjectPropertyWorker @ 0x140507AA8 (_PnpGetObjectPropertyWorker.c)
 */

__int64 __fastcall PnpGetObjectProperty(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10,
        int a11)
{
  __int64 (__fastcall *v15)(__int64, __int64, _QWORD, __int64, int, _QWORD *); // rdi
  int v16; // eax
  unsigned int ObjectPropertyWorker; // eax
  unsigned int v18; // ebx
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  _QWORD v23[10]; // [rsp+68h] [rbp-41h] BYREF

  memset(v23, 0, sizeof(v23));
  v15 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _QWORD *))(a1 + 488);
  v23[3] = a5;
  v23[4] = a6;
  v23[5] = a7;
  v23[6] = a8;
  LODWORD(v23[7]) = a9;
  v23[8] = a10;
  LODWORD(v23[9]) = a11;
  v23[2] = a4;
  if ( v15 )
  {
    v16 = v15(a1, a2, a3, 8LL, 1, v23);
    if ( v16 == -1073741822 )
    {
      v15 = 0LL;
    }
    else
    {
      if ( v16 == -1073741536 )
        return LODWORD(v23[0]);
      if ( v16 )
        return (unsigned int)-1073741595;
    }
  }
  ObjectPropertyWorker = PnpGetObjectPropertyWorker(
                           a1,
                           a2,
                           a3,
                           v23[2],
                           v23[3],
                           v23[4],
                           v23[5],
                           v23[6],
                           v23[7],
                           v23[8],
                           v23[9]);
  v18 = ObjectPropertyWorker;
  if ( !v15 )
    return v18;
  LODWORD(v23[0]) = ObjectPropertyWorker;
  v19 = v15(a1, a2, a3, 8LL, 2, v23);
  v20 = v19;
  if ( v19 == -1073741822 )
    return v18;
  if ( v19 == -1073741536 )
    return LODWORD(v23[0]);
  v21 = v18;
  if ( v20 )
    return (unsigned int)-1073741595;
  return v21;
}
