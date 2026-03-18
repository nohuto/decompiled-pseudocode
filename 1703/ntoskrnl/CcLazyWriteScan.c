/*
 * XREFs of CcLazyWriteScan @ 0x1400AEDEC
 * Callers:
 *     CcWorkerThread @ 0x1400AB860 (CcWorkerThread.c)
 * Callees:
 *     CcAdjustThrottle @ 0x14002AA90 (CcAdjustThrottle.c)
 *     CcRescheduleLazyWriteScan @ 0x14002F8F0 (CcRescheduleLazyWriteScan.c)
 *     CcUpdateTimeOnLogHandles @ 0x140032570 (CcUpdateTimeOnLogHandles.c)
 *     CcSetLazyWriteScanQueued @ 0x1400326C0 (CcSetLazyWriteScanQueued.c)
 *     CcPerfLogLoggedStreamsStats @ 0x1400389B8 (CcPerfLogLoggedStreamsStats.c)
 *     CcComputeNextScanTime @ 0x140038CAC (CcComputeNextScanTime.c)
 *     CcPerfLogLazyWriteScan @ 0x14003A350 (CcPerfLogLazyWriteScan.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcPostWorkQueue @ 0x1400AE214 (CcPostWorkQueue.c)
 *     CcShouldLazyWriteCacheMap @ 0x1400AF50C (CcShouldLazyWriteCacheMap.c)
 *     CcAllocateWorkQueueEntry @ 0x1400AFA58 (CcAllocateWorkQueueEntry.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     CcScanLogHandleList @ 0x14011A018 (CcScanLogHandleList.c)
 *     CcCalculatePagesToWrite @ 0x14011B094 (CcCalculatePagesToWrite.c)
 *     CcPostDeferredWrites @ 0x1401DDA60 (CcPostDeferredWrites.c)
 */

