/*
 * XREFs of CcLazyWriteScan @ 0x140021D88
 * Callers:
 *     CcWorkerThread @ 0x140022CB0 (CcWorkerThread.c)
 * Callees:
 *     CcComputeNextScanTime @ 0x14000CA80 (CcComputeNextScanTime.c)
 *     CcScanLogHandleList @ 0x1400200F8 (CcScanLogHandleList.c)
 *     CcCalculatePagesToWrite @ 0x140020418 (CcCalculatePagesToWrite.c)
 *     CcSetLazyWriteScanQueued @ 0x1400204F4 (CcSetLazyWriteScanQueued.c)
 *     CcShouldLazyWriteCacheMap @ 0x1400223FC (CcShouldLazyWriteCacheMap.c)
 *     CcPostWorkQueue @ 0x140022504 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x140023330 (CcAllocateWorkQueueEntry.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcRescheduleLazyWriteScan @ 0x1400E0BCC (CcRescheduleLazyWriteScan.c)
 *     CcAdjustThrottle @ 0x140122104 (CcAdjustThrottle.c)
 *     CcUpdateTimeOnLogHandles @ 0x1401260A0 (CcUpdateTimeOnLogHandles.c)
 *     CcIncrementWriteBehindPriority @ 0x1401E032C (CcIncrementWriteBehindPriority.c)
 *     CcPerfLogLoggedStreamsStats @ 0x1401E06BC (CcPerfLogLoggedStreamsStats.c)
 *     CcPostDeferredWrites @ 0x1401E0A50 (CcPostDeferredWrites.c)
 *     CcPerfLogLazyWriteScan @ 0x1401E2984 (CcPerfLogLazyWriteScan.c)
 */

