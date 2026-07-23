/*
 * XREFs of ZwDeleteValueKey @ 0x1401A8EC0
 * Callers:
 *     BiZwDeleteValueKey @ 0x14016446C (BiZwDeleteValueKey.c)
 *     CmpSetSystemRegistryString @ 0x1401775A8 (CmpSetSystemRegistryString.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x140179BE8 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     VfClearVerifierSettings @ 0x1402A95D4 (VfClearVerifierSettings.c)
 *     RtlpQueryRegistryValues @ 0x140502B1C (RtlpQueryRegistryValues.c)
 *     CmpCompleteUnloadKey @ 0x14054D8E8 (CmpCompleteUnloadKey.c)
 *     ExpWnfDeletePermanentName @ 0x1405679F4 (ExpWnfDeletePermanentName.c)
 *     IopReleaseDeviceResources @ 0x1405C8A58 (IopReleaseDeviceResources.c)
 *     _CmSetDeviceRegPropWorker @ 0x1405CF72C (_CmSetDeviceRegPropWorker.c)
 *     PiDevCfgCopyDeviceKey @ 0x1405D81C8 (PiDevCfgCopyDeviceKey.c)
 *     PiQueryAndAllocateBootResources @ 0x1405DB788 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1405DC08C (PiQueryResourceRequirements.c)
 *     PiDevCfgMigrateDevice @ 0x1405E6DB0 (PiDevCfgMigrateDevice.c)
 *     _PnpDeletePropertyWorker @ 0x1405E70CC (_PnpDeletePropertyWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1405E7EF8 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     NtEnableLastKnownGood @ 0x1405F2CEC (NtEnableLastKnownGood.c)
 *     PiRearrangeDeviceInstances @ 0x1405F6A14 (PiRearrangeDeviceInstances.c)
 *     PiProcessDriverInstance @ 0x1405F7090 (PiProcessDriverInstance.c)
 *     RtlDeleteRegistryValue @ 0x140605790 (RtlDeleteRegistryValue.c)
 *     ExpSetCurrentUserUILanguage @ 0x14060E6CC (ExpSetCurrentUserUILanguage.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140615AE0 (IopWriteAllocatedResourcesToRegistry.c)
 *     IopWriteResourceList @ 0x140617604 (IopWriteResourceList.c)
 *     PopThermalHandlePreviousShutdown @ 0x140627B68 (PopThermalHandlePreviousShutdown.c)
 *     CmpSetVersionData @ 0x14062ED3C (CmpSetVersionData.c)
 *     WdipSemLoadConfigInfo @ 0x1406393B0 (WdipSemLoadConfigInfo.c)
 *     PnpDriverLoadingFailed @ 0x140653954 (PnpDriverLoadingFailed.c)
 *     CmpDoReDoDeleteValue @ 0x140707090 (CmpDoReDoDeleteValue.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x1407229D0 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PnpSetRegistryRequirementsList @ 0x1407270A4 (PnpSetRegistryRequirementsList.c)
 *     PnpSetRegistryResourceList @ 0x140727104 (PnpSetRegistryResourceList.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x14072B498 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14072E24C (PiDevCfgResetDeviceDriverSettings.c)
 *     PiCMCreateDevice @ 0x140735F78 (PiCMCreateDevice.c)
 *     SmKmKeyGenNewKey @ 0x14079D9B0 (SmKmKeyGenNewKey.c)
 *     ExpWnfDeletePermanentStateData @ 0x1407CA560 (ExpWnfDeletePermanentStateData.c)
 *     _PnpCtxRegDeleteValue @ 0x1407E6D8C (_PnpCtxRegDeleteValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1407E943C (_CmSetInstallerClassRegPropWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1407EA7E4 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x1407ED474 (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x1407ED8C8 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x1407EDB78 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1407EDCCC (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x1407EDDEC (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x1407EDE60 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x1407EE020 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     DrvDbDeleteObjectSubKey @ 0x1407F1384 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1407F2A34 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetRegValueMappedProperty @ 0x1407F3DB4 (DrvDbSetRegValueMappedProperty.c)
 *     BapdpProcessVsmKeyBlobs @ 0x1408A2EC0 (BapdpProcessVsmKeyBlobs.c)
 *     PipInitComputerIds @ 0x1408B3A10 (PipInitComputerIds.c)
 *     PipHardwareConfigInit @ 0x1408C395C (PipHardwareConfigInit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
