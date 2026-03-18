/*
 * XREFs of MiObtainSystemCacheView @ 0x1400A9C20
 * Callers:
 *     MmMapViewInSystemCache @ 0x1400A9520 (MmMapViewInSystemCache.c)
 *     MmReserveViewInSystemCache @ 0x1405BD89C (MmReserveViewInSystemCache.c)
 * Callees:
 *     MiCompareTbFlushTimeStamp @ 0x140063B30 (MiCompareTbFlushTimeStamp.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     RemoveListHeadPte @ 0x1400AA5FC (RemoveListHeadPte.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MiExpandSystemCache @ 0x140126CDC (MiExpandSystemCache.c)
 *     MiWaitForSystemCacheViewFlush @ 0x140147314 (MiWaitForSystemCacheViewFlush.c)
 *     CcUnmapInactiveViews @ 0x1401613C4 (CcUnmapInactiveViews.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPteLink @ 0x14017CE5C (MiGetPteLink.c)
 *     MiUpdateLinkedListInPte @ 0x14017D130 (MiUpdateLinkedListInPte.c)
 *     MiIncrementSystemCacheViewCount @ 0x14021232C (MiIncrementSystemCacheViewCount.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInitializeSystemCache @ 0x1405BA9B8 (MiInitializeSystemCache.c)
 */

