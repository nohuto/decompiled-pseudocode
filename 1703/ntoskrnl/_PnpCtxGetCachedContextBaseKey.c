/*
 * XREFs of _PnpCtxGetCachedContextBaseKey @ 0x1404841B8
 * Callers:
 *     _CmOpenDeviceRegKeyWorker @ 0x140483940 (_CmOpenDeviceRegKeyWorker.c)
 *     DrvDbLoadDatabaseNode @ 0x140489400 (DrvDbLoadDatabaseNode.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1404DF81C (_CmGetDeviceContainerIdFromBase.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1404DFC1C (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1404E1878 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1404E2728 (_CmOpenCommonClassRegKeyWorker.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140592C98 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgInitMigrationContext @ 0x140593980 (PiDevCfgInitMigrationContext.c)
 *     _PnpCtxOpenContextBaseKey @ 0x14059478C (_PnpCtxOpenContextBaseKey.c)
 *     NtDisableLastKnownGood @ 0x140597D64 (NtDisableLastKnownGood.c)
 *     NtEnableLastKnownGood @ 0x140597E60 (NtEnableLastKnownGood.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14059A2E0 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x1405A9B98 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1405A9E78 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetMatchingDeviceContainerListWorker @ 0x1405AA0B8 (_CmGetMatchingDeviceContainerListWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x1405AA4E0 (_CmGetMatchingCommonClassListWorker.c)
 *     PipOpenServiceEnumKeys @ 0x1405AD84C (PipOpenServiceEnumKeys.c)
 *     PipMakeGloballyUniqueId @ 0x1405C146C (PipMakeGloballyUniqueId.c)
 *     PipHardwareConfigClearStartOverrides @ 0x140691D90 (PipHardwareConfigClearStartOverrides.c)
 *     PnpCheckDriverDependencies @ 0x140695738 (PnpCheckDriverDependencies.c)
 *     PiDevCfgMigrateService @ 0x14069AB80 (PiDevCfgMigrateService.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x14069ACF4 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PnprGetPluginDriverImagePath @ 0x1406A1F44 (PnprGetPluginDriverImagePath.c)
 *     PiCMDeleteDeviceKey @ 0x1406A4B08 (PiCMDeleteDeviceKey.c)
 *     PiCMEnumerateSubKeys @ 0x1406A51A4 (PiCMEnumerateSubKeys.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x14073A060 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14073A61C (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14073AC6C (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x14073C458 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x14073CE10 (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14073D28C (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x14073F1B0 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x140740F4C (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     IopInitializePlugPlayServices @ 0x1407FAEC0 (IopInitializePlugPlayServices.c)
 *     PipMigratePnpState @ 0x140822604 (PipMigratePnpState.c)
 *     PipProcessPendingServices @ 0x1408226E8 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x140822774 (PipProcessPendingOsExtensionResources.c)
 *     PipCommitPendingOsExtensionResource @ 0x140833A90 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140833CA0 (PipCommitPendingService.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _SysCtxRegCreateTree @ 0x1404896F8 (_SysCtxRegCreateTree.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405CFE64 (_PnpGetEnumSecurityDescriptor.c)
 *     _SysCtxGetCachedContextBaseKey @ 0x1405D33C8 (_SysCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall PnpCtxGetCachedContextBaseKey(_QWORD *a1, int a2, _QWORD *a3)
{
  int CachedContextBaseKey; // esi
  __int64 v8; // rax
  const wchar_t *v9; // r15
  void *EnumSecurityDescriptor; // r14
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // ebx
  int v19; // ebx
  __int64 v20; // [rsp+80h] [rbp+30h] BYREF
  __int64 v21; // [rsp+98h] [rbp+48h] BYREF

  CachedContextBaseKey = 0;
  v20 = 0LL;
  v21 = 0LL;
  if ( a2 > 7 )
  {
    switch ( a2 )
    {
      case 8:
        v20 = a1[5];
        goto LABEL_9;
      case 9:
        v8 = a1[6];
        break;
      case 10:
        v8 = a1[7];
        break;
      case 11:
        v8 = a1[8];
        break;
      case 12:
        v8 = a1[9];
        break;
      default:
        return (unsigned int)-1073741811;
    }
LABEL_16:
    v20 = v8;
    goto LABEL_10;
  }
  switch ( a2 )
  {
    case 7:
      v8 = a1[4];
      goto LABEL_16;
    case 1:
      v17 = 1LL;
LABEL_48:
      CachedContextBaseKey = SysCtxGetCachedContextBaseKey(*a1, v17, &v20);
      goto LABEL_9;
    case 2:
      v17 = 2LL;
      goto LABEL_48;
    case 3:
      v17 = 3LL;
      goto LABEL_48;
  }
  if ( a2 != 4 )
  {
    if ( a2 == 5 )
    {
      v8 = a1[2];
    }
    else
    {
      if ( a2 != 6 )
        return (unsigned int)-1073741811;
      v8 = a1[3];
    }
    goto LABEL_16;
  }
  if ( *(_QWORD *)(*a1 + 48LL) )
    v20 = *(_QWORD *)(*a1 + 48LL);
  else
    CachedContextBaseKey = -1073741772;
LABEL_9:
  if ( CachedContextBaseKey < 0 )
    return (unsigned int)CachedContextBaseKey;
LABEL_10:
  if ( v20 )
  {
    *a3 = v20;
    return (unsigned int)CachedContextBaseKey;
  }
  if ( a2 < 5 || a2 > 12 )
    CachedContextBaseKey = -1073741811;
  if ( CachedContextBaseKey >= 0 )
  {
    CachedContextBaseKey = SysCtxGetCachedContextBaseKey(*a1, 4LL, &v21);
    if ( CachedContextBaseKey >= 0 )
    {
      switch ( a2 )
      {
        case 5:
          v9 = L"Enum";
          EnumSecurityDescriptor = (void *)PnpGetEnumSecurityDescriptor(0LL);
          if ( !EnumSecurityDescriptor )
            CachedContextBaseKey = -1073741595;
LABEL_31:
          if ( CachedContextBaseKey >= 0 )
          {
            CachedContextBaseKey = SysCtxRegCreateTree(*a1, v21, v9, 0LL, 0x2000000, EnumSecurityDescriptor);
            if ( CachedContextBaseKey >= 0 )
            {
              v11 = a2 - 5;
              if ( !v11 )
              {
                v16 = v20;
                a1[2] = v20;
                goto LABEL_39;
              }
              v12 = v11 - 1;
              if ( !v12 )
              {
                v16 = v20;
                a1[3] = v20;
                goto LABEL_39;
              }
              v13 = v12 - 1;
              if ( !v13 )
              {
                v16 = v20;
                a1[4] = v20;
                goto LABEL_39;
              }
              v14 = v13 - 1;
              if ( !v14 )
              {
                v16 = v20;
                a1[5] = v20;
                goto LABEL_39;
              }
              v15 = v14 - 1;
              if ( !v15 )
              {
                v16 = v20;
                a1[6] = v20;
LABEL_39:
                *a3 = v16;
                goto LABEL_40;
              }
              v18 = v15 - 1;
              if ( !v18 )
              {
                v16 = v20;
                a1[7] = v20;
                goto LABEL_39;
              }
              v19 = v18 - 1;
              if ( !v19 )
              {
                v16 = v20;
                a1[8] = v20;
                goto LABEL_39;
              }
              if ( v19 == 1 )
              {
                v16 = v20;
                a1[9] = v20;
                goto LABEL_39;
              }
              CachedContextBaseKey = -1073741811;
            }
          }
LABEL_40:
          if ( EnumSecurityDescriptor )
            ExFreePoolWithTag(EnumSecurityDescriptor, 0);
          return (unsigned int)CachedContextBaseKey;
        case 6:
          v9 = L"Services";
          goto LABEL_30;
        case 7:
          v9 = L"Control\\Class";
          goto LABEL_30;
        case 8:
          v9 = L"Control\\DeviceClasses";
          goto LABEL_30;
        case 9:
          v9 = L"Control\\DeviceContainers";
LABEL_30:
          EnumSecurityDescriptor = 0LL;
          goto LABEL_31;
        case 10:
          v9 = L"Control\\CriticalDeviceDatabase";
          goto LABEL_30;
        case 11:
          v9 = L"Control\\CoDeviceInstallers";
          goto LABEL_30;
        case 12:
          v9 = L"Hardware Profiles";
          goto LABEL_30;
      }
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)CachedContextBaseKey;
}
