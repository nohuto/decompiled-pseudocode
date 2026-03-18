/*
 * XREFs of _SysCtxRegOpenKey @ 0x140484048
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140457020 (PiDrvDbLoadNodeWorkerCallback.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140483940 (_CmOpenDeviceRegKeyWorker.c)
 *     DrvDbOpenObjectRegKey @ 0x140486A00 (DrvDbOpenObjectRegKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140486BA8 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _PnpOpenPropertiesKey @ 0x140487174 (_PnpOpenPropertiesKey.c)
 *     DrvDbLoadDatabaseNode @ 0x140489400 (DrvDbLoadDatabaseNode.c)
 *     PiDrvDbLoadNode @ 0x140489A54 (PiDrvDbLoadNode.c)
 *     PiCreateDriverSwDevices @ 0x1404A7468 (PiCreateDriverSwDevices.c)
 *     PiDqOpenUserObjectRegKey @ 0x1404BE304 (PiDqOpenUserObjectRegKey.c)
 *     _CmIsDeviceInContainer @ 0x1404DF9A4 (_CmIsDeviceInContainer.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1404DFC1C (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1404E0178 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1404E1878 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1404E2728 (_CmOpenCommonClassRegKeyWorker.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1404E8AB4 (DrvDbGetDriverPackageMappedProperty.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14059365C (_PnpGetGenericStorePropertyKeys.c)
 *     PiDevCfgMigrateDevice @ 0x14059389C (PiDevCfgMigrateDevice.c)
 *     _PnpCtxOpenContextBaseKey @ 0x14059478C (_PnpCtxOpenContextBaseKey.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14059D9EC (DrvDbOpenDriverDatabaseRegKey.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x1405A9B98 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1405A9E78 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1405AAA10 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x1405AAE70 (_CmEnumSubkeyCallback.c)
 *     PnpGetServiceStartType @ 0x1405AD9AC (PnpGetServiceStartType.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1405B66DC (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PipHardwareConfigOpenKey @ 0x1405B67DC (PipHardwareConfigOpenKey.c)
 *     _PnpCtxRegOpenKey @ 0x1405D1A38 (_PnpCtxRegOpenKey.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x140691CA0 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PnpCheckDriverDependencies @ 0x140695738 (PnpCheckDriverDependencies.c)
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x140698714 (PiDqDeleteUserObjectFromLoadedHives.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x1406991C4 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgCopyVariableData @ 0x140699A98 (PiDevCfgCopyVariableData.c)
 *     PiDevCfgMigrateService @ 0x14069AB80 (PiDevCfgMigrateService.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14069AE04 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14069B1C8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiCMDeleteDeviceKey @ 0x1406A4B08 (PiCMDeleteDeviceKey.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406AA480 (PiCreateDriverSwDeviceCallback.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x14073C984 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x14073CE10 (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14073D28C (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x14073EC90 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14074178C (_SysCtxRegOpenCurrentUserKey.c)
 *     DrvDbDeleteObjectSubKey @ 0x140742778 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1407439F0 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x140745768 (DrvDbInitializeDatabaseNodeVersion.c)
 * Callees:
 *     _RegRtlOpenKeyTransacted @ 0x1404840A0 (_RegRtlOpenKeyTransacted.c)
 */

__int64 __fastcall SysCtxRegOpenKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  if ( a1 )
    return RegRtlOpenKeyTransacted(a2, a3, a4, a5, a6, *(_QWORD *)(a1 + 8));
  else
    return RegRtlOpenKeyTransacted(a2, a3, a4, a5, a6, 0LL);
}
