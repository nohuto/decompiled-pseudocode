/*
 * XREFs of PopCoalescingNotify @ 0x1406C95B0
 * Callers:
 *     PopPolicyWorkerThread @ 0x1400702C0 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140038914 (PopDiagTraceEventNoPayload.c)
 *     KeCancelTimer @ 0x14004D010 (KeCancelTimer.c)
 *     PopPrintEx @ 0x14006850C (PopPrintEx.c)
 *     PopCoalescingSetTimer @ 0x14022D97C (PopCoalescingSetTimer.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x14022DA00 (PopEnsureCoalescingWorkerWillRun.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
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
