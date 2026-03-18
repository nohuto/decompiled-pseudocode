/*
 * XREFs of PopForceCompleteCsSleepStudySession @ 0x14013E054
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PopPreCriticalBatteryNotify @ 0x1406CEBA0 (PopPreCriticalBatteryNotify.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 */

void __fastcall PopForceCompleteCsSleepStudySession(int a1)
{
  if ( (GUID *)PopWdiCurrentScenario != &NullGuid )
  {
    PopSleepstudyStopReason = a1;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopForceSleepStudyLock);
    PopSleepStudySessionInfo = 0;
    dword_14034A514 = 29;
    dword_14034A518 = 31;
    PopReleaseRwLock((ULONG_PTR)&PopForceSleepStudyLock);
    if ( !_InterlockedCompareExchange(&PopForceSleepStudyWorkItemQueued, 1, 0) )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&PopForceCompleteCsSleepStudySessionWorkItem, DelayedWorkQueue);
  }
}
