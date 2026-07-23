/*
 * XREFs of ZwDeleteValueKey @ 0x14017F900
 * Callers:
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1401572B0 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     BiZwDeleteValueKey @ 0x140265F00 (BiZwDeleteValueKey.c)
 *     ExpWnfDeletePermanentName @ 0x1404390F4 (ExpWnfDeletePermanentName.c)
 *     CmpCompleteUnloadKey @ 0x1404CD454 (CmpCompleteUnloadKey.c)
 *     PiQueryResourceRequirements @ 0x1404DA4E0 (PiQueryResourceRequirements.c)
 *     RtlpQueryRegistryValues @ 0x14055642C (RtlpQueryRegistryValues.c)
 *     PiQueryAndAllocateBootResources @ 0x14055B814 (PiQueryAndAllocateBootResources.c)
 *     IopReleaseDeviceResources @ 0x1405705A0 (IopReleaseDeviceResources.c)
 *     _PnpDeletePropertyWorker @ 0x1405757E8 (_PnpDeletePropertyWorker.c)
 *     ExpSetCurrentUserUILanguage @ 0x140587598 (ExpSetCurrentUserUILanguage.c)
 *     PiDevCfgCopyDeviceKey @ 0x140593BA4 (PiDevCfgCopyDeviceKey.c)
 *     NtEnableLastKnownGood @ 0x140597E60 (NtEnableLastKnownGood.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14059A2E0 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PiProcessDriverInstance @ 0x14059C9D0 (PiProcessDriverInstance.c)
 *     CmpSetVersionData @ 0x1405A48E0 (CmpSetVersionData.c)
 *     PopThermalHandlePreviousShutdown @ 0x1405A8504 (PopThermalHandlePreviousShutdown.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x1405B0EE4 (IopWriteAllocatedResourcesToRegistry.c)
 *     IopWriteResourceList @ 0x1405B2728 (IopWriteResourceList.c)
 *     _CmSetDeviceRegPropWorker @ 0x1405C2018 (_CmSetDeviceRegPropWorker.c)
 *     WdipSemLoadConfigInfo @ 0x1405CA514 (WdipSemLoadConfigInfo.c)
 *     RtlDeleteRegistryValue @ 0x1405CF770 (RtlDeleteRegistryValue.c)
 *     PnpDriverLoadingFailed @ 0x1405D38F8 (PnpDriverLoadingFailed.c)
 *     CmpDoReDoDeleteValue @ 0x140677988 (CmpDoReDoDeleteValue.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x140691CA0 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PnpSetRegistryRequirementsList @ 0x140695604 (PnpSetRegistryRequirementsList.c)
 *     PnpSetRegistryResourceList @ 0x140695664 (PnpSetRegistryResourceList.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x1406991C4 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14069BB20 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiCMCreateDevice @ 0x1406A3D38 (PiCMCreateDevice.c)
 *     PiRearrangeDeviceInstances @ 0x1406A70F0 (PiRearrangeDeviceInstances.c)
 *     SmKmKeyGenNewKey @ 0x1407026A8 (SmKmKeyGenNewKey.c)
 *     ExpWnfDeletePermanentStateData @ 0x140722FCC (ExpWnfDeletePermanentStateData.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x14073BF60 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14073D28C (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x14073EC90 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x14073EF3C (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14073F090 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x14073F1B0 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x14073F224 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x14073F3E4 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     DrvDbDeleteObjectSubKey @ 0x140742778 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140743E28 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetRegValueMappedProperty @ 0x140745158 (DrvDbSetRegValueMappedProperty.c)
 *     VfUtilClearOneBootSettings @ 0x1407650A8 (VfUtilClearOneBootSettings.c)
 *     PipHardwareConfigInit @ 0x14080CF9C (PipHardwareConfigInit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
