/*
 * XREFs of MmGetDefaultPagePriority @ 0x1400448EC
 * Callers:
 *     PfTAccessTracingStart @ 0x140404D3C (PfTAccessTracingStart.c)
 *     PfTAccessTracingCleanup @ 0x14040E304 (PfTAccessTracingCleanup.c)
 *     PspApplyIFEOPerfOptions @ 0x140459300 (PspApplyIFEOPerfOptions.c)
 *     PfSnAsyncPrefetchWorker @ 0x140464FF0 (PfSnAsyncPrefetchWorker.c)
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     PfSnCheckActionsNeeded @ 0x140564F88 (PfSnCheckActionsNeeded.c)
 *     PfpLogEventRequest @ 0x1405762E0 (PfpLogEventRequest.c)
 *     ExpDebuggerWorker @ 0x140789040 (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

__int64 MmGetDefaultPagePriority()
{
  return 5LL;
}
