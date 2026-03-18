/*
 * XREFs of CcUnmapInactiveViews @ 0x1401613C4
 * Callers:
 *     CcGetVacbMiss @ 0x1400A9104 (CcGetVacbMiss.c)
 *     MiObtainSystemCacheView @ 0x1400A9C20 (MiObtainSystemCacheView.c)
 *     MiDereferenceSegmentThread @ 0x1401611B0 (MiDereferenceSegmentThread.c)
 *     MiRemoveUnusedSegments @ 0x140161338 (MiRemoveUnusedSegments.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1400A9478 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1400A94E0 (CcAcquireBcbLockAndVacbLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     CcReferenceVacbArray @ 0x1400AA7C8 (CcReferenceVacbArray.c)
 *     SetVacb @ 0x1400AA800 (SetVacb.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1400AB490 (CcDecrementOpenCount.c)
 *     CcGetVacbLargeOffset @ 0x1400AB770 (CcGetVacbLargeOffset.c)
 *     CcSetVacbInFreeList @ 0x1400AB7EC (CcSetVacbInFreeList.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CcCanReuseVacb @ 0x1401DE49C (CcCanReuseVacb.c)
 *     CcDereferenceVacbArray @ 0x1401DE660 (CcDereferenceVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1401DE70C (CcGetRandomVacbArrayWithReference.c)
 *     CcRecalculateVacbArrayHighwaterMark @ 0x1401DE7AC (CcRecalculateVacbArrayHighwaterMark.c)
 *     RtlRandomEx @ 0x140459080 (RtlRandomEx.c)
 *     CcUnmapVacb @ 0x140515A10 (CcUnmapVacb.c)
 */

