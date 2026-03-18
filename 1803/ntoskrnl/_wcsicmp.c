/*
 * XREFs of _wcsicmp @ 0x140188860
 * Callers:
 *     LdrRscIsTypeExist @ 0x14013D958 (LdrRscIsTypeExist.c)
 *     LdrpResSearchResourceMappedFile @ 0x14013FF08 (LdrpResSearchResourceMappedFile.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x14016DF18 (LdrpVerifyAlternateResourceModuleEx.c)
 *     PipUpdateDeviceProducts @ 0x140179180 (PipUpdateDeviceProducts.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x140179A04 (RtlpMuiRegAddAlternateCodePage.c)
 *     ?CompareLangName@@YAHPEBX0@Z @ 0x140181E90 (-CompareLangName@@YAHPEBX0@Z.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x14023BCF8 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x14023BD6C (PiDevCfgGetMigrationDeviceIdScore.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x140275448 (PopFxIsDevicePotentialDripsConstraint.c)
 *     RtlpHashStringToAtom @ 0x1404B6290 (RtlpHashStringToAtom.c)
 *     PropertyEval @ 0x1404FDEB8 (PropertyEval.c)
 *     PiDqPropertyCallback @ 0x1405012E0 (PiDqPropertyCallback.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x140503A10 (PiPnpRtlInterfaceFilterCallback.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x140504570 (PiPnpRtlObjectEventCompareObjects.c)
 *     PiDmCompareObjects @ 0x140507610 (PiDmCompareObjects.c)
 *     WmipPrepareWnodeSI @ 0x14051B448 (WmipPrepareWnodeSI.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14051F808 (PiUEventNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14051FDD4 (PiDcHandleCustomDeviceEvent.c)
 *     ExQueryLicenseValueInternal @ 0x140549360 (ExQueryLicenseValueInternal.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14056B1FC (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14056BD98 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     ConstraintEval @ 0x14056C1DC (ConstraintEval.c)
 *     GetPropertyFromPropArray @ 0x140572B50 (GetPropertyFromPropArray.c)
 *     StringListContains @ 0x140577B88 (StringListContains.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1405817B0 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     EtwpStartLogger @ 0x14058A5A4 (EtwpStartLogger.c)
 *     LdrpSearchResourceSection_U @ 0x1405BBB44 (LdrpSearchResourceSection_U.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1405C5870 (PiSwDeviceMakeCompatibleIds.c)
 *     PiSwUpdateArrayProperties @ 0x1405C644C (PiSwUpdateArrayProperties.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x1405C6560 (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwStopDestroy @ 0x1405C8DA8 (PiSwStopDestroy.c)
 *     _CmUpdateDevicePanel @ 0x1405CB46C (_CmUpdateDevicePanel.c)
 *     PiPnpRtlObjectEventWorker @ 0x1405D2B70 (PiPnpRtlObjectEventWorker.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1405D5280 (PiDcUpdateDeviceContainerMembership.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1405DA154 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgResolveVariable @ 0x1405DA3E0 (PiDevCfgResolveVariable.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1405DAAA4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x1405DB0F0 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDqQueryApplyObjectEvent @ 0x1405DD894 (PiDqQueryApplyObjectEvent.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1405E4F04 (PiBuildDeviceNodeInstancePath.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x1405E58A4 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiDevCfgMigrateDevice @ 0x1405E6DB0 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x1405E7AF8 (PiDevCfgEnforceDevicePolicy.c)
 *     PiDqActionDataGetChangedProperties @ 0x1405E8B2C (PiDqActionDataGetChangedProperties.c)
 *     _CmIsLocalMachineContainer @ 0x1405E8E10 (_CmIsLocalMachineContainer.c)
 *     PiSwDeviceCompareObjects @ 0x1405E92F0 (PiSwDeviceCompareObjects.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1405F3118 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PipCheckForDenyExecute @ 0x1405F58F0 (PipCheckForDenyExecute.c)
 *     IopErrorLogThread @ 0x1406000E0 (IopErrorLogThread.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140605498 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140605B7C (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     BiGetNtPartitionPath @ 0x14060729C (BiGetNtPartitionPath.c)
 *     ArbShareDriverExclusive @ 0x140617CC4 (ArbShareDriverExclusive.c)
 *     SdbpFindMatchingName @ 0x14061F368 (SdbpFindMatchingName.c)
 *     DrvDbSuspendDatabase @ 0x1406229A4 (DrvDbSuspendDatabase.c)
 *     PiPnpRtlRegisterDriverMachineNodeCallback @ 0x140623ED0 (PiPnpRtlRegisterDriverMachineNodeCallback.c)
 *     PiDrvDbRegisterNodeCallback @ 0x140623F40 (PiDrvDbRegisterNodeCallback.c)
 *     RtlpLangNameInMultiSzString @ 0x140636098 (RtlpLangNameInMultiSzString.c)
 *     RtlpMuiRegGetStringIndexInPool @ 0x1406367B0 (RtlpMuiRegGetStringIndexInPool.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x1406480AC (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140652418 (DrvDbOpenDriverDatabaseRegKey.c)
 *     PnpCheckDriverDependencies @ 0x1407271D8 (PnpCheckDriverDependencies.c)
 *     IopIsPciRootBus @ 0x140728340 (IopIsPciRootBus.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1407294D0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140729724 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14072BF1C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14072D8D8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x14072E600 (PiDevCfgResetDeviceKeyCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140730170 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140735320 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiDrvDbOverlayNodeHive @ 0x14073CE80 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14073D35C (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14073D4AC (PiDrvDbResolveFilePathKeyValues.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14073F390 (PiCreateDriverSwDeviceCallback.c)
 *     PpmProcessSettingsFromQueryTable @ 0x14076EF20 (PpmProcessSettingsFromQueryTable.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1407D5878 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpMatchDeviceString @ 0x1407D7084 (SdbpMatchDeviceString.c)
 *     SdbFindFirstNamedTag @ 0x1407D712C (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x1407D71F4 (SdbpFindNextNamedTag.c)
 *     AslpFileGetVersionBlock @ 0x1407DD710 (AslpFileGetVersionBlock.c)
 *     AslpFileVerQueryBlock @ 0x1407DE780 (AslpFileVerQueryBlock.c)
 *     SiGetEspFromFirmware @ 0x1407E6630 (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x1407E69A0 (SiIsValidDiskDevice.c)
 *     SiIsValidWindowsBootEntry @ 0x1407E6A4C (SiIsValidWindowsBootEntry.c)
 *     _CmMatchLastKnownParentCallback @ 0x1407E9220 (_CmMatchLastKnownParentCallback.c)
 *     _PnpMultiSzDeleteString @ 0x1407F08C8 (_PnpMultiSzDeleteString.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1407F25F0 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1407F2F8C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1407F37B4 (DrvDbSetDriverPackageMappedProperty.c)
 *     VhdiVerifyBootDisk @ 0x1407F608C (VhdiVerifyBootDisk.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1407F6DA4 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1407F7548 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     VfIsPCIBus @ 0x140819488 (VfIsPCIBus.c)
 *     BgpFoGetFontHandle @ 0x14083C534 (BgpFoGetFontHandle.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1408B87E4 (CmSelectQualifiedInstallLanguage.c)
 *     PipMigrateResetDeviceCallback @ 0x1408DEF30 (PipMigrateResetDeviceCallback.c)
 *     PipPendingServicesFilter @ 0x1408DFB10 (PipPendingServicesFilter.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsicmp(const wchar_t *Str1, const wchar_t *Str2)
{
  const wchar_t *v2; // r10
  signed __int64 v3; // r9
  unsigned __int16 v4; // r8
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // r8

  v2 = Str2;
  v3 = (char *)Str1 - (char *)Str2;
  do
  {
    v4 = *(const wchar_t *)((char *)v2 + v3);
    v5 = *v2++;
    v6 = v4 + 32;
    if ( (unsigned __int16)(v4 - 65) > 0x19u )
      v6 = v4;
    v7 = v5 + 32;
    if ( (unsigned __int16)(v5 - 65) > 0x19u )
      v7 = v5;
  }
  while ( v6 && v6 == v7 );
  return v6 - v7;
}
