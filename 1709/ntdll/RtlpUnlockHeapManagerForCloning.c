/*
 * XREFs of RtlpUnlockHeapManagerForCloning @ 0x1800F0D9C
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x1800EF138 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800EF9F8 (RtlUnlockHeapManagerForCloning.c)
 * Callees:
 *     RtlpHpHeapUnlock @ 0x18003886C (RtlpHpHeapUnlock.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlpHpLfhContextLockUnlock @ 0x180106F14 (RtlpHpLfhContextLockUnlock.c)
 */

NTSTATUS __fastcall RtlpUnlockHeapManagerForCloning(int a1, unsigned int a2)
{
  struct _PEB *v2; // r14
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rbx
  _RTL_SRWLOCK *v7; // rcx
  __int64 v8; // rdx
  void *UniqueThread; // rcx

  v2 = NtCurrentPeb();
  if ( a2 )
  {
    v4 = 0LL;
    v5 = a2;
    do
    {
      v6 = (__int64)v2->ProcessHeaps[v4];
      if ( *(_DWORD *)(v6 + 16) == -571548178 )
      {
        if ( (*(_BYTE *)(v6 + 20) & 1) == 0 )
        {
          if ( a1 )
            *(_QWORD *)(v6 + 328) = 1LL;
          RtlpHpLfhContextLockUnlock(v6 + 480, a1 != 0 ? 3 : 1);
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v6 + 328));
          RtlpHpHeapUnlock(v6, a1);
        }
      }
      else if ( (*(_BYTE *)(v6 + 112) & 1) == 0 )
      {
        if ( *(_BYTE *)(v6 + 386) == 2 )
          v7 = *(_RTL_SRWLOCK **)(v6 + 376);
        else
          v7 = 0LL;
        if ( v7 )
        {
          if ( a1 )
            v7->Value = 1LL;
          RtlReleaseSRWLockExclusive(v7);
        }
        if ( a1 )
        {
          v8 = *(_QWORD *)(v6 + 352);
          *(_WORD *)(v6 + 384) = 0;
          *(_QWORD *)(v8 + 16) = NtCurrentTeb()->ClientId.UniqueThread;
          *(_DWORD *)(v8 + 8) = -2;
          *(_DWORD *)(v8 + 12) = 1;
          *(_QWORD *)(v8 + 24) = 0LL;
        }
        RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(v6 + 352));
      }
      ++v4;
      --v5;
    }
    while ( v5 );
  }
  if ( a1 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_18015D6C0 = -1LL;
    RtlpProcessHeapsListLock.OwningThread = UniqueThread;
    RtlpProcessHeapsListLock.LockCount = -2;
    RtlpProcessHeapsListLock.RecursionCount = 1;
    RtlpProcessHeapsListLock.LockSemaphore = 0LL;
    SRWLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
  }
  RtlReleaseSRWLockExclusive(&SRWLock);
  return RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
}
