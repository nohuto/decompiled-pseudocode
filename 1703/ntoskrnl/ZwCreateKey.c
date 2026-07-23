/*
 * XREFs of ZwCreateKey @ 0x14017E2E0
 * Callers:
 *     BiZwCreateKey @ 0x14014CF64 (BiZwCreateKey.c)
 *     PopOpenKey @ 0x14014CFC0 (PopOpenKey.c)
 *     OpenOrCreateKeyWithFlags @ 0x14025F230 (OpenOrCreateKeyWithFlags.c)
 *     BapdRegisterSiData @ 0x14040EF8C (BapdRegisterSiData.c)
 *     BapdpWriteEventDataToRegistry @ 0x14040F264 (BapdpWriteEventDataToRegistry.c)
 *     PspReadUserQuotaLimits @ 0x14044892C (PspReadUserQuotaLimits.c)
 *     IopOpenRegistryKey @ 0x14044DB84 (IopOpenRegistryKey.c)
 *     ExpPutLicenseDataIntoRegistry @ 0x14045D6C4 (ExpPutLicenseDataIntoRegistry.c)
 *     _RegRtlCreateKeyTransacted @ 0x140489954 (_RegRtlCreateKeyTransacted.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1404C01E8 (ExpWnfGetNameStoreRegistryRoot.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1404CBB30 (CmpQueryHiveRedirectionFileList.c)
 *     CmpAddToHiveFileList @ 0x1404CBF94 (CmpAddToHiveFileList.c)
 *     RtlpGetRegistryHandle @ 0x140556BB8 (RtlpGetRegistryHandle.c)
 *     PopInitializePowerPolicySimulate @ 0x140585A34 (PopInitializePowerPolicySimulate.c)
 *     ExpSetCurrentUserUILanguage @ 0x140587598 (ExpSetCurrentUserUILanguage.c)
 *     PiDevCfgCopyDeviceKey @ 0x140593BA4 (PiDevCfgCopyDeviceKey.c)
 *     CmpFinishSystemHivesLoad @ 0x1405A3DE0 (CmpFinishSystemHivesLoad.c)
 *     CmpLinkKeyToHive @ 0x1405A4368 (CmpLinkKeyToHive.c)
 *     CmpSetVersionData @ 0x1405A48E0 (CmpSetVersionData.c)
 *     CmpInitializeRegistryNode @ 0x1405AF4FC (CmpInitializeRegistryNode.c)
 *     IopCreateRegistryKeyEx @ 0x1405B27F4 (IopCreateRegistryKeyEx.c)
 *     ArbBuildAssignmentOrdering @ 0x1405B3378 (ArbBuildAssignmentOrdering.c)
 *     CmSetAcpiHwProfile @ 0x1405C97A8 (CmSetAcpiHwProfile.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1405D1584 (CmpUpdateReorganizeRegistryValues.c)
 *     CMFRegisterEventTime @ 0x1405D2DD0 (CMFRegisterEventTime.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x1405D3B68 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 *     CmInitializeProcessor @ 0x14066A040 (CmInitializeProcessor.c)
 *     CmpAddAcpiAliasEntry @ 0x14066E13C (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x14066E3A0 (CmpCloneHwProfile.c)
 *     CmpDoReDoCreateKey @ 0x140677878 (CmpDoReDoCreateKey.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x14067B1CC (VrpCreateNamespaceNodePlaceholderKey.c)
 *     KsepRegistryCreateKey @ 0x1406B01EC (KsepRegistryCreateKey.c)
 *     PfpParametersWatcher @ 0x1406C4F40 (PfpParametersWatcher.c)
 *     SmcCacheManagerStart @ 0x1407040A0 (SmcCacheManagerStart.c)
 *     ExpUpdateComPlusPackage @ 0x14071633C (ExpUpdateComPlusPackage.c)
 *     ExUpdateOsPfnInRegistry @ 0x140717D10 (ExUpdateOsPfnInRegistry.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1407231F0 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     WheapWriteTriageDump @ 0x140724084 (WheapWriteTriageDump.c)
 *     LogFwpRegisterWorker @ 0x140757F40 (LogFwpRegisterWorker.c)
 *     IopInitializePlugPlayServices @ 0x1407FAEC0 (IopInitializePlugPlayServices.c)
 *     EmInitSystem @ 0x140804CF0 (EmInitSystem.c)
 *     PiLastGoodCopyKeyContents @ 0x14080CC70 (PiLastGoodCopyKeyContents.c)
 *     BapdpRegisterResumeInformation @ 0x1408122B8 (BapdpRegisterResumeInformation.c)
 *     BapdpRegisterBitlockerStatus @ 0x1408123EC (BapdpRegisterBitlockerStatus.c)
 *     PfpParametersInitialize @ 0x14081DB80 (PfpParametersInitialize.c)
 *     SaveNodeDistanceInformation @ 0x140820034 (SaveNodeDistanceInformation.c)
 *     SepSecureBootSetRegistryKey @ 0x140823554 (SepSecureBootSetRegistryKey.c)
 *     ArbInitializeOsInaccessibleRange @ 0x1408242C4 (ArbInitializeOsInaccessibleRange.c)
 *     MfgInitSystem @ 0x140826610 (MfgInitSystem.c)
 *     CreateMiniNtBootKey @ 0x1408317D0 (CreateMiniNtBootKey.c)
 *     InitSafeBoot @ 0x140831A70 (InitSafeBoot.c)
 *     CmpInitializeSystemBiosInformation @ 0x1408320F0 (CmpInitializeSystemBiosInformation.c)
 *     BapdpRegisterEDrvHintInfo @ 0x140835E24 (BapdpRegisterEDrvHintInfo.c)
 *     BapdpRegisterFwUpdateResults @ 0x140835F7C (BapdpRegisterFwUpdateResults.c)
 *     BapdpRegisterWmdResult @ 0x140836174 (BapdpRegisterWmdResult.c)
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
