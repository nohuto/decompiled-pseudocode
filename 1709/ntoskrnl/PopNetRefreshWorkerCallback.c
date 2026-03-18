/*
 * XREFs of PopNetRefreshWorkerCallback @ 0x140707BB0
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x1401325F0 (PopOkayToQueueNextWorkItem.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopNetArmRefreshTimer @ 0x140707990 (PopNetArmRefreshTimer.c)
 *     PopNetSetResiliencyPhaseBias @ 0x140707C54 (PopNetSetResiliencyPhaseBias.c)
 */

__int64 PopNetRefreshWorkerCallback()
{
  __int64 v0; // rcx
  bool v1; // bl

  PopAcquirePolicyLock();
  v1 = (PopNetStandbyStateMask & 0x4E) == 0
    && MEMORY[0xFFFFF78000000014] >= PopNetRefreshStartTime
    && MEMORY[0xFFFFF78000000014] < PopNetRefreshEndTime;
  if ( PopNetRefreshIntervalActive )
  {
    if ( !v1 )
      PopNetSetResiliencyPhaseBias(0LL);
  }
  else if ( v1 )
  {
    LOBYTE(v0) = 1;
    PopNetSetResiliencyPhaseBias(v0);
    _InterlockedExchange(&PopNetRefreshTimerState, 1);
    PopNetArmRefreshTimer(PopNetRefreshEndTime);
  }
  PopNetRefreshIntervalActive = v1;
  PopOkayToQueueNextWorkItem((__int64)&unk_140364888);
  return PopReleasePolicyLock();
}
