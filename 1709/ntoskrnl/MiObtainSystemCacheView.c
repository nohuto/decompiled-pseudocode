/*
 * XREFs of MiObtainSystemCacheView @ 0x1400A3510
 * Callers:
 *     MmMapViewInSystemCache @ 0x1400A2D00 (MmMapViewInSystemCache.c)
 *     MmReserveViewInSystemCache @ 0x1405CB5E4 (MmReserveViewInSystemCache.c)
 * Callees:
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     RemoveListHeadPte @ 0x1400A3BF4 (RemoveListHeadPte.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiCompareTbFlushTimeStamp @ 0x1400B7C30 (MiCompareTbFlushTimeStamp.c)
 *     MiExpandSystemCache @ 0x1400F52C8 (MiExpandSystemCache.c)
 *     MiWaitForSystemCacheViewFlush @ 0x140127C20 (MiWaitForSystemCacheViewFlush.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPteLink @ 0x14017C6E8 (MiGetPteLink.c)
 *     MiUpdateLinkedListInPte @ 0x14017C9D8 (MiUpdateLinkedListInPte.c)
 *     CcUnmapInactiveViews @ 0x1401E1A30 (CcUnmapInactiveViews.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiIncrementSystemCacheViewCount @ 0x140219DF8 (MiIncrementSystemCacheViewCount.c)
 *     MiInitializeSystemCache @ 0x1405B3A64 (MiInitializeSystemCache.c)
 */

_QWORD *__fastcall MiObtainSystemCacheView(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v2; // r12d
  __int64 CurrentIrql; // rsi
  _QWORD *v5; // rdx
  volatile signed __int64 *v6; // rsi
  unsigned __int8 v8; // al
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r13
  _QWORD *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  _QWORD *v16; // rdi
  __int64 v17; // rax
  _KPROCESS *v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned __int8 v21; // si
  __int64 PteLink; // rax
  int v23; // eax
  int v24; // edx
  unsigned int v25; // edx
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r8
  _KPROCESS *v32; // rdx
  int v33; // r11d
  __int64 *v34; // r10
  __int64 PteShadow; // r9
  signed __int64 updated; // r8
  signed __int64 v37; // r9
  volatile signed __int64 *v38; // r10
  int v39; // r11d
  __int64 v40; // r12
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  signed __int32 v44[8]; // [rsp+0h] [rbp-100h] BYREF
  int v45; // [rsp+20h] [rbp-E0h]
  __int64 v46; // [rsp+28h] [rbp-D8h]
  struct _KTHREAD *v47; // [rsp+30h] [rbp-D0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v49; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v50; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v52; // [rsp+68h] [rbp-98h]
  int v53; // [rsp+70h] [rbp-90h] BYREF
  __int16 v54; // [rsp+74h] [rbp-8Ch]
  __int64 v55; // [rsp+78h] [rbp-88h]
  __int64 v56; // [rsp+80h] [rbp-80h]
  __int64 v57; // [rsp+88h] [rbp-78h]
  _QWORD v58[12]; // [rsp+130h] [rbp+30h]

  v55 = 20LL;
  v53 = 0;
  CurrentThread = 0LL;
  v54 = 0;
  v2 = 0;
  v56 = 0LL;
  v57 = 0LL;
  v47 = 0LL;
  v45 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v46 = CurrentIrql;
  __writecr8(2uLL);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)&qword_140388980;
  LockHandle.LockQueue.Next = (_KSPIN_LOCK_QUEUE *volatile)(unsigned __int8)v56;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, &qword_140388980);
  }
  else
  {
    v5 = (_QWORD *)_InterlockedExchange64(&qword_140388980, (__int64)&LockHandle);
    if ( v5 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v5);
  }
  if ( !*(_BYTE *)(a1 + 5788) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8((unsigned __int8)CurrentIrql);
    CurrentThread = KeGetCurrentThread();
    v47 = CurrentThread;
    --CurrentThread->SpecialApcDisable;
    v6 = (volatile signed __int64 *)(a1 + 1776);
    ExAcquirePushLockExclusiveEx(a1 + 1776, 0LL);
    if ( *(_BYTE *)(a1 + 5788) )
    {
      if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 1776);
      KeAbPostRelease(a1 + 1776);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      CurrentThread = 0LL;
      v47 = 0LL;
    }
    else if ( !(unsigned int)MiInitializeSystemCache(a1) )
    {
      if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 1776);
      KeAbPostRelease(a1 + 1776);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      return 0LL;
    }
    v8 = KeGetCurrentIrql();
    __writecr8(2uLL);
    LOBYTE(v46) = v8;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)&qword_140388980;
    LockHandle.LockQueue.Next = 0LL;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, &qword_140388980);
    if ( CurrentThread )
      *(_BYTE *)(a1 + 5788) = 1;
  }
  v9 = *(_QWORD *)(a1 + 1704);
  v10 = ((unsigned __int64)(a1 + 1704) >> 9) & 0x7FFFFFFFF8LL;
  v49 = v10;
  if ( MiGetPteLink(v9) != (__int64)(v10 - *(_QWORD *)(a1 + 1720) - 0x98000000000LL) >> 3 )
    goto LABEL_19;
  while ( MiExpandSystemCache(a1) )
  {
    if ( MiGetPteLink(*(_QWORD *)(a1 + 1704)) != (__int64)(v10 - *(_QWORD *)(a1 + 1720) - 0x98000000000LL) >> 3 )
      goto LABEL_19;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8((unsigned __int8)v46);
  if ( CurrentThread )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1776), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1776);
    KeAbPostRelease(a1 + 1776);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v47 = 0LL;
  }
  if ( (unsigned int)CcUnmapInactiveViews(*(_QWORD *)(a1 + 168), v14, 0LL, &v50) != 1 )
  {
    v21 = KeGetCurrentIrql();
    __writecr8(2uLL);
    LOBYTE(v46) = v21;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)&qword_140388980;
    LockHandle.LockQueue.Next = 0LL;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, &qword_140388980);
    PteLink = MiGetPteLink(*(_QWORD *)(a1 + 1704));
    if ( PteLink == (__int64)(v49 - *(_QWORD *)(a1 + 1720) - 0x98000000000LL) >> 3 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(v21);
      return 0LL;
    }