__int64 __fastcall CcLazyWriteScan(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r13d
  unsigned int v5; // r12d
  unsigned __int64 v7; // r8
  __int64 *v8; // rsi
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r11
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 **v14; // rcx
  int v15; // eax
  __int64 v16; // r9
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rsi
  __int64 v22; // rbx
  unsigned int v23; // r12d
  unsigned __int64 v24; // r8
  int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rcx
  char v28; // bl
  __int64 result; // rax
  int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  KSPIN_LOCK *v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  unsigned int v41; // ecx
  __int64 v42; // rax
  struct _WORK_QUEUE_ITEM *v43; // rsi
  __int64 v44; // r15
  __int64 v45; // rcx
  _QWORD *v46; // rax
  __int64 *v47; // rcx
  __int64 v48; // rdx
  _QWORD *v49; // rcx
  __int64 v50; // rcx
  __int64 *v51; // rax
  __int64 v52; // rdx
  __int64 **v53; // rdx
  _QWORD *v54; // rax
  unsigned __int64 v55; // rcx
  __int64 v56; // rdx
  _QWORD *v57; // rax
  unsigned __int64 *v58; // rdx
  struct _WORK_QUEUE_ITEM **v59; // rax
  struct _LIST_ENTRY *Flink; // rcx
  char v61; // [rsp+60h] [rbp-49h]
  char v62; // [rsp+61h] [rbp-48h]
  int v63; // [rsp+64h] [rbp-45h] BYREF
  _QWORD *v64; // [rsp+68h] [rbp-41h] BYREF
  __int64 *v65; // [rsp+70h] [rbp-39h]
  __int64 v66; // [rsp+78h] [rbp-31h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-29h] BYREF
  __int64 v68; // [rsp+98h] [rbp-11h] BYREF
  __int64 v69; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v70; // [rsp+A8h] [rbp-1h] BYREF
  struct _KLOCK_QUEUE_HANDLE v71; // [rsp+B0h] [rbp+7h] BYREF
  char v72; // [rsp+110h] [rbp+67h]
  unsigned int v73; // [rsp+120h] [rbp+77h]
  char v74; // [rsp+128h] [rbp+7Fh]

  v73 = a3;
  v74 = 0;
  v72 = 0;
  v4 = 0;
  v61 = 0;
  v62 = 0;
  v5 = a3;
  CcScanLogHandleList(a1, &v63, a3, &v70);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 64), &LockHandle);
  CcSetLazyWriteScanQueued((_BYTE *)a1, v5, 0);
  v7 = *(unsigned int *)(a1 + 744);
  v8 = (__int64 *)(a1 + 672);
  v9 = *(_QWORD *)(a1 + 728) / v7;
  *(_QWORD *)(a1 + 768) = v9;
  v10 = *(_QWORD *)(a1 + 736) / v7;
  *(_QWORD *)(a1 + 776) = v10;
  if ( (unsigned int)v7 <= 1 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)qword_14036C8F8 + 5760LL);
    v12 = *v8;
    v13 = *v8;
  }
  else
  {
    v11 = *(_QWORD *)(*(_QWORD *)qword_14036C8F8 + 5760LL) + v9 * (unsigned int)(v7 - 1);
    v12 = *v8;
    v13 = *v8 + v10 * (unsigned int)(v7 - 1);
  }
  *(_QWORD *)(a1 + 728) = v11;
  *(_QWORD *)(a1 + 736) = v13;
  if ( !v12 && !*(_BYTE *)(a1 + 665) )
  {
    if ( *(_QWORD *)(a1 + 816) == a1 + 816 )
    {
      *(_BYTE *)(a1 + 664) = 0;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      result = LockHandle.OldIrql;
      __writecr8(LockHandle.OldIrql);
      return result;
    }
    CcRescheduleLazyWriteScan(a1, 0LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    return CcPostDeferredWrites(a1);
  }
  v65 = (__int64 *)&v64;
  v14 = (__int64 **)(a1 + 344);
  v64 = &v64;
  while ( *v14 != (__int64 *)v14 )
  {
    v51 = *v14;
    v52 = **v14;
    if ( (__int64 **)(*v14)[1] != v14 || *(__int64 **)(v52 + 8) != v51 )
      __fastfail(3u);
    *v14 = (__int64 *)v52;
    *(_QWORD *)(v52 + 8) = v14;
    v53 = (__int64 **)v65;
    if ( (_QWORD **)*v65 != &v64 )
      __fastfail(3u);
    v51[1] = (__int64)v65;
    *v51 = (__int64)&v64;
    *v53 = v51;
    v65 = v51;
  }
  *(_BYTE *)(a1 + 665) = 0;
  v15 = CcCalculatePagesToWrite(v5, a1 + 672, a1 + 696, 0LL);
  v16 = *(unsigned int *)(a1 + 528);
  v63 = v15;
  v17 = v15;
  CcAdjustThrottle((_QWORD *)a1, a1 + 672, a1 + 696, v16);
  v18 = *(unsigned int *)(a1 + 376);
  *(_QWORD *)(a1 + 680) = *v8;
  v19 = *(_QWORD *)(a1 + 752);
  *(_DWORD *)(a1 + 688) = v17;
  *(_DWORD *)(a1 + 528) = v17;
  *(_DWORD *)(v19 + 8 * v18) = v17;
  *(_QWORD *)(a1 + 800) = MEMORY[0xFFFFF78000000014];
  if ( (xmmword_1403E4010 & 0x20000) != 0 )
    CcPerfLogLazyWriteScan(
      a2,
      v5,
      *(_DWORD *)(a1 + 528),
      *v8,
      *(_QWORD *)(*(_QWORD *)qword_14036C8F8 + 5760LL),
      *(_QWORD *)(a1 + 696),
      (unsigned int)CcNumberOfMappedVacbs,
      *(_QWORD *)(a1 + 704),
      *(_QWORD *)(a1 + 712),
      *(_QWORD *)(a1 + 768),
      *(_QWORD *)(a1 + 776),
      *(unsigned int *)(a1 + 264));
  v20 = a1 + 216;
  v21 = 0LL;
  v22 = *(_QWORD *)(a1 + 216) - 136LL;
  if ( *(_QWORD *)(a1 + 216) != 136LL )
  {
    v23 = v63;
    while ( 1 )
    {
      if ( v22 == a1 + 80 )
      {
LABEL_18:
        if ( v61 )
          CcUpdateTimeOnLogHandles();
        v5 = v73;
        break;
      }
      if ( !v21 )
        v21 = v22;
      v24 = *(_QWORD *)(v22 + 96) & 0xFFFFFFFFFFFFFFF0uLL;
      v66 = v21;
      if ( (unsigned __int8)CcShouldLazyWriteCacheMap(v22, v23, v24, v73) )
      {
        if ( (*(_DWORD *)(v22 + 152) & 0x1000000) != 0 )
        {
          v61 = 1;
          *(_DWORD *)(*(_QWORD *)(v22 + 240) + 144LL) |= 1u;
          v38 = *(_QWORD *)(v22 + 240);
          v39 = *(_QWORD *)(v22 + 256);
          if ( v39 > *(_QWORD *)(v38 + 112) )
          {
            *(_QWORD *)(v38 + 112) = v39;
            if ( (xmmword_1403E4010 & 0x20000) != 0 )
              *(_QWORD *)(*(_QWORD *)(v22 + 240) + 128LL) = *(_QWORD *)((*(_QWORD *)(v22 + 96) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                      + 0x18);
          }
          v23 = v63;
        }
        v30 = *(_DWORD *)(v22 + 152);
        v31 = *(_DWORD *)(v22 + 112);
        *(_DWORD *)(v22 + 192) = v31;
        if ( (v30 & 0x200) != 0 && v31 >= 0x40 )
        {
          if ( (v30 & 0x1000000) != 0 && (v40 = *(_QWORD *)(v22 + 240), (v41 = *(_DWORD *)(v40 + 104)) != 0) )
          {
            if ( v31 > v41 )
              *(_DWORD *)(v40 + 104) = 0;
            else
              *(_DWORD *)(v40 + 104) = v41 - v31;
            ++CcDbgSkippedReductions;
          }
          else
          {
            *(_DWORD *)(v22 + 192) = v31 >> 3;
          }
        }
        if ( !v74 )
        {
          v32 = *(_DWORD *)(v22 + 192);
          if ( v32 >= v23 )
          {
            if ( (*(_DWORD *)(v22 + 152) & 0x200) != 0 || v21 == v22 && (*(_DWORD *)(v22 + 268) & 0xF) == 0 )
            {
              v72 = 1;
            }
            else
            {
              v45 = *(_QWORD *)v20;
              v46 = *(_QWORD **)(a1 + 224);
              if ( *(_QWORD *)(*(_QWORD *)v20 + 8LL) != v20 || *v46 != v20 )
                __fastfail(3u);
              *v46 = v45;
              *(_QWORD *)(v45 + 8) = v46;
              v47 = *(__int64 **)(v22 + 144);
              if ( *v47 != v22 + 136 )
                __fastfail(3u);
              *(_QWORD *)v20 = v22 + 136;
              *(_QWORD *)(a1 + 224) = v47;
              *v47 = v20;
              *(_QWORD *)(v22 + 144) = v20;
            }
            v23 = 0;
            v74 = 1;
          }
          else
          {
            v23 -= v32;
          }
          v63 = v23;
        }
        *(_DWORD *)(v22 + 152) |= 0x20u;
        ++*(_DWORD *)(v22 + 112);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        v34 = CcAllocateWorkQueueEntry(v33, &v69);
        v35 = (KSPIN_LOCK *)(a1 + 64);
        if ( v34 < 0 )
        {
          KeAcquireInStackQueuedSpinLock(v35, &LockHandle);
          *(_DWORD *)(v22 + 152) &= ~0x20u;
          --*(_DWORD *)(v22 + 112);
          goto LABEL_18;
        }
        v36 = v69;
        *(_BYTE *)(v69 + 120) = 2;
        *(_QWORD *)(v36 + 16) = v22;
        *(_QWORD *)(v36 + 128) = a1;
        KeAcquireInStackQueuedSpinLock(v35, &LockHandle);
        --*(_DWORD *)(v22 + 112);
        if ( (*(_DWORD *)(v22 + 152) & 0x10000) != 0 )
        {
          v37 = a1 + 296;
          *(_QWORD *)(v22 + 496) = v36 | 1;
        }
        else
        {
          *(_QWORD *)(v22 + 496) = v36;
          v37 = a1 + 328;
        }
        CcPostWorkQueue(v36, v37);
        v4 = 0;
        v62 = 1;
      }
      else
      {
        v25 = *(_DWORD *)(v22 + 152);
        if ( (v25 & 0x10020) != 0x10020 )
        {
          if ( (unsigned int)++v4 >= 0x14 && (v25 & 0x820) == 0 )
          {
            ++*(_DWORD *)(v22 + 112);
            *(_DWORD *)(v22 + 152) = v25 | 0x20;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            __writecr8(LockHandle.OldIrql);
            v4 = 0;
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 64), &LockHandle);
            *(_DWORD *)(v22 + 152) &= ~0x20u;
            --*(_DWORD *)(v22 + 112);
          }
          goto LABEL_16;
        }
        v42 = *(_QWORD *)(v22 + 496);
        v43 = 0LL;
        v44 = *(_QWORD *)(v22 + 528);
        if ( v42 && (v42 & 1) == 0 )
        {
          v71.LockQueue.Next = 0LL;
          v71.LockQueue.Lock = (unsigned __int64 *volatile)(v44 + 128);
          KxAcquireQueuedSpinLock((__int64)&v71, (volatile __int64 *)(v44 + 128));
          v55 = *(_QWORD *)(v22 + 496);
          if ( v55 )
          {
            *(_QWORD *)(v22 + 496) = v55 | 1;
            v56 = *(_QWORD *)v55;
            v57 = *(_QWORD **)(v55 + 8);
            if ( *(_QWORD *)(*(_QWORD *)v55 + 8LL) != v55 || *v57 != v55 )
              __fastfail(3u);
            *v57 = v56;
            *(_QWORD *)(v56 + 8) = v57;
            *(_QWORD *)(v55 + 8) = 0LL;
            *(_QWORD *)v55 = 0LL;
            v58 = *(unsigned __int64 **)(v44 + 304);
            if ( *v58 != v44 + 296 )
              __fastfail(3u);
            *(_QWORD *)v55 = v44 + 296;
            *(_QWORD *)(v55 + 8) = v58;
            *v58 = v55;
            *(_QWORD *)(v44 + 304) = v55;
            if ( !*(_BYTE *)(v44 + 384) )
            {
              v59 = (struct _WORK_QUEUE_ITEM **)(v44 + 280);
              if ( *v59 != (struct _WORK_QUEUE_ITEM *)v59 )
              {
                v43 = *v59;
                Flink = (*v59)->List.Flink;
                if ( (struct _WORK_QUEUE_ITEM **)(*v59)->List.Blink != v59
                  || (struct _WORK_QUEUE_ITEM *)Flink->Blink != v43 )
                {
                  __fastfail(3u);
                }
                *v59 = (struct _WORK_QUEUE_ITEM *)Flink;
                Flink->Blink = (struct _LIST_ENTRY *)v59;
                ++*(_DWORD *)(v44 + 276);
              }
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v71);
            if ( v43 )
            {
              v43->List.Flink = 0LL;
              ExQueueWorkItem(v43, CriticalWorkQueue);
            }
          }
          else
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v71);
          }
        }
      }
      v21 = v66;
