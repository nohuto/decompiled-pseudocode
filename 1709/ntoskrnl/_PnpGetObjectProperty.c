/*
 * XREFs of _PnpGetObjectProperty @ 0x140523128
 * Callers:
 *     PiRebalanceOptOut @ 0x140200EA0 (PiRebalanceOptOut.c)
 *     IoGetDeviceInterfaceAlias @ 0x14044B2B0 (IoGetDeviceInterfaceAlias.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14044F0B8 (PiDevCfgResetDeviceDriverSettings.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x140459F88 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     IopRegisterDeviceInterface @ 0x140517BAC (IopRegisterDeviceInterface.c)
 *     IopGetDeviceInterfaces @ 0x140519D98 (IopGetDeviceInterfaces.c)
 *     PnpCallDriverQueryServiceHelper @ 0x14051B03C (PnpCallDriverQueryServiceHelper.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x14051C3FC (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     PipCallDriverAddDevice @ 0x14051DC78 (PipCallDriverAddDevice.c)
 *     _CmGetDeviceRegPropWorker @ 0x14052263C (_CmGetDeviceRegPropWorker.c)
 *     PiPnpRtlObjectActionCallback @ 0x1405232C0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x140523648 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDqPnPGetObjectProperty @ 0x140524D78 (PiDqPnPGetObjectProperty.c)
 *     PnpGetObjectProperty @ 0x14052531C (PnpGetObjectProperty.c)
 *     PiCMGetObjectProperty @ 0x140525460 (PiCMGetObjectProperty.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x140527330 (PiPnpRtlInterfaceFilterCallback.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x140528478 (PiPnpRtlIsDeviceValidForSession.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x14052D5B0 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PiPnpRtlSetObjectProperty @ 0x14052F53C (PiPnpRtlSetObjectProperty.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14054B05C (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventCacheObjectProperties @ 0x14054BBF8 (PiUEventCacheObjectProperties.c)
 *     PiUEventDeviceNeedsInstall @ 0x14054E238 (PiUEventDeviceNeedsInstall.c)
 *     PnpGetDevicePropertyData @ 0x14054F4F8 (PnpGetDevicePropertyData.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14054F964 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140551654 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceParent @ 0x140551A88 (_CmGetDeviceParent.c)
 *     PnpAssignResourcesToDevices @ 0x140554E34 (PnpAssignResourcesToDevices.c)
 *     IopProcessSetInterfaceState @ 0x140556128 (IopProcessSetInterfaceState.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140586694 (IopDeviceObjectFromSymbolicName.c)
 *     PiDevCfgCopyDeviceKey @ 0x140589CD0 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgQueryObjectProperties @ 0x14058ABD0 (PiDevCfgQueryObjectProperties.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1405964E0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDevCfgMigrateDevice @ 0x14059ADAC (PiDevCfgMigrateDevice.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x14059CE14 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PiDcHandleDeviceEvent @ 0x14059F7EC (PiDcHandleDeviceEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x14059F9BC (PiDcHandleInterfaceEvent.c)
 *     PiDevCfgProcessDevice @ 0x1405A0E30 (PiDevCfgProcessDevice.c)
 *     PiDevCfgFindDeviceDriver @ 0x1405A13E0 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgConfigureDevice @ 0x1405A296C (PiDevCfgConfigureDevice.c)
 *     PiDmListInitEnumCallback @ 0x1405B9CF0 (PiDmListInitEnumCallback.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x1405C5FBC (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiDcContainerRequiresConfiguration @ 0x1405C60D8 (PiDcContainerRequiresConfiguration.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1405E1D68 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1406C1E54 (PnpGetDeviceInterfacePropertyData.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x1406C2A08 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1406C33F0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x1406C6138 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PiCMUnregisterDeviceInterface @ 0x1406D0E9C (PiCMUnregisterDeviceInterface.c)
 *     PiAuditDeviceOperation @ 0x1406D3D44 (PiAuditDeviceOperation.c)
 *     PiAuditDeviceStart @ 0x1406D431C (PiAuditDeviceStart.c)
 *     _CmMatchLastKnownParentCallback @ 0x140780460 (_CmMatchLastKnownParentCallback.c)
 *     _CmGetContainerBooleanPropertyCallback @ 0x1407813A0 (_CmGetContainerBooleanPropertyCallback.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x1407846FC (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140789D50 (PnpGetDeviceInstancePropertyData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     _PnpGetObjectPropertyWorker @ 0x140523FE8 (_PnpGetObjectPropertyWorker.c)
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

  LODWORD(v23[0]) = 0;
  memset(&v23[1], 0, 0x48uLL);
  v15 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _QWORD *))(a1 + 312);
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
