/*
 * XREFs of NtQueryValueKey @ 0x1800A03A0
 * Callers:
 *     _ResQueryValueKey @ 0x18001B4B4 (_ResQueryValueKey.c)
 *     LdrpQueryValueKey @ 0x1800537A0 (LdrpQueryValueKey.c)
 *     RtlCapabilityCheck @ 0x1800538D0 (RtlCapabilityCheck.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x180065878 (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpGetRegDwordValue @ 0x180065958 (EtwpGetRegDwordValue.c)
 *     EtwpQueryRegString @ 0x180065C78 (EtwpQueryRegString.c)
 *     RtlpQueryRegistryValues @ 0x180066AA0 (RtlpQueryRegistryValues.c)
 *     WerpGlobalFlagsForProcess @ 0x180076860 (WerpGlobalFlagsForProcess.c)
 *     RtlQueryImageFileKeyOption @ 0x180076CB0 (RtlQueryImageFileKeyOption.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180079C3C (RtlpProcessIFEOKeyFilter.c)
 *     RtlpLookupCurDirSetting @ 0x18007E4E0 (RtlpLookupCurDirSetting.c)
 *     LdrpCodeAuthzInitialize @ 0x18007E7AC (LdrpCodeAuthzInitialize.c)
 *     RtlpTestHookInitialize @ 0x18007FCA0 (RtlpTestHookInitialize.c)
 *     RtlpNtQueryValueKey @ 0x18007FD70 (RtlpNtQueryValueKey.c)
 *     ReadUlongFromKey @ 0x180083960 (ReadUlongFromKey.c)
 *     RtlInitializeRXact @ 0x18008BCC0 (RtlInitializeRXact.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008C290 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x18008DBBC (RtlpGetNtProductTypeFromRegistry.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CEA00 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x1800CED7C (LdrpAppxGetBinaryNameKeyInformation.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D2DEC (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D321C (LdrpInitializeExecutionOptions.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800D6570 (LdrpQueryIllegalCWDDevices.c)
 *     AVrfInitializeVerifier @ 0x1800D9BE0 (AVrfInitializeVerifier.c)
 *     WerpEscalationReadUlongFromKey @ 0x1800DD9D0 (WerpEscalationReadUlongFromKey.c)
 *     RtlpLookupSafeCurDirList @ 0x1800DE5B4 (RtlpLookupSafeCurDirList.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800DF454 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800E0FC0 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E17F0 (RtlSetImageMitigationPolicy.c)
 *     RtlpHpOverrideGCInterval @ 0x1800F0948 (RtlpHpOverrideGCInterval.c)
 *     RtlpGetUserLocaleName @ 0x1800F63B4 (RtlpGetUserLocaleName.c)
 *     RtlpIsCustomLocale @ 0x1800F648C (RtlpIsCustomLocale.c)
 *     RtlOsDeploymentState @ 0x1800FAA90 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x1800FABD0 (RtlQueryValidationRunlevel.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1800FE70C (_RtlpMuiRegPopulateBaseLanguages.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x1801025C0 (RtlpHpApplySegmentHeapConfigurations.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18010E524 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  NTSTATUS result; // eax

  result = 23;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
