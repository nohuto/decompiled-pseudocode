/*
 * XREFs of PopForceCompleteCsSleepStudySession @ 0x140157908
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 *     PopPreCriticalBatteryNotify @ 0x140769F70 (PopPreCriticalBatteryNotify.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 */

void __fastcall PopForceCompleteCsSleepStudySession(int a1)
{
  if ( (GUID *)PopWdiCurrentScenario != &NullGuid )
  {
    PopSleepstudyStopReason = a1;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopForceSleepStudyLock);
    PopSleepStudySessionInfo = 0;
    dword_1403A94F4 = 29;
    dword_1403A94F8 = 45;
    PopReleaseRwLock((ULONG_PTR)&PopForceSleepStudyLock);
    if ( !_InterlockedCompareExchange(&PopForceSleepStudyWorkItemQueued, 1, 0) )
      ExQueueWorkItem(&PopForceCompleteCsSleepStudySessionWorkItem, DelayedWorkQueue);
  }
}
