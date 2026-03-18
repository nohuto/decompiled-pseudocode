/*
 * XREFs of CcUnpinFileDataEx @ 0x1400E23F0
 * Callers:
 *     CcZeroDataInCache @ 0x1400988F4 (CcZeroDataInCache.c)
 *     CcMapDataForOverwrite @ 0x1400B7AE0 (CcMapDataForOverwrite.c)
 *     CcAcquireByteRangeForWrite @ 0x1400E0910 (CcAcquireByteRangeForWrite.c)
 *     CcGetDirtyPagesHelper @ 0x1400E1FF0 (CcGetDirtyPagesHelper.c)
 *     CcReleaseByteRangeFromWrite @ 0x1400E22D8 (CcReleaseByteRangeFromWrite.c)
 *     CcPinFileData @ 0x14011C510 (CcPinFileData.c)
 *     CcUnpinRepinnedBcb @ 0x1402203F0 (CcUnpinRepinnedBcb.c)
 *     CcUnpinData @ 0x1405931E0 (CcUnpinData.c)
 *     CcMapData @ 0x1405B6DB0 (CcMapData.c)
 *     CcUnpinDataForThread @ 0x1406EB4A0 (CcUnpinDataForThread.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140007DA0 (ExpAcquireFastMutexContended.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExpReleaseFastMutexContended @ 0x140064400 (ExpReleaseFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1400B7344 (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcAdjustVacbLevelLockCount @ 0x1400DABA0 (CcAdjustVacbLevelLockCount.c)
 *     CcDeductDirtyPages @ 0x1400DC394 (CcDeductDirtyPages.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     CcDeallocateBcb @ 0x1400E297C (CcDeallocateBcb.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1402AE854 (EtwTraceAutoBoostEntryExhaustion.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

int __fastcall CcUnpinFileDataEx(char *P, char a2, int a3)
{
  ULONG_PTR v3; // rbx
  __int64 v6; // rax
  struct _KEVENT *v7; // rcx
  __int64 v8; // r15
  __int64 v9; // r11
  __int64 v10; // r14
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v14; // edx
  ULONG_PTR *v15; // rbp
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  volatile signed __int32 *v18; // rbp
  struct _KTHREAD *CurrentThread; // r14
  __int64 v20; // rax
  char v21; // cl
  __int64 v22; // r13
  int SessionId; // eax
  bool v24; // zf
  unsigned __int8 v25; // r14
  int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  unsigned __int8 v29; // bl
  signed __int32 v30; // eax
  struct _KEVENT *v31; // rcx
  __int64 v32; // r14
  unsigned int v33; // ebx
  volatile __int64 *v34; // rdx
  unsigned __int8 v35; // al
  unsigned int v36; // eax
  char **v37; // rdx
  PVOID *v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  struct _KEVENT *v41; // rcx
  int v42; // eax
  signed __int32 v43; // eax
  int v44; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v47; // [rsp+38h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v50; // [rsp+A0h] [rbp+8h] BYREF
  int v51; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a3;
  if ( *(_WORD *)P != 765 )
  {
    v6 = *((_QWORD *)P + 1);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)P + 4) )
    {
      v7 = *(struct _KEVENT **)(v6 + 184);
      if ( v7 )
        LODWORD(v6) = KeSetEvent(v7, 0, 0);
    }
    return v6;
  }
  v8 = *((_QWORD *)P + 22);
  v9 = *(_QWORD *)(v8 + 528);
  v47 = v9;
  if ( *(_QWORD *)(v8 + 168) )
  {
    v10 = *(_QWORD *)((*(_QWORD *)(v8 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_1403CB280, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v50 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v42 = SchedulerAssist[5];
          SchedulerAssist[5] = v42 + 1;
          if ( v42 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(&dword_1403CB280, 0x1Fu) )
      {
        KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
        v39 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_1403CB280, CurrentIrql);
        v9 = v47;
        v50 = v39;
      }
      v14 = dword_1403CB280;
      if ( (dword_1403CB280 & 0xBFFFFFFF) == 0x80000000 )
        goto LABEL_11;
      do
      {
        if ( (v14 & 0x40000000) == 0 )
        {
          v43 = _InterlockedCompareExchange(&dword_1403CB280, v14 | 0x40000000, v14);
          v24 = v14 == v43;
          v14 = v43;
          if ( !v24 )
            continue;
        }
        KeYieldProcessorEx(&v50);
        v14 = dword_1403CB280;
      }
      while ( (v14 & 0xBFFFFFFF) != 0x80000000 );
    }
    v9 = v47;
LABEL_11:
    if ( *(_QWORD *)v10 )
      v15 = *(ULONG_PTR **)(qword_1403CBD88 + 8LL * (*(_WORD *)(*(_QWORD *)v10 + 60LL) & 0x3FF));
    else
      v15 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_1403CB280, retaddr);
      v9 = v47;
    }
    else
    {
      dword_1403CB280 = 0;
    }
    v16 = KeGetCurrentPrcb();
    v17 = v16->SchedulerAssist;
    if ( v17 )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v44 = v17[5] - 1;
        v17[5] = v44;
        if ( !v44 && !*((_BYTE *)v17 + 25) && !*((_BYTE *)v17 + 27) )
          KiPerformUnboostKick(v16);
      }
    }
    __writecr8(CurrentIrql);
    if ( v9 != *(_QWORD *)(v15[21] + 8) )
      KeBugCheckEx(0x34u, 0x12A5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  if ( (*(_DWORD *)(v8 + 152) & 0x200) == 0 || (_DWORD)v3 == 1 )
    a2 = 1;
  v51 = 0;
  v18 = (volatile signed __int32 *)(v8 + 280);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v8 + 280, KeGetCurrentIrql(), 0LL);
  LOBYTE(v20) = CurrentThread->AbEntrySummary;
  if ( !(_BYTE)v20 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v22 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v8 + 280);
      goto LABEL_72;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
    LOBYTE(v20) = CurrentThread->AbEntrySummary;
  }
  v21 = v20;
  _BitScanForward((unsigned int *)&v20, (unsigned __int8)v20);
  CurrentThread->AbEntrySummary = v21 & ~(1 << v20);
  v22 = (__int64)&CurrentThread->LockEntries[v20];
  if ( !v22 )
  {
LABEL_72:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_26;
  }
  if ( (unsigned __int64)v18 >= 0xFFFF800000000000uLL
    && *((_BYTE *)&MiState[946] + (((unsigned __int64)v18 >> 39) & 0x1FF)) == 1 )
  {
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v22 + 40) = SessionId;
  *(_QWORD *)(v22 + 32) = (unsigned __int64)v18 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_26:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(CurrentThread, v8 + 280, &v51);
  v24 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v24 && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  v25 = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(v18, 0) )
    ExpAcquireFastMutexContended(v8 + 280, v22);
  if ( v22 )
    *(_BYTE *)(v22 + 26) |= 1u;
  *(_QWORD *)(v8 + 288) = KeGetCurrentThread();
  *(_DWORD *)(v8 + 328) = v25;
  if ( (unsigned int)v3 > 1 )
  {
    if ( (_DWORD)v3 != 2 )
      KeBugCheckEx(0x34u, 0x2045AuLL, v3, 0LL, 0LL);
    if ( P[2] )
    {
      v32 = v47;
      v33 = *((_DWORD *)P + 1) >> 12;
      P[2] = 0;
      v34 = (volatile __int64 *)(v47 + 128);
      *((_QWORD *)P + 5) = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v47 + 128);
      *((_QWORD *)P + 6) = 0LL;
      LockHandle.LockQueue.Next = 0LL;
      v35 = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.OldIrql = v35;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, v34);
      CcDeductDirtyPages(v8, v33);
      v36 = 0;
      if ( *(_DWORD *)(v32 + 456) > v33 )
        v36 = *(_DWORD *)(v47 + 456) - v33;
      *(_DWORD *)(v47 + 456) = v36;
      if ( !*(_DWORD *)(v8 + 112) && *(_DWORD *)(v8 + 4) )
        CcInsertIntoCleanSharedCacheMapList(v8);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
    v27 = *((_DWORD *)P + 16);
  }
  else
  {
    v26 = *((_DWORD *)P + 16);
    if ( !v26 )
      KeBugCheckEx(0x34u, 0x423uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v27 = v26 - 1;
    *((_DWORD *)P + 16) = v27;
  }
  if ( v27 )
    goto LABEL_41;
  if ( P[2] )
  {
    if ( *((_QWORD *)P + 23) )
    {
      v28 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
      if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
      {
        v31 = *(struct _KEVENT **)(v28 + 184);
        if ( v31 )
          KeSetEvent(v31, 0, 0);
      }
      *((_QWORD *)P + 23) = 0LL;
      *((_QWORD *)P + 7) = 0LL;
    }
LABEL_41:
    if ( !a2 )
      ExReleaseResourceLite((PERESOURCE)(P + 72));
    *(_QWORD *)(v8 + 288) = 0LL;
    v29 = *(_BYTE *)(v8 + 328);
    v30 = _InterlockedCompareExchange(v18, 1, 0);
    if ( v30 )
      ExpReleaseFastMutexContended(v8 + 280, v30);
    __writecr8(v29);
    LODWORD(v6) = KeAbPostRelease(v8 + 280);
    return v6;
  }
  ExAcquirePushLockExclusiveEx(v8 + 104, 0LL);
  v37 = (char **)*((_QWORD *)P + 2);
  v38 = (PVOID *)*((_QWORD *)P + 3);
  if ( v37[1] != P + 16 || *v38 != P + 16 )
    __fastfail(3u);
  *v38 = v37;
  v37[1] = (char *)v38;
  if ( *(__int64 *)(v8 + 32) > 0x2000000 && (*(_DWORD *)(v8 + 152) & 0x200) != 0 )
    CcAdjustVacbLevelLockCount(v8, *((_QWORD *)P + 1), -1);
  ExReleasePushLockEx(v8 + 104, 0LL);
  if ( *((_QWORD *)P + 23) )
  {
    v40 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
    {
      v41 = *(struct _KEVENT **)(v40 + 184);
      if ( v41 )
        KeSetEvent(v41, 0, 0);
    }
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v8 + 280));
  LODWORD(v6) = CcDeallocateBcb(P);
  return v6;
}
