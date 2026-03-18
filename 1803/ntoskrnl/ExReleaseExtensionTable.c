/*
 * XREFs of ExReleaseExtensionTable @ 0x14009C108
 * Callers:
 *     EtwpFreeLoggerContext @ 0x140493884 (EtwpFreeLoggerContext.c)
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
 *     PcwUnregister @ 0x1407C63B0 (PcwUnregister.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 */

void __fastcall ExReleaseExtensionTable(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection(a1 + 8);
}
