/*
 * XREFs of KeQuerySystemTimePrecise @ 0x140110600
 * Callers:
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 *     PspUserThreadStartup @ 0x1404F8330 (PspUserThreadStartup.c)
 *     PspAllocateThread @ 0x14053F490 (PspAllocateThread.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 *     EtwpFinalizeHeader @ 0x14054E348 (EtwpFinalizeHeader.c)
 *     EtwpInitLoggerContext @ 0x14054F348 (EtwpInitLoggerContext.c)
 *     EtwpInitializeTimeStamp @ 0x14054F700 (EtwpInitializeTimeStamp.c)
 *     EtwpTraceSystemShutdown @ 0x14070C4E4 (EtwpTraceSystemShutdown.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140110620 (RtlGetSystemTimePrecise.c)
 */

LARGE_INTEGER __fastcall KeQuerySystemTimePrecise(LARGE_INTEGER *a1)
{
  LARGE_INTEGER result; // rax

  result = RtlGetSystemTimePrecise();
  *a1 = result;
  return result;
}
