/*
 * XREFs of ZwEnumerateKey @ 0x14017DF00
 * Callers:
 *     BiZwEnumerateKey @ 0x140134A64 (BiZwEnumerateKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x140141770 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpProcessIFEOKeyFilter @ 0x14057E480 (RtlpProcessIFEOKeyFilter.c)
 *     _RegRtlEnumKey @ 0x14057E9B4 (_RegRtlEnumKey.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1405896A4 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140589748 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgCopyDeviceKey @ 0x140589CD0 (PiDevCfgCopyDeviceKey.c)
 *     EtwpEnableKeyProviders @ 0x1405A8170 (EtwpEnableKeyProviders.c)
 *     EtwpInitializeAutoLoggers @ 0x1405A8E4C (EtwpInitializeAutoLoggers.c)
 *     WdipSemLoadNextContextProvider @ 0x1405A9B4C (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadNextEndEvent @ 0x1405A9DC4 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadScenarioTable @ 0x1405AA0BC (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x1405AA3A8 (WdipSemLoadNextScenario.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x1405B6C58 (PopDetectSimulatedHeteroProcessors.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1405BD3D8 (_RtlpMuiRegLoadInstalled.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1405C25EC (RtlpUpdateDynamicTimeZones.c)
 *     CmpGetAcpiProfileInformation @ 0x1405C3C84 (CmpGetAcpiProfileInformation.c)
 *     PiDcInitUpdateProperties @ 0x1405C5CF0 (PiDcInitUpdateProperties.c)
 *     NtLockProductActivationKeys @ 0x1405CD0B0 (NtLockProductActivationKeys.c)
 *     pIoQueryBusDescription @ 0x1405D2CF4 (pIoQueryBusDescription.c)
 *     CmDeleteKeyRecursive @ 0x1406984C8 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x140698898 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x1406992C0 (CmpMoveBiosAliasTable.c)
 *     VrpPostEnumerateKey @ 0x1406A5E80 (VrpPostEnumerateKey.c)
 *     SepReadAndInsertCaps @ 0x140731814 (SepReadAndInsertCaps.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x14073F4D4 (WdipSemLoadLocalGroupPolicy.c)
 *     ApiSetpLoadSchemaExtensions @ 0x140764C80 (ApiSetpLoadSchemaExtensions.c)
 *     PipInitDeviceOverrideCache @ 0x140844E5C (PipInitDeviceOverrideCache.c)
 *     RegistryOverwriteCentralProcessor @ 0x140868B3C (RegistryOverwriteCentralProcessor.c)
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
