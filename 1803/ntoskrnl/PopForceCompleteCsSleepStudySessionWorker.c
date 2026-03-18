/*
 * XREFs of PopForceCompleteCsSleepStudySessionWorker @ 0x140769BE0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     PopDiagStopCsSleepStudySession @ 0x140765B10 (PopDiagStopCsSleepStudySession.c)
 */

__int64 PopForceCompleteCsSleepStudySessionWorker()
{
  char v0; // si
  int v1; // edi
  int v2; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopForceSleepStudyLock);
  v0 = PopSleepStudySessionInfo;
  v1 = dword_1403A94F4;
  v2 = dword_1403A94F8;
  PopReleaseRwLock((ULONG_PTR)&PopForceSleepStudyLock);
  PopDiagStopCsSleepStudySession(v0, v1, v2);
  return (unsigned int)_InterlockedExchange(&PopForceSleepStudyWorkItemQueued, 0);
}
