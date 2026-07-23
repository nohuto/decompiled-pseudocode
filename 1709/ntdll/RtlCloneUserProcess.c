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

NTSTATUS __cdecl RtlCloneUserProcess(
        ULONG ProcessFlags,
        PSECURITY_DESCRIPTOR ProcessSecurityDescriptor,
        PSECURITY_DESCRIPTOR ThreadSecurityDescriptor,
        HANDLE DebugPort,
        PRTL_USER_PROCESS_INFORMATION ProcessInformation)
{
  PSECURITY_DESCRIPTOR v7; // rbp
  int v9; // esi
  ULONG v10; // r15d
  ULONG v11; // r14d
  ULONG v12; // edi
  NTSTATUS v13; // ebx
  _RTL_SRWLOCK *v14; // rbx
  __int64 v15; // rbp
  NTSTATUS UserProcess; // eax
  NTSTATUS v17; // ebp
  unsigned int v18; // ebx
  _QWORD v19[8]; // [rsp+30h] [rbp-68h] BYREF

  v7 = ProcessSecurityDescriptor;
  if ( (ProcessFlags & 0xFFFFFFF8) != 0 )
    return -1073741585;
  v9 = 2;
  v10 = ProcessFlags & 1;
  v11 = 2 * (ProcessFlags & 2);
  v12 = ProcessFlags & 4;
  if ( (ProcessFlags & 4) == 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v13 = -1073741420;
    }
    else
    {
      LdrpDrainWorkQueue(0);
      LdrpAcquireLoaderLock();
      RtlEnterCriticalSection(&LdrpWorkQueueLock);
      v13 = 0;
    }
    if ( v13 >= 0 )
    {
      RtlAcquireSRWLockExclusive(&RtlpFlsLock);
      RtlpLockFlsCallbackVector();
      RtlEnterCriticalSection(&FastPebLock);
      RtlAcquireSRWLockShared(&LdrpTlsLock);
      v14 = &stru_1801601B8;
      v15 = 16LL;
      do
      {
        RtlAcquireSRWLockExclusive(v14);
        v14 += 2;
        --v15;
      }
      while ( v15 );
      RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
      LdrForkMrdata(0);
      v13 = RtlLockHeapManagerForCloning();
      if ( v13 >= 0 )
      {
        RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
        RtlAcquireSRWLockExclusive(&LdrpForkActiveLock);
        v13 = 0;
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
      }
      v7 = ProcessSecurityDescriptor;
    }
    if ( v13 < 0 )
      return v13;
  }
  memset(v19, 0, 0x38uLL);
  v19[1] = v7;
  LOWORD(v19[0]) = 1;
  v19[2] = ThreadSecurityDescriptor;
  v19[4] = DebugPort;
  UserProcess = RtlpCreateUserProcess(0LL, 0LL, v11, v10, (__int64)v19, (HANDLE *)ProcessInformation);
  v17 = UserProcess;
  if ( !v12 )
  {
    if ( UserProcess == 297 )
    {
      RtlCriticalSectionLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
      v18 = 1;
      v9 = 1;
      FastPebLock.OwningThread = NtCurrentTeb()->ClientId.UniqueThread;
      FastPebLock.LockCount = -2;
      FastPebLock.RecursionCount = 1;
      FastPebLock.LockSemaphore = 0LL;
      RtlpFlsLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
    }
    else
    {
      LdrpForkInProgress = 0;
      v18 = 0;
      RtlReleaseSRWLockExclusive(&LdrpForkActiveLock);
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    LdrForkMrdata(v9);
    if ( v9 == 1 )
      RtlpProtectedPoliciesSRWLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
    else
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    RtlUnlockHeapManagerForCloning(v18);
    LdrpUnlockTlsDelayedReclaimTable(v18);
    RtlLeaveCriticalSection(&FastPebLock);
    RtlpUnlockFlsCallbackVector(v18);
    RtlReleaseSRWLockExclusive(&RtlpFlsLock);
    LdrpCompleteProcessCloning(v18);
    if ( v18 )
    {
      LdrpForkInProgress = 0;
      RtlAcquireReleaseSRWLockExclusive(&LdrpForkActiveLock);
      RtlWakeAllConditionVariable(&LdrpForkConditionVariable);
    }
  }
  return v17;
}
