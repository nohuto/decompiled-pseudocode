/*
 * XREFs of _PnpGetObjectProperty @ 0x140484E40
 * Callers:
 *     PiRebalanceOptOut @ 0x1401FB198 (PiRebalanceOptOut.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140457020 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiUEventProcessBroadcastNotifications @ 0x140464A2C (PiUEventProcessBroadcastNotifications.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140468A10 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiDcHandleDeviceEvent @ 0x140468B78 (PiDcHandleDeviceEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x140468D50 (PiDcHandleInterfaceEvent.c)
 *     PiCMGetObjectProperty @ 0x140482E3C (PiCMGetObjectProperty.c)
 *     _CmGetDeviceRegPropWorker @ 0x140484810 (_CmGetDeviceRegPropWorker.c)
 *     PiPnpRtlObjectActionCallback @ 0x140484FD0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x140485340 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDqPnPGetObjectProperty @ 0x140487420 (PiDqPnPGetObjectProperty.c)
 *     PnpGetObjectProperty @ 0x140487C44 (PnpGetObjectProperty.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x140488DA0 (PiPnpRtlInterfaceFilterCallback.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x140489DDC (PiPnpRtlIsDeviceValidForSession.c)
 *     PiUEventDeviceNeedsInstall @ 0x1404A60B4 (PiUEventDeviceNeedsInstall.c)
 *     PiUEventCacheObjectProperties @ 0x1404A6224 (PiUEventCacheObjectProperties.c)
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x1404DD774 (PiPnpRtlSetObjectProperty.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1404DE940 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     IopGetDeviceInterfaces @ 0x1404E0548 (IopGetDeviceInterfaces.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1404E141C (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     PipCallDriverAddDevice @ 0x1404E1D64 (PipCallDriverAddDevice.c)
 *     IopRegisterDeviceInterface @ 0x1404E3CE0 (IopRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x1404E49E8 (IopProcessSetInterfaceState.c)
 *     PnpGetDevicePropertyData @ 0x1404E5A58 (PnpGetDevicePropertyData.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1404E5E60 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceParent @ 0x1404E62FC (_CmGetDeviceParent.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1404E6E2C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     IopInitializeDeviceInstanceKey @ 0x140559998 (IopInitializeDeviceInstanceKey.c)
 *     PnpAssignResourcesToDevices @ 0x14055A000 (PnpAssignResourcesToDevices.c)
 *     IoGetDeviceInterfaceAlias @ 0x14056BDA0 (IoGetDeviceInterfaceAlias.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140581EA0 (IopDeviceObjectFromSymbolicName.c)
 *     PiDevCfgFindDeviceDriver @ 0x14058EEF8 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgProcessDevice @ 0x14059040C (PiDevCfgProcessDevice.c)
 *     PiDevCfgConfigureDevice @ 0x140590890 (PiDevCfgConfigureDevice.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x140592880 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     PiDevCfgMigrateDevice @ 0x14059389C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgCopyDeviceKey @ 0x140593BA4 (PiDevCfgCopyDeviceKey.c)
 *     PiDcContainerRequiresConfiguration @ 0x140594944 (PiDcContainerRequiresConfiguration.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x14059A668 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiDmListInitEnumCallback @ 0x1405ADAE0 (PiDmListInitEnumCallback.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405C7908 (PiDevCfgQueryObjectProperties.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14069629C (PnpGetDeviceInterfacePropertyData.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140696E00 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140697970 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x14069A574 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14069BB20 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiCMUnregisterDeviceInterface @ 0x1406A5F64 (PiCMUnregisterDeviceInterface.c)
 *     PiAuditDeviceOperation @ 0x1406A91A8 (PiAuditDeviceOperation.c)
 *     PiAuditDeviceStart @ 0x1406A9780 (PiAuditDeviceStart.c)
 *     _CmMatchLastKnownParentCallback @ 0x14073BD40 (_CmMatchLastKnownParentCallback.c)
 *     _CmGetContainerBooleanPropertyCallback @ 0x14073CC70 (_CmGetContainerBooleanPropertyCallback.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x140740788 (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140747520 (PnpGetDeviceInstancePropertyData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     _PnpGetObjectPropertyWorker @ 0x140485C8C (_PnpGetObjectPropertyWorker.c)
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
  __int64 result; // rax
  unsigned int v18; // ebx
  int v19; // eax
  _QWORD v20[10]; // [rsp+60h] [rbp-41h] BYREF

  LODWORD(v20[0]) = 0;
  memset(&v20[1], 0, 0x48uLL);
  v15 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _QWORD *))(a1 + 312);
  v20[3] = a5;
  v20[4] = a6;
  v20[5] = a7;
  v20[6] = a8;
  LODWORD(v20[7]) = a9;
  v20[8] = a10;
  LODWORD(v20[9]) = a11;
  v20[2] = a4;
  if ( v15 )
  {
    v16 = v15(a1, a2, a3, 8LL, 1, v20);
    if ( v16 == -1073741822 )
    {
      v15 = 0LL;
    }
    else
    {
      if ( v16 == -1073741536 )
        return LODWORD(v20[0]);
      if ( v16 )
        return 3221225701LL;
    }
  }
  result = PnpGetObjectPropertyWorker(a1, a2, a3, v20[2], v20[3], v20[4], v20[5], v20[6], v20[7], v20[8], v20[9]);
  v18 = result;
  if ( !v15 )
    return result;
  LODWORD(v20[0]) = result;
  v19 = v15(a1, a2, a3, 8LL, 2, v20);
  if ( v19 != -1073741822 )
  {
    if ( v19 != -1073741536 )
    {
      if ( !v19 )
        return v18;
      return 3221225701LL;
    }
    return LODWORD(v20[0]);
  }
  return v18;
}
