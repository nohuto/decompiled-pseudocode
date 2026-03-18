/*
 * XREFs of MiObtainSystemCacheView @ 0x1400DDFF0
 * Callers:
 *     MmMapViewInSystemCache @ 0x1400DD850 (MmMapViewInSystemCache.c)
 *     MmReserveViewInSystemCache @ 0x14062038C (MmReserveViewInSystemCache.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiReturnSystemVa @ 0x140048F2C (MiReturnSystemVa.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MiCompareTbFlushTimeStamp @ 0x140070D44 (MiCompareTbFlushTimeStamp.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiExpandSystemCache @ 0x1400C2710 (MiExpandSystemCache.c)
 *     RemoveListHeadPte @ 0x1400DE6D0 (RemoveListHeadPte.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiWaitForSystemCacheViewFlush @ 0x14014B128 (MiWaitForSystemCacheViewFlush.c)
 *     CcUnmapInactiveViews @ 0x14015C064 (CcUnmapInactiveViews.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiGetPteLink @ 0x1401A653C (MiGetPteLink.c)
 *     MiUpdateLinkedListInPte @ 0x1401A6800 (MiUpdateLinkedListInPte.c)
 *     MiInitializeSystemCache @ 0x14062BC48 (MiInitializeSystemCache.c)
 */

_QWORD *__fastcall MiObtainSystemCacheView(__int64 a1)
{
  int v1; // edi
  struct _KTHREAD *CurrentThread; // r13
  unsigned int v3; // r15d
  __int64 CurrentIrql; // r14
  volatile signed __int64 *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 v14; // al
  __int64 v15; // rcx
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rax
  __int64 *v19; // r12
  __int64 v20; // rcx
  __int64 PteLink; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  volatile signed __int64 *v25; // rcx
  unsigned __int64 v26; // rdi
  _QWORD *v27; // rbx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // eax
  int v39; // edx
  unsigned int v40; // edx
  unsigned __int64 v41; // rbx
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r8
  __int64 v46; // rdx
  signed __int64 updated; // r8
  signed __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // r10
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  signed __int32 v63[8]; // [rsp+0h] [rbp-100h] BYREF
  int v64; // [rsp+20h] [rbp-E0h]
  struct _KTHREAD *v65; // [rsp+28h] [rbp-D8h]
  __int64 v66; // [rsp+30h] [rbp-D0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v68; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v69; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v70; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v71; // [rsp+68h] [rbp-98h]
  __int64 v72; // [rsp+70h] [rbp-90h]
  unsigned __int64 v73; // [rsp+78h] [rbp-88h]
  __int64 *v74; // [rsp+80h] [rbp-80h]
  int v75; // [rsp+90h] [rbp-70h] BYREF
  __int16 v76; // [rsp+94h] [rbp-6Ch]
  __int64 v77; // [rsp+98h] [rbp-68h]
  __int64 v78; // [rsp+A0h] [rbp-60h]
  __int64 v79; // [rsp+A8h] [rbp-58h]
  _QWORD v80[12]; // [rsp+150h] [rbp+50h]

  v1 = 0;
  v77 = 20LL;
  v75 = 0;
  CurrentThread = 0LL;
  v76 = 0;
  v3 = 0;
  v78 = 0LL;
  v79 = 0LL;
  v65 = 0LL;
  v64 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v66 = CurrentIrql;
  __writecr8(2uLL);
  LockHandle.LockQueue.Next = (_KSPIN_LOCK_QUEUE *volatile)(unsigned __int8)v78;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)&qword_1403CBB98;
  KxAcquireQueuedSpinLock(&LockHandle, &qword_1403CBB98);
  if ( !*(_BYTE *)(a1 + 6876) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8((unsigned __int8)CurrentIrql);
    CurrentThread = KeGetCurrentThread();
    v65 = CurrentThread;
    --CurrentThread->SpecialApcDisable;
    v6 = (volatile signed __int64 *)(a1 + 1776);
    ExAcquirePushLockExclusiveEx(a1 + 1776, 0LL);
    if ( *(_BYTE *)(a1 + 6876) )
    {
      if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1776), v7, v8, v9);
      KeAbPostRelease(a1 + 1776);
      KiLeaveGuardedRegionUnsafe(CurrentThread);
      CurrentThread = 0LL;
      v65 = 0LL;
    }
    else if ( !(unsigned int)MiInitializeSystemCache(a1) )
    {
      if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1776), v10, v11, v12);
      KeAbPostRelease(a1 + 1776);
      KiLeaveGuardedRegionUnsafe(CurrentThread);
      return 0LL;
    }
    v14 = KeGetCurrentIrql();
    __writecr8(2uLL);
    LOBYTE(v66) = v14;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)&qword_1403CBB98;
    LockHandle.LockQueue.Next = 0LL;
    KxAcquireQueuedSpinLock(&LockHandle, &qword_1403CBB98);
    if ( CurrentThread )
      *(_BYTE *)(a1 + 6876) = 1;
  }
  v15 = *(_QWORD *)(a1 + 1712);
  v16 = ((unsigned __int64)(a1 + 1712) >> 9) & 0x7FFFFFFFF8LL;
  v71 = v16;
  if ( MiGetPteLink(v15) != (__int64)(v16 - *(_QWORD *)(a1 + 1728) - 0x98000000000LL) >> 3 )
    goto LABEL_15;
  while ( MiExpandSystemCache((__int16 *)a1, &v70) )
  {
    if ( MiGetPteLink(*(_QWORD *)(a1 + 1712)) != (__int64)(v16 - *(_QWORD *)(a1 + 1728) - 0x98000000000LL) >> 3 )
      goto LABEL_15;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8((unsigned __int8)v66);
  if ( CurrentThread )
  {
    v25 = (volatile signed __int64 *)(a1 + 1776);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1776), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    {
      ExfTryToWakePushLock(v25, v22, v23, v24);
      v25 = (volatile signed __int64 *)(a1 + 1776);
    }
    KeAbPostRelease((ULONG_PTR)v25);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    CurrentThread = 0LL;
    v65 = 0LL;
  }
  if ( v70 )
    MiReturnSystemVa(v70, v70 + 0x200000, 8);
  if ( (unsigned int)CcUnmapInactiveViews(*(_QWORD *)(a1 + 168), v22, 0LL, &v69) != 1 )
  {
    v68 = KeGetCurrentIrql();
    __writecr8(2uLL);
    LOBYTE(v66) = v68;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)&qword_1403CBB98;
    LockHandle.LockQueue.Next = 0LL;
    KxAcquireQueuedSpinLock(&LockHandle, &qword_1403CBB98);
    if ( MiGetPteLink(*(_QWORD *)(a1 + 1712)) == (__int64)(v16 - *(_QWORD *)(a1 + 1728) - 0x98000000000LL) >> 3 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8((unsigned __int8)v68);
      return 0LL;
    }
