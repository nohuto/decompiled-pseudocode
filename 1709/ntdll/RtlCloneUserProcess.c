/*
 * XREFs of RtlCloneUserProcess @ 0x1800D75D0
 * Callers:
 *     RtlpProcessReflectionStartup @ 0x1800D7260 (RtlpProcessReflectionStartup.c)
 * Callees:
 *     RtlAcquireReleaseSRWLockExclusive @ 0x180007470 (RtlAcquireReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     LdrpDrainWorkQueue @ 0x18004AAA4 (LdrpDrainWorkQueue.c)
 *     LdrpAcquireLoaderLock @ 0x18004B184 (LdrpAcquireLoaderLock.c)
 *     RtlWakeAllConditionVariable @ 0x180062FF0 (RtlWakeAllConditionVariable.c)
 *     RtlpCreateUserProcess @ 0x18008B0A8 (RtlpCreateUserProcess.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     LdrpCompleteProcessCloning @ 0x1800D6910 (LdrpCompleteProcessCloning.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800D6A7C (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800D6BD8 (LdrForkMrdata.c)
 *     RtlpLockFlsCallbackVector @ 0x1800D7DC0 (RtlpLockFlsCallbackVector.c)
 *     RtlpUnlockFlsCallbackVector @ 0x1800D7E18 (RtlpUnlockFlsCallbackVector.c)
 *     RtlLockHeapManagerForCloning @ 0x1800EF138 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800EF9F8 (RtlUnlockHeapManagerForCloning.c)
 */

__int64 __fastcall RtlCloneUserProcess(int a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4, char *a5)
{
  __int64 v7; // rbp
  int v9; // esi
  int v10; // r15d
  int v11; // r14d
  int v12; // edi
  int v13; // ebx
  char *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  unsigned __int64 *v18; // r8
  __int64 v19; // r9
  char *v20; // rbx
  __int64 v21; // rbp
  unsigned __int64 v22; // rdx
  unsigned __int64 *v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rdx
  unsigned __int64 *v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rdx
  unsigned __int64 *v29; // r8
  __int64 v30; // r9
  unsigned int UserProcess; // eax
  unsigned int v32; // ebp
  unsigned int v33; // ebx
  unsigned __int64 v34; // rdx
  unsigned __int64 *v35; // r8
  __int64 v36; // r9
  __int64 v37[8]; // [rsp+30h] [rbp-68h] BYREF

  v7 = a2;
  if ( (a1 & 0xFFFFFFF8) != 0 )
    return 3221225711LL;
  v9 = 2;
  v10 = a1 & 1;
  v11 = 2 * (a1 & 2);
  v12 = a1 & 4;
  if ( (a1 & 4) == 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v13 = -1073741420;
    }
    else
    {
      LdrpDrainWorkQueue(0);
      LdrpAcquireLoaderLock();
      RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
      v13 = 0;
    }
    if ( v13 >= 0 )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpFlsLock, a2, a3, a4);
      RtlpLockFlsCallbackVector();
      RtlEnterCriticalSection((__int64)&FastPebLock);
      RtlAcquireSRWLockShared(&LdrpTlsLock, v14, v15, v16);
      v20 = (char *)&unk_1801601B8;
      v21 = 16LL;
      do
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)v20, v17, v18, v19);
        v20 += 16;
        --v21;
      }
      while ( v21 );
      RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpProtectedPoliciesSRWLock, v17, v18, v19);
      LdrForkMrdata(0, v22, v23, v24);
      v13 = RtlLockHeapManagerForCloning();
      if ( v13 >= 0 )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&RtlCriticalSectionLock, v25, v26, v27);
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpForkActiveLock, v28, v29, v30);
        v13 = 0;
        LdrpForkInProgress = 1;
      }
      else
      {
        LdrForkMrdata(2, v25, v26, v27);
        RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
        LdrpUnlockTlsDelayedReclaimTable(0);
        RtlLeaveCriticalSection((__int64)&FastPebLock);
        RtlpUnlockFlsCallbackVector(0LL);
        RtlReleaseSRWLockExclusive(&RtlpFlsLock);
        LdrpCompleteProcessCloning(0);
      }
      v7 = a2;
    }
    if ( v13 < 0 )
      return (unsigned int)v13;
  }
  memset(v37, 0, 0x38uLL);
  v37[1] = v7;
  LOWORD(v37[0]) = 1;
  v37[2] = (__int64)a3;
  v37[4] = a4;
  UserProcess = RtlpCreateUserProcess(0LL, 0LL, v11, v10, (__int64)v37, a5);
  v32 = UserProcess;
  if ( !v12 )
  {
    if ( UserProcess == 297 )
    {
      RtlCriticalSectionLock = 1LL;
      v33 = 1;
      v9 = 1;
      qword_18015EED0 = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
      dword_18015EEC8 = -2;
      dword_18015EECC = 1;
      qword_18015EED8 = 0LL;
      RtlpFlsLock = 1LL;
    }
    else
    {
      LdrpForkInProgress = 0;
      v33 = 0;
      RtlReleaseSRWLockExclusive(&LdrpForkActiveLock);
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    LdrForkMrdata(v9, v34, v35, v36);
    if ( v9 == 1 )
      RtlpProtectedPoliciesSRWLock = 1LL;
    else
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    RtlUnlockHeapManagerForCloning(v33);
    LdrpUnlockTlsDelayedReclaimTable(v33);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlpUnlockFlsCallbackVector(v33);
    RtlReleaseSRWLockExclusive(&RtlpFlsLock);
    LdrpCompleteProcessCloning(v33);
    if ( v33 )
    {
      LdrpForkInProgress = 0;
      RtlAcquireReleaseSRWLockExclusive(&LdrpForkActiveLock);
      RtlWakeAllConditionVariable(&LdrpForkConditionVariable);
    }
  }
  return v32;
}
