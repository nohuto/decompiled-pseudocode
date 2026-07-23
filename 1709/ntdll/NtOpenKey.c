/*
 * XREFs of NtOpenKey @ 0x1800A0300
 * Callers:
 *     RtlpLoadUserUIByPolicy @ 0x180004460 (RtlpLoadUserUIByPolicy.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x1800054C4 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800184E0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     ResCOpenRegistryKey @ 0x18001A938 (ResCOpenRegistryKey.c)
 *     RtlOpenCurrentUser @ 0x18004F8F0 (RtlOpenCurrentUser.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18004FA38 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x1800500B0 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlpLoadLanguageConfigList @ 0x18005302C (RtlpLoadLanguageConfigList.c)
 *     RtlCapabilityCheck @ 0x1800538D0 (RtlCapabilityCheck.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x180065878 (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpGetRegDwordValue @ 0x180065958 (EtwpGetRegDwordValue.c)
 *     EtwpQueryRegString @ 0x180065C78 (EtwpQueryRegString.c)
 *     RtlpQueryRegistryValues @ 0x180066AA0 (RtlpQueryRegistryValues.c)
 *     RtlpGetRegistryHandle @ 0x180067320 (RtlpGetRegistryHandle.c)
 *     WerpGlobalFlagsForProcess @ 0x180076860 (WerpGlobalFlagsForProcess.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180079A84 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180079C3C (RtlpProcessIFEOKeyFilter.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x180079D00 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     RtlpLookupCurDirSetting @ 0x18007E4E0 (RtlpLookupCurDirSetting.c)
 *     LdrpCodeAuthzInitialize @ 0x18007E7AC (LdrpCodeAuthzInitialize.c)
 *     RtlpTestHookInitialize @ 0x18007FCA0 (RtlpTestHookInitialize.c)
 *     RtlpNtOpenKey @ 0x1800815B0 (RtlpNtOpenKey.c)
 *     RXactpOpenTargetKey @ 0x18008447C (RXactpOpenTargetKey.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180084BB0 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008CB30 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x18008DBBC (RtlpGetNtProductTypeFromRegistry.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x18008FA10 (WerpEscalationIsWMRSendStringSet.c)
 *     WerpEscalationIsDisabled @ 0x18008FB78 (WerpEscalationIsDisabled.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D321C (LdrpInitializeExecutionOptions.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800DA724 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     RtlpLookupSafeCurDirList @ 0x1800DE5B4 (RtlpLookupSafeCurDirList.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800DF454 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlOpenModernAppOptionsKey @ 0x1800E0F30 (RtlOpenModernAppOptionsKey.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800E0FC0 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E17F0 (RtlSetImageMitigationPolicy.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC2B0 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800ED590 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800EDCC0 (RtlpSetPreferredUILanguages.c)
 *     RtlpHpOverrideGCInterval @ 0x1800F0948 (RtlpHpOverrideGCInterval.c)
 *     RtlpGetLocaleDataKey @ 0x1800F630C (RtlpGetLocaleDataKey.c)
 *     RtlpIsCustomLocale @ 0x1800F648C (RtlpIsCustomLocale.c)
 *     RtlOsDeploymentState @ 0x1800FAA90 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x1800FABD0 (RtlQueryValidationRunlevel.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800FB500 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1800FE3E0 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1800FF32C (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x1801025C0 (RtlpHpApplySegmentHeapConfigurations.c)
 *     OpenOrCreateKeyWithFlags @ 0x18010E6B0 (OpenOrCreateKeyWithFlags.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 18;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
