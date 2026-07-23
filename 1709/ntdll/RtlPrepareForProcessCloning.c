/*
 * XREFs of RtlPrepareForProcessCloning @ 0x1800D7B40
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     LdrpDrainWorkQueue @ 0x18004AAA4 (LdrpDrainWorkQueue.c)
 *     LdrpAcquireLoaderLock @ 0x18004B184 (LdrpAcquireLoaderLock.c)
 *     LdrpCompleteProcessCloning @ 0x1800D6910 (LdrpCompleteProcessCloning.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800D6A7C (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800D6BD8 (LdrForkMrdata.c)
 *     RtlpLockFlsCallbackVector @ 0x1800D7DC0 (RtlpLockFlsCallbackVector.c)
 *     RtlpUnlockFlsCallbackVector @ 0x1800D7E18 (RtlpUnlockFlsCallbackVector.c)
 *     RtlLockHeapManagerForCloning @ 0x1800EF138 (RtlLockHeapManagerForCloning.c)
 */

__int64 RtlPrepareForProcessCloning()
{
  __int64 result; // rax
  _RTL_SRWLOCK *v1; // rbx
  __int64 v2; // rdi
  int v3; // ebx

  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
  {
    result = 3221225876LL;
  }
  else
  {
    LdrpDrainWorkQueue(0);
    LdrpAcquireLoaderLock();
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    result = 0LL;
  }
  if ( (int)result >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpFlsLock);
    RtlpLockFlsCallbackVector();
    RtlEnterCriticalSection(&FastPebLock);
    RtlAcquireSRWLockShared(&LdrpTlsLock);
    v1 = &stru_1801601B8;
    v2 = 16LL;
    do
    {
      RtlAcquireSRWLockExclusive(v1);
      v1 += 2;
      --v2;
    }
    while ( v2 );
    RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    LdrForkMrdata(0);
    v3 = RtlLockHeapManagerForCloning();
    if ( v3 >= 0 )
    {
      RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
      RtlAcquireSRWLockExclusive(&LdrpForkActiveLock);
      result = 0LL;
      LdrpForkInProgress = 1;
    }
    else
    {
      LdrForkMrdata(2);
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
      LdrpUnlockTlsDelayedReclaimTable(0);
      RtlLeaveCriticalSection(&FastPebLock);
      RtlpUnlockFlsCallbackVector(0LL);
      RtlReleaseSRWLockExclusive(&RtlpFlsLock);
      LdrpCompleteProcessCloning(0);
      return (unsigned int)v3;
    }
  }
  return result;
}
