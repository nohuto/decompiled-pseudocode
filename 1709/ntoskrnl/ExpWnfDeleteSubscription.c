/*
 * XREFs of ExpWnfDeleteSubscription @ 0x1404FFB7C
 * Callers:
 *     ExpWnfDeleteProcessContext @ 0x1404FEA5C (ExpWnfDeleteProcessContext.c)
 *     NtUnsubscribeWnfStateChange @ 0x14056FFE4 (NtUnsubscribeWnfStateChange.c)
 *     ExUnsubscribeWnfStateChange @ 0x1405893B0 (ExUnsubscribeWnfStateChange.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140500F14 (ExpWnfNotifyNameSubscribers.c)
 */

void __fastcall ExpWnfDeleteSubscription(struct _EX_RUNDOWN_REF *P, PEPROCESS a2)
{
  struct _SINGLE_LIST_ENTRY *Next; // r14
  PRTL_BALANCED_NODE v4; // rax
  PRTL_BALANCED_NODE v5; // rsi
  unsigned __int64 Count; // rbp
  unsigned __int64 v7; // rsi
  int v8; // r12d
  int v9; // r13d
  PRTL_BALANCED_NODE v10; // rax
  PRTL_BALANCED_NODE v11; // rbp
  struct _EX_RUNDOWN_REF **v12; // rdx
  PVOID *v13; // rcx
  struct _EX_RUNDOWN_REF **v14; // rdx
  PVOID *v15; // rcx
  PRTL_BALANCED_NODE v16; // rax
  PRTL_BALANCED_NODE v17; // r15
  int v18; // ecx
  int v19; // r15d
  struct _EX_RUNDOWN_REF **v20; // rdx
  PVOID *v21; // rcx
  unsigned __int64 v23; // [rsp+70h] [rbp+18h]

  Next = a2[2].SwapListEntry.Next;
  if ( Next )
  {
    v4 = KeAbPreAcquire((ULONG_PTR)&Next[10], 0LL, 0);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Next[10], 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Next[10], (__int64)v4, (__int16 *)&Next[10]);
    if ( v5 )
      BYTE2(v5[1].Left) |= 1u;
  }
  Count = P[5].Count;
  v23 = Count;
  if ( Count )
  {
    v7 = P[6].Count;
    v8 = 0;
    v9 = 0;
    if ( v7 )
    {
      v10 = KeAbPreAcquire(v7 + 112, 0LL, 0);
      v11 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 112), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 + 112), (__int64)v10, (__int16 *)(v7 + 112));
      if ( v11 )
        BYTE2(v11[1].Left) |= 1u;
      v12 = (struct _EX_RUNDOWN_REF **)P[8].Count;
      if ( v12[1] != &P[8] || (v13 = (PVOID *)P[9].Count, *v13 != &P[8]) )
        __fastfail(3u);
      *v13 = v12;
      v12[1] = (struct _EX_RUNDOWN_REF *)v13;
      P[6].Count = 0LL;
      if ( (HIDWORD(P[12].Ptr) & 1) != 0 )
        LOBYTE(v9) = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 160), 0xFFFFFFFF) == 1;
    }
    v14 = (struct _EX_RUNDOWN_REF **)P[3].Count;
    if ( v14[1] != &P[3] || (v15 = (PVOID *)P[4].Count, *v15 != &P[3]) )
      __fastfail(3u);
    *v15 = v14;
    v14[1] = (struct _EX_RUNDOWN_REF *)v15;
    v16 = KeAbPreAcquire((ULONG_PTR)&Next[13], 0LL, 0);
    v17 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Next[13], 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Next[13], (__int64)v16, (__int16 *)&Next[13]);
    if ( v17 )
      BYTE2(v17[1].Left) |= 1u;
    v18 = P[15].Count;
    if ( v18 == 1 || (PEPROCESS)P[5].Count != PsInitialSystemProcess && v18 )
    {
      v20 = (struct _EX_RUNDOWN_REF **)P[13].Count;
      if ( v20[1] != &P[13] || (v21 = (PVOID *)P[14].Count, *v21 != &P[13]) )
        __fastfail(3u);
      *v21 = v20;
      v20[1] = (struct _EX_RUNDOWN_REF *)v21;
      if ( v7 && (BYTE4(P[15].Ptr) & 1) != 0 )
        LOBYTE(v8) = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 164), 0xFFFFFFFF) == 1;
    }
    P[5].Count = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Next[13], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Next[13]);
    KeAbPostRelease((ULONG_PTR)&Next[13]);
    if ( v7 )
    {
      v19 = 0;
      if ( v9 || v8 )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v7 + 8)) )
        {
          v19 = 1;
        }
        else
        {
          v9 = 0;
          v8 = 0;
        }
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 112));
      KeAbPostRelease(v7 + 112);
      if ( Next )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Next[10], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&Next[10]);
        KeAbPostRelease((ULONG_PTR)&Next[10]);
        Next = 0LL;
      }
      if ( v8 )
        ExpWnfNotifyNameSubscribers(v7, 8LL, 1LL, a2 != PsInitialSystemProcess);
      if ( v9 )
        ExpWnfNotifyNameSubscribers(v7, 4LL, 1LL, a2 != PsInitialSystemProcess);
      if ( v19 )
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v7 + 8));
    }
    Count = v23;
  }
  if ( Next )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Next[10], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Next[10]);
    KeAbPostRelease((ULONG_PTR)&Next[10]);
  }
  ExReleaseRundownProtection_0(P + 1);
  if ( Count )
  {
    ExWaitForRundownProtectionRelease(P + 1);
    ExFreePoolWithTag(P, 0x20666E57u);
  }
}
