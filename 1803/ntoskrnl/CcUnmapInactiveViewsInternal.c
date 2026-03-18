/*
 * XREFs of CcUnmapInactiveViewsInternal @ 0x14015C0D8
 * Callers:
 *     CcUnmapInactiveViews @ 0x14015C064 (CcUnmapInactiveViews.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1400C4DA8 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1400C4DE8 (CcAcquireBcbLockAndVacbLock.c)
 *     CcGetVacbLargeOffset @ 0x1400DD0C0 (CcGetVacbLargeOffset.c)
 *     CcSetVacbInFreeList @ 0x1400DD134 (CcSetVacbInFreeList.c)
 *     CcReferenceVacbArray @ 0x1400DD7E4 (CcReferenceVacbArray.c)
 *     CcDecrementOpenCount @ 0x1400DF768 (CcDecrementOpenCount.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     CcCanReuseVacb @ 0x14015C43C (CcCanReuseVacb.c)
 *     SetVacb @ 0x14015C474 (SetVacb.c)
 *     CcDereferenceVacbArray @ 0x14015C4B4 (CcDereferenceVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x14015C528 (CcGetRandomVacbArrayWithReference.c)
 *     CcRecalculateVacbArrayHighwaterMark @ 0x14015C5B4 (CcRecalculateVacbArrayHighwaterMark.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     RtlRandom @ 0x14057F540 (RtlRandom.c)
 *     CcUnmapVacb @ 0x140593090 (CcUnmapVacb.c)
 */

