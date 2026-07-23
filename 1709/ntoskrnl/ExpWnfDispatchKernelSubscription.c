/*
 * XREFs of ExpWnfDispatchKernelSubscription @ 0x140592EC4
 * Callers:
 *     ExpWnfStartKernelDispatcher @ 0x140592E18 (ExpWnfStartKernelDispatcher.c)
 *     ExpWnfWorkItemRoutine @ 0x140592E70 (ExpWnfWorkItemRoutine.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x14005D4E0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140500F14 (ExpWnfNotifyNameSubscribers.c)
 */

char ExpWnfDispatchKernelSubscription()
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
  __int64 v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r9
  PRTL_BALANCED_NODE v14; // rax
  PRTL_BALANCED_NODE v15; // rsi
  __int64 v17; // [rsp+48h] [rbp-40h] BYREF

  Next = PsInitialSystemProcess[2].SwapListEntry.Next;
  v1 = (volatile signed __int64 *)&Next[13];
  v2 = KeAbPreAcquire((ULONG_PTR)&Next[13], 0LL, 0);
  v3 = v2;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Next[13], 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Next[13], (__int64)v2, (__int16 *)&Next[13]);
  if ( v3 )
    BYTE2(v3[1].Left) |= 1u;
  while ( 1 )
  {
    v4 = Next[14].Next;
    if ( v4 == &Next[14] )
      break;
    ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v4[-12]);
    LODWORD(v4[2].Next) = 2;
    v5.Next = v4->Next;
    if ( v4->Next[1].Next != v4 || (v6 = v4[1].Next, v6->Next != v4) )
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
        ExfAcquirePushLockSharedEx((signed __int64 *)&Next[10], (__int64)v9, (ULONG_PTR)&Next[10]);
      if ( v9 )
        BYTE2(v9[1].Left) |= 1u;
      v10 = (__int64)v4[-7].Next;
      if ( !v10 || (v10 &= -(__int64)(ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v10 + 8)) != 0)) == 0 )
        Next_high &= ~1u;
      if ( (Next_high & 1) != 0 )
      {
        v11 = *(_DWORD *)(v10 + 96);
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
          v12 = *(_QWORD *)(v10 + 64);
        else
          v12 = 0LL;
        if ( v10 && (Next_high & 1) != 0 )
          v13 = *(unsigned int *)(v10 + 96);
        else
          v13 = 0LL;
        ((void (__fastcall *)(struct _SINGLE_LIST_ENTRY *, __int64 *, _QWORD, __int64, __int64, struct _SINGLE_LIST_ENTRY *))v4[-3].Next)(
          &v4[-13],
          &v17,
          Next_high,
          v13,
          v12,
          v4[-2].Next);
        if ( (Next_high & 1) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 164), 0xFFFFFFFF) == 1 )
          ExpWnfNotifyNameSubscribers(v10, 8, 0, 0);
      }
      else
      {
        if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&Next[10]);
        KeAbPostRelease((ULONG_PTR)&Next[10]);
      }
      if ( v10 )
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v10 + 8));
      v14 = KeAbPreAcquire((ULONG_PTR)&Next[13], 0LL, 0);
      v15 = v14;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Next[13], (__int64)v14, (__int16 *)&Next[13]);
      if ( v15 )
        BYTE2(v15[1].Left) |= 1u;
    }
    while ( HIDWORD(v4[2].Next) );
    LODWORD(v4[2].Next) = 0;
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v4[-12]);
  }
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Next[13]);
  return KeAbPostRelease((ULONG_PTR)&Next[13]);
}
