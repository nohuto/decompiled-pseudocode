/*
 * XREFs of PoUserShutdownInitiated @ 0x1405EBBD0
 * Callers:
 *     PopPowerInformationInternal @ 0x140522340 (PopPowerInformationInternal.c)
 * Callees:
 *     KeInitializeDpc @ 0x140038FE0 (KeInitializeDpc.c)
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14006E2C0 (PsIsCurrentThreadInServerSilo.c)
 *     PopQueueWorkItem @ 0x1400CF7E4 (PopQueueWorkItem.c)
 *     KeInitializeTimerEx @ 0x1401325F0 (KeInitializeTimerEx.c)
 *     PpmBeginHighPerfRequest @ 0x14016E780 (PpmBeginHighPerfRequest.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopTransitionCheckpoint @ 0x1405EBCD4 (PopTransitionCheckpoint.c)
 */

char PoUserShutdownInitiated()
{
  char result; // al
  char v1; // bl

  result = PsIsCurrentThreadInServerSilo();
  if ( !result )
  {
    PopTransitionCheckpoint(7LL, 0LL);
    result = PopQueueWorkItem((__int64)&PopSetUserShutdownMarkerWorkItem, DelayedWorkQueue);
    if ( qword_1403D1408 )
    {
      PopAcquirePolicyLock();
      if ( PopUserShutdownInProgress )
      {
        return PopReleasePolicyLock();
      }
      else
      {
        PopUserShutdownInProgress = 1;
        if ( !byte_1403AAD04 )
        {
          PopUserShutdownDelayWorker.Parameter = 0LL;
          PopUserShutdownDelayWorker.List.Flink = 0LL;
          PopUserShutdownDelayWorker.WorkerRoutine = (void (__fastcall *)(void *))PopUserShutdownDelayWorkerCallback;
          KeInitializeTimerEx(&PopUserShutdownDelayTimer, NotificationTimer);
          KeInitializeDpc(&PopUserShutdownDelayDpc, (PKDEFERRED_ROUTINE)PopUserShutdownDelayDpcCallback, 0LL);
          byte_1403AAD04 = 1;
        }
        PopBsdShutdownInProgress = 1;
        PopReleasePolicyLock();
        v1 = ((__int64 (*)(void))qword_1403D1408)();
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
