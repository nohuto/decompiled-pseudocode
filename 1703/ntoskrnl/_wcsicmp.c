/*
 * XREFs of _wcsicmp @ 0x14016A0F0
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1400120D4 (LdrpResSearchResourceMappedFile.c)
 *     LdrRscIsTypeExist @ 0x140012FE4 (LdrRscIsTypeExist.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1401570CC (RtlpMuiRegAddAlternateCodePage.c)
 *     ?CompareLangName@@YAHPEBX0@Z @ 0x1401638B0 (-CompareLangName@@YAHPEBX0@Z.c)
 *     LdrpVerifyAlternateResourceModule @ 0x1401672C4 (LdrpVerifyAlternateResourceModule.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x1401F9368 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x1401F93DC (PiDevCfgGetMigrationDeviceIdScore.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x14022AEB8 (PopFxIsDevicePotentialDripsConstraint.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x14041FD94 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     LdrpSearchResourceSection_U @ 0x14042A354 (LdrpSearchResourceSection_U.c)
 *     ConstraintEval @ 0x14044A89C (ConstraintEval.c)
 *     PiBuildDeviceNodeInstancePath @ 0x14044C490 (PiBuildDeviceNodeInstancePath.c)
 *     GetPropertyFromPropArray @ 0x1404500E0 (GetPropertyFromPropArray.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140450308 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140457A84 (PiDcHandleCustomDeviceEvent.c)
 *     PiDqActionDataGetChangedProperties @ 0x14045AAE8 (PiDqActionDataGetChangedProperties.c)
 *     PiSwDeviceCompareObjects @ 0x14045DD90 (PiSwDeviceCompareObjects.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x14045F680 (PiSwDeviceMakeCompatibleIds.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x1404613AC (PiSwDeviceFindInterfaceEntry.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140464EF4 (PiUEventNotifyDeviceInstanceChange.c)
 *     _CmIsLocalMachineContainer @ 0x1404690C8 (_CmIsLocalMachineContainer.c)
 *     PiDmCompareObjects @ 0x140485770 (PiDmCompareObjects.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x140487070 (PiPnpRtlObjectEventCompareObjects.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x140488DA0 (PiPnpRtlInterfaceFilterCallback.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1404A6744 (PiUEventNotifyTargetDeviceChange.c)
 *     ExQueryLicenseValueInternal @ 0x1404A7FE0 (ExQueryLicenseValueInternal.c)
 *     PiDqQueryApplyObjectEvent @ 0x1404B83D4 (PiDqQueryApplyObjectEvent.c)
 *     PropertyEval @ 0x1404BA130 (PropertyEval.c)
 *     PiDqPropertyCallback @ 0x1404BD530 (PiDqPropertyCallback.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1404BDCE4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     StringListContains @ 0x1404BE040 (StringListContains.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1404DA754 (PiDcUpdateDeviceContainerMembership.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404DEF00 (PiPnpRtlObjectEventWorker.c)
 *     RtlpHashStringToAtom @ 0x1404FA780 (RtlpHashStringToAtom.c)
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 *     PipCheckForDenyExecute @ 0x14055624C (PipCheckForDenyExecute.c)
 *     PiSwStopDestroy @ 0x140570B8C (PiSwStopDestroy.c)
 *     PiSwUpdateArrayProperties @ 0x140574884 (PiSwUpdateArrayProperties.c)
 *     WmipPrepareWnodeSI @ 0x140580A10 (WmipPrepareWnodeSI.c)
 *     IopErrorLogThread @ 0x1405812A0 (IopErrorLogThread.c)
 *     BiGetNtPartitionPath @ 0x140589EB0 (BiGetNtPartitionPath.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x14058FC40 (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14059011C (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140593178 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgMigrateDevice @ 0x14059389C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x140593A60 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgResolveVariable @ 0x140594210 (PiDevCfgResolveVariable.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14059828C (IopFileUtilWalkDirectoryTreeHelper.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14059D9EC (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbSuspendDatabase @ 0x14059E34C (DrvDbSuspendDatabase.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x14059E3E8 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1405A99BC (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     RtlpLangNameInMultiSzString @ 0x1405B7F14 (RtlpLangNameInMultiSzString.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x1405B8640 (RtlpMuiRegGetStringIndexInPool.c)
 *     SdbpFindMatchingName @ 0x1405BC1DC (SdbpFindMatchingName.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x1405D8300 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     ArbShareDriverExclusive @ 0x1405D8DB8 (ArbShareDriverExclusive.c)
 *     PnpCheckDriverDependencies @ 0x140695738 (PnpCheckDriverDependencies.c)
 *     IopIsPciRootBus @ 0x140696750 (IopIsPciRootBus.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140697970 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140697BC4 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14069B1C8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x14069BED0 (PiDevCfgResetDeviceKeyCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14069DC50 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1406A30E0 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406AA480 (PiCreateDriverSwDeviceCallback.c)
 *     PpmProcessSettingsFromQueryTable @ 0x1406D5CD4 (PpmProcessSettingsFromQueryTable.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14072B80C (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpMatchDeviceString @ 0x14072CC54 (SdbpMatchDeviceString.c)
 *     SdbFindFirstNamedTag @ 0x14072CCF4 (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x14072CDBC (SdbpFindNextNamedTag.c)
 *     AslpFileGetVersionBlock @ 0x1407308C8 (AslpFileGetVersionBlock.c)
 *     AslpFileVerQueryBlock @ 0x1407318B0 (AslpFileVerQueryBlock.c)
 *     SiIsValidDiskDevice @ 0x140739618 (SiIsValidDiskDevice.c)
 *     _CmMatchLastKnownParentCallback @ 0x14073BD40 (_CmMatchLastKnownParentCallback.c)
 *     _PnpMultiSzDeleteString @ 0x140741C74 (_PnpMultiSzDeleteString.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1407439F0 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140744354 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140744B74 (DrvDbSetDriverPackageMappedProperty.c)
 *     VhdiVerifyBootDisk @ 0x1407473A0 (VhdiVerifyBootDisk.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140748098 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140748934 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     BgpFoGetFontHandle @ 0x140757E80 (BgpFoGetFontHandle.c)
 *     VfIsPCIBus @ 0x14076A648 (VfIsPCIBus.c)
 *     CmSelectQualifiedInstallLanguage @ 0x14080DD28 (CmSelectQualifiedInstallLanguage.c)
 *     PipMigrateResetDeviceCallback @ 0x140833620 (PipMigrateResetDeviceCallback.c)
 *     PipPendingServicesFilter @ 0x140834000 (PipPendingServicesFilter.c)
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