LABEL_15:
    v17 = RemoveListHeadPte(a1 + 1712);
    v73 = v17;
    v72 = 0LL;
    v68 = MI_READ_PTE_LOCK_FREE(((((__int64)(v17 << 25) >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL);
    v18 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v68);
    ++*(_BYTE *)(48 * ((v18 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 39);
    v19 = (__int64 *)(v17 + 24);
    v20 = *(_QWORD *)(v17 + 24);
    v74 = (__int64 *)(v17 + 24);
    PteLink = MiGetPteLink(v20);
    if ( PteLink )
    {
      if ( PteLink == 1 )
      {
        v64 = 1;
      }
      else
      {
        _InterlockedOr(v63, 0);
        v38 = MiGetPteLink(*(_QWORD *)(v17 + 16));
        v40 = (v39 - v38) & 0xFFFFF;
        if ( v40 <= 2 && ((v38 & 1) != 0 || v40 < 2) )
        {
          v41 = v71;
          v42 = v72;
          do
          {
            if ( HIDWORD(v77) )
            {
              v43 = v3++;
              v80[v43] = v17;
            }
            v69 = (__int64)((v17 << 25) - v42) >> 16;
            MiInsertTbFlushEntry((__int64)&v75, v69, 64LL, 0);
            *v19 = MiUpdateLinkedListInPte(*v19, 1LL);
            if ( v3 == 12 )
              break;
            v44 = MiGetPteLink(*(_QWORD *)v17);
            v45 = *(_QWORD *)(a1 + 1728);
            if ( v44 == (__int64)(v41 - v45 - 0x98000000000LL) >> 3 )
              break;
            v17 = v45 + 8 * v44;
            v19 = (__int64 *)(v17 + 24);
          }
          while ( MiGetPteLink(*(_QWORD *)(v17 + 24)) == 2 );
          CurrentThread = v65;
          v17 = v73;
          v1 = 0;
          v19 = v74;
        }
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( HIDWORD(v77) )
    {
      MiFlushTbList(&v75);
      if ( v3 )
      {
        do
        {
          v49 = MI_READ_PTE_LOCK_FREE(v80[v1] + 24LL);
          updated = MiUpdateLinkedListInPte(v49, 0LL);
          _InterlockedCompareExchange64((volatile signed __int64 *)(v50 + 24), updated, v48);
          ++v1;
        }
        while ( v1 != v3 );
      }
    }
    __writecr8((unsigned __int8)v66);
    if ( CurrentThread )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1776), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1776), v46, updated, v48);
      KeAbPostRelease(a1 + 1776);
      KiLeaveGuardedRegionUnsafe(CurrentThread);
    }
    if ( v64 == 1 )
      MiWaitForSystemCacheViewFlush(v17);
    *(_QWORD *)v17 = ZeroPte;
    if ( MiPteInShadowRange(v17) )
    {
      MiWritePteShadow(v52, v51, v53);
      v51 = ZeroPte;
    }
    *(_QWORD *)(v17 + 8) = v51;
    if ( MiPteInShadowRange(v17 + 8) )
    {
      MiWritePteShadow(v55, v54, v56);
      v54 = ZeroPte;
    }
    *(_QWORD *)(v17 + 16) = v54;
    if ( MiPteInShadowRange(v17 + 16) )
    {
      MiWritePteShadow(v58, v57, v59);
      v57 = ZeroPte;
    }
    *v19 = v57;
    if ( MiPteInShadowRange((unsigned __int64)v19) )
      MiWritePteShadow(v61, v60, v62);
    return (_QWORD *)v17;
  }
  v26 = v69;
  v27 = (_QWORD *)(((v69 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( MiGetPteLink(v27[3]) == 2 )
  {
    v28 = MiGetPteLink(v27[2]);
    if ( MiCompareTbFlushTimeStamp(v28, 0xFFFFF) )
    {
      MiInsertTbFlushEntry((__int64)&v75, v26, 64LL, 0);
      MiFlushTbList(&v75);
    }
  }
  *v27 = ZeroPte;
  if ( MiPteInShadowRange((unsigned __int64)v27) )
  {
    MiWritePteShadow(v30, v29, v31);
    v29 = ZeroPte;
  }
  v27[1] = v29;
  if ( MiPteInShadowRange((unsigned __int64)(v27 + 1)) )
  {
    MiWritePteShadow(v33, v32, v34);
    v32 = ZeroPte;
  }
  v27[2] = v32;
  if ( MiPteInShadowRange((unsigned __int64)(v27 + 2)) )
    MiWritePteShadow(v36, v35, v37);
  return v27;
}
