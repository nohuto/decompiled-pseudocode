/*
 * XREFs of PopNetRefreshTimerCallback @ 0x14027FB30
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1400CF7E4 (PopQueueWorkItem.c)
 */

char PopNetRefreshTimerCallback()
{
  signed __int32 v0; // eax

  v0 = _InterlockedCompareExchange(&PopNetRefreshTimerState, 2, 1);
  if ( v0 == 1 )
    LOBYTE(v0) = PopQueueWorkItem((__int64)&unk_1403A8108, DelayedWorkQueue);
  return v0;
}