__int64 __fastcall CcUnmapInactiveViewsInternal(__int64 a1, unsigned int a2, char a3, _QWORD *a4)
{
  __int64 v4; // r13
  unsigned int v5; // r12d
  _DWORD *RandomVacbArrayWithReference; // rdi
  __int64 v7; // r14
  unsigned int v8; // r15d
  bool v9; // bl
  unsigned int v10; // ebx
  ULONG v11; // eax
  _DWORD *v12; // rsi
  KIRQL v13; // r15
  char CanReuseVacb; // al
  __int64 v15; // rdx
  char v16; // bl
  __int64 Partition; // rax
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rbx
  unsigned int v21; // r12d
  int v22; // r12d
  __int64 v23; // rdx
  __int64 v24; // r15
  __int64 v25; // rcx
  __int64 VacbLargeOffset; // rsi
  int v27; // r15d
  unsigned int v28; // ecx
  KIRQL v29; // bl
  _QWORD *v30; // rdx
  __int64 v31; // rsi
  unsigned int v33; // ebx
  KIRQL v34; // si
  _DWORD *v35; // r10
  __int64 v36; // r14
  int v37; // esi
  __int64 v38; // rbx
  bool v39; // [rsp+28h] [rbp-49h]
  unsigned int v40; // [rsp+2Ch] [rbp-45h]
  unsigned int v41; // [rsp+30h] [rbp-41h]
  int v42; // [rsp+34h] [rbp-3Dh]
  int v43; // [rsp+38h] [rbp-39h]
  __int64 v44; // [rsp+40h] [rbp-31h]
  int v45; // [rsp+48h] [rbp-29h]
  unsigned int v46; // [rsp+4Ch] [rbp-25h]
  struct _KLOCK_QUEUE_HANDLE v47; // [rsp+50h] [rbp-21h] BYREF
  __int64 v48; // [rsp+68h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-1h] BYREF
  unsigned int v51; // [rsp+E0h] [rbp+6Fh]
  int v52; // [rsp+E8h] [rbp+77h]

  v51 = a2;
  LODWORD(v4) = -1;
  v41 = 0;
  v46 = 0;
  v5 = 0;
  v45 = 0;
  RandomVacbArrayWithReference = 0LL;
  v43 = 0;
  v7 = 0LL;
  v42 = 0;
  v8 = 0;
  v44 = 0LL;
  v40 = 0;
  if ( a4 )
  {
    *a4 = 0LL;
    v43 = 1;
  }
  v52 = a3 & 1;
  v9 = !(a3 & 1);
  v39 = v9;
  do
  {
    while ( v5 < a2 && v8 <= CcVacbArraysHighestUsedIndex )
    {
      if ( RandomVacbArrayWithReference )
        goto LABEL_7;
      LODWORD(v4) = -1;
      if ( v9 )
      {
        RandomVacbArrayWithReference = (_DWORD *)CcGetRandomVacbArrayWithReference();
        goto LABEL_34;
      }
      v33 = v8;
      v34 = KeAcquireQueuedSpinLock(4uLL);
      while ( 1 )
      {
        RandomVacbArrayWithReference = CcReferenceVacbArray(v33);
        if ( RandomVacbArrayWithReference )
          break;
        if ( ++v33 >= 0x500 )
        {
          RandomVacbArrayWithReference = 0LL;
          goto LABEL_47;
        }
      }
      CcRecalculateVacbArrayHighwaterMark(RandomVacbArrayWithReference);
LABEL_47:
      KeReleaseQueuedSpinLock(4uLL, v34);
      v9 = v39;
      v40 = ++v8;
      if ( RandomVacbArrayWithReference )
      {
LABEL_34:
        if ( RandomVacbArrayWithReference[1] == 1 )
          goto LABEL_49;
LABEL_7:
        if ( !v9 )
        {
          if ( (_DWORD)v4 == -1 )
            LODWORD(v4) = RandomVacbArrayWithReference[2] + 1;
          if ( (_DWORD)v4 )
          {
            do
            {
              v4 = (unsigned int)(v4 - 1);
              v12 = &RandomVacbArrayWithReference[8 * v4 + 4 + 2 * (unsigned int)v4];
              if ( (unsigned __int8)CcCanReuseVacb(v12, v7) )
                break;
              v12 = v35;
            }
            while ( (_DWORD)v4 );
            if ( v12 )
              goto LABEL_12;
          }
LABEL_49:
          CcDereferenceVacbArray(RandomVacbArrayWithReference, 0LL);
          RandomVacbArrayWithReference = 0LL;
          goto LABEL_50;
        }
        v10 = 0;
        while ( 1 )
        {
          v11 = RtlRandom(&CcRandomSeed);
          v12 = &RandomVacbArrayWithReference[8 * (v11 % (RandomVacbArrayWithReference[2] + 1))
                                            + 4
                                            + 2 * (v11 % (RandomVacbArrayWithReference[2] + 1))];
          if ( !(unsigned __int8)CcCanReuseVacb(v12, 0LL) )
          {
            ++v10;
            v12 = 0LL;
          }
          if ( v12 )
            break;
          if ( v10 > 0x10 )
          {
            ++CcDbgRandomFailed;
            v9 = 0;
            v39 = 0;
            goto LABEL_49;
          }
        }
LABEL_12:
        v13 = KeAcquireQueuedSpinLock(4uLL);
        CanReuseVacb = CcCanReuseVacb(v12, v7);
        v7 = 0LL;
        if ( !CanReuseVacb )
          goto LABEL_63;
        v16 = 0;
        Partition = CcGetPartition(*((_QWORD **)v12 + 1), v15);
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(Partition + 128));
        v18 = *((_QWORD *)v12 + 1);
        if ( *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v18 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) + 8LL) == v18 )
        {
          ++*(_DWORD *)(v18 + 4);
          v16 = 1;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( !v16 )
        {
LABEL_63:
          v44 = 0LL;
          KeReleaseQueuedSpinLock(4uLL, v13);
          goto LABEL_30;
        }
        v19 = *((_QWORD *)v12 + 1);
        v20 = *((_QWORD *)v12 + 2);
        v21 = *(_DWORD *)(v19 + 152);
        KeReleaseQueuedSpinLock(4uLL, v13);
        v22 = (v21 >> 9) & 1;
        CcAcquireBcbLockAndVacbLock(v22, (struct _FAST_MUTEX *)v19);
        v24 = CcGetPartition((_QWORD *)v19, v23);
        v48 = v24;
        if ( a1 != v24
          || v20 < 0
          || (v25 = *(_QWORD *)(v19 + 32), v20 >= v25)
          || (v25 > 0x2000000
            ? (VacbLargeOffset = CcGetVacbLargeOffset(v19, v20))
            : (VacbLargeOffset = *(_QWORD *)(*(_QWORD *)(v19 + 88) + 8 * ((unsigned __int64)(unsigned int)v20 >> 18))),
              !VacbLargeOffset || *(_WORD *)(VacbLargeOffset + 16)) )
        {
          CcReleaseBcbLockAndVacbLock(v22, (struct _FAST_MUTEX *)v19);
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v24 + 128), &v47);
          CcDecrementOpenCount(v19);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v47);
          __writecr8(v47.OldIrql);
          v7 = v44;
          v5 = v41;
          goto LABEL_30;
        }
        SetVacb(v19, v20, 0LL, 0LL);
        if ( *(_DWORD *)(v24 + 856) < (unsigned int)CcMinimumFreeHighPriorityVacbs )
        {
          v27 = 1;
        }
        else
        {
          v27 = 0;
          if ( !v43 )
          {
            v28 = v42 & 0xFFFFFFFD;
            v42 &= ~2u;
            if ( v52 && !v44 )
              v44 = *(_QWORD *)VacbLargeOffset;
            goto LABEL_26;
          }
        }
        v28 = v42 | 2;
        v44 = 0LL;
        v42 |= 2u;
