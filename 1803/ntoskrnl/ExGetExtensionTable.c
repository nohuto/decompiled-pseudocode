/*
 * XREFs of ExGetExtensionTable @ 0x14009C120
 * Callers:
 *     IopIoRateStartRateControl @ 0x14000182C (IopIoRateStartRateControl.c)
 *     IoStopIoRateControl @ 0x140001960 (IoStopIoRateControl.c)
 *     KiAbProcessThreadLocks @ 0x1400640E0 (KiAbProcessThreadLocks.c)
 *     ExpBoostIoAfterAcquire @ 0x1400884C0 (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPriorityBoost @ 0x1400EE7A0 (ExpApplyPriorityBoost.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     BCryptCloseAlgorithmProvider @ 0x14017911C (BCryptCloseAlgorithmProvider.c)
 *     PsQueryActivityModerationUserSettings @ 0x1402842E0 (PsQueryActivityModerationUserSettings.c)
 *     PsSetExeModerationState @ 0x140284344 (PsSetExeModerationState.c)
 *     BCryptDecrypt @ 0x14029F30C (BCryptDecrypt.c)
 *     BCryptDestroyKey @ 0x14029F3C8 (BCryptDestroyKey.c)
 *     BCryptEncrypt @ 0x14029F41C (BCryptEncrypt.c)
 *     BCryptGenRandom @ 0x14029F4EC (BCryptGenRandom.c)
 *     VmpPrefetchVirtualAddresses @ 0x1402AC55C (VmpPrefetchVirtualAddresses.c)
 *     PspCallProcessNotifyRoutines @ 0x1404B655C (PspCallProcessNotifyRoutines.c)
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 *     PspChangeProcessExecutionState @ 0x140532AF8 (PspChangeProcessExecutionState.c)
 *     PcwCloseInstance @ 0x140539B50 (PcwCloseInstance.c)
 *     PcwCreateInstance @ 0x140539B90 (PcwCreateInstance.c)
 *     BCryptGetProperty @ 0x14053A888 (BCryptGetProperty.c)
 *     BCryptDestroyHash @ 0x14053A914 (BCryptDestroyHash.c)
 *     BCryptFinishHash @ 0x14053A964 (BCryptFinishHash.c)
 *     BCryptCreateHash @ 0x14053A9D8 (BCryptCreateHash.c)
 *     BCryptHashData @ 0x14053AA68 (BCryptHashData.c)
 *     PcwAddInstance @ 0x14053AAE0 (PcwAddInstance.c)
 *     LsaFreeReturnBuffer @ 0x14053AF30 (LsaFreeReturnBuffer.c)
 *     LsaDeregisterLogonProcess @ 0x1405F40D0 (LsaDeregisterLogonProcess.c)
 *     PcwRegister @ 0x140605730 (PcwRegister.c)
 *     LsaRegisterLogonProcess @ 0x140606050 (LsaRegisterLogonProcess.c)
 *     LsaLookupAuthenticationPackage @ 0x1406060C0 (LsaLookupAuthenticationPackage.c)
 *     BCryptOpenAlgorithmProvider @ 0x140634040 (BCryptOpenAlgorithmProvider.c)
 *     PspNetRateControlDispatch @ 0x14077BAB4 (PspNetRateControlDispatch.c)
 *     BCryptGenerateSymmetricKey @ 0x14078C64C (BCryptGenerateSymmetricKey.c)
 *     BCryptImportKeyPair @ 0x14078C6EC (BCryptImportKeyPair.c)
 *     BCryptSetProperty @ 0x14078C774 (BCryptSetProperty.c)
 *     LsaCallAuthenticationPackage @ 0x14078C800 (LsaCallAuthenticationPackage.c)
 *     LsaLogonUser @ 0x14078C8B0 (LsaLogonUser.c)
 *     EtwpConstructIptData @ 0x1407B9514 (EtwpConstructIptData.c)
 *     PcwUnregister @ 0x1407C63B0 (PcwUnregister.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 */

unsigned __int64 __fastcall ExGetExtensionTable(struct _EX_RUNDOWN_REF *a1)
{
  if ( a1 && ExAcquireRundownProtection(a1 + 8) )
    return a1[10].Count;
  else
    return 0LL;
}
