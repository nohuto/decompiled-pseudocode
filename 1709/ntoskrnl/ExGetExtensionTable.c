/*
 * XREFs of ExGetExtensionTable @ 0x14011BEF0
 * Callers:
 *     IopIoRateStartRateControl @ 0x14000746C (IopIoRateStartRateControl.c)
 *     IoStopIoRateControl @ 0x140007DDC (IoStopIoRateControl.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140080900 (ExpAcquireResourceExclusiveLite.c)
 *     ExpApplyPriorityBoost @ 0x14008B550 (ExpApplyPriorityBoost.c)
 *     KiAbProcessThreadLocks @ 0x1400A7650 (KiAbProcessThreadLocks.c)
 *     ExpBoostIoAfterAcquire @ 0x1400F19F0 (ExpBoostIoAfterAcquire.c)
 *     BCryptCloseAlgorithmProvider @ 0x140147534 (BCryptCloseAlgorithmProvider.c)
 *     PsQueryActivityModerationUserSettings @ 0x14024DF70 (PsQueryActivityModerationUserSettings.c)
 *     PsSetExeModerationState @ 0x14024DFD4 (PsSetExeModerationState.c)
 *     BCryptDecrypt @ 0x14025DA34 (BCryptDecrypt.c)
 *     BCryptDestroyKey @ 0x14025DAF0 (BCryptDestroyKey.c)
 *     BCryptEncrypt @ 0x14025DB44 (BCryptEncrypt.c)
 *     BCryptGenRandom @ 0x14025DC14 (BCryptGenRandom.c)
 *     VmpPrefetchVirtualAddresses @ 0x14027936C (VmpPrefetchVirtualAddresses.c)
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 *     PspCallProcessNotifyRoutines @ 0x1404D265C (PspCallProcessNotifyRoutines.c)
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     PspChangeProcessExecutionState @ 0x14050DC70 (PspChangeProcessExecutionState.c)
 *     PcwCloseInstance @ 0x140573130 (PcwCloseInstance.c)
 *     PcwCreateInstance @ 0x140573170 (PcwCreateInstance.c)
 *     BCryptGetProperty @ 0x1405733A8 (BCryptGetProperty.c)
 *     BCryptDestroyHash @ 0x140573434 (BCryptDestroyHash.c)
 *     BCryptFinishHash @ 0x140573484 (BCryptFinishHash.c)
 *     BCryptCreateHash @ 0x1405734F8 (BCryptCreateHash.c)
 *     BCryptHashData @ 0x140573588 (BCryptHashData.c)
 *     PcwAddInstance @ 0x140573600 (PcwAddInstance.c)
 *     BCryptOpenAlgorithmProvider @ 0x1405CB520 (BCryptOpenAlgorithmProvider.c)
 *     PcwRegister @ 0x1405D8750 (PcwRegister.c)
 *     LsaFreeReturnBuffer @ 0x1405E75E0 (LsaFreeReturnBuffer.c)
 *     LsaLookupAuthenticationPackage @ 0x1405EFF80 (LsaLookupAuthenticationPackage.c)
 *     LsaRegisterLogonProcess @ 0x1405F0BC0 (LsaRegisterLogonProcess.c)
 *     LsaDeregisterLogonProcess @ 0x1405F2EB0 (LsaDeregisterLogonProcess.c)
 *     PspNetRateControlDispatch @ 0x140717A94 (PspNetRateControlDispatch.c)
 *     BCryptGenerateSymmetricKey @ 0x140728198 (BCryptGenerateSymmetricKey.c)
 *     BCryptImportKeyPair @ 0x140728238 (BCryptImportKeyPair.c)
 *     BCryptSetProperty @ 0x1407282C0 (BCryptSetProperty.c)
 *     LsaCallAuthenticationPackage @ 0x140728350 (LsaCallAuthenticationPackage.c)
 *     LsaLogonUser @ 0x140728400 (LsaLogonUser.c)
 *     PcwUnregister @ 0x14075F0B0 (PcwUnregister.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 */

unsigned __int64 __fastcall ExGetExtensionTable(struct _EX_RUNDOWN_REF *a1)
{
  if ( a1 && ExAcquireRundownProtection_0(a1 + 8) )
    return a1[10].Count;
  else
    return 0LL;
}
