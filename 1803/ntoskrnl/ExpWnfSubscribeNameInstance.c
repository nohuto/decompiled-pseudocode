/*
 * XREFs of ExpWnfSubscribeNameInstance @ 0x1404F6C20
 * Callers:
 *     ExpWnfSubscribeWnfStateChange @ 0x1404F57A0 (ExpWnfSubscribeWnfStateChange.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140008790 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ExpWnfUpdateSubscription @ 0x1404F7060 (ExpWnfUpdateSubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1404F76D8 (ExpWnfNotifyNameSubscribers.c)
 */

__int64 __fastcall ExpWnfSubscribeNameInstance(
        unsigned __int64 a1,
        struct _KPROCESS *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        char a7,
        signed __int64 *a8,
        struct _EX_RUNDOWN_REF **a9,
        struct _EX_RUNDOWN_REF **a10,
        _DWORD *a11)
{
  struct _SINGLE_LIST_ENTRY *Next; // r12
  unsigned int v12; // edi
  __int64 v15; // r14
  int updated; // r14d
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF *v18; // rsi
  signed __int64 v19; // r12
  unsigned __int64 *v20; // r14
  __int64 v21; // rax
  __int64 v22; // r15
  volatile signed __int64 *v23; // r15
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  signed __int8 v28; // cf
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // r9
  struct _EX_RUNDOWN_REF *v34; // rcx
  struct _SINGLE_LIST_ENTRY *v35; // rax
  struct _SINGLE_LIST_ENTRY **p_Next; // rdx
  struct _EX_RUNDOWN_REF **v37; // rdx
  struct _EX_RUNDOWN_REF *v38; // rax
  signed __int32 v39; // ecx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // [rsp+50h] [rbp-20h] BYREF
  int v53; // [rsp+54h] [rbp-1Ch] BYREF
  struct _EX_RUNDOWN_REF *v54; // [rsp+58h] [rbp-18h] BYREF
  struct _SINGLE_LIST_ENTRY *v55; // [rsp+60h] [rbp-10h]
  __int64 v56; // [rsp+68h] [rbp-8h]

  Next = a2[2].SwapListEntry.Next;
  v12 = 0;
  v55 = Next;
  v52 = 0;
  *a11 = 0;
  v53 = 0;
  if ( a7 == 1 )
  {
    v15 = KeAbPreAcquire((ULONG_PTR)&Next[10], 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Next[10], 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)&Next[10], v15, (ULONG_PTR)&Next[10]);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    updated = ExpWnfUpdateSubscription(
                a1,
                (_DWORD)Next,
                a3,
                a4,
                a6,
                (__int64)&v54,
                (__int64)&v52,
                (__int64)&v53,
                (__int64)a8);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Next[10], 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&Next[10]);
    KeAbPostRelease((ULONG_PTR)&Next[10]);
    if ( updated >= 0 )
      goto LABEL_9;
  }
  if ( PsInitialSystemProcess == a2 )
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x20666E57u);
  else
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x88uLL, 0x20666E57u);
  v18 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x88uLL);
  LODWORD(v18->Count) = 8915205;
  v18[10].Count = a3;
  v18[11].Count = a4;
  LODWORD(v18[12].Count) = a5;
  HIDWORD(v18[12].Ptr) = a6;
  v18[1].Count = 0LL;
  v18[7].Count = *(unsigned __int64 *)(a1 + 40);
  if ( a7 )
  {
    do
      v19 = _InterlockedIncrement64(&ExpWnfSubcriptionIdCounter);
    while ( !v19 );
    if ( a8 )
      *a8 = v19;
  }
  else
  {
    v19 = (signed __int64)v18;
    if ( a9 )
      *a9 = v18;
  }
  v20 = (unsigned __int64 *)&v55[10];
  v21 = KeAbPreAcquire((ULONG_PTR)&v55[10], 0LL, 0);
  v22 = v21;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v20, 0LL) )
    ExfAcquirePushLockExclusiveEx(v20, v21, (ULONG_PTR)v20);
  if ( v22 )
    *(_BYTE *)(v22 + 26) |= 1u;
  v23 = (volatile signed __int64 *)(a1 + 112);
  v24 = KeAbPreAcquire(a1 + 112, 0LL, 0);
  v28 = _interlockedbittestandset64((volatile signed __int32 *)(a1 + 112), 0LL);
  v56 = v24;
  if ( v28 )
  {
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 112), v24, a1 + 112);
    v24 = v56;
  }
  if ( v24 )
    *(_BYTE *)(v24 + 26) |= 1u;
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( a7 != 1
      || (int)ExpWnfUpdateSubscription(
                a1,
                (_DWORD)v55,
                a3,
                a4,
                a6,
                (__int64)&v54,
                (__int64)&v52,
                (__int64)&v53,
                (__int64)a8) < 0 )
    {
      v18[5].Count = (unsigned __int64)a2;
      v18[6].Count = a1;
      v18[2].Count = v19;
      ExAcquireRundownProtection(v18 + 1);
      if ( a9 )
        ExAcquireRundownProtection(v18 + 1);
      v34 = v18 + 3;
      v35 = v55 + 11;
      p_Next = &v55[12].Next->Next;
      if ( *p_Next != &v55[11] )
        __fastfail(3u);
      v34->Count = (unsigned __int64)v35;
      v18[4].Count = (unsigned __int64)p_Next;
      *p_Next = (struct _SINGLE_LIST_ENTRY *)v34;
      v35[1].Next = (struct _SINGLE_LIST_ENTRY *)v34;
      v37 = *(struct _EX_RUNDOWN_REF ***)(a1 + 128);
      v38 = v18 + 8;
      if ( *v37 != (struct _EX_RUNDOWN_REF *)(a1 + 120) )
        __fastfail(3u);
      v38->Count = a1 + 120;
      v18[9].Count = (unsigned __int64)v37;
      *v37 = v38;
      *(_QWORD *)(a1 + 128) = v38;
      if ( (HIDWORD(v18[12].Ptr) & 1) != 0 )
      {
        v39 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), 1u);
        v40 = v52;
        if ( !v39 )
          v40 = 1;
        v52 = v40;
      }
      if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112), (__int64)v37, v32, v33);
      KeAbPostRelease(a1 + 112);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v20, v41, v42, v43);
      KeAbPostRelease((ULONG_PTR)v20);
      *a10 = v18;
      goto LABEL_41;
    }
    if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112), v29, v30, v31);
    KeAbPostRelease(a1 + 112);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v20, v49, v50, v51);
    KeAbPostRelease((ULONG_PTR)v20);
    ExFreePoolWithTag(v18, 0x20666E57u);
LABEL_9:
    *a10 = v54;
LABEL_41:
    v44 = 0LL;
    if ( v53 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 164), 0xFFFFFFFF) == 1 )
      v44 = 8LL;
    if ( v52 > 0 )
    {
      v44 = (unsigned int)v44 | 2;
    }
    else if ( v52 < 0 )
    {
      v44 = (unsigned int)v44 | 4;
    }
    if ( (_DWORD)v44 )
    {
      LOBYTE(v12) = a7 != 0;
      ExpWnfNotifyNameSubscribers(a1, v44, 1LL, v12);
      *a11 = 1;
    }
    return 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112), v25, v26, v27);
  KeAbPostRelease(a1 + 112);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v20, v46, v47, v48);
  KeAbPostRelease((ULONG_PTR)v20);
  ExFreePoolWithTag(v18, 0x20666E57u);
  return 3221225524LL;
}
