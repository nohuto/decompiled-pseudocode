/*
 * XREFs of _wcsicmp @ 0x14015EB30
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1400ADB40 (LdrpResSearchResourceMappedFile.c)
 *     LdrRscIsTypeExist @ 0x1400DD260 (LdrRscIsTypeExist.c)
 *     LdrpVerifyAlternateResourceModule @ 0x140132090 (LdrpVerifyAlternateResourceModule.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1401416EC (RtlpMuiRegAddAlternateCodePage.c)
 *     PipUpdateDeviceProducts @ 0x140145D10 (PipUpdateDeviceProducts.c)
 *     ?CompareLangName@@YAHPEBX0@Z @ 0x140154250 (-CompareLangName@@YAHPEBX0@Z.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x1401FF2C8 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x1401FF33C (PiDevCfgGetMigrationDeviceIdScore.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x14023E1D8 (PopFxIsDevicePotentialDripsConstraint.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140443CDC (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140443FC8 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1404483F0 (DrvDbGetObjectSubKeyCallback.c)
 *     PiSwUpdateArrayProperties @ 0x14044D9AC (PiSwUpdateArrayProperties.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140459A60 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140459BE0 (DrvDbOpenDriverDatabaseRegKey.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14045A670 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     RtlpHashStringToAtom @ 0x1404D2DE0 (RtlpHashStringToAtom.c)
 *     LdrpSearchResourceSection_U @ 0x1404D9C34 (LdrpSearchResourceSection_U.c)
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 *     WmipPrepareWnodeSI @ 0x14051F40C (WmipPrepareWnodeSI.c)
 *     PiDmCompareObjects @ 0x140523A70 (PiDmCompareObjects.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x140524B40 (PiPnpRtlObjectEventCompareObjects.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x140527330 (PiPnpRtlInterfaceFilterCallback.c)
 *     PiPnpRtlObjectEventWorker @ 0x140528A70 (PiPnpRtlObjectEventWorker.c)
 *     PropertyEval @ 0x140529FE0 (PropertyEval.c)
 *     PiDqPropertyCallback @ 0x14052D3D0 (PiDqPropertyCallback.c)
 *     ExQueryLicenseValueInternal @ 0x140537F50 (ExQueryLicenseValueInternal.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14054BDE4 (PiUEventNotifyTargetDeviceChange.c)
 *     PiDqQueryApplyObjectEvent @ 0x14054D08C (PiDqQueryApplyObjectEvent.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14054D954 (PiDcHandleCustomDeviceEvent.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14054E090 (PiDcUpdateDeviceContainerMembership.c)
 *     PiSwStopDestroy @ 0x14055E5A8 (PiSwStopDestroy.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140580700 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     ConstraintEval @ 0x140580B24 (ConstraintEval.c)
 *     StringListContains @ 0x140584984 (StringListContains.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140588924 (PiBuildDeviceNodeInstancePath.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140589748 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x140589B60 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PipCheckForDenyExecute @ 0x140592C58 (PipCheckForDenyExecute.c)
 *     GetPropertyFromPropArray @ 0x1405945D0 (GetPropertyFromPropArray.c)
 *     IopErrorLogThread @ 0x140594B30 (IopErrorLogThread.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1405962D4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140597F48 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiDevCfgMigrateDevice @ 0x14059ADAC (PiDevCfgMigrateDevice.c)
 *     _CmIsLocalMachineContainer @ 0x14059CD48 (_CmIsLocalMachineContainer.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14059CFE8 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x14059F178 (PiSwDeviceFindInterfaceEntry.c)
 *     PiDevCfgResolveVariable @ 0x1405A096C (PiDevCfgResolveVariable.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1405A24F0 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x1405A498C (PiDevCfgEnforceDevicePolicy.c)
 *     BiGetNtPartitionPath @ 0x1405B0860 (BiGetNtPartitionPath.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1405BACF0 (PiSwDeviceMakeCompatibleIds.c)
 *     RtlpLangNameInMultiSzString @ 0x1405BDC20 (RtlpLangNameInMultiSzString.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x1405BE344 (RtlpMuiRegGetStringIndexInPool.c)
 *     DrvDbSuspendDatabase @ 0x1405C6778 (DrvDbSuspendDatabase.c)
 *     SdbpFindMatchingName @ 0x1405DB244 (SdbpFindMatchingName.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x1405E54D0 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     PiDqActionDataGetChangedProperties @ 0x1405E6D68 (PiDqActionDataGetChangedProperties.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1405E7F0C (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiSwDeviceCompareObjects @ 0x1405F0B70 (PiSwDeviceCompareObjects.c)
 *     PnpCheckDriverDependencies @ 0x1406C14F8 (PnpCheckDriverDependencies.c)
 *     IopIsPciRootBus @ 0x1406C2310 (IopIsPciRootBus.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1406C33F0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x1406C3644 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1406C56F8 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1406C6DE8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x1406C7750 (PiDevCfgResetDeviceKeyCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1406C9150 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1406CDBB4 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406D56F0 (PiCreateDriverSwDeviceCallback.c)
 *     PpmProcessSettingsFromQueryTable @ 0x14070BA48 (PpmProcessSettingsFromQueryTable.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14076E53C (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpMatchDeviceString @ 0x14076FCD8 (SdbpMatchDeviceString.c)
 *     SdbFindFirstNamedTag @ 0x14076FE2C (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x14076FEF4 (SdbpFindNextNamedTag.c)
 *     AslpFileGetVersionBlock @ 0x1407749CC (AslpFileGetVersionBlock.c)
 *     AslpFileVerQueryBlock @ 0x140775A24 (AslpFileVerQueryBlock.c)
 *     SiGetEspFromFirmware @ 0x14077DC34 (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x14077DF80 (SiIsValidDiskDevice.c)
 *     SiIsValidWindowsBootEntry @ 0x14077E030 (SiIsValidWindowsBootEntry.c)
 *     _CmMatchLastKnownParentCallback @ 0x140780460 (_CmMatchLastKnownParentCallback.c)
 *     _PnpMultiSzDeleteString @ 0x140785A8C (_PnpMultiSzDeleteString.c)
 *     ArbShareDriverExclusive @ 0x14078994C (ArbShareDriverExclusive.c)
 *     VhdiVerifyBootDisk @ 0x140789BCC (VhdiVerifyBootDisk.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14078A8EC (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x14078B090 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     VfIsPCIBus @ 0x1407AC318 (VfIsPCIBus.c)
 *     BgpFoGetFontHandle @ 0x1407D00EC (BgpFoGetFontHandle.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140835FC0 (CmSelectQualifiedInstallLanguage.c)
 *     PipMigrateResetDeviceCallback @ 0x14086A740 (PipMigrateResetDeviceCallback.c)
 *     PipPendingServicesFilter @ 0x14086B120 (PipPendingServicesFilter.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsicmp(const wchar_t *Str1, const wchar_t *Str2)
{
  signed __int64 v2; // r9
  unsigned __int16 v3; // r8
  wchar_t v4; // cx

  v2 = (char *)Str1 - (char *)Str2;
  do
  {
    v3 = *(const wchar_t *)((char *)Str2 + v2);
    if ( (unsigned __int16)(v3 - 65) <= 0x19u )
      v3 += 32;
    v4 = *Str2;
    if ( (unsigned __int16)(*Str2 - 65) <= 0x19u )
      v4 += 32;
    ++Str2;
  }
  while ( v3 && v3 == v4 );
  return v3 - v4;
}
