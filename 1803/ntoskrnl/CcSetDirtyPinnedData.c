/*
 * XREFs of CcSetDirtyPinnedData @ 0x1400E2C90
 * Callers:
 *     CcZeroDataInCache @ 0x1400988F4 (CcZeroDataInCache.c)
 *     CcReleaseByteRangeFromWrite @ 0x1400E22D8 (CcReleaseByteRangeFromWrite.c)
 *     CcUnpinRepinnedBcb @ 0x1402203F0 (CcUnpinRepinnedBcb.c)
 *     CcPreparePinWrite @ 0x14055E310 (CcPreparePinWrite.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140007DA0 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x140064400 (ExpReleaseFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x1400DADCC (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x1400DAE70 (CcScheduleLazyWriteScan.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     CcChargeDirtyPages @ 0x1400E3214 (CcChargeDirtyPages.c)
 *     CcSetDirtyInMask @ 0x1400E3310 (CcSetDirtyInMask.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1402AE854 (EtwTraceAutoBoostEntryExhaustion.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __stdcall CcSetDirtyPinnedData(PVOID BcbVoid, PLARGE_INTEGER Lsn)
{
  __int16 v2; // ax
  _QWORD *v5; // rbx
  __int64 *v6; // r15
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v13; // edx
  ULONG_PTR *v14; // rsi
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  int v17; // ecx
  __int64 i; // rax
  __int64 v19; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int32 *v21; // rdi
  __int64 v22; // rax
  char v23; // cl
  __int64 v24; // rsi
  int SessionId; // eax
  bool v26; // zf
  unsigned __int8 v27; // bl
  int v28; // eax
  __int64 v29; // rbx
  LONGLONG v30; // rcx
  LONGLONG QuadPart; // rax
  LONGLONG v32; // rdx
  __int64 v33; // rax
  unsigned __int8 v34; // bl
  signed __int32 v35; // eax
  unsigned int v36; // esi
  unsigned __int8 v37; // al
  unsigned int v38; // esi
  unsigned __int64 v39; // rdx
  int v40; // eax
  signed __int32 v41; // eax
  int v42; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  _QWORD v44[2]; // [rsp+30h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v47; // [rsp+A0h] [rbp+8h] BYREF
  int v48; // [rsp+B0h] [rbp+18h] BYREF
  int v49; // [rsp+B8h] [rbp+20h]

  v2 = *(_WORD *)BcbVoid;
  if ( *(_WORD *)BcbVoid != 765 && v2 != 762 )
    KeBugCheckEx(0x34u, 0xE3EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = BcbVoid;
  v6 = v44;
  v44[0] = BcbVoid;
  v44[1] = 0LL;
  if ( v2 == 762 )
  {
    v5 = (_QWORD *)*((_QWORD *)BcbVoid + 2);
    v6 = (__int64 *)((char *)BcbVoid + 16);
  }
  v7 = v5[22];
  v8 = *(_QWORD *)(v7 + 528);
  if ( *(_QWORD *)(v7 + 168) )
  {
    v9 = *(_QWORD *)((*(_QWORD *)(v7 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_1403CB280, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v47 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v40 = SchedulerAssist[5];
          SchedulerAssist[5] = v40 + 1;
          if ( v40 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(&dword_1403CB280, 0x1Fu) )
      {
        KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
        v47 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_1403CB280, CurrentIrql);
      }
      v13 = dword_1403CB280;
      while ( (v13 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v13 & 0x40000000) == 0 )
        {
          v41 = _InterlockedCompareExchange(&dword_1403CB280, v13 | 0x40000000, v13);
          v26 = v13 == v41;
          v13 = v41;
          if ( !v26 )
            continue;
        }
        KeYieldProcessorEx(&v47);
        v13 = dword_1403CB280;
      }
    }
    if ( *(_QWORD *)v9 )
      v14 = *(ULONG_PTR **)(qword_1403CBD88 + 8LL * (*(_WORD *)(*(_QWORD *)v9 + 60LL) & 0x3FF));
    else
      v14 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_1403CB280, retaddr);
    else
      dword_1403CB280 = 0;
    v15 = KeGetCurrentPrcb();
    v16 = v15->SchedulerAssist;
    if ( v16 )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v42 = v16[5] - 1;
        v16[5] = v42;
        if ( !v42 && !*((_BYTE *)v16 + 25) && !*((_BYTE *)v16 + 27) )
          KiPerformUnboostKick(v15);
      }
    }
    __writecr8(CurrentIrql);
    if ( v8 != *(_QWORD *)(v14[21] + 8) )
      KeBugCheckEx(0x34u, 0x12A5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  v17 = *(_DWORD *)(v7 + 152);
  if ( (v17 & 0x1000000) != 0 && *(_QWORD *)(*(_QWORD *)(v7 + 240) + 136LL) == -1LL )
  {
    *(_QWORD *)(*(_QWORD *)(v7 + 240) + 136LL) = MEMORY[0xFFFFF78000000320];
    v17 = *(_DWORD *)(v7 + 152);
  }
  if ( (v17 & 0x200) != 0 )
  {
    for ( i = *v6; *v6; i = *v6 )
    {
      v44[0] = i;
      ++v6;
      if ( (i & 1) != 0 )
        KeBugCheckEx(0x34u, 0xE9EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      v19 = *(_QWORD *)(i + 176);
      v48 = 0;
      CurrentThread = KeGetCurrentThread();
      v21 = (volatile signed __int32 *)(v19 + 280);
      --CurrentThread->SpecialApcDisable;
      if ( ++CurrentThread->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v19 + 280, KeGetCurrentIrql(), 0LL);
      LOBYTE(v22) = CurrentThread->AbEntrySummary;
      if ( !(_BYTE)v22 )
      {
        if ( !CurrentThread->AbOrphanedEntrySummary )
        {
          v24 = 0LL;
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            EtwTraceAutoBoostEntryExhaustion(CurrentThread, v19 + 280);
          goto LABEL_67;
        }
        AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
        CurrentThread->AbOrphanedEntrySummary = 0;
        CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
        LOBYTE(v22) = CurrentThread->AbEntrySummary;
      }
      v23 = v22;
      _BitScanForward((unsigned int *)&v22, (unsigned __int8)v22);
      v49 = v22;
      CurrentThread->AbEntrySummary = v23 & ~(1 << v22);
      v24 = (__int64)&CurrentThread->LockEntries[v22];
      if ( v24 )
      {
        if ( (unsigned __int64)v21 >= 0xFFFF800000000000uLL
          && *((_BYTE *)&MiState[946] + (((unsigned __int64)v21 >> 39) & 0x1FF)) == 1 )
        {
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        }
        else
        {
          SessionId = -1;
        }
        *(_DWORD *)(v24 + 40) = SessionId;
        *(_QWORD *)(v24 + 32) = (unsigned __int64)v21 & 0x7FFFFFFFFFFFFFFCLL;
        goto LABEL_29;
      }
LABEL_67:
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_29:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(CurrentThread, v19 + 280, &v48);
      v26 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v26
        && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      v27 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset(v21, 0) )
        ExpAcquireFastMutexContended(v19 + 280, v24);
      if ( v24 )
        *(_BYTE *)(v24 + 26) |= 1u;
      *(_QWORD *)(v19 + 288) = KeGetCurrentThread();
      v28 = v27;
      v29 = v44[0];
      *(_DWORD *)(v19 + 328) = v28;
      if ( !*(_BYTE *)(v29 + 2) )
      {
        v36 = *(_DWORD *)(v29 + 4) >> 12;
        *(_BYTE *)(v29 + 2) = 1;
        if ( Lsn )
        {
          *(LARGE_INTEGER *)(v29 + 40) = *Lsn;
          *(LARGE_INTEGER *)(v29 + 48) = *Lsn;
        }
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 128);
        v37 = KeGetCurrentIrql();
        __writecr8(2uLL);
        LockHandle.OldIrql = v37;
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v8 + 128));
        if ( !*(_DWORD *)(v19 + 112) && (*(_DWORD *)(v19 + 152) & 2) == 0 )
        {
          CcScheduleLazyWriteScan(v8, 0, 0);
          CcInsertIntoDirtySharedCacheMapList(v19);
        }
        CcChargeDirtyPages(v19, 0LL, 0LL, v36);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        if ( (*(_DWORD *)(v19 + 152) & 0x10000000) != 0 )
        {
          v38 = v36 << 12;
          v39 = KeGetCurrentThread()->Process[2].ActiveProcessors.Bitmap[8];
          if ( v39 )
          {
            if ( v38 )
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 8), v38);
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 24), 1uLL);
            v29 = v44[0];
          }
          else
          {
            v29 = v44[0];
          }
        }
      }
      if ( Lsn )
      {
        v30 = *(_QWORD *)(v29 + 40);
        QuadPart = Lsn->QuadPart;
        if ( !v30 || QuadPart < v30 )
        {
          *(_QWORD *)(v29 + 40) = QuadPart;
          QuadPart = Lsn->QuadPart;
        }
        v32 = *(_QWORD *)(v29 + 48);
        if ( !v32 || QuadPart > v32 )
        {
          *(_QWORD *)(v29 + 48) = QuadPart;
          QuadPart = Lsn->QuadPart;
        }
        if ( QuadPart > *(_QWORD *)(v19 + 256) )
          *(_QWORD *)(v19 + 256) = QuadPart;
      }
      v33 = *(_QWORD *)(v29 + 32);
      if ( v33 > *(_QWORD *)(v19 + 48) )
        *(_QWORD *)(v19 + 48) = v33;
      v34 = *(_BYTE *)(v19 + 328);
      *(_QWORD *)(v19 + 288) = 0LL;
      v35 = _InterlockedCompareExchange(v21, 1, 0);
      if ( v35 )
        ExpReleaseFastMutexContended(v19 + 280, v35);
      __writecr8(v34);
      KeAbPostRelease(v19 + 280);
    }
  }
  else
  {
    CcSetDirtyInMask(v7, (char *)BcbVoid + 8, *((unsigned int *)BcbVoid + 1), 0LL);
  }
}
