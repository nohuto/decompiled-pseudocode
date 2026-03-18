/*
 * XREFs of _PnpCtxGetCachedContextBaseKey @ 0x14052210C
 * Callers:
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14045A8F0 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PipOpenServiceEnumKeys @ 0x14051A2F0 (PipOpenServiceEnumKeys.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14051CAB4 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x14051D800 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140521660 (_CmOpenDeviceRegKeyWorker.c)
 *     DrvDbLoadDatabaseNode @ 0x140533B00 (DrvDbLoadDatabaseNode.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140550AC4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140550CA0 (_CmGetDeviceContainerIdFromBase.c)
 *     PipMakeGloballyUniqueId @ 0x14058CC98 (PipMakeGloballyUniqueId.c)
 *     PiDevCfgInitMigrationContext @ 0x14059AE90 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x14059D25C (PiDevCfgConfigureDeviceLocation.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x1405E7994 (_CmGetMatchingCommonClassListWorker.c)
 *     NtEnableLastKnownGood @ 0x1405E7AE0 (NtEnableLastKnownGood.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x1405EA4A0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _PnpCtxOpenContextBaseKey @ 0x1405EB420 (_PnpCtxOpenContextBaseKey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1405EC82C (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetMatchingDeviceContainerListWorker @ 0x1405ED370 (_CmGetMatchingDeviceContainerListWorker.c)
 *     NtDisableLastKnownGood @ 0x1405F11C0 (NtDisableLastKnownGood.c)
 *     PipHardwareConfigClearStartOverrides @ 0x1406BDAE0 (PipHardwareConfigClearStartOverrides.c)
 *     PnpCheckDriverDependencies @ 0x1406C14F8 (PnpCheckDriverDependencies.c)
 *     PiDevCfgMigrateService @ 0x1406C67A4 (PiDevCfgMigrateService.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x1406C6918 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PnprGetPluginDriverImagePath @ 0x1406CC7E4 (PnprGetPluginDriverImagePath.c)
 *     PiCMDeleteDeviceKey @ 0x1406CFDE0 (PiCMDeleteDeviceKey.c)
 *     PiCMEnumerateSubKeys @ 0x1406D0180 (PiCMEnumerateSubKeys.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x14077E748 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14077ED08 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14077F360 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140780B78 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140781540 (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1407819C0 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x1407835B0 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x140784EC0 (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PipMigratePnpState @ 0x14083E9C4 (PipMigratePnpState.c)
 *     PipProcessPendingServices @ 0x14083EAA8 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x14083EB34 (PipProcessPendingOsExtensionResources.c)
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 *     PipCommitPendingOsExtensionResource @ 0x14086ABB0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x14086ADC0 (PipCommitPendingService.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     _SysCtxRegCreateTree @ 0x140533294 (_SysCtxRegCreateTree.c)
 *     _SysCtxGetCachedContextBaseKey @ 0x14059EE00 (_SysCtxGetCachedContextBaseKey.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405E9464 (_PnpGetEnumSecurityDescriptor.c)
 */

