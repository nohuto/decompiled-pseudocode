/*
 * XREFs of ExpWnfDeleteSubscription @ 0x1404383E8
 * Callers:
 *     ExUnsubscribeWnfStateChange @ 0x140437F90 (ExUnsubscribeWnfStateChange.c)
 *     NtUnsubscribeWnfStateChange @ 0x140437FC8 (NtUnsubscribeWnfStateChange.c)
 *     ExpWnfDeleteProcessContext @ 0x140438158 (ExpWnfDeleteProcessContext.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExWaitForRundownProtectionRelease @ 0x14010EFC0 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1404EE658 (ExpWnfNotifyNameSubscribers.c)
 */

void __fastcall ExpWnfDeleteSubscription(struct _EX_RUNDOWN_REF *P, __int64 a2)
{
  __int64 v2; // r14
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
  unsigned __int64 v22; // [rsp+70h] [rbp+18h]

  v2 = *(_QWORD *)(a2 + 1720);
  if ( v2 )
  {
    v4 = KeAbPreAcquire(v2 + 80, 0LL, 0);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 80), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 80), v4, v2 + 80);
    if ( v5 )
      BYTE2(v5[1].Left) |= 1u;
  }
  Count = P[5].Count;
  v22 = Count;
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
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 + 112), v10, v7 + 112);
      if ( v11 )
        BYTE2(v11[1].Left) |= 1u;
      v12 = (struct _EX_RUNDOWN_REF **)P[8].Count;
      v13 = (PVOID *)P[9].Count;
      if ( v12[1] != &P[8] || *v13 != &P[8] )
        __fastfail(3u);
      *v13 = v12;
      v12[1] = (struct _EX_RUNDOWN_REF *)v13;
      P[6].Count = 0LL;
      if ( (HIDWORD(P[12].Ptr) & 1) != 0 )
        LOBYTE(v9) = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 160), 0xFFFFFFFF) == 1;
    }
    v14 = (struct _EX_RUNDOWN_REF **)P[3].Count;
    v15 = (PVOID *)P[4].Count;
    if ( v14[1] != &P[3] || *v15 != &P[3] )
      __fastfail(3u);
    *v15 = v14;
    v14[1] = (struct _EX_RUNDOWN_REF *)v15;
    v16 = KeAbPreAcquire(v2 + 104, 0LL, 0);
    v17 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 104), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 104), v16, v2 + 104);
    if ( v17 )
      BYTE2(v17[1].Left) |= 1u;
    v18 = P[15].Count;
    if ( v18 == 1 || (PEPROCESS)P[5].Count != PsInitialSystemProcess && v18 )
    {
      v20 = (struct _EX_RUNDOWN_REF **)P[13].Count;
      v21 = (PVOID *)P[14].Count;
      if ( v20[1] != &P[13] || *v21 != &P[13] )
        __fastfail(3u);
      *v21 = v20;
      v20[1] = (struct _EX_RUNDOWN_REF *)v21;
      if ( v7 && (BYTE4(P[15].Ptr) & 1) != 0 )
        LOBYTE(v8) = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 164), 0xFFFFFFFF) == 1;
    }
    P[5].Count = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 104));
    KeAbPostRelease(v2 + 104);
    if ( v7 )
    {
      v19 = 0;
      if ( v9 || v8 )
      {
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v7 + 8)) )
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
      if ( v2 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 80));
        KeAbPostRelease(v2 + 80);
        v2 = 0LL;
      }
      if ( v8 )
        ExpWnfNotifyNameSubscribers(v7, 8LL, 1LL);
      if ( v9 )
        ExpWnfNotifyNameSubscribers(v7, 4LL, 1LL);
      if ( v19 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v7 + 8));
    }
    Count = v22;
  }
  if ( v2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 80));
    KeAbPostRelease(v2 + 80);
  }
  ExReleaseRundownProtection(P + 1);
  if ( Count )
  {
    ExWaitForRundownProtectionRelease(P + 1);
    ExFreePoolWithTag(P, 0x20666E57u);
  }
}