_QWORD *__fastcall MiObtainSystemCacheView(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v2; // r15d
  __int64 CurrentIrql; // r14
  volatile signed __int64 *v5; // r14
  unsigned __int8 v7; // al
  __int64 v8; // rcx
  unsigned __int64 v9; // r14
  __int64 v10; // r12
  _QWORD *v11; // r13
  __int64 PteLink; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  _QWORD *v16; // rdi
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned __int8 v21; // r12
  int v22; // eax
  int v23; // edx
  unsigned int v24; // edx
  unsigned __int64 v25; // rbx
  __int64 v26; // r14
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r8
  int v31; // r11d
  __int64 v32; // rax
  signed __int64 updated; // rax
  signed __int64 v34; // r9
  __int64 v35; // r10
  int v36; // r11d
  struct _KTHREAD *v37; // r14
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  signed __int32 v42[8]; // [rsp+0h] [rbp-100h] BYREF
  int v43; // [rsp+20h] [rbp-E0h]
  __int64 v44; // [rsp+28h] [rbp-D8h]
  struct _KTHREAD *v45; // [rsp+30h] [rbp-D0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v47; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v48; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v49; // [rsp+60h] [rbp-A0h]
  __int64 v50; // [rsp+68h] [rbp-98h]
  int v51; // [rsp+70h] [rbp-90h] BYREF
  __int16 v52; // [rsp+74h] [rbp-8Ch]
  __int64 v53; // [rsp+78h] [rbp-88h]
  __int64 v54; // [rsp+80h] [rbp-80h]
  __int64 v55; // [rsp+88h] [rbp-78h]
  _QWORD v56[12]; // [rsp+130h] [rbp+30h]

  v53 = 20LL;
  v51 = 0;
  CurrentThread = 0LL;
  v52 = 0;
  v2 = 0;
  v54 = 0LL;
  v55 = 0LL;
  v45 = 0LL;
  v43 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v44 = CurrentIrql;
  __writecr8(2uLL);
  LockHandle.LockQueue.Next = (_KSPIN_LOCK_QUEUE *volatile)(unsigned __int8)v54;
  LockHandle.LockQueue.Lock = &qword_14036C5F8;
  KxAcquireQueuedSpinLock(&LockHandle);
  if ( !*(_BYTE *)(a1 + 5596) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8((unsigned __int8)CurrentIrql);
    CurrentThread = KeGetCurrentThread();
    v45 = CurrentThread;
    --CurrentThread->SpecialApcDisable;
    v5 = (volatile signed __int64 *)(a1 + 1712);
    ExAcquirePushLockExclusiveEx(a1 + 1712, 0LL);
    if ( *(_BYTE *)(a1 + 5596) )
    {
      if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 1712);
      KeAbPostRelease(a1 + 1712);
      KiLeaveGuardedRegionUnsafe(CurrentThread);
      CurrentThread = 0LL;
      v45 = 0LL;
    }
    else if ( !(unsigned int)MiInitializeSystemCache(a1) )
    {
      if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 1712);
      KeAbPostRelease(a1 + 1712);
      KiLeaveGuardedRegionUnsafe(CurrentThread);
      return 0LL;
    }
    v7 = KeGetCurrentIrql();
    __writecr8(2uLL);
    LOBYTE(v44) = v7;
    LockHandle.LockQueue.Lock = &qword_14036C5F8;
    LockHandle.LockQueue.Next = 0LL;
    KxAcquireQueuedSpinLock(&LockHandle);
    if ( CurrentThread )
      *(_BYTE *)(a1 + 5596) = 1;
  }
  v8 = *(_QWORD *)(a1 + 1640);
  v9 = ((unsigned __int64)(a1 + 1640) >> 9) & 0x7FFFFFFFF8LL;
  v47 = v9;
  if ( MiGetPteLink(v8) != (__int64)(v9 - *(_QWORD *)(a1 + 1656) - 0x98000000000LL) >> 3 )
    goto LABEL_15;
  while ( MiExpandSystemCache(a1) )
  {
    if ( MiGetPteLink(*(_QWORD *)(a1 + 1640)) != (__int64)(v9 - *(_QWORD *)(a1 + 1656) - 0x98000000000LL) >> 3 )
      goto LABEL_15;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8((unsigned __int8)v44);
  if ( CurrentThread )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1712), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1712);
    KeAbPostRelease(a1 + 1712);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    v45 = 0LL;
  }
  if ( (unsigned int)CcUnmapInactiveViews(v14, v13, 0LL, &v48) != 1 )
  {
    v21 = KeGetCurrentIrql();
    __writecr8(2uLL);
    LOBYTE(v44) = v21;
    LockHandle.LockQueue.Lock = &qword_14036C5F8;
    LockHandle.LockQueue.Next = 0LL;
    KxAcquireQueuedSpinLock(&LockHandle);
    if ( MiGetPteLink(*(_QWORD *)(a1 + 1640)) == (__int64)(v9 - *(_QWORD *)(a1 + 1656) - 0x98000000000LL) >> 3 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(v21);
      return 0LL;
    }
LABEL_15:
    v10 = RemoveListHeadPte(a1 + 1640);
    v50 = v10;
    v49 = 0LL;
    MiIncrementSystemCacheViewCount(v10 << 25 >> 16);
    v11 = (_QWORD *)(v10 + 24);
    PteLink = MiGetPteLink(*(_QWORD *)(v10 + 24));
    if ( PteLink )
    {
      if ( PteLink == 1 )
      {
        v43 = 1;
      }
      else
      {
        _InterlockedOr(v42, 0);
        v22 = MiGetPteLink(*(_QWORD *)(v10 + 16));
        v24 = (v23 - v22) & 0xFFFFF;
        if ( v24 <= 2 && ((v22 & 1) != 0 || v24 < 2) )
        {
          v25 = v47;
          v26 = v10;
          v27 = v49;
          do
          {
            if ( HIDWORD(v53) )
            {
              v28 = v2++;
              v56[v28] = v26;
            }
            v48 = ((v26 << 25) - v27) >> 16;
            MiInsertTbFlushEntry(&v51, v48, 64LL, 0LL);
            *v11 = MiUpdateLinkedListInPte(*v11, 1LL);
            if ( v2 == 12 )
              break;
            v29 = MiGetPteLink(*(_QWORD *)v26);
            v30 = *(_QWORD *)(a1 + 1656);
            if ( v29 == (__int64)(v25 - v30 - 0x98000000000LL) >> 3 )
              break;
            v26 = v30 + 8 * v29;
            v11 = (_QWORD *)(v26 + 24);
          }
          while ( MiGetPteLink(*(_QWORD *)(v26 + 24)) == 2 );
          v10 = v50;
          v11 = (_QWORD *)(v50 + 24);
        }
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( HIDWORD(v53) )
    {
      MiFlushTbList(&v51);
      v31 = 0;
      if ( v2 )
      {
        do
        {
          v32 = MI_READ_PTE_LOCK_FREE(v56[v31] + 24LL);
          updated = MiUpdateLinkedListInPte(v32, 0LL);
          _InterlockedCompareExchange64((volatile signed __int64 *)(v35 + 24), updated, v34);
          v31 = v36 + 1;
        }
        while ( v31 != v2 );
      }
    }
    __writecr8((unsigned __int8)v44);
    v37 = v45;
    if ( v45 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1712), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 1712);
      KeAbPostRelease(a1 + 1712);
      KiLeaveGuardedRegionUnsafe(v37);
    }
    if ( v43 == 1 )
      MiWaitForSystemCacheViewFlush(v10);
    *(_QWORD *)v10 = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v10) )
      MiWritePteShadow(v38);
    *(_QWORD *)(v10 + 8) = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v10 + 8) )
      MiWritePteShadow(v39);
    *(_QWORD *)(v10 + 16) = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v10 + 16) )
      MiWritePteShadow(v40);
    *v11 = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v11) )
      MiWritePteShadow(v41);
    return (_QWORD *)v10;
  }
  v15 = v48;
  v16 = (_QWORD *)(((v48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( MiGetPteLink(v16[3]) == 2 )
  {
    v17 = MiGetPteLink(v16[2]);
    if ( MiCompareTbFlushTimeStamp(v17, 0xFFFFF) )
    {
      MiInsertTbFlushEntry(&v51, v15, 64LL, 0LL);
      MiFlushTbList(&v51);
    }
  }
  *v16 = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v16) )
    MiWritePteShadow(v18);
  v16[1] = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v16 + 1) )
    MiWritePteShadow(v19);
  v16[2] = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v16 + 2) )
    MiWritePteShadow(v20);
  return v16;
}
