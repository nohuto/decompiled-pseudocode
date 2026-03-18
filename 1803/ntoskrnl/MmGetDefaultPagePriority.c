/*
 * XREFs of MmGetDefaultPagePriority @ 0x140005EA0
 * Callers:
 *     PfTAccessTracingCleanup @ 0x1404780E0 (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140478230 (PfTAccessTracingStart.c)
 *     PspApplyIFEOPerfOptions @ 0x14048CE04 (PspApplyIFEOPerfOptions.c)
 *     PfSnAsyncPrefetchWorker @ 0x14048E5B0 (PfSnAsyncPrefetchWorker.c)
 *     PfSnCheckActionsNeeded @ 0x14048E8FC (PfSnCheckActionsNeeded.c)
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 *     PfpLogEventRequest @ 0x1405EC688 (PfpLogEventRequest.c)
 *     ExpDebuggerWorker @ 0x140803030 (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

__int64 MmGetDefaultPagePriority()
{
  return 5LL;
}
