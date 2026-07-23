/*
 * XREFs of ZwCreateKey @ 0x1401A7860
 * Callers:
 *     BiZwCreateKey @ 0x14016440C (BiZwCreateKey.c)
 *     PopOpenKey @ 0x14016EC30 (PopOpenKey.c)
 *     BapdpMarshallBootDataToRegistry @ 0x140171744 (BapdpMarshallBootDataToRegistry.c)
 *     OpenOrCreateKeyWithFlags @ 0x1402BE288 (OpenOrCreateKeyWithFlags.c)
 *     BapdGetISRegistryKey @ 0x1404787BC (BapdGetISRegistryKey.c)
 *     BapdpWriteEventDataToRegistry @ 0x140478CA0 (BapdpWriteEventDataToRegistry.c)
 *     RtlpGetRegistryHandle @ 0x140506008 (RtlpGetRegistryHandle.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x140517AAC (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpPutLicenseDataIntoRegistry @ 0x14054B684 (ExpPutLicenseDataIntoRegistry.c)
 *     PspReadUserQuotaLimits @ 0x140572174 (PspReadUserQuotaLimits.c)
 *     CmpQueryHiveRedirectionFileList @ 0x14057F47C (CmpQueryHiveRedirectionFileList.c)
 *     CmpAddToHiveFileList @ 0x140581F48 (CmpAddToHiveFileList.c)
 *     _RegRtlCreateKeyTransacted @ 0x140587220 (_RegRtlCreateKeyTransacted.c)
 *     PiDevCfgCopyDeviceKey @ 0x1405D81C8 (PiDevCfgCopyDeviceKey.c)
 *     IopOpenRegistryKey @ 0x1405F6BA8 (IopOpenRegistryKey.c)
 *     IopCreateRegistryKeyEx @ 0x1405F7BC4 (IopCreateRegistryKeyEx.c)
 *     ExpSetCurrentUserUILanguage @ 0x14060E6CC (ExpSetCurrentUserUILanguage.c)
 *     PopInitializePowerPolicySimulate @ 0x140613A48 (PopInitializePowerPolicySimulate.c)
 *     ArbBuildAssignmentOrdering @ 0x14061888C (ArbBuildAssignmentOrdering.c)
 *     CmSetAcpiHwProfile @ 0x14062CD80 (CmSetAcpiHwProfile.c)
 *     CmpInitializeRegistryNode @ 0x14062E0B4 (CmpInitializeRegistryNode.c)
 *     CmpFinishSystemHivesLoad @ 0x14062E4B0 (CmpFinishSystemHivesLoad.c)
 *     CmpLinkKeyToHive @ 0x14062EA60 (CmpLinkKeyToHive.c)
 *     CmpSetVersionData @ 0x14062ED3C (CmpSetVersionData.c)
 *     IoOpenDriverRegistryKey @ 0x140648B50 (IoOpenDriverRegistryKey.c)
 *     PiCreateRedirectedStateRoot @ 0x140648D7C (PiCreateRedirectedStateRoot.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14065068C (CmpUpdateReorganizeRegistryValues.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x1406511D4 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 *     CmpSaveBootControlSet @ 0x1406EB510 (CmpSaveBootControlSet.c)
 *     CmInitializeProcessor @ 0x1406F7C08 (CmInitializeProcessor.c)
 *     CmpAddAcpiAliasEntry @ 0x1406FBE6C (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x1406FC0D0 (CmpCloneHwProfile.c)
 *     CmpDoReDoCreateKey @ 0x140706F88 (CmpDoReDoCreateKey.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x14070A004 (VrpCreateNamespaceNodePlaceholderKey.c)
 *     PiCreateRegistryPath @ 0x140724DC8 (PiCreateRegistryPath.c)
 *     KsepRegistryCreateKey @ 0x140746534 (KsepRegistryCreateKey.c)
 *     PfpParametersWatcher @ 0x14075CDD0 (PfpParametersWatcher.c)
 *     SmcCacheManagerStart @ 0x14079F3A8 (SmcCacheManagerStart.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1407AA830 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1407AAA00 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1407AB52C (EtwpFindMatchingPmcRegistryGroup.c)
 *     ExpUpdateComPlusPackage @ 0x1407BC534 (ExpUpdateComPlusPackage.c)
 *     ExUpdateOsPfnInRegistry @ 0x1407BE110 (ExUpdateOsPfnInRegistry.c)
 *     CMFRegisterEventTime @ 0x1407C90BC (CMFRegisterEventTime.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1407CA784 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     WheapWriteTriageDump @ 0x1407CB834 (WheapWriteTriageDump.c)
 *     LogFwpRegisterWorker @ 0x14083C890 (LogFwpRegisterWorker.c)
 *     IopInitializePlugPlayServices @ 0x1408A3B0C (IopInitializePlugPlayServices.c)
 *     BapdpRegisterBitlockerStatus @ 0x1408A4B48 (BapdpRegisterBitlockerStatus.c)
 *     BapdpRegisterResumeInformation @ 0x1408A4C88 (BapdpRegisterResumeInformation.c)
 *     EmInitSystem @ 0x1408A92A4 (EmInitSystem.c)
 *     CmpCreateControlSet @ 0x1408AE63C (CmpCreateControlSet.c)
 *     CmpCreateHardwareProfiles @ 0x1408AE8A8 (CmpCreateHardwareProfiles.c)
 *     CmpInitializeHardwareConfiguration @ 0x1408AEDBC (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1408AEF00 (CmpInitializeMachineDependentConfiguration.c)
 *     CmInitSystem1 @ 0x1408B04E0 (CmInitSystem1.c)
 *     PfpParametersInitialize @ 0x1408C0424 (PfpParametersInitialize.c)
 *     PiLastGoodCopyKeyContents @ 0x1408C5524 (PiLastGoodCopyKeyContents.c)
 *     SepSecureBootSetRegistryKey @ 0x1408C6D54 (SepSecureBootSetRegistryKey.c)
 *     ArbInitializeOsInaccessibleRange @ 0x1408C79DC (ArbInitializeOsInaccessibleRange.c)
 *     SaveNodeDistanceInformation @ 0x1408C9294 (SaveNodeDistanceInformation.c)
 *     MfgInitSystem @ 0x1408C9EE8 (MfgInitSystem.c)
 *     CreateMiniNtBootKey @ 0x1408DCEA0 (CreateMiniNtBootKey.c)
 *     InitSafeBoot @ 0x1408DD13C (InitSafeBoot.c)
 *     CmpAddAliasEntry @ 0x1408DD524 (CmpAddAliasEntry.c)
 *     CmpInitializeSystemBiosInformation @ 0x1408DD818 (CmpInitializeSystemBiosInformation.c)
 *     CmpSetNetworkValue @ 0x1408DD978 (CmpSetNetworkValue.c)
 *     BapdpRegisterEDrvHintInfo @ 0x1408E1DC4 (BapdpRegisterEDrvHintInfo.c)
 *     BapdpRegisterFwUpdateResults @ 0x1408E1F1C (BapdpRegisterFwUpdateResults.c)
 *     BapdpRegisterWmdResult @ 0x1408E2114 (BapdpRegisterWmdResult.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateKey(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        PULONG Disposition)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
