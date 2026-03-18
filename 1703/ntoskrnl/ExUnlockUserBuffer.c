/*
 * XREFs of ExUnlockUserBuffer @ 0x14003C654
 * Callers:
 *     ExGetSessionPoolTagInformation @ 0x1404C76E4 (ExGetSessionPoolTagInformation.c)
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 *     ExLockUserBuffer @ 0x14055C224 (ExLockUserBuffer.c)
 *     KdSystemDebugControl @ 0x1406AB880 (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x1406B3140 (MmGetSessionMappedViewInformation.c)
 *     MiCopyLargeVad @ 0x1406BE598 (MiCopyLargeVad.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14070C7F8 (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x140714C7C (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x140715094 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x140715108 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x14071517C (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x1407151F0 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1407199A0 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14071AFF4 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x14071C3B8 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x14071C988 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x14071CE24 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x14071D114 (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x14071D67C (NtQueryDriverEntryOrder.c)
 *     NtSystemDebugControl @ 0x140722478 (NtSystemDebugControl.c)
 * Callees:
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 */

void __fastcall ExUnlockUserBuffer(struct _MDL *a1)
{
  MmUnlockPages(a1);
  ExFreePoolWithTag(a1, 0);
}
