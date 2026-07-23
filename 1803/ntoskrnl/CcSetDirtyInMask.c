/*
 * XREFs of CcSetDirtyInMask @ 0x1400E3310
 * Callers:
 *     CcPrepareMdlWrite @ 0x140098000 (CcPrepareMdlWrite.c)
 *     CcPurgeAndClearCacheSection @ 0x14009ADF4 (CcPurgeAndClearCacheSection.c)
 *     CcMdlWriteComplete2 @ 0x1400CB7B4 (CcMdlWriteComplete2.c)
 *     CcReleaseByteRangeFromWrite @ 0x1400E22D8 (CcReleaseByteRangeFromWrite.c)
 *     CcSetDirtyPinnedData @ 0x1400E2C90 (CcSetDirtyPinnedData.c)
 *     CcMapAndCopyInToCache @ 0x140112290 (CcMapAndCopyInToCache.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140007DA0 (ExpAcquireFastMutexContended.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExpReleaseFastMutexContended @ 0x140064400 (ExpReleaseFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     CcAllocateInitializeMbcb @ 0x1400C3038 (CcAllocateInitializeMbcb.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x1400DADCC (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x1400DAE70 (CcScheduleLazyWriteScan.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     CcFindBitmapRangeToDirty @ 0x1400E3CC4 (CcFindBitmapRangeToDirty.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1400E3DD0 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1402AE854 (EtwTraceAutoBoostEntryExhaustion.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

PSLIST_ENTRY __fastcall CcSetDirtyInMask(__int64 a1, __int64 *a2, unsigned int a3, struct _KTHREAD *a4)
{
  __int64 v4; // r12
  __int64 v6; // r13
  __int64 v7; // r12
  signed __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rdi
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v14; // edx
  ULONG_PTR *v15; // rdi
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  int i; // esi
  PSLIST_ENTRY result; // rax
  volatile signed __int32 *v20; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 AbEntrySummary; // al
  __int64 v23; // rcx
  __int64 v24; // r14
  int v25; // eax
  bool v26; // zf
  unsigned __int8 v27; // di
  PSLIST_ENTRY v28; // r15
  PSLIST_ENTRY v29; // r14
  _SLIST_ENTRY *Next; // rdx
  unsigned __int64 v31; // r8
  __int64 v32; // r9
  volatile __int64 *v33; // r10
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // rcx
  _DWORD *v36; // rdx
  _QWORD *v37; // rdx
  _DWORD *v38; // rdx
  int v39; // edi
  unsigned int v40; // r15d
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rsi
  __int64 v44; // r14
  unsigned __int8 v45; // r15
  struct _KPRCB *v46; // r10
  _DWORD *v47; // rcx
  signed __int32 v48; // edx
  ULONG_PTR *v49; // r14
  struct _KPRCB *v50; // rcx
  _DWORD *v51; // rdx
  __int64 v52; // rax
  struct _KPRCB *v53; // rcx
  _DWORD *v54; // rdx
  __int64 v55; // rcx
  ULONG_PTR v56; // rbx
  unsigned __int8 v57; // di
  signed __int32 v58; // eax
  struct _KTHREAD *v59; // r9
  unsigned __int64 v60; // rcx
  PSLIST_ENTRY v61; // rdi
  _SLIST_ENTRY *v62; // rax
  PSLIST_ENTRY v63; // rax
  PSLIST_ENTRY *v64; // rdx
  _SLIST_ENTRY *v65; // rcx
  _SLIST_ENTRY *v66; // rcx
  _SLIST_ENTRY **v67; // rdx
  int v68; // eax
  signed __int32 v69; // eax
  int v70; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v72; // eax
  int v73; // eax
  signed __int32 v74; // eax
  int v75; // eax
  int v76; // eax
  int v77; // eax
  unsigned int v78; // [rsp+38h] [rbp-39h]
  __int64 v79; // [rsp+40h] [rbp-31h]
  PSLIST_ENTRY ListEntry; // [rsp+48h] [rbp-29h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-21h] BYREF
  int v82; // [rsp+68h] [rbp-9h] BYREF
  int v83; // [rsp+6Ch] [rbp-5h] BYREF
  int v84; // [rsp+70h] [rbp-1h] BYREF
  PSLIST_ENTRY v85; // [rsp+78h] [rbp+7h]
  int v86; // [rsp+80h] [rbp+Fh]
  PSLIST_ENTRY v87; // [rsp+88h] [rbp+17h]
  __int64 v88; // [rsp+90h] [rbp+1Fh]
  void *retaddr; // [rsp+D0h] [rbp+5Fh]

  v4 = *a2;
  v88 = a3;
  ListEntry = 0LL;
  v78 = 0;
  v6 = v4 + a3 - 1LL;
  if ( ((v4 ^ v6) & 0xFFFFFFFFFE000000uLL) != 0 )
    KeBugCheckEx(0x34u, 0xC32uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v7 = v4 >> 12;
  v8 = v6 >> 12;
  if ( *(_QWORD *)(a1 + 32) / 4096LL <= v8 )
    KeBugCheckEx(0x34u, 0xC44uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v9 = *(_QWORD *)(a1 + 528);
  v79 = v9;
  if ( *(_QWORD *)(a1 + 168) )
  {
    v10 = *(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_1403CB280, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v82 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v68 = SchedulerAssist[5];
          SchedulerAssist[5] = v68 + 1;
          if ( v68 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(&dword_1403CB280, 0x1Fu) )
      {
        KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
        v82 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_1403CB280, CurrentIrql);
      }
      v14 = dword_1403CB280;
      while ( (v14 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v14 & 0x40000000) == 0 )
        {
          v69 = _InterlockedCompareExchange(&dword_1403CB280, v14 | 0x40000000, v14);
          v26 = v14 == v69;
          v14 = v69;
          if ( !v26 )
            continue;
        }
        KeYieldProcessorEx(&v82);
        v14 = dword_1403CB280;
      }
    }
    if ( *(_QWORD *)v10 )
      v15 = *(ULONG_PTR **)(qword_1403CBD88 + 8LL * (*(_WORD *)(*(_QWORD *)v10 + 60LL) & 0x3FF));
    else
      v15 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_1403CB280, retaddr);
    else
      dword_1403CB280 = 0;
    v16 = KeGetCurrentPrcb();
    v17 = v16->SchedulerAssist;
    if ( v17 )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v70 = v17[5] - 1;
        v17[5] = v70;
        if ( !v70 && !*((_BYTE *)v17 + 25) && !*((_BYTE *)v17 + 27) )
          KiPerformUnboostKick(v16);
      }
    }
    __writecr8(CurrentIrql);
    if ( v9 != *(_QWORD *)(v15[21] + 8) )
      KeBugCheckEx(0x34u, 0x12A5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
LABEL_15:
  for ( i = 0; ; i = 1 )
  {
    if ( *(_QWORD *)(a1 + 32) > 0x300000uLL )
    {
      ++unk_1403D1D54;
      result = RtlpInterlockedPopEntrySList(&CcBitmapLookasideList);
      if ( !result )
      {
        ++unk_1403D1D58;
        result = (PSLIST_ENTRY)unk_1403D1D70(unk_1403D1D64, unk_1403D1D6C, unk_1403D1D68);
        if ( !result )
        {
          ++CcDbgNumberOfFailedBitmapAllocations;
          goto LABEL_182;
        }
      }
      ListEntry = result;
    }
    v84 = 0;
    v20 = (volatile signed __int32 *)(a1 + 280);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    if ( ++CurrentThread->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, a1 + 280, KeGetCurrentIrql(), 0LL);
    AbEntrySummary = CurrentThread->AbEntrySummary;
    if ( !AbEntrySummary )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        v24 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, a1 + 280);
LABEL_143:
        _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
        goto LABEL_26;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
      AbEntrySummary = CurrentThread->AbEntrySummary;
    }
    _BitScanForward((unsigned int *)&v23, AbEntrySummary);
    v86 = v23;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v23);
    v24 = (__int64)&CurrentThread->LockEntries[v23];
    if ( !v24 )
      goto LABEL_143;
    v25 = (unsigned __int64)v20 >= 0xFFFF800000000000uLL
       && *((_BYTE *)&MiState[946] + (((unsigned __int64)v20 >> 39) & 0x1FF)) == 1
        ? MmGetSessionIdEx(CurrentThread->ApcState.Process)
        : -1;
    *(_DWORD *)(v24 + 40) = v25;
    *(_QWORD *)(v24 + 32) = (unsigned __int64)v20 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_26:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(CurrentThread, a1 + 280, &v84);
    v26 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v26 && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    v27 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset(v20, 0) )
      ExpAcquireFastMutexContended(a1 + 280, v24);
    if ( v24 )
      *(_BYTE *)(v24 + 26) |= 1u;
    *(_QWORD *)(a1 + 288) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 328) = v27;
    v28 = *(PSLIST_ENTRY *)(a1 + 160);
    v85 = v28;
    if ( !v28 )
      break;
LABEL_34:
    if ( v7 == v8 && v7 == *((_QWORD *)&v28[2].Next + 1) || (*(_DWORD *)(a1 + 152) & 0x40000000) != 0 )
      goto LABEL_84;
    if ( (unsigned __int64)v8 >= 0x300 && LOWORD(v28->Next) != 761 )
    {
      v61 = ListEntry;
      memset(ListEntry, 0, 0x400uLL);
      if ( LODWORD(v28[5].Next) )
      {
        v62 = (_SLIST_ENTRY *)*((_QWORD *)&v28[5].Next + 1);
        *v61 = *v62;
        v61[1] = v62[1];
        v61[2] = v62[2];
        v61[3] = v62[3];
        v61[4] = v62[4];
        v61[5] = v62[5];
        memset(*((void **)&v28[5].Next + 1), 0, 0x60uLL);
      }
      v63 = v28 + 1;
      *((_QWORD *)&v28[5].Next + 1) = v61;
      v64 = (PSLIST_ENTRY *)*((_QWORD *)&v28[1].Next + 1);
      v65 = v28 + 6;
      ListEntry = 0LL;
      if ( *v64 != &v28[1] )
        __fastfail(3u);
      v65->Next = v63;
      *((_QWORD *)&v28[6].Next + 1) = v64;
      *v64 = v65;
      *((_QWORD *)&v28[1].Next + 1) = v65;
      v66 = v28 + 9;
      v28[7].Next = (_SLIST_ENTRY *)0x7FFFFFFFFFFFFFFFLL;
      *((_DWORD *)&v28[7].Next + 2) = -1;
      v67 = (_SLIST_ENTRY **)*((_QWORD *)&v28[1].Next + 1);
      if ( *v67 != v63 )
        __fastfail(3u);
      v66->Next = v63;
      *((_QWORD *)&v28[9].Next + 1) = v67;
      *v67 = v66;
      *((_QWORD *)&v28[1].Next + 1) = v66;
      LOWORD(v28->Next) = 761;
      v28[10].Next = (_SLIST_ENTRY *)0x7FFFFFFFFFFFFFFFLL;
      *((_DWORD *)&v28[10].Next + 2) = -1;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
      goto LABEL_15;
    }
    result = (PSLIST_ENTRY)CcFindBitmapRangeToDirty(v28, v7, &ListEntry);
    v87 = result;
    v29 = result;
    if ( !result )
      goto LABEL_181;
    Next = result[1].Next;
    v31 = (unsigned int)Next;
    if ( v7 < (__int64)Next + *((unsigned int *)&result[1].Next + 2) )
      *((_DWORD *)&result[1].Next + 2) = v7 - (_DWORD)Next;
    if ( v8 > (__int64)Next + *((unsigned int *)&result[1].Next + 3) )
      *((_DWORD *)&result[1].Next + 3) = v8 - (_DWORD)Next;
    v32 = v79;
    LockHandle.LockQueue.Next = 0LL;
    v33 = (volatile __int64 *)(v79 + 128);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v79 + 128);
    v34 = KeGetCurrentIrql();
    __writecr8(2uLL);
    LockHandle.OldIrql = v34;
    v35 = KeGetCurrentPrcb();
    v36 = v35->SchedulerAssist;
    if ( v36 )
    {
      if ( v35->NestingLevel <= 1u )
      {
        v72 = v36[5];
        v36[5] = v72 + 1;
        if ( v72 == -1 )
        {
          v31 = *((unsigned __int8 *)v36 + 27);
          if ( !*((_BYTE *)v36 + 25) && !(_BYTE)v31 )
          {
            KiPerformUnboostKick(v35);
            v32 = v79;
          }
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v33);
      goto LABEL_107;
    }
    v37 = (_QWORD *)_InterlockedExchange64(v33, (__int64)&LockHandle);
    if ( v37 )
    {
      KxWaitForLockOwnerShip((__int64)&LockHandle, v37);
LABEL_107:
      v32 = v79;
    }
    if ( !*(_DWORD *)(a1 + 112) && (*(_DWORD *)(a1 + 152) & 2) == 0 )
    {
      CcScheduleLazyWriteScan(v32, 0, 0);
      CcInsertIntoDirtySharedCacheMapList(a1);
      v28[2].Next = (_SLIST_ENTRY *)v7;
    }
    v38 = (_DWORD *)(*((_QWORD *)&v29[2].Next + 1)
                   + 4 * ((unsigned __int64)(unsigned int)(v7 - LODWORD(v29[1].Next)) >> 5));
    v39 = 1 << (v7 & 0x1F);
    if ( v7 <= v8 )
    {
      v40 = v78;
      v41 = v8 - v7 + 1;
      v7 = v8 + 1;
      do
      {
        v31 = (unsigned __int64)v38;
        if ( (*v38 & v39) == 0 )
        {
          *v38 |= v39;
          ++v40;
        }
        v26 = 2 * v39 == 0;
        v39 *= 2;
        v42 = v39;
        if ( v26 )
          v39 = 1;
        ++v38;
        if ( v42 )
          v38 = (_DWORD *)v31;
        --v41;
      }
      while ( v41 );
      v78 = v40;
      v28 = v85;
    }
    v43 = *(_QWORD *)(a1 + 528);
    if ( *(_QWORD *)(a1 + 168) )
    {
      v44 = *(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
      v45 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_1403CB280, v45);
      }
      else
      {
        v46 = KeGetCurrentPrcb();
        v31 = 0LL;
        v83 = 0;
        v47 = v46->SchedulerAssist;
        if ( v47 )
        {
          if ( v46->NestingLevel <= 1u )
          {
            v73 = v47[5];
            v47[5] = v73 + 1;
            if ( v73 == -1 && !*((_BYTE *)v47 + 25) && !*((_BYTE *)v47 + 27) )
            {
              KiPerformUnboostKick(v46);
              v31 = 0LL;
            }
          }
        }
        if ( _interlockedbittestandset(&dword_1403CB280, 0x1Fu) )
        {
          KiSetVpThreadSpinLockCount(v46, 0LL);
          v83 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_1403CB280, v45);
          v31 = 0LL;
        }
        v48 = dword_1403CB280;
        if ( (dword_1403CB280 & 0xBFFFFFFF) == 0x80000000 )
          goto LABEL_64;
        do
        {
          if ( (v48 & 0x40000000) == 0 )
          {
            v74 = _InterlockedCompareExchange(&dword_1403CB280, v48 | 0x40000000, v48);
            v26 = v48 == v74;
            v48 = v74;
            if ( !v26 )
              continue;
          }
          KeYieldProcessorEx(&v83);
          v48 = dword_1403CB280;
        }
        while ( (v48 & 0xBFFFFFFF) != 0x80000000 );
      }
      v31 = 0LL;
LABEL_64:
      if ( *(_QWORD *)v44 )
        v49 = *(ULONG_PTR **)(qword_1403CBD88 + 8LL * (*(_WORD *)(*(_QWORD *)v44 + 60LL) & 0x3FF));
      else
        v49 = &MiSystemPartition;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_1403CB280, retaddr);
        v31 = 0LL;
      }
      else
      {
        dword_1403CB280 = 0;
      }
      v50 = KeGetCurrentPrcb();
      v51 = v50->SchedulerAssist;
      if ( v51 )
      {
        if ( v50->NestingLevel <= 1u )
        {
          v75 = v51[5] - 1;
          v51[5] = v75;
          if ( !v75 )
          {
            if ( !*((_BYTE *)v51 + 25) && !*((_BYTE *)v51 + 27) )
              KiPerformUnboostKick(v50);
            v31 = 0LL;
          }
        }
      }
      __writecr8(v45);
      if ( v43 != *(_QWORD *)(v49[21] + 8) )
        KeBugCheckEx(0x34u, 0x12A5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      v29 = v87;
      v28 = v85;
    }
    *(_QWORD *)(v43 + 600) += v78;
    if ( v28 )
      *((_DWORD *)&v28->Next + 2) += v78;
    LODWORD(v29[2].Next) += v78;
    *(_DWORD *)(a1 + 112) += v78;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 504) + 32LL), v78);
    if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 240) + 24LL), v78);
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 240) + 136LL) == -1LL )
        *(_QWORD *)(*(_QWORD *)(a1 + 240) + 136LL) = MEMORY[0xFFFFF78000000320];
    }
    if ( *(_BYTE *)(v43 + 900) && *(_QWORD *)(v43 + 600) >= 0x2000uLL )
      CcScheduleLazyWriteScan(v43, 1, 0);
    if ( *(_BYTE *)(v43 + 140) )
    {
      CcScheduleLazyWriteScan(v43, 0, 0);
      *(_BYTE *)(v43 + 140) = 0;
    }
    CcAdjustWriteBehindThreadPoolIfNeeded(v43, 0LL, v31);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_80;
    }
    _m_prefetchw(&LockHandle);
    v52 = (__int64)LockHandle.LockQueue.Next;
    if ( LockHandle.LockQueue.Next )
      goto LABEL_105;
    if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                         0LL,
                                         (signed __int64)&LockHandle) != &LockHandle )
    {
      v52 = KxWaitForLockChainValid((__int64 *)&LockHandle);
LABEL_105:
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v52 + 8), 1uLL);
    }
LABEL_80:
    v53 = KeGetCurrentPrcb();
    v54 = v53->SchedulerAssist;
    if ( v54 )
    {
      if ( v53->NestingLevel <= 1u )
      {
        v76 = v54[5] - 1;
        v54[5] = v76;
        if ( !v76 && !*((_BYTE *)v54 + 25) && !*((_BYTE *)v54 + 27) )
          KiPerformUnboostKick(v53);
      }
    }
    __writecr8(LockHandle.OldIrql);
    if ( (*(_DWORD *)(a1 + 152) & 0x10000000) != 0 && v78 )
    {
      v59 = a4;
      if ( !a4 )
      {
        v59 = KeGetCurrentThread();
        a4 = v59;
      }
      v60 = v59->Process[2].ActiveProcessors.Bitmap[8];
      if ( v60 )
      {
        if ( v78 << 12 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v60 + 8), v78 << 12);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v60 + 24), 1uLL);
      }
    }
    if ( v39 )
    {
      *((_QWORD *)&v28[2].Next + 1) = v8;
LABEL_84:
      v55 = *a2 + v88;
      if ( v55 > *(_QWORD *)(a1 + 48) )
      {
        v26 = (*(_DWORD *)(a1 + 152) & 0x40000000) == 0;
        *(_QWORD *)(a1 + 48) = v55;
        if ( !v26 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v79 + 128), &LockHandle);
          v77 = *(_DWORD *)(a1 + 152);
          if ( (v77 & 0x400) == 0 )
            *(_DWORD *)(a1 + 152) = v77 | 0x400;
          CcInsertIntoDirtySharedCacheMapList(a1);
          CcScheduleLazyWriteScan(v79, 0, 0);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(LockHandle.OldIrql);
        }
      }
LABEL_86:
      v56 = a1 + 280;
      v57 = *(_BYTE *)(v56 + 48);
      *(_QWORD *)(v56 + 8) = 0LL;
      v58 = _InterlockedCompareExchange((volatile signed __int32 *)v56, 1, 0);
      if ( v58 )
        ExpReleaseFastMutexContended(v56, v58);
      __writecr8(v57);
      result = (PSLIST_ENTRY)KeAbPostRelease(v56);
      goto LABEL_89;
    }
  }
  result = (PSLIST_ENTRY)CcAllocateInitializeMbcb();
  v85 = result;
  v28 = result;
  if ( result )
  {
    *(_QWORD *)(a1 + 160) = result;
    goto LABEL_34;
  }
LABEL_181:
  i = 1;
LABEL_182:
  if ( (*(_DWORD *)(a1 + 152) & 0x20000) == 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v79 + 128), &LockHandle);
    *(_DWORD *)(a1 + 152) |= 0x20000u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = (PSLIST_ENTRY)LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
  }
  if ( i )
    goto LABEL_86;
LABEL_89:
  if ( ListEntry )
  {
    ++unk_1403D1D5C;
    if ( LOWORD(CcBitmapLookasideList.Alignment) >= unk_1403D1D50 )
    {
      ++unk_1403D1D60;
      return (PSLIST_ENTRY)unk_1403D1D78();
    }
    else
    {
      return RtlpInterlockedPushEntrySList(&CcBitmapLookasideList, ListEntry);
    }
  }
  return result;
}