__int64 __fastcall CcUnmapInactiveViews(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 v4; // r13
  unsigned int v5; // r12d
  __int64 RandomVacbArrayWithReference; // rdi
  __int64 v7; // r15
  unsigned int v8; // r14d
  bool v10; // bl
  unsigned int v11; // ebx
  KIRQL v12; // si
  _DWORD *v13; // rax
  unsigned int v14; // ebx
  ULONG v15; // eax
  __int64 v16; // rsi
  __int64 v17; // r9
  KIRQL v18; // r14
  unsigned __int64 *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rsi
  unsigned int v23; // r12d
  int v24; // r12d
  __int64 v25; // rax
  __int64 VacbLargeOffset; // r14
  int v27; // r15d
  unsigned int v28; // ecx
  KIRQL v29; // bl
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // r8
  int v35; // esi
  __int64 v36; // rbx
  unsigned int v37; // [rsp+20h] [rbp-58h]
  int v38; // [rsp+24h] [rbp-54h]
  BOOL v39; // [rsp+28h] [rbp-50h]
  __int64 v40; // [rsp+30h] [rbp-48h]
  int v41; // [rsp+38h] [rbp-40h]
  unsigned int v42; // [rsp+3Ch] [rbp-3Ch]
  struct _KLOCK_QUEUE_HANDLE v43; // [rsp+40h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-20h] BYREF
  bool v45; // [rsp+C0h] [rbp+48h]
  unsigned int v46; // [rsp+C8h] [rbp+50h]
  int v47; // [rsp+D0h] [rbp+58h]

  LODWORD(v4) = -1;
  v37 = 0;
  v5 = 0;
  v42 = 0;
  RandomVacbArrayWithReference = 0LL;
  v41 = 0;
  v7 = 0LL;
  v38 = 0;
  v8 = 0;
  v40 = 0LL;
  v46 = 0;
  if ( a4 )
    *a4 = 0LL;
  v39 = a4 != 0LL;
  if ( !CcNumberOfMappedVacbs || !CcInitializationComplete )
    return 0LL;
  v47 = a3 & 1;
  v10 = !(a3 & 1);
  v45 = v10;
  do
  {
    while ( v5 < 0x40 && v8 <= CcVacbArraysHighestUsedIndex )
    {
      if ( RandomVacbArrayWithReference )
      {
LABEL_20:
        if ( v10 )
        {
          v14 = 0;
          while ( 1 )
          {
            v15 = RtlRandomEx(&CcRandomSeed);
            v16 = RandomVacbArrayWithReference
                + 8
                * (v15 % (*(_DWORD *)(RandomVacbArrayWithReference + 8) + 1)
                 + 4LL * (v15 % (*(_DWORD *)(RandomVacbArrayWithReference + 8) + 1))
                 + 2);
            if ( !(unsigned __int8)CcCanReuseVacb(v16, 0LL) )
            {
              ++v14;
              v16 = 0LL;
            }
            if ( v16 )
              break;
            if ( v14 > 0x10 )
            {
              ++CcDbgRandomFailed;
              v10 = 0;
              v45 = 0;
              goto LABEL_27;
            }
          }
          v10 = v45;
LABEL_36:
          v18 = KeAcquireQueuedSpinLock(4uLL);
          if ( !(unsigned __int8)CcCanReuseVacb(v16, v7) )
            goto LABEL_58;
          v19 = (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 528LL) + 64LL);
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = v19;
          KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v19);
          v20 = *(_QWORD *)(v16 + 8);
          if ( *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v20 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) + 8LL) != v20 )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_58:
            v40 = 0LL;
            v7 = 0LL;
            KeReleaseQueuedSpinLock(4uLL, v18);
            goto LABEL_59;
          }
          ++*(_DWORD *)(v20 + 4);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v21 = *(_QWORD *)(v16 + 16);
          v22 = *(_QWORD *)(v16 + 8);
          v23 = *(_DWORD *)(v22 + 152);
          KeReleaseQueuedSpinLock(4uLL, v18);
          v24 = (v23 >> 9) & 1;
          CcAcquireBcbLockAndVacbLock(v24, (struct _FAST_MUTEX *)v22);
          if ( v21 < 0
            || (v25 = *(_QWORD *)(v22 + 32), v21 >= v25)
            || (v25 <= 0x2000000
              ? (VacbLargeOffset = *(_QWORD *)(*(_QWORD *)(v22 + 88) + 8 * ((unsigned __int64)(unsigned int)v21 >> 18)))
              : (VacbLargeOffset = CcGetVacbLargeOffset(v22, v21)),
                !VacbLargeOffset || *(_WORD *)(VacbLargeOffset + 16)) )
          {
            v32 = *(_QWORD *)(v22 + 528);
            CcReleaseBcbLockAndVacbLock(v24, (struct _FAST_MUTEX *)v22);
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v32 + 64), &v43);
            CcDecrementOpenCount(v22, v33, v34);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v43);
            __writecr8(v43.OldIrql);
            v10 = v45;
            v5 = v37;
            goto LABEL_59;
          }
          SetVacb(v22, v21, 0LL);
          if ( CcNumberOfFreeHighPriorityVacbs >= (unsigned int)CcMinimumFreeHighPriorityVacbs )
          {
            v27 = 0;
            if ( !v39 )
            {
              v28 = v38 & 0xFFFFFFFD;
              v38 &= ~2u;
              if ( !v40 && v47 )
                v40 = *(_QWORD *)VacbLargeOffset;
              goto LABEL_48;
            }
          }
          else
          {
            v27 = 1;
          }
          v28 = v38 | 2;
          v40 = 0LL;
          v38 |= 2u;
