/*
 * XREFs of ExpWnfDispatchKernelSubscription @ 0x140444870
 * Callers:
 *     ExpWnfStartKernelDispatcher @ 0x1404447C8 (ExpWnfStartKernelDispatcher.c)
 *     ExpWnfWorkItemRoutine @ 0x140444820 (ExpWnfWorkItemRoutine.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400FE070 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1404EE658 (ExpWnfNotifyNameSubscribers.c)
 */

__int64 ExpWnfDispatchKernelSubscription()
{
  struct _SINGLE_LIST_ENTRY *Next; // r13
  volatile signed __int64 *v1; // rdi
  PRTL_BALANCED_NODE v2; // rax
  PRTL_BALANCED_NODE v3; // rbx
  struct _SINGLE_LIST_ENTRY *v4; // rbp
  struct _SINGLE_LIST_ENTRY v5; // rdx
  struct _SINGLE_LIST_ENTRY *v6; // rcx
  volatile signed __int64 *v7; // r15
  unsigned int Next_high; // r14d
  PRTL_BALANCED_NODE v9; // rsi
  struct _SINGLE_LIST_ENTRY *v10; // rsi
  unsigned int v11; // eax
  struct _SINGLE_LIST_ENTRY *v12; // rdx
  __int64 Next_low; // r9
  PRTL_BALANCED_NODE v14; // rax
  PRTL_BALANCED_NODE v15; // rsi
  __int64 v17; // [rsp+48h] [rbp-40h] BYREF

  Next = PsInitialSystemProcess[2].SwapListEntry.Next;
  v1 = (volatile signed __int64 *)&Next[13];
  v2 = KeAbPreAcquire((ULONG_PTR)&Next[13], 0LL, 0);
  v3 = v2;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Next[13], 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Next[13], v2, (ULONG_PTR)&Next[13]);
  if ( v3 )
    BYTE2(v3[1].Left) |= 1u;
  while ( 1 )
  {
    v4 = Next[14].Next;
    if ( v4 == &Next[14] )
      break;
    ExAcquireRundownProtection((PEX_RUNDOWN_REF)&v4[-12]);
    LODWORD(v4[2].Next) = 2;
    v5.Next = v4->Next;
    v6 = v4[1].Next;
    if ( v4->Next[1].Next != v4 || v6->Next != v4 )
      __fastfail(3u);
    v6->Next = v5.Next;
    v7 = (volatile signed __int64 *)&Next[10];
    v5.Next[1].Next = v6;
    do
    {
      Next_high = HIDWORD(v4[2].Next);
      HIDWORD(v4[2].Next) = 0;
      if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&Next[13]);
      KeAbPostRelease((ULONG_PTR)&Next[13]);
      v9 = KeAbPreAcquire((ULONG_PTR)&Next[10], 0LL, 0);
      if ( _InterlockedCompareExchange64(v7, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)&Next[10], v9, (ULONG_PTR)&Next[10]);
      if ( v9 )
        BYTE2(v9[1].Left) |= 1u;
      v10 = v4[-7].Next;
      if ( !v10
        || (v10 = (struct _SINGLE_LIST_ENTRY *)(-(__int64)(ExAcquireRundownProtection((PEX_RUNDOWN_REF)&v10[1]) != 0) & (unsigned __int64)v10)) == 0LL )
      {
        Next_high &= ~1u;
      }
      if ( (Next_high & 1) != 0 )
      {
        v11 = (unsigned int)v10[12].Next;
        if ( v11 <= LODWORD(v4[-1].Next) )
          Next_high &= ~1u;
        else
          LODWORD(v4[-1].Next) = v11;
      }
      if ( Next_high )
      {
        if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&Next[10]);
        KeAbPostRelease((ULONG_PTR)&Next[10]);
        v17 = (__int64)v4[-6].Next ^ 0x41C64E6DA3BC0074LL;
        if ( v10 )
          v12 = v10[8].Next;
        else
          v12 = 0LL;
        if ( v10 && (Next_high & 1) != 0 )
          Next_low = LODWORD(v10[12].Next);
        else
          Next_low = 0LL;
        ((void (__fastcall *)(struct _SINGLE_LIST_ENTRY *, __int64 *, _QWORD, __int64, struct _SINGLE_LIST_ENTRY *, struct _SINGLE_LIST_ENTRY *))v4[-3].Next)(
          &v4[-13],
          &v17,
          Next_high,
          Next_low,
          v12,
          v4[-2].Next);
        if ( (Next_high & 1) != 0
          && _InterlockedExchangeAdd((volatile signed __int32 *)&v10[20].Next + 1, 0xFFFFFFFF) == 1 )
        {
          ExpWnfNotifyNameSubscribers(v10, 8LL, 0LL);
        }
      }
      else
      {
        if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&Next[10]);
        KeAbPostRelease((ULONG_PTR)&Next[10]);
      }
      if ( v10 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)&v10[1]);
      v14 = KeAbPreAcquire((ULONG_PTR)&Next[13], 0LL, 0);
      v15 = v14;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Next[13], v14, (ULONG_PTR)&Next[13]);
      if ( v15 )
        BYTE2(v15[1].Left) |= 1u;
    }
    while ( HIDWORD(v4[2].Next) );
    LODWORD(v4[2].Next) = 0;
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&v4[-12]);
  }
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Next[13]);
  return KeAbPostRelease((ULONG_PTR)&Next[13]);
}