LABEL_19:
    v11 = RemoveListHeadPte(a1 + 1704);
    v52 = v11;
    v51 = 0LL;
    MiIncrementSystemCacheViewCount((__int64)(v11 << 25) >> 16);
    v12 = (_QWORD *)(v11 + 24);
    v13 = MiGetPteLink(*(_QWORD *)(v11 + 24));
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        v45 = 1;
      }
      else
      {
        _InterlockedOr(v44, 0);
        v23 = MiGetPteLink(*(_QWORD *)(v11 + 16));
        v25 = (v24 - v23) & 0xFFFFF;
        if ( v25 <= 2 && ((v23 & 1) != 0 || v25 < 2) )
        {
          v26 = v49;
          v27 = v11;
          v28 = v51;
          do
          {
            if ( HIDWORD(v55) )
            {
              v29 = v2++;
              v58[v29] = v27;
            }
            v50 = (__int64)((v27 << 25) - v28) >> 16;
            MiInsertTbFlushEntry(&v53, v50, 64LL, 0);
            *v12 = MiUpdateLinkedListInPte(*v12, 1LL);
            if ( v2 == 12 )
              break;
            v30 = MiGetPteLink(*(_QWORD *)v27);
            v31 = *(_QWORD *)(a1 + 1720);
            if ( v30 == (__int64)(v26 - v31 - 0x98000000000LL) >> 3 )
              break;
            v27 = v31 + 8 * v30;
            v12 = (_QWORD *)(v27 + 24);
          }
          while ( MiGetPteLink(*(_QWORD *)(v27 + 24)) == 2 );
          v11 = v52;
        }
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( HIDWORD(v55) )
    {
      MiFlushTbList((__int64)&v53, v32);
      v33 = 0;
      if ( v2 )
      {
        do
        {
          v34 = (__int64 *)(v58[v33] + 24LL);
          PteShadow = *v34;
          if ( (unsigned __int64)v34 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v34 <= 0xFFFFF6FB7DBED7F8uLL )
            PteShadow = MiReadPteShadow(v58[v33] + 24LL, *v34);
          updated = MiUpdateLinkedListInPte(PteShadow, 0LL);
          _InterlockedCompareExchange64(v38, updated, v37);
          v33 = v39 + 1;
        }
        while ( v33 != v2 );
      }
    }
    __writecr8((unsigned __int8)v46);
    v40 = (__int64)v47;
    if ( v47 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1776), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 1776);
      KeAbPostRelease(a1 + 1776);
      KiLeaveGuardedRegionUnsafe(v40);
    }
    if ( v45 == 1 )
      MiWaitForSystemCacheViewFlush(v11);
    *(_QWORD *)v11 = 0LL;
    if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v11, 0LL);
    v41 = v11 + 8;
    *(_QWORD *)(v11 + 8) = 0LL;
    if ( v11 + 8 >= 0xFFFFF6FB7DBED000uLL && v41 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v41, 0LL);
    v42 = v11 + 16;
    *(_QWORD *)(v11 + 16) = 0LL;
    if ( v11 + 16 >= 0xFFFFF6FB7DBED000uLL && v42 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v42, 0LL);
    v43 = v11 + 24;
    *(_QWORD *)(v11 + 24) = 0LL;
    if ( v11 + 24 >= 0xFFFFF6FB7DBED000uLL && v43 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v43, 0LL);
    return (_QWORD *)v11;
  }
  v15 = v50;
  v16 = (_QWORD *)(((v50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( MiGetPteLink(v16[3]) == 2 )
  {
    v17 = MiGetPteLink(v16[2]);
    if ( (unsigned __int8)MiCompareTbFlushTimeStamp(v17, 0xFFFFFLL) )
    {
      MiInsertTbFlushEntry(&v53, v15, 64LL, 0);
      MiFlushTbList((__int64)&v53, v18);
    }
  }
  *v16 = 0LL;
  if ( (unsigned __int64)v16 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v16 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v16, 0LL);
  v19 = (unsigned __int64)(v16 + 1);
  v16[1] = 0LL;
  if ( (unsigned __int64)(v16 + 1) >= 0xFFFFF6FB7DBED000uLL && v19 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v19, 0LL);
  v20 = (unsigned __int64)(v16 + 2);
  v16[2] = 0LL;
  if ( (unsigned __int64)(v16 + 2) >= 0xFFFFF6FB7DBED000uLL && v20 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v20, 0LL);
  return v16;
}