__int64 __fastcall PnpCtxGetCachedContextBaseKey(_QWORD *a1, int a2, _QWORD *a3)
{
  signed int CachedContextBaseKey; // esi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // rax
  const wchar_t *v11; // r15
  void *EnumSecurityDescriptor; // r14
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // ebx
  int v21; // ebx
  __int64 v22; // [rsp+80h] [rbp+30h] BYREF
  __int64 v23; // [rsp+98h] [rbp+48h] BYREF

  CachedContextBaseKey = 0;
  v22 = 0LL;
  v23 = 0LL;
  if ( a2 > 7 )
  {
    switch ( a2 )
    {
      case 8:
        v8 = a1[5];
LABEL_10:
        v22 = v8;
        goto LABEL_11;
      case 9:
        v10 = a1[6];
        break;
      case 10:
        v10 = a1[7];
        break;
      case 11:
        v10 = a1[8];
        break;
      case 12:
        v10 = a1[9];
        break;
      default:
        return (unsigned int)-1073741811;
    }
LABEL_18:
    v22 = v10;
    goto LABEL_12;
  }
  switch ( a2 )
  {
    case 7:
      v10 = a1[4];
      goto LABEL_18;
    case 1:
      v19 = 1LL;
      break;
    case 2:
      v19 = 2LL;
      break;
    case 3:
      v19 = 3LL;
      break;
    default:
      switch ( a2 )
      {
        case 4:
          v7 = *(_QWORD *)(*a1 + 48LL);
          v8 = 0LL;
          if ( v7 )
            v8 = *(_QWORD *)(*a1 + 48LL);
          CachedContextBaseKey = v7 == 0 ? 0xC0000034 : 0;
          goto LABEL_10;
        case 5:
          v10 = a1[2];
          break;
        case 6:
          v10 = a1[3];
          break;
        default:
          return (unsigned int)-1073741811;
      }
      goto LABEL_18;
  }
  CachedContextBaseKey = SysCtxGetCachedContextBaseKey(*a1, v19, &v22);
LABEL_11:
  if ( CachedContextBaseKey < 0 )
    return (unsigned int)CachedContextBaseKey;
LABEL_12:
  if ( v22 )
  {
    *a3 = v22;
    return (unsigned int)CachedContextBaseKey;
  }
  if ( a2 < 5 || a2 > 12 )
    CachedContextBaseKey = -1073741811;
  if ( CachedContextBaseKey >= 0 )
  {
    CachedContextBaseKey = SysCtxGetCachedContextBaseKey(*a1, 4LL, &v23);
    if ( CachedContextBaseKey >= 0 )
    {
      switch ( a2 )
      {
        case 5:
          v11 = L"Enum";
          EnumSecurityDescriptor = (void *)PnpGetEnumSecurityDescriptor(0LL);
          if ( !EnumSecurityDescriptor )
            CachedContextBaseKey = -1073741595;
LABEL_36:
          if ( CachedContextBaseKey >= 0 )
          {
            CachedContextBaseKey = SysCtxRegCreateTree(*a1, v23, v11, 0LL, 0x2000000, EnumSecurityDescriptor);
            if ( CachedContextBaseKey >= 0 )
            {
              v13 = a2 - 5;
              if ( !v13 )
              {
                v18 = v22;
                a1[2] = v22;
                goto LABEL_44;
              }
              v14 = v13 - 1;
              if ( !v14 )
              {
                v18 = v22;
                a1[3] = v22;
                goto LABEL_44;
              }
              v15 = v14 - 1;
              if ( !v15 )
              {
                v18 = v22;
                a1[4] = v22;
                goto LABEL_44;
              }
              v16 = v15 - 1;
              if ( !v16 )
              {
                v18 = v22;
                a1[5] = v22;
                goto LABEL_44;
              }
              v17 = v16 - 1;
              if ( !v17 )
              {
                v18 = v22;
                a1[6] = v22;
LABEL_44:
                *a3 = v18;
                goto LABEL_45;
              }
              v20 = v17 - 1;
              if ( !v20 )
              {
                v18 = v22;
                a1[7] = v22;
                goto LABEL_44;
              }
              v21 = v20 - 1;
              if ( !v21 )
              {
                v18 = v22;
                a1[8] = v22;
                goto LABEL_44;
              }
              if ( v21 == 1 )
              {
                v18 = v22;
                a1[9] = v22;
                goto LABEL_44;
              }
              CachedContextBaseKey = -1073741811;
            }
          }
LABEL_45:
          if ( EnumSecurityDescriptor )
            ExFreePoolWithTag(EnumSecurityDescriptor, 0);
          return (unsigned int)CachedContextBaseKey;
        case 6:
          v11 = L"Services";
          goto LABEL_35;
        case 7:
          v11 = L"Control\\Class";
          goto LABEL_35;
        case 8:
          v11 = L"Control\\DeviceClasses";
          goto LABEL_35;
        case 9:
          v11 = L"Control\\DeviceContainers";
LABEL_35:
          EnumSecurityDescriptor = 0LL;
          goto LABEL_36;
        case 10:
          v11 = L"Control\\CriticalDeviceDatabase";
          goto LABEL_35;
        case 11:
          v11 = L"Control\\CoDeviceInstallers";
          goto LABEL_35;
        case 12:
          v11 = L"Hardware Profiles";
          goto LABEL_35;
      }
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)CachedContextBaseKey;
}
