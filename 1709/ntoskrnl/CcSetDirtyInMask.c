/*
 * XREFs of CcSetDirtyInMask @ 0x14001DA30
 * Callers:
 *     CcSetDirtyPinnedData @ 0x14001B660 (CcSetDirtyPinnedData.c)
 *     CcMapAndCopyInToCache @ 0x14001C320 (CcMapAndCopyInToCache.c)
 *     CcReleaseByteRangeFromWrite @ 0x140067F20 (CcReleaseByteRangeFromWrite.c)
 *     CcPurgeAndClearCacheSection @ 0x1400F208C (CcPurgeAndClearCacheSection.c)
 *     CcPrepareMdlWrite @ 0x14012D230 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x14012F234 (CcMdlWriteComplete2.c)
 * Callees:
 *     CcAdjustWriteBehindThreadPool @ 0x140008EA4 (CcAdjustWriteBehindThreadPool.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x14001E4C4 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x14001E568 (CcScheduleLazyWriteScan.c)
 *     CcAllocateInitializeMbcb @ 0x14001EB10 (CcAllocateInitializeMbcb.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     ExpReleaseFastMutexContended @ 0x1400A6FF0 (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x1400BAC30 (ExpAcquireFastMutexContended.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1401167E4 (CcBoostLowPriorityWorkerThread.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14027AE7C (EtwTraceAutoBoostEntryExhaustion.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcSetDirtyInMask(__int64 a1, __int64 *a2, unsigned int a3, struct _KTHREAD *a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  signed __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // si
  signed __int32 v11; // edx
  ULONG_PTR *v12; // rdi
  int i; // edi
  __int64 result; // rax
  volatile signed __int32 *v15; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int AbEntrySummary; // ecx
  __int64 v18; // rax
  __int64 v19; // r14
  int v20; // eax
  bool v21; // zf
  unsigned __int8 v22; // di
  __int64 v23; // r13
  signed __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // rsi
  signed __int64 v27; // rdi
  signed __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdi
  unsigned __int8 v31; // al
  _DWORD *v32; // rdx
  int v33; // edi
  unsigned int v34; // r15d
  __int64 v35; // rcx
  __int64 v36; // r14
  __int64 v37; // rsi
  unsigned __int8 v38; // r15
  signed __int32 v39; // edx
  ULONG_PTR *v40; // rsi
  signed __int64 v41; // rdx
  char v42; // si
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  __int64 v44; // rcx
  ULONG_PTR v45; // rbx
  unsigned __int8 v46; // di
  unsigned __int32 v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rcx
  struct _KTHREAD *v50; // r10
  unsigned __int64 v51; // rcx
  _SLIST_ENTRY *v52; // rax
  __int64 v53; // rax
  __int64 **v54; // rdx
  __int64 *v55; // rcx
  __int64 *v56; // rcx
  __int64 **v57; // rdx
  signed __int32 v58; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  signed __int32 v60; // eax
  int v61; // eax
  unsigned int v62; // [rsp+38h] [rbp-59h]
  PSLIST_ENTRY ListEntry; // [rsp+40h] [rbp-51h]
  struct _KLOCK_QUEUE_HANDLE v64; // [rsp+48h] [rbp-49h] BYREF
  int v65; // [rsp+60h] [rbp-31h] BYREF
  int v66; // [rsp+64h] [rbp-2Dh] BYREF
  __int64 v67; // [rsp+68h] [rbp-29h]
  __int64 v68; // [rsp+70h] [rbp-21h]
  int v69; // [rsp+78h] [rbp-19h] BYREF
  __int64 v70; // [rsp+80h] [rbp-11h]
  int v71; // [rsp+88h] [rbp-9h]
  __int64 v72; // [rsp+90h] [rbp-1h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp+7h] BYREF
  void *retaddr; // [rsp+F0h] [rbp+5Fh]
  int v76; // [rsp+108h] [rbp+77h]

  ListEntry = 0LL;
  v76 = 0;
  v5 = *a2;
  v62 = 0;
  v72 = a3;
  if ( ((v5 ^ (v5 + a3 - 1LL)) & 0xFFFFFFFFFE000000uLL) != 0 )
    KeBugCheckEx(0x34u, 0xC31uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = *(_QWORD *)(a1 + 32);
  v7 = (v5 + a3 - 1LL) >> 12;
  v70 = v5 >> 12;
  if ( v6 / 4096 <= v7 )
    KeBugCheckEx(0x34u, 0xC43uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v8 = *(_QWORD *)(a1 + 528);
  v68 = v8;
  if ( *(_QWORD *)(a1 + 168) )
  {
    v9 = *(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140388100, CurrentIrql);
    }
    else
    {
      v65 = 0;
      if ( _interlockedbittestandset(&dword_140388100, 0x1Fu) )
        v65 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140388100, CurrentIrql);
      v11 = dword_140388100;
      while ( (v11 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v11 & 0x40000000) == 0 )
        {
          v58 = _InterlockedCompareExchange(&dword_140388100, v11 | 0x40000000, v11);
          v21 = v11 == v58;
          v11 = v58;
          if ( !v21 )
            continue;
        }
        KeYieldProcessorEx(&v65);
        v11 = dword_140388100;
      }
    }
    if ( *(_QWORD *)v9 )
      v12 = *(ULONG_PTR **)(qword_140388AF0 + 8LL * (*(_WORD *)(*(_QWORD *)v9 + 60LL) & 0x3FF));
    else
      v12 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140388100, retaddr);
    else
      dword_140388100 = 0;
    __writecr8(CurrentIrql);
    if ( v8 != *(_QWORD *)(v12[21] + 8) )
      KeBugCheckEx(0x34u, 0x1292uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
LABEL_13:
  for ( i = v76; ; i = 0 )
  {
    if ( *(_QWORD *)(a1 + 32) > 0x300000uLL )
    {
      ++dword_14038DF14;
      result = (__int64)RtlpInterlockedPopEntrySList(&CcBitmapLookasideList);
      if ( !result )
      {
        ++dword_14038DF18;
        result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_14038DF30)(
                   (unsigned int)dword_14038DF24,
                   (unsigned int)dword_14038DF2C,
                   (unsigned int)dword_14038DF28);
        if ( !result )
        {
          ++CcDbgNumberOfFailedBitmapAllocations;
          goto LABEL_181;
        }
      }
      ListEntry = (PSLIST_ENTRY)result;
    }
    v69 = 0;
    v15 = (volatile signed __int32 *)(a1 + 280);
    CurrentThread = KeGetCurrentThread();
    v76 = 1;
    --CurrentThread->SpecialApcDisable;
    if ( ++CurrentThread->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, a1 + 280, KeGetCurrentIrql(), 0LL);
    if ( !CurrentThread->AbEntrySummary )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        v19 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, a1 + 280);
LABEL_156:
        _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
        goto LABEL_24;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = CurrentThread->AbEntrySummary;
    _BitScanForward((unsigned int *)&v18, AbEntrySummary);
    v71 = v18;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v18);
    v19 = (__int64)&CurrentThread->LockEntries[v18];
    if ( !v19 )
      goto LABEL_156;
    v20 = (unsigned __int64)v15 >= 0xFFFF800000000000uLL
       && *((_BYTE *)&MiState + (((unsigned __int64)v15 >> 39) & 0x1FF) + 6352) == 1
        ? MmGetSessionIdEx(CurrentThread->ApcState.Process)
        : -1;
    *(_DWORD *)(v19 + 40) = v20;
    *(_QWORD *)(v19 + 32) = (unsigned __int64)v15 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_24:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(CurrentThread, a1 + 280, &v69);
    v21 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v21 && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    v22 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset(v15, 0) )
      ExpAcquireFastMutexContended(a1 + 280, (PRTL_BALANCED_NODE)v19);
    if ( v19 )
      *(_BYTE *)(v19 + 26) |= 1u;
    *(_QWORD *)(a1 + 288) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 328) = v22;
    v23 = *(_QWORD *)(a1 + 160);
    if ( !v23 )
      break;
LABEL_32:
    v24 = v70;
    if ( v70 == v7 && v70 == *(_QWORD *)(v23 + 40) || (*(_DWORD *)(a1 + 152) & 0x40000000) != 0 )
    {
LABEL_81:
      v44 = *a2 + v72;
      if ( v44 > *(_QWORD *)(a1 + 48) )
      {
        v21 = (*(_DWORD *)(a1 + 152) & 0x40000000) == 0;
        *(_QWORD *)(a1 + 48) = v44;
        if ( !v21 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 128), &v64);
          v61 = *(_DWORD *)(a1 + 152);
          if ( (v61 & 0x400) == 0 )
            *(_DWORD *)(a1 + 152) = v61 | 0x400;
          CcInsertIntoDirtySharedCacheMapList(a1);
          CcScheduleLazyWriteScan(v8, 0LL, 0LL);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v64);
          __writecr8(v64.OldIrql);
        }
      }
      goto LABEL_83;
    }
    if ( (unsigned __int64)v7 < 0x300 || *(_WORD *)v23 == 761 )
    {
      result = *(_QWORD *)(v23 + 16);
      v25 = 0LL;
      v67 = 0LL;
      v26 = v23 + 16;
      v27 = v70 & 0xFFFFFFFFFFFFE000uLL;
      while ( 1 )
      {
        v28 = *(_QWORD *)(result + 16);
        if ( v27 == v28 )
        {
          v25 = result;
          v67 = result;
          goto LABEL_40;
        }
        if ( *(_DWORD *)(result + 32) || v25 )
        {
          if ( v27 > v28 )
            v26 = result;
        }
        else
        {
          v25 = result;
          v67 = result;
        }
        result = *(_QWORD *)result;
        if ( result == v23 + 16 )
          break;
        if ( v27 < *(_QWORD *)(result + 16) && v25 )
          goto LABEL_96;
      }
      if ( !v25 )
      {
        result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x72426343u);
        v67 = result;
        v25 = result;
        if ( result )
        {
          result = (__int64)memset((void *)result, 0, 0x30uLL);
          goto LABEL_99;
        }
LABEL_179:
        v8 = v68;
        goto LABEL_180;
      }
LABEL_96:
      v48 = *(_QWORD *)v25;
      if ( *(_QWORD *)(*(_QWORD *)v25 + 8LL) != v25 || (result = *(_QWORD *)(v25 + 8), *(_QWORD *)result != v25) )
        __fastfail(3u);
      *(_QWORD *)result = v48;
      *(_QWORD *)(v48 + 8) = result;
LABEL_99:
      v49 = *(_QWORD *)v26;
      if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) != v26 )
        __fastfail(3u);
      *(_QWORD *)v25 = v49;
      *(_QWORD *)(v25 + 8) = v26;
      *(_QWORD *)(v49 + 8) = v25;
      *(_QWORD *)v26 = v25;
      v21 = *(_QWORD *)(v25 + 40) == 0LL;
      *(_QWORD *)(v25 + 16) = v27;
      *(_DWORD *)(v25 + 24) = -1;
      *(_DWORD *)(v25 + 28) = 0;
      if ( v21 )
      {
        result = (__int64)memset(ListEntry, 0, 0x400uLL);
        *(_QWORD *)(v25 + 40) = ListEntry;
        ListEntry = 0LL;
      }
LABEL_40:
      if ( !v25 )
        goto LABEL_179;
      v29 = *(_QWORD *)(v25 + 16);
      if ( v24 < v29 + *(unsigned int *)(v25 + 24) )
        *(_DWORD *)(v25 + 24) = v24 - v29;
      if ( v7 > v29 + *(unsigned int *)(v25 + 28) )
        *(_DWORD *)(v25 + 28) = v7 - v29;
      v30 = v68;
      v64.LockQueue.Next = 0LL;
      v64.LockQueue.Lock = (unsigned __int64 *volatile)(v68 + 128);
      v31 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v64.OldIrql = v31;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v64, v68 + 128);
      }
      else if ( _InterlockedExchange64((volatile __int64 *)(v68 + 128), (__int64)&v64) )
      {
        KxWaitForLockOwnerShip(&v64);
      }
      if ( !*(_DWORD *)(a1 + 112) && (*(_DWORD *)(a1 + 152) & 2) == 0 )
      {
        CcScheduleLazyWriteScan(v30, 0LL, 0LL);
        CcInsertIntoDirtySharedCacheMapList(a1);
        *(_QWORD *)(v23 + 32) = v24;
      }
      v32 = (_DWORD *)(*(_QWORD *)(v25 + 40) + 4 * ((unsigned __int64)(unsigned int)(v24 - *(_DWORD *)(v25 + 16)) >> 5));
      v33 = 1 << (v24 & 0x1F);
      if ( v24 <= v7 )
      {
        v34 = v62;
        v35 = v7 - v24 + 1;
        v70 = v7 + 1;
        do
        {
          if ( (*v32 & v33) == 0 )
          {
            *v32 |= v33;
            ++v34;
          }
          v33 *= 2;
          if ( !v33 )
          {
            ++v32;
            v33 = 1;
          }
          --v35;
        }
        while ( v35 );
        v62 = v34;
        v25 = v67;
      }
      v36 = *(_QWORD *)(a1 + 528);
      if ( *(_QWORD *)(a1 + 168) )
      {
        v37 = *(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
        v38 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140388100, v38);
        }
        else
        {
          v66 = 0;
          if ( _interlockedbittestandset(&dword_140388100, 0x1Fu) )
            v66 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140388100, v38);
          v39 = dword_140388100;
          while ( (v39 & 0xBFFFFFFF) != 0x80000000 )
          {
            if ( (v39 & 0x40000000) == 0 )
            {
              v60 = _InterlockedCompareExchange(&dword_140388100, v39 | 0x40000000, v39);
              v21 = v39 == v60;
              v39 = v60;
              if ( !v21 )
                continue;
            }
            KeYieldProcessorEx(&v66);
            v39 = dword_140388100;
          }
        }
        if ( *(_QWORD *)v37 )
          v40 = *(ULONG_PTR **)(qword_140388AF0 + 8LL * (*(_WORD *)(*(_QWORD *)v37 + 60LL) & 0x3FF));
        else
          v40 = &MiSystemPartition;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140388100, retaddr);
        else
          dword_140388100 = 0;
        __writecr8(v38);
        if ( v36 != *(_QWORD *)(v40[21] + 8) )
          KeBugCheckEx(0x34u, 0x1292uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        v25 = v67;
      }
      *(_QWORD *)(v36 + 600) += v62;
      v41 = v62;
      if ( v23 )
        *(_DWORD *)(v23 + 8) += v62;
      *(_DWORD *)(v25 + 32) += v62;
      *(_DWORD *)(a1 + 112) += v62;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 504) + 32LL), v62);
      if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 )
      {
        v41 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 240) + 24LL), v62);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 240) + 136LL) == -1LL )
          *(_QWORD *)(*(_QWORD *)(a1 + 240) + 136LL) = MEMORY[0xFFFFF78000000320];
      }
      if ( *(_BYTE *)(v36 + 900) && *(_QWORD *)(v36 + 600) >= 0x2000uLL )
      {
        LOBYTE(v41) = 1;
        CcScheduleLazyWriteScan(v36, v41, 0LL);
      }
      if ( *(_BYTE *)(v36 + 140) )
      {
        CcScheduleLazyWriteScan(v36, 0LL, 0LL);
        *(_BYTE *)(v36 + 140) = 0;
      }
      v42 = 0;
      if ( !(_BYTE)dword_140400130 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v36 + 192), &LockHandle);
        if ( *(_DWORD *)(v36 + 316) )
        {
          if ( *(_DWORD *)(v36 + 896) < *(_DWORD *)(v36 + 200) )
          {
            v42 = 1;
            CcAdjustWriteBehindThreadPool(v36, 0);
          }
        }
        else if ( *(_QWORD *)(v36 + 600) > 0x2000uLL )
        {
          if ( *(_DWORD *)(v36 + 896) < *(_DWORD *)(v36 + 200) )
          {
            CcAdjustWriteBehindThreadPool(v36, 0);
            v42 = 1;
          }
        }
        else if ( !*(_DWORD *)(v36 + 328) && *(_QWORD *)(v36 + 256) == v36 + 256 )
        {
          CcAdjustWriteBehindThreadPool(v36, 1);
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        if ( v42 && KeGetCurrentIrql() < 2u )
          CcBoostLowPriorityWorkerThread(v36, 0LL);
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&v64, retaddr);
        goto LABEL_78;
      }
      _m_prefetchw(&v64);
      Next = v64.LockQueue.Next;
      if ( !v64.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)v64.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&v64) == &v64 )
        {
LABEL_78:
          __writecr8(v64.OldIrql);
          if ( (*(_DWORD *)(a1 + 152) & 0x10000000) != 0 && v62 )
          {
            v50 = a4;
            if ( !a4 )
            {
              v50 = KeGetCurrentThread();
              a4 = v50;
            }
            v51 = v50->Process[2].ActiveProcessors.Bitmap[8];
            if ( v51 )
            {
              if ( v62 << 12 )
                _InterlockedExchangeAdd64((volatile signed __int64 *)(v51 + 8), v62 << 12);
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v51 + 24), 1uLL);
            }
          }
          v8 = v68;
          if ( v33 )
          {
            *(_QWORD *)(v23 + 40) = v7;
            goto LABEL_81;
          }
          goto LABEL_13;
        }
        Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&v64, v41);
      }
      v64.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
      goto LABEL_78;
    }
    memset(ListEntry, 0, 0x400uLL);
    if ( *(_DWORD *)(v23 + 80) )
    {
      v52 = *(_SLIST_ENTRY **)(v23 + 88);
      *ListEntry = *v52;
      ListEntry[1] = v52[1];
      ListEntry[2] = v52[2];
      ListEntry[3] = v52[3];
      ListEntry[4] = v52[4];
      ListEntry[5] = v52[5];
      memset(*(void **)(v23 + 88), 0, 0x60uLL);
    }
    v53 = v23 + 16;
    *(_QWORD *)(v23 + 88) = ListEntry;
    v54 = *(__int64 ***)(v23 + 24);
    v55 = (__int64 *)(v23 + 96);
    ListEntry = 0LL;
    if ( *v54 != (__int64 *)(v23 + 16) )
      __fastfail(3u);
    *v55 = v53;
    *(_QWORD *)(v23 + 104) = v54;
    *v54 = v55;
    *(_QWORD *)(v23 + 24) = v55;
    v56 = (__int64 *)(v23 + 144);
    *(_QWORD *)(v23 + 112) = 0x7FFFFFFFFFFFFFFFLL;
    *(_DWORD *)(v23 + 120) = -1;
    v57 = *(__int64 ***)(v23 + 24);
    if ( *v57 != (__int64 *)v53 )
      __fastfail(3u);
    *v56 = v53;
    *(_QWORD *)(v23 + 152) = v57;
    *v57 = v56;
    *(_QWORD *)(v23 + 24) = v56;
    *(_WORD *)v23 = 761;
    *(_QWORD *)(v23 + 160) = 0x7FFFFFFFFFFFFFFFLL;
    *(_DWORD *)(v23 + 168) = -1;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
  }
  result = CcAllocateInitializeMbcb();
  v23 = result;
  if ( result )
  {
    *(_QWORD *)(a1 + 160) = result;
    goto LABEL_32;
  }
LABEL_180:
  i = 1;
LABEL_181:
  if ( (*(_DWORD *)(a1 + 152) & 0x20000) == 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 128), &v64);
    *(_DWORD *)(a1 + 152) |= 0x20000u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v64);
    result = v64.OldIrql;
    __writecr8(v64.OldIrql);
  }
  if ( i )
  {
LABEL_83:
    v45 = a1 + 280;
    v46 = *(_BYTE *)(v45 + 48);
    *(_QWORD *)(v45 + 8) = 0LL;
    v47 = _InterlockedCompareExchange((volatile signed __int32 *)v45, 1, 0);
    if ( v47 )
      ExpReleaseFastMutexContended(v45, v47);
    __writecr8(v46);
    result = KeAbPostRelease(v45);
  }
  if ( ListEntry )
  {
    ++dword_14038DF1C;
    if ( LOWORD(CcBitmapLookasideList.Alignment) >= (unsigned __int16)word_14038DF10 )
    {
      ++dword_14038DF20;
      return ((__int64 (__fastcall *)(PSLIST_ENTRY))qword_14038DF38)(ListEntry);
    }
    else
    {
      return (__int64)RtlpInterlockedPushEntrySList(&CcBitmapLookasideList, ListEntry);
    }
  }
  return result;
}
