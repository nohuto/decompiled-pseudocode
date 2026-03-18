/*
 * XREFs of CcLazyWriteScan @ 0x140042058
 * Callers:
 *     CcWorkerThread @ 0x140043080 (CcWorkerThread.c)
 * Callees:
 *     CcShouldLazyWriteCacheMap @ 0x140042794 (CcShouldLazyWriteCacheMap.c)
 *     CcPostWorkQueue @ 0x1400428A8 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x1400437A8 (CcAllocateWorkQueueEntry.c)
 *     CcSetLazyWriteScanQueued @ 0x140045900 (CcSetLazyWriteScanQueued.c)
 *     CcScanLogHandleList @ 0x140045940 (CcScanLogHandleList.c)
 *     CcCalculatePagesToWrite @ 0x140045B2C (CcCalculatePagesToWrite.c)
 *     CcAdjustThrottle @ 0x140045C04 (CcAdjustThrottle.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExQueueWorkItemToPartition @ 0x14008F67C (ExQueueWorkItemToPartition.c)
 *     CcRescheduleLazyWriteScan @ 0x1400C4F70 (CcRescheduleLazyWriteScan.c)
 *     CcUpdateTimeOnLogHandles @ 0x1400C5008 (CcUpdateTimeOnLogHandles.c)
 *     CcComputeNextScanTime @ 0x1400CEC74 (CcComputeNextScanTime.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcPerfLogLoggedStreamsStats @ 0x14018126C (CcPerfLogLoggedStreamsStats.c)
 *     CcPerfLogLazyWriteScan @ 0x140182474 (CcPerfLogLazyWriteScan.c)
 *     CcPostDeferredWrites @ 0x140220050 (CcPostDeferredWrites.c)
 */

