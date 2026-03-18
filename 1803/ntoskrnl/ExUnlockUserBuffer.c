/*
 * XREFs of ExUnlockUserBuffer @ 0x1400B9118
 * Callers:
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 *     ExGetSessionPoolTagInformation @ 0x14055F754 (ExGetSessionPoolTagInformation.c)
 *     ExLockUserBuffer @ 0x14055FA68 (ExLockUserBuffer.c)
 *     KdSystemDebugControl @ 0x140740980 (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x140749FEC (MmGetSessionMappedViewInformation.c)
 *     MiCopyLargeVad @ 0x140755448 (MiCopyLargeVad.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1407A95C8 (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x1407BABAC (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x1407BAFCC (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x1407BB064 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x1407BB0FC (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x1407BB170 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1407C0090 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1407C17BC (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x1407C2C40 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1407C3288 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1407C3738 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x1407C3A44 (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x1407C3FAC (NtQueryDriverEntryOrder.c)
 *     NtSystemDebugControl @ 0x1407C9A08 (NtSystemDebugControl.c)
 * Callees:
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall ExUnlockUserBuffer(struct _MDL *P)
{
  MmUnlockPages(P);
  ExFreePoolWithTag(P, 0);
}