LABEL_16:
      v26 = v22 + 136;
      v22 = *(_QWORD *)(v22 + 136) - 136LL;
      if ( v72 )
      {
        v48 = *(_QWORD *)v20;
        v49 = *(_QWORD **)(a1 + 224);
        if ( *(_QWORD *)(*(_QWORD *)v20 + 8LL) != v20 || *v49 != v20 )
          __fastfail(3u);
        *v49 = v48;
        *(_QWORD *)(v48 + 8) = v49;
        v50 = *(_QWORD *)v26;
        if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) != v26 )
          __fastfail(3u);
        *(_QWORD *)v20 = v50;
        *(_QWORD *)(a1 + 224) = v26;
        *(_QWORD *)(v50 + 8) = v20;
        *(_QWORD *)v26 = v20;
        v72 = 0;
      }
      if ( v22 == v21 )
        goto LABEL_18;
    }
  }
  v27 = (__int64)v64;
  v28 = v62;
  if ( v64 != &v64 )
    v28 = 1;
  while ( (_QWORD **)v27 != &v64 )
  {
    v54 = *(_QWORD **)v27;
    if ( *(_QWORD ***)(v27 + 8) != &v64 || v54[1] != v27 )
      __fastfail(3u);
    v64 = *(_QWORD **)v27;
    v54[1] = &v64;
    CcPostWorkQueue(v27, a1 + 328);
    v27 = (__int64)v64;
  }
  v68 = 0LL;
  if ( (_BYTE)dword_1403E3134
    || v28
    || *(_QWORD *)(a1 + 816) != a1 + 816
    || (CcComputeNextScanTime(a1, &v70, &v68), v68 != 0x7FFFFFFFFFFFFFFFLL) )
  {
    CcRescheduleLazyWriteScan(a1, &v68);
    if ( *(_BYTE *)(a1 + 268) )
      *(_BYTE *)(a1 + 268) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 268) = 1;
    *(_BYTE *)(a1 + 664) = 0;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( (xmmword_1403E4010 & 0x20000) != 0 )
    CcPerfLogLoggedStreamsStats(v5, *(_DWORD *)(a1 + 528));
  result = a1 + 816;
  if ( *(_QWORD *)result != result )
    return CcPostDeferredWrites(a1);
  return result;
}
