/*
 * XREFs of PopCoalescingNotify @ 0x1406FA190
 * Callers:
 *     PopPolicyWorkerThread @ 0x1400B0E10 (PopPolicyWorkerThread.c)
 * Callees:
 *     KeCancelTimer @ 0x1400E2110 (KeCancelTimer.c)
 *     PopDiagTraceEventNoPayload @ 0x14012C528 (PopDiagTraceEventNoPayload.c)
 *     PopPrintEx @ 0x14013284C (PopPrintEx.c)
 *     PopCoalescingSetTimer @ 0x140240ED8 (PopCoalescingSetTimer.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x140240F60 (PopEnsureCoalescingWorkerWillRun.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
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