LABEL_48:
          CcUnmapVacb(VacbLargeOffset, v22, v28);
          CcReleaseBcbLockAndVacbLock(v24, (struct _FAST_MUTEX *)v22);
          v5 = v37;
          if ( !v27 )
          {
            v5 = v37 + 1;
            v42 = 1;
            ++v37;
            if ( v39 )
            {
              v39 = 0;
              *a4 = *(_QWORD *)VacbLargeOffset;
              *(_QWORD *)VacbLargeOffset = 0LL;
            }
          }
          v29 = KeAcquireQueuedSpinLock(4uLL);
          *(_QWORD *)(VacbLargeOffset + 8) = 0LL;
          CcSetVacbInFreeList((_QWORD *)VacbLargeOffset, v27);
          KeReleaseQueuedSpinLock(4uLL, v29);
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v22 + 528) + 64LL), &v43);
          CcDecrementOpenCount(v22, v30, v31);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v43);
          __writecr8(v43.OldIrql);
          v7 = v40;
          v10 = v45;
LABEL_59:
          v8 = v46;
        }
        else
        {
          if ( (_DWORD)v4 == -1 )
            LODWORD(v4) = *(_DWORD *)(RandomVacbArrayWithReference + 8) + 1;
          if ( (_DWORD)v4 )
          {
            do
            {
              v4 = (unsigned int)(v4 - 1);
              v16 = RandomVacbArrayWithReference + 8 * ((unsigned int)v4 + 2LL + 4 * v4);
              if ( (unsigned __int8)CcCanReuseVacb(v16, v7) )
                break;
              v16 = v17;
            }
            while ( (_DWORD)v4 );
            if ( v16 )
              goto LABEL_36;
          }
LABEL_27:
          CcDereferenceVacbArray(RandomVacbArrayWithReference, 0LL);
          RandomVacbArrayWithReference = 0LL;
        }
      }
      else
      {
        LODWORD(v4) = -1;
        if ( v10 )
        {
          RandomVacbArrayWithReference = CcGetRandomVacbArrayWithReference();
LABEL_19:
          if ( *(_DWORD *)(RandomVacbArrayWithReference + 4) == 1 )
            goto LABEL_27;
          goto LABEL_20;
        }
        v11 = v8;
        v12 = KeAcquireQueuedSpinLock(4uLL);
        while ( 1 )
        {
          v13 = CcReferenceVacbArray(v11);
          RandomVacbArrayWithReference = (__int64)v13;
          if ( v13 )
            break;
          if ( ++v11 >= 0x500 )
          {
            KeReleaseQueuedSpinLock(4uLL, v12);
            RandomVacbArrayWithReference = 0LL;
            goto LABEL_16;
          }
        }
        CcRecalculateVacbArrayHighwaterMark(v13);
        KeReleaseQueuedSpinLock(4uLL, v12);
LABEL_16:
        v10 = v45;
        v46 = ++v8;
        if ( RandomVacbArrayWithReference )
          goto LABEL_19;
      }
    }
    if ( RandomVacbArrayWithReference )
    {
      CcDereferenceVacbArray(RandomVacbArrayWithReference, 0LL);
      RandomVacbArrayWithReference = 0LL;
    }
    if ( v41 || v5 >= 0x40 )
      break;
    v41 = 1;
    v35 = 0;
    ExAcquireFastMutex(&CcBcbTrimNotificationListLock);
    v36 = CcBcbTrimNotificationList;
    if ( (__int64 *)CcBcbTrimNotificationList != &CcBcbTrimNotificationList )
    {
      do
      {
        KeReleaseGuardedMutex(&CcBcbTrimNotificationListLock);
        v35 |= (*(__int64 (__fastcall **)(_QWORD))(v36 + 16))((64 - v5) << 18);
        ExAcquireFastMutex(&CcBcbTrimNotificationListLock);
        v36 = *(_QWORD *)v36;
      }
      while ( (__int64 *)v36 != &CcBcbTrimNotificationList );
      v7 = v40;
    }
    KeReleaseGuardedMutex(&CcBcbTrimNotificationListLock);
    v10 = v45;
    v8 = v46;
  }
  while ( v35 );
  _InterlockedIncrement(&CcDbgNumberOfCcUnmapInactiveViews);
  return v42;
}
