/*
 * XREFs of ZwCreateKey @ 0x14017DC60
 * Callers:
 *     BiZwCreateKey @ 0x140134B2C (BiZwCreateKey.c)
 *     PopOpenKey @ 0x14013A294 (PopOpenKey.c)
 *     OpenOrCreateKeyWithFlags @ 0x140288DE8 (OpenOrCreateKeyWithFlags.c)
 *     BapdpWriteEventDataToRegistry @ 0x140424CA0 (BapdpWriteEventDataToRegistry.c)
 *     BapdRegisterSiData @ 0x140424DC8 (BapdRegisterSiData.c)
 *     IopOpenRegistryKey @ 0x14046F3C4 (IopOpenRegistryKey.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1404E1054 (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpPutLicenseDataIntoRegistry @ 0x1404F33D8 (ExpPutLicenseDataIntoRegistry.c)
 *     RtlpGetRegistryHandle @ 0x140521EDC (RtlpGetRegistryHandle.c)
 *     _RegRtlCreateKeyTransacted @ 0x1405334F0 (_RegRtlCreateKeyTransacted.c)
 *     IopCreateRegistryKeyEx @ 0x14055A49C (IopCreateRegistryKeyEx.c)
 *     PspReadUserQuotaLimits @ 0x140582D4C (PspReadUserQuotaLimits.c)
 *     PiDevCfgCopyDeviceKey @ 0x140589CD0 (PiDevCfgCopyDeviceKey.c)
 *     CmpQueryHiveRedirectionFileList @ 0x140596AD0 (CmpQueryHiveRedirectionFileList.c)
 *     CmpAddToHiveFileList @ 0x14059A274 (CmpAddToHiveFileList.c)
 *     CmpSaveBootControlSet @ 0x1405A4B40 (CmpSaveBootControlSet.c)
 *     CmpInitializeRegistryNode @ 0x1405C0658 (CmpInitializeRegistryNode.c)
 *     CmpFinishSystemHivesLoad @ 0x1405C09E0 (CmpFinishSystemHivesLoad.c)
 *     CmpLinkKeyToHive @ 0x1405C0F68 (CmpLinkKeyToHive.c)
 *     CmpSetVersionData @ 0x1405C1254 (CmpSetVersionData.c)
 *     CmSetAcpiHwProfile @ 0x1405C35C0 (CmSetAcpiHwProfile.c)
 *     ArbBuildAssignmentOrdering @ 0x1405CEFB8 (ArbBuildAssignmentOrdering.c)
 *     ExpSetCurrentUserUILanguage @ 0x1405DD320 (ExpSetCurrentUserUILanguage.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1405EC790 (CmpUpdateReorganizeRegistryValues.c)
 *     CMFRegisterEventTime @ 0x1405EDF04 (CMFRegisterEventTime.c)
 *     PopInitializePowerPolicySimulate @ 0x1405EF5E0 (PopInitializePowerPolicySimulate.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x1405EFCA0 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 *     CmInitializeProcessor @ 0x1406947A8 (CmInitializeProcessor.c)
 *     CmpAddAcpiAliasEntry @ 0x140698634 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x140698898 (CmpCloneHwProfile.c)
 *     CmpDoReDoCreateKey @ 0x1406A1DB4 (CmpDoReDoCreateKey.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x1406A5980 (VrpCreateNamespaceNodePlaceholderKey.c)
 *     KsepRegistryCreateKey @ 0x1406DB998 (KsepRegistryCreateKey.c)
 *     PfpParametersWatcher @ 0x1406F4A60 (PfpParametersWatcher.c)
 *     SmcCacheManagerStart @ 0x14073C3A4 (SmcCacheManagerStart.c)
 *     ExpUpdateComPlusPackage @ 0x140755A68 (ExpUpdateComPlusPackage.c)
 *     ExUpdateOsPfnInRegistry @ 0x140757490 (ExUpdateOsPfnInRegistry.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x140762CA0 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     WheapWriteTriageDump @ 0x140763B4C (WheapWriteTriageDump.c)
 *     LogFwpRegisterWorker @ 0x1407D0D30 (LogFwpRegisterWorker.c)
 *     BapdpRegisterBitlockerStatus @ 0x140828630 (BapdpRegisterBitlockerStatus.c)
 *     BapdpRegisterResumeInformation @ 0x140828770 (BapdpRegisterResumeInformation.c)
 *     EmInitSystem @ 0x14083306C (EmInitSystem.c)
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 *     PfpParametersInitialize @ 0x14084EFE0 (PfpParametersInitialize.c)
 *     SaveNodeDistanceInformation @ 0x140850634 (SaveNodeDistanceInformation.c)
 *     PiLastGoodCopyKeyContents @ 0x140853670 (PiLastGoodCopyKeyContents.c)
 *     SepSecureBootSetRegistryKey @ 0x140854A4C (SepSecureBootSetRegistryKey.c)
 *     ArbInitializeOsInaccessibleRange @ 0x140855808 (ArbInitializeOsInaccessibleRange.c)
 *     MfgInitSystem @ 0x140857D7C (MfgInitSystem.c)
 *     CreateMiniNtBootKey @ 0x1408686C8 (CreateMiniNtBootKey.c)
 *     InitSafeBoot @ 0x140868964 (InitSafeBoot.c)
 *     CmpInitializeSystemBiosInformation @ 0x140868FE4 (CmpInitializeSystemBiosInformation.c)
 *     BapdpRegisterEDrvHintInfo @ 0x14086D05C (BapdpRegisterEDrvHintInfo.c)
 *     BapdpRegisterFwUpdateResults @ 0x14086D1B4 (BapdpRegisterFwUpdateResults.c)
 *     BapdpRegisterWmdResult @ 0x14086D3AC (BapdpRegisterWmdResult.c)
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
