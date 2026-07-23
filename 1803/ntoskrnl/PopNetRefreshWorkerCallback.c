/*
 * XREFs of PopNetRefreshWorkerCallback @ 0x14076B9E0
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x1400D2C70 (PopOkayToQueueNextWorkItem.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopNetArmRefreshTimer @ 0x14076B7D0 (PopNetArmRefreshTimer.c)
 *     PopNetSetResiliencyPhaseBias @ 0x14076BAD4 (PopNetSetResiliencyPhaseBias.c)
 */

__int64 PopNetRefreshWorkerCallback()
{
  __int64 v0; // rcx
  bool v1; // bl
  char Buffer; // [rsp+58h] [rbp+10h] BYREF

  PopAcquirePolicyLock();
  v1 = (PopNetStandbyStateMask & 0x4E) == 0
    && MEMORY[0xFFFFF78000000014] >= PopNetRefreshStartTime
    && MEMORY[0xFFFFF78000000014] < PopNetRefreshEndTime;
  if ( PopNetRefreshIntervalActive )
  {
    if ( !v1 )
    {
      Buffer = 0;
      ZwUpdateWnfStateData(&WNF_PO_OPPORTUNISTIC_CS, &Buffer, 1u, 0LL, 0LL, 0, 0);
      PopNetSetResiliencyPhaseBias(0LL);
    }
  }
  else if ( v1 )
  {
    LOBYTE(v0) = 1;
    PopNetSetResiliencyPhaseBias(v0);
    _InterlockedExchange(&PopNetRefreshTimerState, 1);
    PopNetArmRefreshTimer(PopNetRefreshEndTime);
    Buffer = 1;
    ZwUpdateWnfStateData(&WNF_PO_OPPORTUNISTIC_CS, &Buffer, 1u, 0LL, 0LL, 0, 0);
  }
  PopNetRefreshIntervalActive = v1;
  PopOkayToQueueNextWorkItem((__int64)&unk_1403A8108);
  return PopReleasePolicyLock();
}
