/*
 * XREFs of CcUnmapInactiveViewsInternal @ 0x1401E1B40
 * Callers:
 *     CcUnmapInactiveViews @ 0x1401E1A30 (CcUnmapInactiveViews.c)
 * Callees:
 *     CcDecrementOpenCount @ 0x14006365C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     CcReferenceVacbArray @ 0x1400A4114 (CcReferenceVacbArray.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     CcGetVacbLargeOffset @ 0x1400A5E18 (CcGetVacbLargeOffset.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1400F8C0C (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1400F8C4C (CcAcquireBcbLockAndVacbLock.c)
 *     CcSetVacbInFreeList @ 0x140115A18 (CcSetVacbInFreeList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CcCanReuseVacb @ 0x1401E155C (CcCanReuseVacb.c)
 *     CcDereferenceVacbArray @ 0x1401E15FC (CcDereferenceVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1401E17A4 (CcGetRandomVacbArrayWithReference.c)
 *     CcRecalculateVacbArrayHighwaterMark @ 0x1401E1844 (CcRecalculateVacbArrayHighwaterMark.c)
 *     SetVacb @ 0x1401E2070 (SetVacb.c)
 *     CcUnmapVacb @ 0x14056F9B0 (CcUnmapVacb.c)
 *     RtlRandomEx @ 0x140597790 (RtlRandomEx.c)
 */

