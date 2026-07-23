/*
 * XREFs of ZwEnumerateKey @ 0x14017E580
 * Callers:
 *     BiZwEnumerateKey @ 0x14014CEFC (BiZwEnumerateKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x140157150 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140443CEC (RtlpProcessIFEOKeyFilter.c)
 *     pIoQueryBusDescription @ 0x1405866A8 (pIoQueryBusDescription.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1405930D4 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140593178 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgCopyDeviceKey @ 0x140593BA4 (PiDevCfgCopyDeviceKey.c)
 *     PiDcInitUpdateProperties @ 0x14059DB24 (PiDcInitUpdateProperties.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1405A5EB4 (RtlpUpdateDynamicTimeZones.c)
 *     _RegRtlEnumKey @ 0x1405AA7F4 (_RegRtlEnumKey.c)
 *     WdipSemLoadScenarioTable @ 0x1405ADC7C (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x1405ADF68 (WdipSemLoadNextScenario.c)
 *     EtwpEnableKeyProviders @ 0x1405AE660 (EtwpEnableKeyProviders.c)
 *     NtLockProductActivationKeys @ 0x1405AF814 (NtLockProductActivationKeys.c)
 *     EtwpInitializeAutoLoggers @ 0x1405B059C (EtwpInitializeAutoLoggers.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1405B7714 (_RtlpMuiRegLoadInstalled.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x1405C0A84 (PopDetectSimulatedHeteroProcessors.c)
 *     CmpGetAcpiProfileInformation @ 0x1405C9074 (CmpGetAcpiProfileInformation.c)
 *     WdipSemLoadNextEndEvent @ 0x1405C9FD8 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x1405CA6D0 (WdipSemLoadNextContextProvider.c)
 *     CmDeleteKeyRecursive @ 0x14066DFD0 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x14066E3A0 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x14066EDC8 (CmpMoveBiosAliasTable.c)
 *     VrpPostEnumerateKey @ 0x14067B6B4 (VrpPostEnumerateKey.c)
 *     SepReadAndInsertCaps @ 0x1406F9DD4 (SepReadAndInsertCaps.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x140705E00 (WdipSemLoadLocalGroupPolicy.c)
 *     ApiSetpLoadSchemaExtensions @ 0x1407251B0 (ApiSetpLoadSchemaExtensions.c)
 *     PipInitDeviceOverrideCache @ 0x1407F8168 (PipInitDeviceOverrideCache.c)
 *     RegistryOverwriteCentralProcessor @ 0x140831C48 (RegistryOverwriteCentralProcessor.c)
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
