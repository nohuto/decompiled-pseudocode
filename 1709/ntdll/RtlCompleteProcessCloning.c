/*
 * XREFs of RtlCompleteProcessCloning @ 0x1800D78C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireReleaseSRWLockExclusive @ 0x180007470 (RtlAcquireReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlWakeAllConditionVariable @ 0x180062FF0 (RtlWakeAllConditionVariable.c)
 *     LdrpCompleteProcessCloning @ 0x1800D6910 (LdrpCompleteProcessCloning.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800D6A7C (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800D6BD8 (LdrForkMrdata.c)
 *     RtlpUnlockFlsCallbackVector @ 0x1800D7E18 (RtlpUnlockFlsCallbackVector.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800EF9F8 (RtlUnlockHeapManagerForCloning.c)
 */

void __fastcall RtlCompleteProcessCloning(unsigned int a1)
{
  int v2; // edi
  void *UniqueThread; // rdx
  unsigned __int64 v4; // rdx
  unsigned __int64 *v5; // r8
  __int64 v6; // r9

  if ( a1 )
  {
    RtlCriticalSectionLock = 1LL;
    v2 = 1;
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_18015EED8 = 0LL;
    qword_18015EED0 = (__int64)UniqueThread;
    dword_18015EEC8 = -2;
    dword_18015EECC = 1;
    RtlpFlsLock = 1LL;
  }
  else
  {
    LdrpForkInProgress = 0;
    v2 = 2;
    RtlReleaseSRWLockExclusive(&LdrpForkActiveLock);
  }
  RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
  LdrForkMrdata(v2, v4, v5, v6);
  if ( v2 == 1 )
    RtlpProtectedPoliciesSRWLock = 1LL;
  else
    RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  RtlUnlockHeapManagerForCloning(a1);
  LdrpUnlockTlsDelayedReclaimTable(a1);
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  RtlpUnlockFlsCallbackVector(a1);
  RtlReleaseSRWLockExclusive(&RtlpFlsLock);
  LdrpCompleteProcessCloning(a1);
  if ( a1 )
  {
    LdrpForkInProgress = 0;
    RtlAcquireReleaseSRWLockExclusive(&LdrpForkActiveLock);
    RtlWakeAllConditionVariable(&LdrpForkConditionVariable);
  }
}
