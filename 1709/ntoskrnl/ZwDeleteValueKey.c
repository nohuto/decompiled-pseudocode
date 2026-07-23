/*
 * XREFs of ZwDeleteValueKey @ 0x14017F2A0
 * Callers:
 *     BiZwDeleteValueKey @ 0x140134B8C (BiZwDeleteValueKey.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1401418D0 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     VfClearVerifierSettings @ 0x140276548 (VfClearVerifierSettings.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140443FC8 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14044435C (DrvDbSetRegValueMappedProperty.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1404490D4 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14044F0B8 (PiDevCfgResetDeviceDriverSettings.c)
 *     ExpWnfDeletePermanentName @ 0x140451204 (ExpWnfDeletePermanentName.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x1404512B0 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14045A8F0 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     CmpCompleteUnloadKey @ 0x14046FBB4 (CmpCompleteUnloadKey.c)
 *     RtlpQueryRegistryValues @ 0x140520470 (RtlpQueryRegistryValues.c)
 *     _CmSetDeviceRegPropWorker @ 0x140551408 (_CmSetDeviceRegPropWorker.c)
 *     PiProcessDriverInstance @ 0x140555A00 (PiProcessDriverInstance.c)
 *     PiQueryAndAllocateBootResources @ 0x140557908 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1405581F8 (PiQueryResourceRequirements.c)
 *     IopWriteResourceList @ 0x14055A3D0 (IopWriteResourceList.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14055A85C (IopWriteAllocatedResourcesToRegistry.c)
 *     IopReleaseDeviceResources @ 0x14055E154 (IopReleaseDeviceResources.c)
 *     PiDevCfgCopyDeviceKey @ 0x140589CD0 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgMigrateDevice @ 0x14059ADAC (PiDevCfgMigrateDevice.c)
 *     _PnpDeletePropertyWorker @ 0x14059B510 (_PnpDeletePropertyWorker.c)
 *     WdipSemLoadConfigInfo @ 0x1405AAF2C (WdipSemLoadConfigInfo.c)
 *     PopThermalHandlePreviousShutdown @ 0x1405B898C (PopThermalHandlePreviousShutdown.c)
 *     CmpSetVersionData @ 0x1405C1254 (CmpSetVersionData.c)
 *     PnpDriverLoadingFailed @ 0x1405C8154 (PnpDriverLoadingFailed.c)
 *     ExpSetCurrentUserUILanguage @ 0x1405DD320 (ExpSetCurrentUserUILanguage.c)
 *     RtlDeleteRegistryValue @ 0x1405E5410 (RtlDeleteRegistryValue.c)
 *     NtEnableLastKnownGood @ 0x1405E7AE0 (NtEnableLastKnownGood.c)
 *     PiRearrangeDeviceInstances @ 0x1405EC0A4 (PiRearrangeDeviceInstances.c)
 *     CmpDoReDoDeleteValue @ 0x1406A1EC4 (CmpDoReDoDeleteValue.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x1406BD9F0 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PnpSetRegistryRequirementsList @ 0x1406C13C4 (PnpSetRegistryRequirementsList.c)
 *     PnpSetRegistryResourceList @ 0x1406C1424 (PnpSetRegistryResourceList.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x1406C4FEC (PiDevCfgClearDeviceMigrationNode.c)
 *     PiCMCreateDevice @ 0x1406CF00C (PiCMCreateDevice.c)
 *     SmKmKeyGenNewKey @ 0x14073A9AC (SmKmKeyGenNewKey.c)
 *     ExpWnfDeletePermanentStateData @ 0x140762A7C (ExpWnfDeletePermanentStateData.c)
 *     _PnpCtxRegDeleteValue @ 0x14077E370 (_PnpCtxRegDeleteValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140780680 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1407819C0 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x1407831E4 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140783490 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x1407835B0 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x140783624 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x1407837E4 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     DrvDbDeleteObjectSubKey @ 0x1407865A0 (DrvDbDeleteObjectSubKey.c)
 *     PipHardwareConfigInit @ 0x1408275F0 (PipHardwareConfigInit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