__int64 __fastcall CcUnmapInactiveViewsInternal(__int64 a1, unsigned int a2, char a3, _QWORD *a4)
{
  __int64 v4; // r15
  unsigned int v5; // r13d
  _DWORD *RandomVacbArrayWithReference; // rdi
  __int64 v7; // r12
  unsigned int v8; // r14d
  bool v9; // bl
  unsigned int v10; // ebx
  KIRQL v11; // si
  _DWORD *v12; // rax
  unsigned int v13; // ebx
  ULONG v14; // eax
  __int64 v15; // rsi
  __int64 v16; // r10
  KIRQL v17; // r14
  bool CanReuseVacb; // al
  __int64 Partition; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rsi
  unsigned int v23; // r13d
  int v24; // r13d
  __int64 v25; // r12
  __int64 v26; // rcx
  __int64 VacbLargeOffset; // r14
  int v28; // r12d
  unsigned int v29; // ecx
  KIRQL v30; // bl
  _QWORD *v31; // rdx
  __int64 v32; // r14
  __int64 v33; // r14
  int v34; // esi
  __int64 v35; // rbx
  bool v37; // [rsp+28h] [rbp-49h]
  unsigned int v38; // [rsp+2Ch] [rbp-45h]
  unsigned int v39; // [rsp+30h] [rbp-41h]
  _BYTE v40[12]; // [rsp+34h] [rbp-3Dh] BYREF
  BOOL v41; // [rsp+40h] [rbp-31h]
  int v42; // [rsp+44h] [rbp-2Dh]
  unsigned int v43; // [rsp+48h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE v44; // [rsp+50h] [rbp-21h] BYREF
  __int64 v45; // [rsp+68h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-1h] BYREF
  unsigned int v48; // [rsp+E0h] [rbp+6Fh]
  int v49; // [rsp+E8h] [rbp+77h]

  v48 = a2;
  LODWORD(v4) = -1;
  v39 = 0;
  v43 = 0;
  v5 = 0;
  v42 = 0;
  RandomVacbArrayWithReference = 0LL;
  memset(v40, 0, sizeof(v40));
  v7 = 0LL;
  v8 = 0;
  v38 = 0;
  if ( a4 )
    *a4 = 0LL;
  v49 = a3 & 1;
  v9 = !(a3 & 1);
  v37 = v9;
  v41 = a4 != 0LL;
  do
  {
    while ( v5 < a2 && v8 <= CcVacbArraysHighestUsedIndex )
    {
      if ( RandomVacbArrayWithReference )
        goto LABEL_17;
      LODWORD(v4) = -1;
      if ( v9 )
      {
        RandomVacbArrayWithReference = CcGetRandomVacbArrayWithReference();
        goto LABEL_16;
      }
      v10 = v8;
      v11 = KeAcquireQueuedSpinLock(4uLL);
      while ( 1 )
      {
        v12 = CcReferenceVacbArray(v10);
        RandomVacbArrayWithReference = v12;
        if ( v12 )
          break;
        if ( ++v10 >= 0x500 )
        {
          KeReleaseQueuedSpinLock(4uLL, v11);
          RandomVacbArrayWithReference = 0LL;
          goto LABEL_13;
        }
      }
      CcRecalculateVacbArrayHighwaterMark((__int64)v12);
      KeReleaseQueuedSpinLock(4uLL, v11);
LABEL_13:
      v9 = v37;
      v38 = ++v8;
      if ( RandomVacbArrayWithReference )
      {
LABEL_16:
        if ( RandomVacbArrayWithReference[1] == 1 )
          goto LABEL_24;
LABEL_17:
        if ( v9 )
        {
          v13 = 0;
          while ( 1 )
          {
            v14 = RtlRandomEx(&CcRandomSeed);
            v15 = (__int64)&RandomVacbArrayWithReference[8 * (v14 % (RandomVacbArrayWithReference[2] + 1))
                                                       + 4
                                                       + 2 * (v14 % (RandomVacbArrayWithReference[2] + 1))];
            if ( !CcCanReuseVacb(v15, 0LL) )
            {
              ++v13;
              v15 = 0LL;
            }
            if ( v15 )
              break;
            if ( v13 > 0x10 )
            {
              ++CcDbgRandomFailed;
              v9 = 0;
              v37 = 0;
              goto LABEL_24;
            }
          }
          v9 = v37;
        }
        else
        {
          if ( (_DWORD)v4 == -1 )
            LODWORD(v4) = RandomVacbArrayWithReference[2] + 1;
          if ( !(_DWORD)v4 )
            goto LABEL_24;
          do
          {
            v4 = (unsigned int)(v4 - 1);
            v15 = (__int64)&RandomVacbArrayWithReference[8 * v4 + 4 + 2 * (unsigned int)v4];
            if ( CcCanReuseVacb(v15, v7) )
              break;
            v15 = v16;
          }
          while ( (_DWORD)v4 );
          if ( !v15 )
          {
LABEL_24:
            CcDereferenceVacbArray((__int64)RandomVacbArrayWithReference, 0);
            RandomVacbArrayWithReference = 0LL;
            goto LABEL_25;
          }
        }
        v17 = KeAcquireQueuedSpinLock(4uLL);
        CanReuseVacb = CcCanReuseVacb(v15, v7);
        v7 = 0LL;
        if ( !CanReuseVacb )
          goto LABEL_57;
        Partition = CcGetPartition(*(_QWORD **)(v15 + 8));
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(Partition + 128));
        v20 = *(_QWORD *)(v15 + 8);
        if ( *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v20 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) + 8LL) != v20 )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_57:
          *(_QWORD *)&v40[4] = 0LL;
          KeReleaseQueuedSpinLock(4uLL, v17);
          goto LABEL_58;
        }
        ++*(_DWORD *)(v20 + 4);
        ++*(_DWORD *)(v20 + 536);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v21 = *(_QWORD *)(v15 + 16);
        v22 = *(_QWORD *)(v15 + 8);
        v23 = *(_DWORD *)(v22 + 152);
        KeReleaseQueuedSpinLock(4uLL, v17);
        v24 = (v23 >> 9) & 1;
        CcAcquireBcbLockAndVacbLock(v24, (struct _FAST_MUTEX *)v22);
        v25 = CcGetPartition((_QWORD *)v22);
        v45 = v25;
        if ( a1 != v25
          || v21 < 0
          || (v26 = *(_QWORD *)(v22 + 32), v21 >= v26)
          || (v26 <= 0x2000000
            ? (VacbLargeOffset = *(_QWORD *)(*(_QWORD *)(v22 + 88) + 8 * ((unsigned __int64)(unsigned int)v21 >> 18)))
            : (VacbLargeOffset = CcGetVacbLargeOffset(v22, v21)),
              !VacbLargeOffset || *(_WORD *)(VacbLargeOffset + 16)) )
        {
          CcReleaseBcbLockAndVacbLock(v24, (struct _FAST_MUTEX *)v22);
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v25 + 128), &v44);
          CcDecrementOpenCount(v22);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v44);
          __writecr8(v44.OldIrql);
          v7 = *(_QWORD *)&v40[4];
          v9 = v37;
          v5 = v39;
          goto LABEL_58;
        }
        SetVacb(v22, v21, 0LL);
        if ( *(_DWORD *)(v25 + 856) >= (unsigned int)CcMinimumFreeHighPriorityVacbs )
        {
          v28 = 0;
          if ( !v41 )
          {
            v29 = *(_DWORD *)v40 & 0xFFFFFFFD;
            *(_DWORD *)v40 &= ~2u;
            if ( !*(_QWORD *)&v40[4] && v49 )
              *(_QWORD *)&v40[4] = *(_QWORD *)VacbLargeOffset;
            goto LABEL_47;
          }
        }
        else
        {
          v28 = 1;
        }
        v29 = *(_DWORD *)v40 | 2;
        *(_DWORD *)&v40[8] = 0;
        *(_QWORD *)v40 = *(_DWORD *)v40 | 2u;
