/*
 * XREFs of ExUnlockUserBuffer @ 0x140132124
 * Callers:
 *     ExGetSessionPoolTagInformation @ 0x1404477C8 (ExGetSessionPoolTagInformation.c)
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 *     ExLockUserBuffer @ 0x14056EEE8 (ExLockUserBuffer.c)
 *     KdSystemDebugControl @ 0x1406D6B20 (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x1406DF0E8 (MmGetSessionMappedViewInformation.c)
 *     MiCopyLargeVad @ 0x1406EB9F8 (MiCopyLargeVad.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140747E84 (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x140753E0C (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x140754220 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x1407542B8 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x140754350 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x1407543C4 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1407591A4 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14075A890 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x14075BC58 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x14075C268 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x14075C71C (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x14075CA24 (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x14075CF8C (NtQueryDriverEntryOrder.c)
 *     NtSystemDebugControl @ 0x140761F40 (NtSystemDebugControl.c)
 * Callees:
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall ExUnlockUserBuffer(struct _MDL *P)
{
  MmUnlockPages(P);
  ExFreePoolWithTag(P, 0);
}
