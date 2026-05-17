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

__int64 __fastcall RtlPrepareForProcessCloning(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 result; // rax
  char *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rdx
  unsigned __int64 *v9; // r8
  __int64 v10; // r9
  char *v11; // rbx
  __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  unsigned __int64 *v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  int v17; // ebx
  unsigned __int64 *v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rdx
  unsigned __int64 *v21; // r8
  __int64 v22; // r9

  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
  {
    result = 3221225876LL;
  }
  else
  {
    LdrpDrainWorkQueue(0);
    LdrpAcquireLoaderLock();
    RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
    result = 0LL;
  }
  if ( (int)result >= 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpFlsLock, a2, a3, a4);
    RtlpLockFlsCallbackVector();
    RtlEnterCriticalSection((__int64)&FastPebLock);
    RtlAcquireSRWLockShared(&LdrpTlsLock, v5, v6, v7);
    v11 = (char *)&unk_1801601B8;
    v12 = 16LL;
    do
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)v11, v8, v9, v10);
      v11 += 16;
      --v12;
    }
    while ( v12 );
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpProtectedPoliciesSRWLock, v8, v9, v10);
    LdrForkMrdata(0, v13, v14, v15);
    v17 = RtlLockHeapManagerForCloning();
    if ( v17 >= 0 )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&RtlCriticalSectionLock, v16, v18, v19);
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpForkActiveLock, v20, v21, v22);
      result = 0LL;
      LdrpForkInProgress = 1;
    }
    else
    {
      LdrForkMrdata(2, v16, v18, v19);
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
      LdrpUnlockTlsDelayedReclaimTable(0);
      RtlLeaveCriticalSection((__int64)&FastPebLock);
      RtlpUnlockFlsCallbackVector(0LL);
      RtlReleaseSRWLockExclusive(&RtlpFlsLock);
      LdrpCompleteProcessCloning(0);
      return (unsigned int)v17;
    }
  }
  return result;
}