LABEL_47:
        CcUnmapVacb(VacbLargeOffset, v22, v29);
        CcReleaseBcbLockAndVacbLock(v24, (struct _FAST_MUTEX *)v22);
        v5 = v39;
        if ( !v28 )
        {
          v5 = v39 + 1;
          v43 = 1;
          ++v39;
          if ( v41 )
          {
            v41 = 0;
            *a4 = *(_QWORD *)VacbLargeOffset;
            *(_QWORD *)VacbLargeOffset = 0LL;
          }
        }
        v30 = KeAcquireQueuedSpinLock(4uLL);
        v31 = (_QWORD *)VacbLargeOffset;
        *(_QWORD *)(VacbLargeOffset + 8) = 0LL;
        v32 = v45;
        CcSetVacbInFreeList(v45, v31, v28);
        KeReleaseQueuedSpinLock(4uLL, v30);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v32 + 128), &v44);
        CcDecrementOpenCount(v22);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v44);
        __writecr8(v44.OldIrql);
        v7 = *(_QWORD *)&v40[4];
        v9 = v37;
LABEL_58:
        v8 = v38;
        a2 = v48;
      }
      else
      {
LABEL_25:
        a2 = v48;
      }
    }
    if ( RandomVacbArrayWithReference )
    {
      CcDereferenceVacbArray((__int64)RandomVacbArrayWithReference, 0);
      a2 = v48;
      RandomVacbArrayWithReference = 0LL;
    }
    if ( v42 || v5 >= a2 )
      break;
    v42 = 1;
    v33 = (a2 - v5) << 18;
    v34 = 0;
    ExAcquireFastMutex(&CcBcbTrimNotificationListLock);
    v35 = CcBcbTrimNotificationList;
    if ( (__int64 *)CcBcbTrimNotificationList != &CcBcbTrimNotificationList )
    {
      do
      {
        KeReleaseGuardedMutex(&CcBcbTrimNotificationListLock);
        v34 |= (*(__int64 (__fastcall **)(__int64))(v35 + 16))(v33);
        ExAcquireFastMutex(&CcBcbTrimNotificationListLock);
        v35 = *(_QWORD *)v35;
      }
      while ( (__int64 *)v35 != &CcBcbTrimNotificationList );
      v7 = *(_QWORD *)&v40[4];
    }
    KeReleaseGuardedMutex(&CcBcbTrimNotificationListLock);
    v9 = v37;
    v8 = v38;
    a2 = v48;
  }
  while ( v34 );
  _InterlockedIncrement(&CcDbgNumberOfCcUnmapInactiveViews);
  return v43;
}
