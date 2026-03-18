/*
 * XREFs of PoUserShutdownInitiated @ 0x1406FDA60
 * Callers:
 *     PopPowerInformationInternal @ 0x1404EA1F0 (PopPowerInformationInternal.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140025A80 (KeInitializeTimerEx.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140085190 (PsIsCurrentThreadInServerSilo.c)
 *     KeInitializeDpc @ 0x1400B2860 (KeInitializeDpc.c)
 *     KiSetTimerEx @ 0x1400E1F70 (KiSetTimerEx.c)
 *     PopQueueWorkItem @ 0x140139F70 (PopQueueWorkItem.c)
 *     PpmBeginHighPerfRequest @ 0x14015B880 (PpmBeginHighPerfRequest.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopTransitionCheckpoint @ 0x1406F5940 (PopTransitionCheckpoint.c)
 */

char PoUserShutdownInitiated()
{
  char result; // al
  char v1; // bl

  result = PsIsCurrentThreadInServerSilo();
  if ( !result )
  {
    PopTransitionCheckpoint(7, 0);
    result = PopQueueWorkItem((__int64)&PopSetUserShutdownMarkerWorkItem, DelayedWorkQueue);
    if ( *(&PoPdcCallbacks + 1) )
    {
      PopAcquirePolicyLock();
      if ( PopUserShutdownInProgress )
      {
        return PopReleasePolicyLock();
      }
      else
      {
        PopUserShutdownInProgress = 1;
        if ( !byte_140366514 )
        {
          PopUserShutdownDelayWorker.Parameter = 0LL;
          PopUserShutdownDelayWorker.List.Flink = 0LL;
          PopUserShutdownDelayWorker.WorkerRoutine = (void (__fastcall *)(void *))PopUserShutdownDelayWorkerCallback;
          KeInitializeTimerEx(&PopUserShutdownDelayTimer, NotificationTimer);
          KeInitializeDpc(&PopUserShutdownDelayDpc, (PKDEFERRED_ROUTINE)PopUserShutdownDelayDpcCallback, 0LL);
          byte_140366514 = 1;
        }
        PopBsdShutdownInProgress = 1;
        PopReleasePolicyLock();
        v1 = (*(&PoPdcCallbacks + 1))();
        result = KiSetTimerEx(
                   (__int64)&PopUserShutdownDelayTimer,
                   -900000000LL,
                   0,
                   0,
                   (__int64)&PopUserShutdownDelayDpc);
        if ( v1 )
          return PpmBeginHighPerfRequest();
      }
    }
  }
  return result;
}
