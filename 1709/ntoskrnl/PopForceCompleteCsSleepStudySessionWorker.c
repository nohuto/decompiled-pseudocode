/*
 * XREFs of PopForceCompleteCsSleepStudySessionWorker @ 0x140705D30
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopDiagStopCsSleepStudySession @ 0x1407016F4 (PopDiagStopCsSleepStudySession.c)
 */

__int64 PopForceCompleteCsSleepStudySessionWorker()
{
  char v0; // si
  int v1; // edi
  int v2; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopForceSleepStudyLock);
  v0 = PopSleepStudySessionInfo;
  v1 = dword_140364D54;
  v2 = dword_140364D58;
  PopReleaseRwLock((ULONG_PTR)&PopForceSleepStudyLock);
  PopDiagStopCsSleepStudySession(v0, v1, v2);
  return (unsigned int)_InterlockedExchange(&PopForceSleepStudyWorkItemQueued, 0);
}