LABEL_26:
        CcUnmapVacb(VacbLargeOffset, v19, v28);
        CcReleaseBcbLockAndVacbLock(v22, (struct _FAST_MUTEX *)v19);
        v5 = v41;
        if ( !v27 )
        {
          v5 = v41 + 1;
          v46 = 1;
          ++v41;
          if ( v43 )
          {
            v43 = 0;
            *a4 = *(_QWORD *)VacbLargeOffset;
            *(_QWORD *)VacbLargeOffset = 0LL;
          }
        }
        v29 = KeAcquireQueuedSpinLock(4uLL);
        v30 = (_QWORD *)VacbLargeOffset;
        *(_QWORD *)(VacbLargeOffset + 8) = 0LL;
        v31 = v48;
        CcSetVacbInFreeList(v48, v30, v27);
        KeReleaseQueuedSpinLock(4uLL, v29);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v31 + 128), &v47);
        CcDecrementOpenCount(v19);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v47);
        __writecr8(v47.OldIrql);
        v7 = v44;
LABEL_30:
        v9 = v39;
        v8 = v40;
        a2 = v51;
      }
      else
      {
LABEL_50:
        a2 = v51;
      }
    }
    if ( RandomVacbArrayWithReference )
    {
      CcDereferenceVacbArray(RandomVacbArrayWithReference, 0LL);
      a2 = v51;
    }
    RandomVacbArrayWithReference = 0LL;
    if ( v5 >= a2 || v45 )
      break;
    v45 = 1;
    v36 = (a2 - v5) << 18;
    v37 = 0;
    ExAcquireFastMutex(&CcBcbTrimNotificationListLock);
    v38 = CcBcbTrimNotificationList;
    if ( (__int64 *)CcBcbTrimNotificationList != &CcBcbTrimNotificationList )
    {
      do
      {
        KeReleaseGuardedMutex(&CcBcbTrimNotificationListLock);
        v37 |= (*(__int64 (__fastcall **)(__int64))(v38 + 16))(v36);
        ExAcquireFastMutex(&CcBcbTrimNotificationListLock);
        v38 = *(_QWORD *)v38;
      }
      while ( (__int64 *)v38 != &CcBcbTrimNotificationList );
      v8 = v40;
    }
    KeReleaseGuardedMutex(&CcBcbTrimNotificationListLock);
    v7 = v44;
    v9 = v39;
    a2 = v51;
  }
  while ( v37 );
  _InterlockedIncrement(&CcDbgNumberOfCcUnmapInactiveViews);
  return v46;
}
