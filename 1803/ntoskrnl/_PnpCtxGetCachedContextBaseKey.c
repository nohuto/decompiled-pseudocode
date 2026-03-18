/*
 * XREFs of _PnpCtxGetCachedContextBaseKey @ 0x140506374
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140179180 (PipUpdateDeviceProducts.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14050333C (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140503C50 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1405055A0 (_CmOpenDeviceRegKeyWorker.c)
 *     DrvDbLoadDatabaseNode @ 0x140564E68 (DrvDbLoadDatabaseNode.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140586C28 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1405D5544 (_CmGetDeviceContainerIdFromBase.c)
 *     PiDevCfgInitMigrationContext @ 0x1405E6E94 (PiDevCfgInitMigrationContext.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1405E7EF8 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x1405E8480 (PiDevCfgConfigureDeviceLocation.c)
 *     NtEnableLastKnownGood @ 0x1405F2CEC (NtEnableLastKnownGood.c)
 *     _PnpCtxOpenContextBaseKey @ 0x1405F31C0 (_PnpCtxOpenContextBaseKey.c)
 *     NtDisableLastKnownGood @ 0x1405F3D68 (NtDisableLastKnownGood.c)
 *     PipOpenServiceEnumKeys @ 0x1405F7868 (PipOpenServiceEnumKeys.c)
 *     PipMakeGloballyUniqueId @ 0x140603F8C (PipMakeGloballyUniqueId.c)
 *     PipHardwareConfigOpenKey @ 0x140634328 (PipHardwareConfigOpenKey.c)
 *     PnpOpenCCSPnpRegKey @ 0x1406344CC (PnpOpenCCSPnpRegKey.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140637390 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x140637574 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmGetMatchingDeviceContainerListWorker @ 0x1406377B4 (_CmGetMatchingDeviceContainerListWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x140637840 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x140637C84 (_CmGetMatchingCommonClassListWorker.c)
 *     PipHardwareConfigClearStartOverrides @ 0x140722AC4 (PipHardwareConfigClearStartOverrides.c)
 *     PnpCheckDriverDependencies @ 0x1407271D8 (PnpCheckDriverDependencies.c)
 *     PiDevCfgMigrateService @ 0x14072D250 (PiDevCfgMigrateService.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x14072D3B4 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PnprGetPluginDriverImagePath @ 0x140734184 (PnprGetPluginDriverImagePath.c)
 *     PiCMDeleteDeviceKey @ 0x140736D98 (PiCMDeleteDeviceKey.c)
 *     PiCMEnumerateSubKeys @ 0x140737488 (PiCMEnumerateSubKeys.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1407E72C8 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1407E7910 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1407E7FC8 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1407E9948 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x1407EA360 (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1407EA7E4 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1407EC744 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x1407ED0A4 (_CmOpenDevicePanelRegKeyWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x1407ED474 (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x1407EDDEC (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x1407EFB90 (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     IopInitializePlugPlayServices @ 0x1408A3B0C (IopInitializePlugPlayServices.c)
 *     PipMigratePnpState @ 0x1408B3338 (PipMigratePnpState.c)
 *     PipProcessPendingServices @ 0x1408B38F4 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x1408B3980 (PipProcessPendingOsExtensionResources.c)
 *     PipHardwareConfigInit @ 0x1408C395C (PipHardwareConfigInit.c)
 *     PipCommitPendingOsExtensionResource @ 0x1408DF5A0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1408DF7B0 (PipCommitPendingService.c)
 * Callees:
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1405063E0 (_PnpCtxGetCachedNodeBaseKey.c)
 */

__int64 __fastcall PnpCtxGetCachedContextBaseKey(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // r8

  v4 = *(_QWORD *)(a1 + 8LL * a2 + 96);
  if ( !v4 )
  {
    if ( a2 > 11 )
    {
      if ( a2 <= 13 || a2 > 15 )
        goto LABEL_9;
    }
    else if ( a2 < 9 && a2 != 5 )
    {
      goto LABEL_9;
    }
    v6 = *(_QWORD *)(a1 + 56);
    v4 = v6 - 16;
    if ( v6 != a1 + 56 )
    {
LABEL_10:
      *(_QWORD *)(a1 + 8LL * a2 + 96) = v4;
      return PnpCtxGetCachedNodeBaseKey(a1, v4, (unsigned int)a2, a3);
    }
LABEL_9:
    v4 = *(_QWORD *)(a1 + 88);
    goto LABEL_10;
  }
  return PnpCtxGetCachedNodeBaseKey(a1, v4, (unsigned int)a2, a3);
}