__int64 __fastcall CcLazyWriteScan(__int64 a1, int a2, unsigned int a3)
{
  int v6; // r12d
  unsigned __int64 v7; // r9
  __int64 *v8; // rsi
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rtt
  unsigned __int64 v11; // r11
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // r9
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // r13
  __int64 v23; // rbx
  unsigned int v24; // r15d
  int v25; // ecx
  __int64 v26; // rax
  _QWORD *v27; // rcx
  char v28; // bl
  __int64 result; // rax
  int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // eax
  int WorkQueueEntry; // eax
  KSPIN_LOCK *v34; // rcx
  __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  unsigned int v40; // ecx
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 *v43; // rcx
  __int64 v44; // rdx
  _QWORD *v45; // rcx
  __int64 v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // rdx
  _QWORD *v49; // rdx
  __int64 v50; // rax
  char v51; // [rsp+60h] [rbp-29h]
  char v52; // [rsp+61h] [rbp-28h]
  int v53; // [rsp+64h] [rbp-25h] BYREF
  _QWORD *v54; // [rsp+68h] [rbp-21h] BYREF
  _QWORD **v55; // [rsp+70h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-11h] BYREF
  __int64 v57; // [rsp+90h] [rbp+7h] BYREF
  __int64 v58; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v59[8]; // [rsp+A0h] [rbp+17h] BYREF
  char v60; // [rsp+F0h] [rbp+67h]
  char v62; // [rsp+108h] [rbp+7Fh]

  v58 = 0x7FFFFFFFFFFFFFFFLL;
  v62 = 0;
  v60 = 0;
  v6 = 0;
  v52 = 0;
  v51 = 0;
  if ( a1 == *((_QWORD *)PspSystemPartition + 1) )
    CcScanLogHandleList(a1, &v53, a3, &v58);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
  CcSetLazyWriteScanQueued((_BYTE *)a1, a3, 0);
  v7 = *(unsigned int *)(a1 + 672);
  v8 = (__int64 *)(a1 + 600);
  v9 = *(_QWORD *)(a1 + 656) / v7;
  *(_QWORD *)(a1 + 696) = v9;
  v10 = *(_QWORD *)(a1 + 664);
  *(_QWORD *)(a1 + 704) = v10 / v7;
  v11 = v10 / v7;
  v12 = *(_QWORD *)(a1 + 600);
  if ( (unsigned int)v7 <= 1 )
  {
    v14 = *v8;
    v13 = *(_QWORD *)(**(_QWORD **)(a1 + 8) + 5952LL);
  }
  else
  {
    v13 = *(_QWORD *)(**(_QWORD **)(a1 + 8) + 5952LL) + v9 * (unsigned int)(v7 - 1);
    v14 = *v8 + v11 * (unsigned int)(v7 - 1);
  }
  *(_QWORD *)(a1 + 656) = v13;
  *(_QWORD *)(a1 + 664) = v14;
  if ( !v12 && !*(_BYTE *)(a1 + 593) )
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
  v55 = &v54;
  v15 = a1 + 272;
  v54 = &v54;
  while ( *(_QWORD *)v15 != v15 )
  {
    v47 = *(_QWORD **)v15;
    if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 || (v48 = *v47, *(_QWORD **)(*v47 + 8LL) != v47) )
      __fastfail(3u);
    *(_QWORD *)v15 = v48;
    *(_QWORD *)(v48 + 8) = v15;
    v49 = v55;
    if ( *v55 != &v54 )
      __fastfail(3u);
    v47[1] = v55;
    *v47 = &v54;
    *v49 = v47;
    v55 = (_QWORD **)v47;
  }
  *(_BYTE *)(a1 + 593) = 0;
  v16 = CcCalculatePagesToWrite(a1, a3, a1 + 600, (unsigned __int64 *)(a1 + 624), 0);
  v17 = *(unsigned int *)(a1 + 456);
  v53 = v16;
  v18 = v16;
  CcAdjustThrottle(a1, a1 + 600, a1 + 624, v17);
  v19 = *(unsigned int *)(a1 + 304);
  *(_QWORD *)(a1 + 608) = *v8;
  v20 = *(_QWORD *)(a1 + 680);
  *(_DWORD *)(a1 + 616) = v18;
  *(_DWORD *)(a1 + 456) = v18;
  *(_DWORD *)(v20 + 8 * v19) = v18;
  *(_QWORD *)(a1 + 728) = MEMORY[0xFFFFF78000000014];
  if ( (xmmword_140401150 & 0x20000) != 0 )
    CcPerfLogLazyWriteScan(
      a2,
      a3,
      *(_DWORD *)(a1 + 456),
      *v8,
      *(_QWORD *)(**(_QWORD **)(a1 + 8) + 5952LL),
      *(_QWORD *)(a1 + 624),
      (unsigned int)CcNumberOfMappedVacbs,
      *(_QWORD *)(a1 + 632),
      *(_QWORD *)(a1 + 640),
      *(_QWORD *)(a1 + 696),
      *(_QWORD *)(a1 + 704),
      *(unsigned int *)(a1 + 136));
  v21 = a1 + 72;
  v22 = 0LL;
  v23 = *(_QWORD *)(a1 + 72) - 136LL;
  if ( *(_QWORD *)(a1 + 72) != 136LL )
  {
    v24 = v53;
    while ( v23 != a1 - 64 )
    {
      if ( !v22 )
        v22 = v23;
      if ( (unsigned __int8)CcShouldLazyWriteCacheMap(v23, v24, *(_QWORD *)(v23 + 96) & 0xFFFFFFFFFFFFFFF0uLL, a3) )
      {
        if ( (*(_DWORD *)(v23 + 152) & 0x1000000) != 0 )
        {
          v52 = 1;
          *(_DWORD *)(*(_QWORD *)(v23 + 240) + 144LL) |= 1u;
          v37 = *(_QWORD *)(v23 + 240);
          v38 = *(_QWORD *)(v23 + 256);
          if ( v38 > *(_QWORD *)(v37 + 112) )
          {
            *(_QWORD *)(v37 + 112) = v38;
            if ( (xmmword_140401150 & 0x20000) != 0 )
              *(_QWORD *)(*(_QWORD *)(v23 + 240) + 128LL) = *(_QWORD *)((*(_QWORD *)(v23 + 96) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                      + 0x18);
          }
          v24 = v53;
        }
        v30 = *(_DWORD *)(v23 + 152);
        v31 = *(_DWORD *)(v23 + 112);
        *(_DWORD *)(v23 + 192) = v31;
        if ( (v30 & 0x200) != 0 && v31 >= 0x40 )
        {
          if ( (v30 & 0x1000000) != 0 && (v39 = *(_QWORD *)(v23 + 240), (v40 = *(_DWORD *)(v39 + 104)) != 0) )
          {
            if ( v31 <= v40 )
              *(_DWORD *)(v39 + 104) = v40 - v31;
            else
              *(_DWORD *)(v39 + 104) = 0;
            ++CcDbgSkippedReductions;
          }
          else
          {
            *(_DWORD *)(v23 + 192) = v31 >> 3;
          }
        }
        if ( !v62 )
        {
          v32 = *(_DWORD *)(v23 + 192);
          if ( v32 >= v24 )
          {
            if ( (*(_DWORD *)(v23 + 152) & 0x200) != 0 || v22 == v23 && (*(_DWORD *)(v23 + 268) & 0xF) == 0 )
            {
              v60 = 1;
            }
            else
            {
              v41 = *(_QWORD *)v21;
              if ( *(_QWORD *)(*(_QWORD *)v21 + 8LL) != v21 || (v42 = *(_QWORD **)(a1 + 80), *v42 != v21) )
                __fastfail(3u);
              *v42 = v41;
              *(_QWORD *)(v41 + 8) = v42;
              v43 = *(__int64 **)(v23 + 144);
              if ( *v43 != v23 + 136 )
                __fastfail(3u);
              *(_QWORD *)v21 = v23 + 136;
              *(_QWORD *)(a1 + 80) = v43;
              *v43 = v21;
              *(_QWORD *)(v23 + 144) = v21;
            }
            v24 = 0;
            v53 = 0;
            v62 = 1;
          }
          else
          {
            v24 -= v32;
            v53 = v24;
          }
        }
        *(_DWORD *)(v23 + 152) |= 0x20u;
        ++*(_DWORD *)(v23 + 112);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        WorkQueueEntry = CcAllocateWorkQueueEntry(a1, v59);
        v34 = (KSPIN_LOCK *)(a1 + 128);
        if ( WorkQueueEntry < 0 )
        {
          KeAcquireInStackQueuedSpinLock(v34, &LockHandle);
          *(_DWORD *)(v23 + 152) &= ~0x20u;
          --*(_DWORD *)(v23 + 112);
          break;
        }
        v35 = v59[0];
        *(_BYTE *)(v59[0] + 120) = 2;
        *(_QWORD *)(v35 + 16) = v23;
        KeAcquireInStackQueuedSpinLock(v34, &LockHandle);
        --*(_DWORD *)(v23 + 112);
        if ( (*(_DWORD *)(v23 + 152) & 0x10000) != 0 )
        {
          v36 = a1 + 224;
          *(_QWORD *)(v23 + 496) = v35 | 1;
        }
        else
        {
          *(_QWORD *)(v23 + 496) = v35;
          v36 = a1 + 256;
        }
        CcPostWorkQueue(v35, v36);
        v51 = 1;
        v6 = 0;
      }
      else
      {
        v25 = *(_DWORD *)(v23 + 152);
        if ( (v25 & 0x10020) == 0x10020 )
        {
          CcIncrementWriteBehindPriority(v23);
        }
        else if ( (unsigned int)++v6 >= 0x14 && (v25 & 0x820) == 0 )
        {
          ++*(_DWORD *)(v23 + 112);
          *(_DWORD *)(v23 + 152) = v25 | 0x20;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(LockHandle.OldIrql);
          v6 = 0;
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
          *(_DWORD *)(v23 + 152) &= ~0x20u;
          --*(_DWORD *)(v23 + 112);
        }
      }
      v26 = v23 + 136;
      v23 = *(_QWORD *)(v23 + 136) - 136LL;
      if ( v60 )
      {
        v44 = *(_QWORD *)v21;
        if ( *(_QWORD *)(*(_QWORD *)v21 + 8LL) != v21 || (v45 = *(_QWORD **)(a1 + 80), *v45 != v21) )
          __fastfail(3u);
        *v45 = v44;
        *(_QWORD *)(v44 + 8) = v45;
        v46 = *(_QWORD *)v26;
        if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) != v26 )
          __fastfail(3u);
        *(_QWORD *)v21 = v46;
        *(_QWORD *)(a1 + 80) = v26;
        *(_QWORD *)(v46 + 8) = v21;
        *(_QWORD *)v26 = v21;
        v60 = 0;
      }
      if ( v23 == v22 )
        break;
    }
  }
  v27 = v54;
  v28 = v51;
  if ( v54 != &v54 )
    v28 = 1;
  while ( v27 != &v54 )
  {
    if ( (_QWORD **)v27[1] != &v54 || (v50 = *v27, *(_QWORD **)(*v27 + 8LL) != v27) )
      __fastfail(3u);
    v54 = (_QWORD *)*v27;
    *(_QWORD *)(v50 + 8) = &v54;
    CcPostWorkQueue(v27, a1 + 256);
    v27 = v54;
  }
  v57 = 0LL;
  if ( (_BYTE)dword_140400130
    || v28
    || *(_QWORD *)(a1 + 744) != a1 + 744
    || (CcComputeNextScanTime((_DWORD *)a1, &v58, &v57), v57 != 0x7FFFFFFFFFFFFFFFLL) )
  {
    CcRescheduleLazyWriteScan(a1, &v57);
    if ( *(_BYTE *)(a1 + 140) )
      *(_BYTE *)(a1 + 140) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 140) = 1;
    *(_BYTE *)(a1 + 592) = 0;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( v52 )
    CcUpdateTimeOnLogHandles(a1);
  if ( (xmmword_140401150 & 0x20000) != 0 )
    CcPerfLogLoggedStreamsStats(a3, *(unsigned int *)(a1 + 456));
  result = a1 + 744;
  if ( *(_QWORD *)result != result )
    return CcPostDeferredWrites(a1);
  return result;
}
