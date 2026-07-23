/*
 * XREFs of ZwEnumerateKey @ 0x1401A7B00
 * Callers:
 *     BiZwEnumerateKey @ 0x140164358 (BiZwEnumerateKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x140179A88 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpProcessIFEOKeyFilter @ 0x14056CFD0 (RtlpProcessIFEOKeyFilter.c)
 *     PiDevCfgCopyDeviceKey @ 0x1405D81C8 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1405DAA00 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1405DAAA4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     _RegRtlEnumKey @ 0x1405E0774 (_RegRtlEnumKey.c)
 *     pIoQueryBusDescription @ 0x14060FD74 (pIoQueryBusDescription.c)
 *     PiDcInitUpdateProperties @ 0x140622D70 (PiDcInitUpdateProperties.c)
 *     EtwpEnableKeyProviders @ 0x14062A460 (EtwpEnableKeyProviders.c)
 *     CmpGetAcpiProfileInformation @ 0x14062D44C (CmpGetAcpiProfileInformation.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1406300CC (RtlpUpdateDynamicTimeZones.c)
 *     _RtlpMuiRegLoadInstalled @ 0x140635858 (_RtlpMuiRegLoadInstalled.c)
 *     WdipSemLoadNextEndEvent @ 0x140639574 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x14063986C (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140639AE4 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140639ECC (WdipSemLoadNextScenario.c)
 *     NtLockProductActivationKeys @ 0x14063B550 (NtLockProductActivationKeys.c)
 *     EtwpInitializeAutoLoggers @ 0x14063DCC0 (EtwpInitializeAutoLoggers.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x1406402F4 (PopDetectSimulatedHeteroProcessors.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x140654768 (EtwpLoadMicroarchitecturalPmcs.c)
 *     CmDeleteKeyRecursive @ 0x1406FBD00 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x1406FC0D0 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x1406FCAF8 (CmpMoveBiosAliasTable.c)
 *     VrpPostEnumerateKey @ 0x14070A514 (VrpPostEnumerateKey.c)
 *     SepReadAndInsertCaps @ 0x140795114 (SepReadAndInsertCaps.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1407A1848 (WdipSemLoadLocalGroupPolicy.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1407AB52C (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1407AB938 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1407ABDF4 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     ApiSetpLoadSchemaExtensions @ 0x1407CC960 (ApiSetpLoadSchemaExtensions.c)
 *     AslRegistryEnumKey @ 0x1407D93EC (AslRegistryEnumKey.c)
 *     PipInitDeviceOverrideCache @ 0x1408B5318 (PipInitDeviceOverrideCache.c)
 *     RegistryOverwriteCentralProcessor @ 0x1408DD314 (RegistryOverwriteCentralProcessor.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwEnumerateKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
