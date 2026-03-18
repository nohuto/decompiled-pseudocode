/*
 * XREFs of PopForceCompleteCsSleepStudySessionWorker @ 0x1406CE820
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     PopDiagStopCsSleepStudySession @ 0x1406CC424 (PopDiagStopCsSleepStudySession.c)
 */

__int64 PopForceCompleteCsSleepStudySessionWorker()
{
  char v0; // si
  int v1; // edi
  int v2; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopForceSleepStudyLock);
  v0 = PopSleepStudySessionInfo;
  v1 = dword_14034A514;
  v2 = dword_14034A518;
  PopReleaseRwLock((ULONG_PTR)&PopForceSleepStudyLock);
  PopDiagStopCsSleepStudySession(v0, v1, v2);
  return (unsigned int)_InterlockedExchange(&PopForceSleepStudyWorkItemQueued, 0);
}
