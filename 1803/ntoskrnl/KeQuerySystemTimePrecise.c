/*
 * XREFs of KeQuerySystemTimePrecise @ 0x140132A60
 * Callers:
 *     PspUserThreadStartup @ 0x1404B8600 (PspUserThreadStartup.c)
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 *     EtwpFinalizeHeader @ 0x1405879E8 (EtwpFinalizeHeader.c)
 *     EtwpInitLoggerContext @ 0x1405893D4 (EtwpInitLoggerContext.c)
 *     EtwpInitializeTimeStamp @ 0x140589770 (EtwpInitializeTimeStamp.c)
 *     PspAllocateThread @ 0x1405B8EE8 (PspAllocateThread.c)
 *     EtwpTraceSystemShutdown @ 0x1407A9270 (EtwpTraceSystemShutdown.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140132A80 (RtlGetSystemTimePrecise.c)
 */

LARGE_INTEGER __fastcall KeQuerySystemTimePrecise(LARGE_INTEGER *a1)
{
  LARGE_INTEGER result; // rax

  result = RtlGetSystemTimePrecise();
  *a1 = result;
  return result;
}
