/*
 * XREFs of ExpWnfSubscribeNameInstance @ 0x1404F01B0
 * Callers:
 *     ExpWnfSubscribeWnfStateChange @ 0x1404EEDDC (ExpWnfSubscribeWnfStateChange.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400FE070 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1404EE658 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfUpdateSubscription @ 0x1404F0600 (ExpWnfUpdateSubscription.c)
 */

__int64 __fastcall ExpWnfSubscribeNameInstance(
        __int64 a1,
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
  int v12; // edi
  PRTL_BALANCED_NODE v15; // r14
  int updated; // r14d
  unsigned int v17; // edx
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF *v20; // rsi
  signed __int64 v21; // r12
  unsigned __int64 *v22; // r14
  PRTL_BALANCED_NODE v23; // rax
  PRTL_BALANCED_NODE v24; // r15
  volatile signed __int64 *v25; // r15
  PRTL_BALANCED_NODE v26; // rax
  signed __int8 v27; // cf
  struct _EX_RUNDOWN_REF *v28; // rcx
  struct _SINGLE_LIST_ENTRY *v29; // rax
  struct _SINGLE_LIST_ENTRY **p_Next; // rdx
  struct _EX_RUNDOWN_REF **v31; // rdx
  struct _EX_RUNDOWN_REF *v32; // rax
  signed __int32 v33; // ecx
  int v34; // eax
  int v35; // [rsp+50h] [rbp-20h] BYREF
  int v36; // [rsp+54h] [rbp-1Ch] BYREF
  struct _EX_RUNDOWN_REF *v37; // [rsp+58h] [rbp-18h] BYREF
  struct _SINGLE_LIST_ENTRY *v38; // [rsp+60h] [rbp-10h]
  _RTL_BALANCED_NODE *v39; // [rsp+68h] [rbp-8h]

  Next = a2[2].SwapListEntry.Next;
  v12 = 0;
  v38 = Next;
  v35 = 0;
  *a11 = 0;
  v36 = 0;
  if ( a7 == 1 )
  {
    v15 = KeAbPreAcquire((ULONG_PTR)&Next[10], 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Next[10], 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&Next[10], v15, (ULONG_PTR)&Next[10]);
    if ( v15 )
      BYTE2(v15[1].Left) |= 1u;
    updated = ExpWnfUpdateSubscription(
                a1,
                (_DWORD)Next,
                a3,
                a4,
                a6,
                (__int64)&v37,
                (__int64)&v35,
                (__int64)&v36,
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
  v20 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x88uLL);
  LODWORD(v20->Count) = 8915205;
  v20[10].Count = a3;
  v20[11].Count = a4;
  LODWORD(v20[12].Count) = a5;
  HIDWORD(v20[12].Ptr) = a6;
  v20[1].Count = 0LL;
  v20[7].Count = *(unsigned __int64 *)(a1 + 40);
  if ( a7 )
  {
    do
      v21 = _InterlockedIncrement64(&ExpWnfSubcriptionIdCounter);
    while ( !v21 );
    if ( a8 )
      *a8 = v21;
  }
  else
  {
    v21 = (signed __int64)v20;
    if ( a9 )
      *a9 = v20;
  }
  v22 = (unsigned __int64 *)&v38[10];
  v23 = KeAbPreAcquire((ULONG_PTR)&v38[10], 0LL, 0);
  v24 = v23;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
    ExfAcquirePushLockExclusiveEx(v22, v23, (ULONG_PTR)v22);
  if ( v24 )
    BYTE2(v24[1].Left) |= 1u;
  v25 = (volatile signed __int64 *)(a1 + 112);
  v26 = KeAbPreAcquire(a1 + 112, 0LL, 0);
  v27 = _interlockedbittestandset64((volatile signed __int32 *)(a1 + 112), 0LL);
  v39 = v26;
  if ( v27 )
  {
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 112), v26, a1 + 112);
    v26 = v39;
  }
  if ( v26 )
    BYTE2(v26[1].Left) |= 1u;
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( a7 != 1
      || (int)ExpWnfUpdateSubscription(
                a1,
                (_DWORD)v38,
                a3,
                a4,
                a6,
                (__int64)&v37,
                (__int64)&v35,
                (__int64)&v36,
                (__int64)a8) < 0 )
    {
      v20[5].Count = (unsigned __int64)a2;
      v20[6].Count = a1;
      v20[2].Count = v21;
      ExAcquireRundownProtection(v20 + 1);
      if ( a9 )
        ExAcquireRundownProtection(v20 + 1);
      v28 = v20 + 3;
      v29 = v38 + 11;
      p_Next = &v38[12].Next->Next;
      if ( *p_Next != &v38[11] )
        __fastfail(3u);
      v28->Count = (unsigned __int64)v29;
      v20[4].Count = (unsigned __int64)p_Next;
      *p_Next = (struct _SINGLE_LIST_ENTRY *)v28;
      v29[1].Next = (struct _SINGLE_LIST_ENTRY *)v28;
      v31 = *(struct _EX_RUNDOWN_REF ***)(a1 + 128);
      v32 = v20 + 8;
      if ( *v31 != (struct _EX_RUNDOWN_REF *)(a1 + 120) )
        __fastfail(3u);
      v32->Count = a1 + 120;
      v20[9].Count = (unsigned __int64)v31;
      *v31 = v32;
      *(_QWORD *)(a1 + 128) = v32;
      if ( (HIDWORD(v20[12].Ptr) & 1) != 0 )
      {
        v33 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), 1u);
        v34 = v35;
        if ( !v33 )
          v34 = 1;
        v35 = v34;
      }
      if ( (_InterlockedExchangeAdd64(v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
      KeAbPostRelease(a1 + 112);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v22);
      KeAbPostRelease((ULONG_PTR)v22);
      *a10 = v20;
      goto LABEL_10;
    }
    if ( (_InterlockedExchangeAdd64(v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
    KeAbPostRelease(a1 + 112);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v22);
    KeAbPostRelease((ULONG_PTR)v22);
    ExFreePoolWithTag(v20, 0x20666E57u);
LABEL_9:
    *a10 = v37;
LABEL_10:
    v17 = 0;
    if ( v36 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 164), 0xFFFFFFFF) == 1 )
      v17 = 8;
    if ( v35 > 0 )
    {
      v17 |= 2u;
    }
    else if ( v35 < 0 )
    {
      v17 |= 4u;
    }
    if ( v17 )
    {
      LOBYTE(v12) = a7 != 0;
      ExpWnfNotifyNameSubscribers(a1, v17, 1, v12);
      *a11 = 1;
    }
    return 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
  KeAbPostRelease(a1 + 112);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v22);
  KeAbPostRelease((ULONG_PTR)v22);
  ExFreePoolWithTag(v20, 0x20666E57u);
  return 3221225524LL;
}
