/*
 * XREFs of PopCoalescingNotify @ 0x140761620
 * Callers:
 *     PopPolicyWorkerThread @ 0x140073DA0 (PopPolicyWorkerThread.c)
 * Callees:
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 *     PopPrintEx @ 0x140077270 (PopPrintEx.c)
 *     PopDiagTraceEventNoPayload @ 0x1400CDCD0 (PopDiagTraceEventNoPayload.c)
 *     PopCoalescingSetTimer @ 0x14027846C (PopCoalescingSetTimer.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x1402784F0 (PopEnsureCoalescingWorkerWillRun.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 */

__int64 PopCoalescingNotify()
{
  PopAcquirePolicyLock();
  if ( (PopCoalescingState & 2) != 0 )
  {
    KeCancelTimer(&PopCoalescingTimer);
    PopCoalescingState |= 4u;
    PopEnsureCoalescingWorkerWillRun();
    PopPrintEx(3u, (__int64)"PopCoalescing: FLUSH notification sent.\n");
    PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_FLUSH);
    PopCoalescingLastFlushTime = MEMORY[0xFFFFF78000000008];
    PopCoalescingSetTimer();
  }
  PopReleasePolicyLock();
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