__int64 __fastcall CcLazyWriteScan(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // r13d
  int v6; // r12d
  unsigned __int64 v7; // r8
  __int64 *v8; // rsi
  __int64 *v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rax
  _QWORD **v18; // rcx
  _QWORD *v19; // rax
  unsigned int v20; // eax
  __int64 v21; // r9
  unsigned int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 *v25; // r14
  __int64 v26; // r13
  bool i; // zf
  __int64 v28; // rbx
  __int64 v29; // rax
  char v30; // al
  int v31; // ecx
  __int64 v32; // rax
  int v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // eax
  int v36; // eax
  KSPIN_LOCK *v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rdx
  unsigned int v43; // ecx
  _QWORD *v44; // rcx
  char v45; // bl
  __int64 v46; // rax
  __int64 result; // rax
  __int64 v48; // rax
  _QWORD *v49; // r15
  __int64 v50; // rsi
  __int64 *v51; // rcx
  __int64 **v52; // rax
  __int64 **v53; // rcx
  __int64 *v54; // rdx
  __int64 **v55; // rcx
  __int64 v56; // rcx
  unsigned int v57; // ecx
  _QWORD *v58; // rdx
  _QWORD *v59; // rdx
  __int64 v60; // rax
  unsigned __int64 v61; // rcx
  __int64 v62; // rdx
  _QWORD *v63; // rax
  unsigned __int64 *v64; // rdx
  _QWORD *v65; // rax
  __int64 *v66; // rcx
  __int64 v67; // rcx
  char v68; // [rsp+60h] [rbp-39h]
  char v69; // [rsp+61h] [rbp-38h]
  unsigned int v70; // [rsp+64h] [rbp-35h] BYREF
  _QWORD *v71; // [rsp+68h] [rbp-31h] BYREF
  _QWORD **v72; // [rsp+70h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-21h] BYREF
  __int64 v74; // [rsp+90h] [rbp-9h] BYREF
  __int64 v75; // [rsp+98h] [rbp-1h] BYREF
  __int64 v76; // [rsp+A0h] [rbp+7h] BYREF
  struct _KLOCK_QUEUE_HANDLE v77; // [rsp+A8h] [rbp+Fh] BYREF
  char v78; // [rsp+100h] [rbp+67h]
  unsigned int v79; // [rsp+110h] [rbp+77h]
  char v80; // [rsp+118h] [rbp+7Fh]

  v79 = a3;
  v75 = 0x7FFFFFFFFFFFFFFFLL;
  v3 = a3;
  v80 = 0;
  v78 = 0;
  v6 = 0;
  v69 = 0;
  v68 = 0;
  if ( a1 == *((_QWORD *)PspSystemPartition + 1) )
    CcScanLogHandleList(a1, &v70, a3, &v75);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
  CcSetLazyWriteScanQueued(a1, v3, 0LL);
  v7 = *(unsigned int *)(a1 + 672);
  v8 = (__int64 *)(a1 + 600);
  v9 = *(__int64 **)(a1 + 8);
  v10 = *(_QWORD *)(a1 + 656) / v7;
  *(_QWORD *)(a1 + 696) = v10;
  v11 = v10;
  v12 = *(_QWORD *)(a1 + 664) / v7;
  *(_QWORD *)(a1 + 704) = v12;
  v13 = *v9;
  if ( (unsigned int)v7 <= 1 )
  {
    v17 = *v8;
    v16 = *(_QWORD *)(v13 + 7040);
    v15 = *v8;
  }
  else
  {
    v14 = (unsigned int)(v7 - 1);
    v15 = *v8;
    v16 = *(_QWORD *)(v13 + 7040) + v14 * v11;
    v17 = *v8 + v14 * v12;
  }
  *(_QWORD *)(a1 + 656) = v16;
  *(_QWORD *)(a1 + 664) = v17;
  if ( !v15 && !*(_BYTE *)(a1 + 593) )
  {
    if ( *(_QWORD *)(a1 + 744) == a1 + 744 )
    {
      *(_BYTE *)(a1 + 592) = 0;
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
  v72 = &v71;
  v18 = (_QWORD **)(a1 + 272);
  v71 = &v71;
  while ( 1 )
  {
    v19 = *v18;
    if ( *v18 == v18 )
      break;
    if ( (_QWORD **)v19[1] != v18 || (v58 = (_QWORD *)*v19, *(_QWORD **)(*v19 + 8LL) != v19) )
      __fastfail(3u);
    *v18 = v58;
    v58[1] = v18;
    v59 = v72;
    if ( *v72 != &v71 )
      __fastfail(3u);
    v19[1] = v72;
    *v19 = &v71;
    *v59 = v19;
    v72 = (_QWORD **)v19;
  }
  *(_BYTE *)(a1 + 593) = 0;
  v20 = CcCalculatePagesToWrite(a1, v3, (int)a1 + 600, (int)a1 + 624, 0);
  v21 = *(unsigned int *)(a1 + 456);
  v70 = v20;
  v22 = v20;
  CcAdjustThrottle(a1, a1 + 600, a1 + 624, v21);
  v23 = *(unsigned int *)(a1 + 304);
  *(_QWORD *)(a1 + 608) = *v8;
  v24 = *(_QWORD *)(a1 + 680);
  *(_DWORD *)(a1 + 616) = v22;
  *(_DWORD *)(a1 + 456) = v22;
  *(_DWORD *)(v24 + 8 * v23) = v22;
  *(_QWORD *)(a1 + 728) = MEMORY[0xFFFFF78000000014];
  if ( (xmmword_14044C2D0 & 0x20000) != 0 )
    CcPerfLogLazyWriteScan(
      a2,
      v3,
      *(_DWORD *)(a1 + 456),
      *v8,
      *(_QWORD *)(**(_QWORD **)(a1 + 8) + 7040LL),
      *(_QWORD *)(a1 + 624),
      (unsigned int)CcNumberOfMappedVacbs,
      *(_QWORD *)(a1 + 632),
      *(_QWORD *)(a1 + 640),
      *(_QWORD *)(a1 + 696),
      *(_QWORD *)(a1 + 704),
      *(unsigned int *)(a1 + 136));
  v25 = (__int64 *)(a1 + 72);
  v26 = 0LL;
  v28 = *(_QWORD *)(a1 + 72) - 136LL;
  for ( i = *(_QWORD *)(a1 + 72) == 136LL; !i && v28 != a1 - 64; i = v28 == v26 )
  {
    v29 = v28;
    if ( v26 )
      v29 = v26;
    v26 = v29;
    v30 = CcShouldLazyWriteCacheMap(v28, v70, *(_QWORD *)(v28 + 96) & 0xFFFFFFFFFFFFFFF0uLL, v79);
    v31 = *(_DWORD *)(v28 + 152);
    if ( v30 )
    {
      if ( (v31 & 0x1000000) != 0 )
      {
        v69 = 1;
        *(_DWORD *)(*(_QWORD *)(v28 + 240) + 144LL) |= 1u;
        v40 = *(_QWORD *)(v28 + 240);
        v41 = *(_QWORD *)(v28 + 256);
        if ( v41 > *(_QWORD *)(v40 + 112) )
        {
          *(_QWORD *)(v40 + 112) = v41;
          if ( (xmmword_14044C2D0 & 0x20000) != 0 )
            *(_QWORD *)(*(_QWORD *)(v28 + 240) + 128LL) = *(_QWORD *)((*(_QWORD *)(v28 + 96) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                    + 0x18);
        }
      }
      v33 = *(_DWORD *)(v28 + 152);
      v34 = *(_DWORD *)(v28 + 112);
      *(_DWORD *)(v28 + 192) = v34;
      if ( (v33 & 0x200) != 0 && v34 >= 0x40 )
      {
        if ( (v33 & 0x1000000) != 0 && (v42 = *(_QWORD *)(v28 + 240), (v43 = *(_DWORD *)(v42 + 104)) != 0) )
        {
          if ( v34 <= v43 )
            v57 = v43 - v34;
          else
            v57 = 0;
          *(_DWORD *)(v42 + 104) = v57;
          ++CcDbgSkippedReductions;
        }
        else
        {
          *(_DWORD *)(v28 + 192) = v34 >> 3;
        }
      }
      if ( !v80 )
      {
        v35 = *(_DWORD *)(v28 + 192);
        if ( v35 >= v70 )
        {
          if ( (*(_DWORD *)(v28 + 152) & 0x200) != 0 || v26 == v28 && (*(_DWORD *)(v28 + 268) & 0xF) == 0 )
          {
            v78 = 1;
          }
          else
          {
            v51 = (__int64 *)*v25;
            if ( *(__int64 **)(*v25 + 8) != v25 || (v52 = *(__int64 ***)(a1 + 80), *v52 != v25) )
              __fastfail(3u);
            *v52 = v51;
            v51[1] = (__int64)v52;
            v53 = *(__int64 ***)(v28 + 144);
            if ( *v53 != (__int64 *)(v28 + 136) )
              __fastfail(3u);
            *v25 = v28 + 136;
            *(_QWORD *)(a1 + 80) = v53;
            *v53 = v25;
            *(_QWORD *)(v28 + 144) = v25;
          }
          v70 = 0;
          v80 = 1;
        }
        else
        {
          v70 -= v35;
        }
      }
      *(_DWORD *)(v28 + 152) |= 0x20u;
      ++*(_DWORD *)(v28 + 112);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      v36 = CcAllocateWorkQueueEntry(a1, &v76);
      v37 = (KSPIN_LOCK *)(a1 + 128);
      if ( v36 < 0 )
      {
        KeAcquireInStackQueuedSpinLock(v37, &LockHandle);
        *(_DWORD *)(v28 + 152) &= ~0x20u;
        --*(_DWORD *)(v28 + 112);
        break;
      }
      v38 = v76;
      *(_BYTE *)(v76 + 120) = 2;
      *(_QWORD *)(v38 + 16) = v28;
      KeAcquireInStackQueuedSpinLock(v37, &LockHandle);
      --*(_DWORD *)(v28 + 112);
      if ( (*(_DWORD *)(v28 + 152) & 0x10000) != 0 )
      {
        v39 = a1 + 224;
        *(_QWORD *)(v28 + 496) = v38 | 1;
      }
      else
      {
        *(_QWORD *)(v28 + 496) = v38;
        v39 = a1 + 256;
      }
      CcPostWorkQueue(v38, v39);
      v6 = 0;
      v68 = 1;
    }
    else if ( (v31 & 0x10020) == 0x10020 )
    {
      v48 = *(_QWORD *)(v28 + 496);
      v49 = 0LL;
      v50 = *(_QWORD *)(v28 + 528);
      if ( v48 && (v48 & 1) == 0 )
      {
        v77.LockQueue.Next = 0LL;
        v77.LockQueue.Lock = (unsigned __int64 *volatile)(v50 + 192);
        KxAcquireQueuedSpinLock(&v77, v50 + 192);
        v61 = *(_QWORD *)(v28 + 496);
        if ( v61 )
        {
          *(_QWORD *)(v28 + 496) = v61 | 1;
          v62 = *(_QWORD *)v61;
          if ( *(_QWORD *)(*(_QWORD *)v61 + 8LL) != v61 || (v63 = *(_QWORD **)(v61 + 8), *v63 != v61) )
            __fastfail(3u);
          *v63 = v62;
          *(_QWORD *)(v62 + 8) = v63;
          *(_QWORD *)(v61 + 8) = 0LL;
          *(_QWORD *)v61 = 0LL;
          v64 = *(unsigned __int64 **)(v50 + 232);
          if ( *v64 != v50 + 224 )
            __fastfail(3u);
          *(_QWORD *)v61 = v50 + 224;
          *(_QWORD *)(v61 + 8) = v64;
          *v64 = v61;
          *(_QWORD *)(v50 + 232) = v61;
          if ( !*(_BYTE *)(v50 + 312) )
          {
            v65 = (_QWORD *)(v50 + 208);
            v66 = *(__int64 **)(v50 + 208);
            if ( v66 != (__int64 *)(v50 + 208) )
            {
              v49 = *(_QWORD **)(v50 + 208);
              if ( (_QWORD *)v66[1] != v65 || (v67 = *v66, *(_QWORD **)(v67 + 8) != v49) )
                __fastfail(3u);
              *v65 = v67;
              *(_QWORD *)(v67 + 8) = v65;
              ++*(_DWORD *)(v50 + 204);
              if ( _InterlockedIncrement64((volatile signed __int64 *)(v50 + 904)) <= 1 )
                __fastfail(0xEu);
            }
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v77);
          if ( v49 )
          {
            *v49 = 0LL;
            ExQueueWorkItemToPartition((ULONG_PTR)v49);
          }
        }
        else
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v77);
        }
      }
    }
    else if ( (unsigned int)++v6 >= 0x14 && (v31 & 0x820) == 0 )
    {
      ++*(_DWORD *)(v28 + 112);
      *(_DWORD *)(v28 + 152) = v31 | 0x20;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      v6 = 0;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
      *(_DWORD *)(v28 + 152) &= ~0x20u;
      --*(_DWORD *)(v28 + 112);
    }
    v32 = v28 + 136;
    v28 = *(_QWORD *)(v28 + 136) - 136LL;
    if ( v78 )
    {
      v54 = (__int64 *)*v25;
      if ( *(__int64 **)(*v25 + 8) != v25 || (v55 = *(__int64 ***)(a1 + 80), *v55 != v25) )
        __fastfail(3u);
      *v55 = v54;
      v54[1] = (__int64)v55;
      v56 = *(_QWORD *)v32;
      if ( *(_QWORD *)(*(_QWORD *)v32 + 8LL) != v32 )
        __fastfail(3u);
      *v25 = v56;
      *(_QWORD *)(a1 + 80) = v32;
      *(_QWORD *)(v56 + 8) = v25;
      *(_QWORD *)v32 = v25;
      v78 = 0;
    }
  }
  v44 = v71;
  v45 = v68;
  if ( v71 != &v71 )
    v45 = 1;
  while ( v44 != &v71 )
  {
    if ( (_QWORD **)v44[1] != &v71 || (v60 = *v44, *(_QWORD **)(*v44 + 8LL) != v44) )
      __fastfail(3u);
    v71 = (_QWORD *)*v44;
    *(_QWORD *)(v60 + 8) = &v71;
    CcPostWorkQueue(v44, a1 + 256);
    v44 = v71;
  }
  v46 = 0LL;
  v74 = 0LL;
  if ( !(_BYTE)dword_14044B190 && !v45 && *(_QWORD *)(a1 + 744) == a1 + 744 )
  {
    CcComputeNextScanTime(a1, &v75, &v74);
    v46 = v74;
  }
  if ( v46 == 0x7FFFFFFFFFFFFFFFLL )
  {
    *(_BYTE *)(a1 + 592) = 0;
    *(_BYTE *)(a1 + 140) = 1;
  }
  else
  {
    CcRescheduleLazyWriteScan(a1, &v74);
    if ( *(_BYTE *)(a1 + 140) )
      *(_BYTE *)(a1 + 140) = 0;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( v69 )
    CcUpdateTimeOnLogHandles(a1);
  if ( (xmmword_14044C2D0 & 0x20000) != 0 )
    CcPerfLogLoggedStreamsStats(v79, *(unsigned int *)(a1 + 456));
  result = a1 + 744;
  if ( *(_QWORD *)result != result )
    return CcPostDeferredWrites(a1);
  return result;
}
