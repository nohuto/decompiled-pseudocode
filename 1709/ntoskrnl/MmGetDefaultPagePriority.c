/*
 * XREFs of MmGetDefaultPagePriority @ 0x140126770
 * Callers:
 *     PfTAccessTracingCleanup @ 0x1404312A0 (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140431394 (PfTAccessTracingStart.c)
 *     PfSnAsyncPrefetchWorker @ 0x140440810 (PfSnAsyncPrefetchWorker.c)
 *     PspApplyIFEOPerfOptions @ 0x14044CC7C (PspApplyIFEOPerfOptions.c)
 *     PfSnCheckActionsNeeded @ 0x140453444 (PfSnCheckActionsNeeded.c)
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 *     NtSetInformationThread @ 0x1404CD4F0 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     PfpLogEventRequest @ 0x1406F257C (PfpLogEventRequest.c)
 *     ExpDebuggerWorker @ 0x140796030 (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

__int64 MmGetDefaultPagePriority()
{
  return 5LL;
}
