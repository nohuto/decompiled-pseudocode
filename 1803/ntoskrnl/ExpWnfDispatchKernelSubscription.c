/*
 * XREFs of ExpWnfDispatchKernelSubscription @ 0x140570C14
 * Callers:
 *     ExpWnfStartKernelDispatcher @ 0x140570B68 (ExpWnfStartKernelDispatcher.c)
 *     ExpWnfWorkItemRoutine @ 0x140570BC0 (ExpWnfWorkItemRoutine.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140008790 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1404F76D8 (ExpWnfNotifyNameSubscribers.c)
 */

char ExpWnfDispatchKernelSubscription()
{
  unsigned __int64 *Next; // r13
  volatile signed __int64 *v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  struct _EX_RUNDOWN_REF *v7; // rsi
  struct _EX_RUNDOWN_REF *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _EX_RUNDOWN_REF v12; // rcx
  struct _EX_RUNDOWN_REF **Count; // rax
  volatile signed __int64 *v14; // r12
  unsigned int Ptr_high; // r15d
  __int64 v16; // rsi
  __int64 v17; // rsi
  unsigned int v18; // ebp
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v25; // [rsp+48h] [rbp-40h] BYREF

  Next = (unsigned __int64 *)PsInitialSystemProcess[2].SwapListEntry.Next;
  v1 = (volatile signed __int64 *)(Next + 13);
  v2 = KeAbPreAcquire((ULONG_PTR)(Next + 13), 0LL, 0);
  v6 = v2;
  if ( _interlockedbittestandset64((volatile signed __int32 *)Next + 26, 0LL) )
    ExfAcquirePushLockExclusiveEx(Next + 13, v2, (ULONG_PTR)(Next + 13));
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  while ( 1 )
  {
    v7 = (struct _EX_RUNDOWN_REF *)Next[14];
    if ( v7 == (struct _EX_RUNDOWN_REF *)(Next + 14) )
      break;
    v8 = v7 - 13;
    ExAcquireRundownProtection(v7 - 12);
    LODWORD(v7[2].Count) = 2;
    v12.Count = v7->Count;
    if ( *(struct _EX_RUNDOWN_REF **)(v7->Count + 8) != v7
      || (Count = (struct _EX_RUNDOWN_REF **)v7[1].Count, *Count != v7) )
    {
      __fastfail(3u);
    }
    *Count = (struct _EX_RUNDOWN_REF *)v12.Count;
    v14 = (volatile signed __int64 *)(Next + 10);
    *(_QWORD *)(v12.Count + 8) = Count;
    Ptr_high = HIDWORD(v8[15].Ptr);
    do
    {
      HIDWORD(v8[15].Ptr) = 0;
      if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)Next + 13, v9, v10, v11);
      KeAbPostRelease((ULONG_PTR)(Next + 13));
      v16 = KeAbPreAcquire((ULONG_PTR)(Next + 10), 0LL, 0);
      if ( _InterlockedCompareExchange64(v14, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(Next + 10, v16, (ULONG_PTR)(Next + 10));
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      v17 = v8[6].Count;
      if ( v17 )
        v17 &= -(__int64)(ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v17 + 8)) != 0);
      v18 = Ptr_high & 0xFFFFFFFE;
      if ( v17 )
        v18 = Ptr_high;
      if ( (v18 & 1) != 0 )
      {
        v19 = *(_DWORD *)(v17 + 96);
        if ( v19 <= LODWORD(v8[12].Count) )
          v18 &= ~1u;
        else
          LODWORD(v8[12].Count) = v19;
      }
      if ( v18 )
      {
        if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)Next + 10);
        KeAbPostRelease((ULONG_PTR)(Next + 10));
        v25 = v8[7].Count ^ 0x41C64E6DA3BC0074LL;
        if ( v17 )
          v20 = *(_QWORD *)(v17 + 64);
        else
          v20 = 0LL;
        if ( v17 && (v18 & 1) != 0 )
          v21 = *(unsigned int *)(v17 + 96);
        else
          v21 = 0LL;
        ((void (__fastcall *)(struct _EX_RUNDOWN_REF *, __int64 *, _QWORD, __int64, __int64, unsigned __int64))v8[10].Count)(
          v8,
          &v25,
          v18,
          v21,
          v20,
          v8[11].Count);
        if ( (v18 & 1) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 164), 0xFFFFFFFF) == 1 )
          ExpWnfNotifyNameSubscribers(v17, 8u, 0, 0);
      }
      else
      {
        if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)Next + 10);
        KeAbPostRelease((ULONG_PTR)(Next + 10));
      }
      if ( v17 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v17 + 8));
      v22 = KeAbPreAcquire((ULONG_PTR)(Next + 13), 0LL, 0);
      v23 = v22;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
        ExfAcquirePushLockExclusiveEx(Next + 13, v22, (ULONG_PTR)(Next + 13));
      if ( v23 )
        *(_BYTE *)(v23 + 26) |= 1u;
      Ptr_high = HIDWORD(v8[15].Ptr);
    }
    while ( Ptr_high );
    LODWORD(v8[15].Count) = 0;
    ExReleaseRundownProtection(v8 + 1);
  }
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)Next + 13, v3, v4, v5);
  return KeAbPostRelease((ULONG_PTR)(Next + 13));
}
