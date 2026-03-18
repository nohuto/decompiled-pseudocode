/*
 * XREFs of _SysCtxRegOpenKey @ 0x140521D98
 * Callers:
 *     PiDqOpenUserObjectRegKey @ 0x140447AF4 (PiDqOpenUserObjectRegKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1404483F0 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140459BE0 (DrvDbOpenDriverDatabaseRegKey.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x140518C7C (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PnpGetServiceStartType @ 0x140519C14 (PnpGetServiceStartType.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14051CAB4 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x14051D800 (_CmOpenCommonClassRegKeyWorker.c)
 *     _PnpOpenPropertiesKey @ 0x14051FA08 (_PnpOpenPropertiesKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140521660 (_CmOpenDeviceRegKeyWorker.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1405319B8 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x14053360C (DrvDbOpenObjectRegKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140533894 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbLoadDatabaseNode @ 0x140533B00 (DrvDbLoadDatabaseNode.c)
 *     PiDrvDbLoadNode @ 0x140533E84 (PiDrvDbLoadNode.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140550AC4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmIsDeviceInContainer @ 0x140550E28 (_CmIsDeviceInContainer.c)
 *     PiCreateDriverSwDevices @ 0x140552348 (PiCreateDriverSwDevices.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1405964E0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDevCfgMigrateDevice @ 0x14059ADAC (PiDevCfgMigrateDevice.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1405A48C8 (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpCtxRegOpenKey @ 0x1405C4630 (_PnpCtxRegOpenKey.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1405C88A0 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PipHardwareConfigOpenKey @ 0x1405C8980 (PipHardwareConfigOpenKey.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1405D18F0 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x1405D3230 (_CmEnumSubkeyCallback.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x1405EA4A0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _PnpCtxOpenContextBaseKey @ 0x1405EB420 (_PnpCtxOpenContextBaseKey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1405EC82C (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x1406BD9F0 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PnpCheckDriverDependencies @ 0x1406C14F8 (PnpCheckDriverDependencies.c)
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x1406C4190 (PiDqDeleteUserObjectFromLoadedHives.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x1406C4FEC (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgCopyVariableData @ 0x1406C5620 (PiDevCfgCopyVariableData.c)
 *     PiDevCfgMigrateService @ 0x1406C67A4 (PiDevCfgMigrateService.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x1406C6A28 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1406C6DE8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiCMDeleteDeviceKey @ 0x1406CFDE0 (PiCMDeleteDeviceKey.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406D56F0 (PiCreateDriverSwDeviceCallback.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1407810BC (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140781540 (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1407819C0 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x1407831E4 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140785700 (_SysCtxRegOpenCurrentUserKey.c)
 *     DrvDbDeleteObjectSubKey @ 0x1407865A0 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x140787C44 (DrvDbInitializeDatabaseNodeVersion.c)
 * Callees:
 *     _RegRtlOpenKeyTransacted @ 0x140521DE8 (_RegRtlOpenKeyTransacted.c)
 */

__int64 __fastcall SysCtxRegOpenKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  if ( a1 )
    return RegRtlOpenKeyTransacted(a2, a3, a4, a5, a6, *(_QWORD *)(a1 + 8));
  else
    return RegRtlOpenKeyTransacted(a2, a3, a4, a5, a6, 0LL);
}
