/*
 * XREFs of ExpWnfDeleteSubscription @ 0x1405115F8
 * Callers:
 *     ExpWnfDeleteProcessContext @ 0x140511368 (ExpWnfDeleteProcessContext.c)
 *     NtUnsubscribeWnfStateChange @ 0x14055C780 (NtUnsubscribeWnfStateChange.c)
 *     ExUnsubscribeWnfStateChange @ 0x140575B10 (ExUnsubscribeWnfStateChange.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1404F76D8 (ExpWnfNotifyNameSubscribers.c)
 */

void __fastcall ExpWnfDeleteSubscription(struct _EX_RUNDOWN_REF *P, PEPROCESS a2, __int64 a3, __int64 a4)
{
  struct _SINGLE_LIST_ENTRY *Next; // r14
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 Count; // rbp
  __int64 v9; // rsi
  int v10; // r12d
  int v11; // r13d
  __int64 v12; // rax
  __int64 v13; // rbp
  struct _EX_RUNDOWN_REF **v14; // rdx
  PVOID *v15; // rcx
  struct _EX_RUNDOWN_REF **v16; // rdx
  PVOID *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r15
  int v23; // ecx
  int v24; // r15d
  PVOID *v25; // rcx
  unsigned __int64 v27; // [rsp+70h] [rbp+18h]

  Next = a2[2].SwapListEntry.Next;
  if ( Next )
  {
    v6 = KeAbPreAcquire((ULONG_PTR)&Next[10], 0LL, 0);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Next[10], 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Next[10], v6, (ULONG_PTR)&Next[10]);
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
  }
  Count = P[5].Count;
  v27 = Count;
  if ( Count )
  {
    v9 = P[6].Count;
    v10 = 0;
    v11 = 0;
    if ( v9 )
    {
      v12 = KeAbPreAcquire(v9 + 112, 0LL, 0);
      v13 = v12;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 112), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v9 + 112), v12, v9 + 112);
      if ( v13 )
        *(_BYTE *)(v13 + 26) |= 1u;
      v14 = (struct _EX_RUNDOWN_REF **)P[8].Count;
      if ( v14[1] != &P[8] || (v15 = (PVOID *)P[9].Count, *v15 != &P[8]) )
        __fastfail(3u);
      *v15 = v14;
      v14[1] = (struct _EX_RUNDOWN_REF *)v15;
      P[6].Count = 0LL;
      if ( (HIDWORD(P[12].Ptr) & 1) != 0 )
        LOBYTE(v11) = _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 160), 0xFFFFFFFF) == 1;
    }
    v16 = (struct _EX_RUNDOWN_REF **)P[3].Count;
    if ( v16[1] != &P[3] || (v17 = (PVOID *)P[4].Count, *v17 != &P[3]) )
      __fastfail(3u);
    *v17 = v16;
    v16[1] = (struct _EX_RUNDOWN_REF *)v17;
    v18 = KeAbPreAcquire((ULONG_PTR)&Next[13], 0LL, 0);
    v22 = v18;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Next[13], 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Next[13], v18, (ULONG_PTR)&Next[13]);
    if ( v22 )
      *(_BYTE *)(v22 + 26) |= 1u;
    v23 = P[15].Count;
    if ( v23 == 1 || (PEPROCESS)P[5].Count != PsInitialSystemProcess && v23 )
    {
      v19 = P[13].Count;
      if ( *(struct _EX_RUNDOWN_REF **)(v19 + 8) != &P[13] || (v25 = (PVOID *)P[14].Count, *v25 != &P[13]) )
        __fastfail(3u);
      *v25 = (PVOID)v19;
      *(_QWORD *)(v19 + 8) = v25;
      if ( v9 && (BYTE4(P[15].Ptr) & 1) != 0 )
        LOBYTE(v10) = _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 164), 0xFFFFFFFF) == 1;
    }
    P[5].Count = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Next[13], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Next[13], v19, v20, v21);
    KeAbPostRelease((ULONG_PTR)&Next[13]);
    if ( v9 )
    {
      v24 = 0;
      if ( v11 || v10 )
      {
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v9 + 8)) )
        {
          v24 = 1;
        }
        else
        {
          v11 = 0;
          v10 = 0;
        }
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v9 + 112), (__int64)a2, a3, a4);
      KeAbPostRelease(v9 + 112);
      if ( Next )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Next[10], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&Next[10], (__int64)a2, a3, a4);
        KeAbPostRelease((ULONG_PTR)&Next[10]);
        Next = 0LL;
      }
      if ( v10 )
        ExpWnfNotifyNameSubscribers(v9, 8u, 1, a2 != PsInitialSystemProcess);
      if ( v11 )
        ExpWnfNotifyNameSubscribers(v9, 4u, 1, a2 != PsInitialSystemProcess);
      if ( v24 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v9 + 8));
    }
    Count = v27;
  }
  if ( Next )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Next[10], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Next[10], (__int64)a2, a3, a4);
    KeAbPostRelease((ULONG_PTR)&Next[10]);
  }
  ExReleaseRundownProtection(P + 1);
  if ( Count )
  {
    ExWaitForRundownProtectionRelease(P + 1);
    ExFreePoolWithTag(P, 0x20666E57u);
  }
}
