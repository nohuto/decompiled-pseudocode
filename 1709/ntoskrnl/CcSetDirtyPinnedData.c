/*
 * XREFs of CcSetDirtyPinnedData @ 0x14001B660
 * Callers:
 *     CcReleaseByteRangeFromWrite @ 0x140067F20 (CcReleaseByteRangeFromWrite.c)
 *     CcZeroDataInCache @ 0x14011ED48 (CcZeroDataInCache.c)
 *     CcUnpinRepinnedBcb @ 0x1401E0CF0 (CcUnpinRepinnedBcb.c)
 *     CcPreparePinWrite @ 0x140570280 (CcPreparePinWrite.c)
 *     HvViewMapFlush @ 0x1406A0080 (HvViewMapFlush.c)
 * Callees:
 *     CcChargeDirtyPages @ 0x14001BBB4 (CcChargeDirtyPages.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     CcSetDirtyInMask @ 0x14001DA30 (CcSetDirtyInMask.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x14001E4C4 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x14001E568 (CcScheduleLazyWriteScan.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExpReleaseFastMutexContended @ 0x1400A6FF0 (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x1400BAC30 (ExpAcquireFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14027AE7C (EtwTraceAutoBoostEntryExhaustion.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __stdcall CcSetDirtyPinnedData(PVOID BcbVoid, PLARGE_INTEGER Lsn)
{
  __int16 v2; // ax
  char *v5; // r14
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // bp
  signed __int32 v10; // edx
  ULONG_PTR *v11; // rsi
  __int64 i; // rax
  LARGE_INTEGER *v13; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  LARGE_INTEGER *v15; // rdi
  unsigned int AbEntrySummary; // ecx
  __int64 v17; // rax
  __int64 v18; // rsi
  int SessionId; // eax
  bool v20; // zf
  unsigned __int8 v21; // bl
  ULONG v22; // eax
  __int64 v23; // rbx
  LONGLONG v24; // rax
  LONGLONG v25; // rax
  LARGE_INTEGER v26; // rax
  unsigned __int8 LowPart; // bl
  unsigned __int32 v28; // eax
  unsigned int v29; // esi
  unsigned __int8 v30; // al
  unsigned int v31; // esi
  unsigned __int64 v32; // rdx
  signed __int32 v33; // eax
  __int64 AbOrphanedEntrySummary; // rax
  _QWORD v35[2]; // [rsp+30h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v38; // [rsp+A0h] [rbp+8h] BYREF
  int v39; // [rsp+B0h] [rbp+18h] BYREF
  int v40; // [rsp+B8h] [rbp+20h]

  v2 = *(_WORD *)BcbVoid;
  if ( *(_WORD *)BcbVoid != 765 && v2 != 762 )
    KeBugCheckEx(0x34u, 0xE3DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = (char *)v35;
  v35[0] = BcbVoid;
  v35[1] = 0LL;
  if ( v2 == 762 )
    v5 = (char *)BcbVoid + 16;
  v6 = *(_QWORD *)(*(_QWORD *)v5 + 176LL);
  v7 = *(_QWORD *)(v6 + 528);
  if ( *(_QWORD *)(v6 + 168) )
  {
    v8 = *(_QWORD *)((*(_QWORD *)(v6 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140388100, CurrentIrql);
    }
    else
    {
      v38 = 0;
      if ( _interlockedbittestandset(&dword_140388100, 0x1Fu) )
        v38 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140388100, CurrentIrql);
      v10 = dword_140388100;
      while ( (v10 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v10 & 0x40000000) == 0 )
        {
          v33 = _InterlockedCompareExchange(&dword_140388100, v10 | 0x40000000, v10);
          v20 = v10 == v33;
          v10 = v33;
          if ( !v20 )
            continue;
        }
        KeYieldProcessorEx(&v38);
        v10 = dword_140388100;
      }
    }
    if ( *(_QWORD *)v8 )
      v11 = *(ULONG_PTR **)(qword_140388AF0 + 8LL * (*(_WORD *)(*(_QWORD *)v8 + 60LL) & 0x3FF));
    else
      v11 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140388100, retaddr);
    else
      dword_140388100 = 0;
    __writecr8(CurrentIrql);
    if ( v7 != *(_QWORD *)(v11[21] + 8) )
      KeBugCheckEx(0x34u, 0x1292uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  if ( (*(_DWORD *)(v6 + 152) & 0x1000000) != 0 && *(_QWORD *)(*(_QWORD *)(v6 + 240) + 136LL) == -1LL )
    *(_QWORD *)(*(_QWORD *)(v6 + 240) + 136LL) = MEMORY[0xFFFFF78000000320];
  if ( (*(_DWORD *)(v6 + 152) & 0x200) != 0 )
  {
    for ( i = *(_QWORD *)v5; *(_QWORD *)v5; i = *(_QWORD *)v5 )
    {
      v35[0] = i;
      v5 += 8;
      if ( (i & 1) != 0 )
        KeBugCheckEx(0x34u, 0xE9DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      v13 = *(LARGE_INTEGER **)(i + 176);
      v39 = 0;
      CurrentThread = KeGetCurrentThread();
      v15 = v13 + 35;
      --CurrentThread->SpecialApcDisable;
      if ( ++CurrentThread->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&v13[35], KeGetCurrentIrql(), 0LL);
      if ( !CurrentThread->AbEntrySummary )
      {
        if ( !CurrentThread->AbOrphanedEntrySummary )
        {
          v18 = 0LL;
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            EtwTraceAutoBoostEntryExhaustion(CurrentThread, &v13[35]);
          goto LABEL_64;
        }
        AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
        CurrentThread->AbOrphanedEntrySummary = 0;
        CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
      }
      AbEntrySummary = CurrentThread->AbEntrySummary;
      _BitScanForward((unsigned int *)&v17, AbEntrySummary);
      v40 = v17;
      CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v17);
      v18 = (__int64)&CurrentThread->LockEntries[v17];
      if ( v18 )
      {
        if ( (unsigned __int64)v15 >= 0xFFFF800000000000uLL
          && *((_BYTE *)&MiState + (((unsigned __int64)v15 >> 39) & 0x1FF) + 6352) == 1 )
        {
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        }
        else
        {
          SessionId = -1;
        }
        *(_DWORD *)(v18 + 40) = SessionId;
        *(_QWORD *)(v18 + 32) = (unsigned __int64)v15 & 0x7FFFFFFFFFFFFFFCLL;
        goto LABEL_27;
      }
LABEL_64:
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_27:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(CurrentThread, &v13[35], &v39);
      v20 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v20
        && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      v21 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)v15, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&v13[35], (PRTL_BALANCED_NODE)v18);
      if ( v18 )
        *(_BYTE *)(v18 + 26) |= 1u;
      v13[36].QuadPart = (LONGLONG)KeGetCurrentThread();
      v22 = v21;
      v23 = v35[0];
      v13[41].LowPart = v22;
      if ( !*(_BYTE *)(v23 + 2) )
      {
        v29 = *(_DWORD *)(v23 + 4) >> 12;
        *(_BYTE *)(v23 + 2) = 1;
        if ( Lsn )
        {
          *(LARGE_INTEGER *)(v23 + 40) = *Lsn;
          *(LARGE_INTEGER *)(v23 + 48) = *Lsn;
        }
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 128);
        v30 = KeGetCurrentIrql();
        __writecr8(2uLL);
        LockHandle.OldIrql = v30;
        KxAcquireQueuedSpinLock(&LockHandle);
        if ( !v13[14].LowPart && (v13[19].LowPart & 2) == 0 )
        {
          CcScheduleLazyWriteScan(v7, 0LL, 0LL);
          CcInsertIntoDirtySharedCacheMapList(v13);
        }
        CcChargeDirtyPages(v13, 0LL, 0LL, v29);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        if ( (v13[19].LowPart & 0x10000000) != 0 )
        {
          v31 = v29 << 12;
          v32 = KeGetCurrentThread()->Process[2].ActiveProcessors.Bitmap[8];
          if ( v32 )
          {
            if ( v31 )
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + 8), v31);
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + 24), 1uLL);
            v23 = v35[0];
          }
          else
          {
            v23 = v35[0];
          }
        }
      }
      if ( Lsn )
      {
        v24 = *(_QWORD *)(v23 + 40);
        if ( !v24 || Lsn->QuadPart < v24 )
          *(LARGE_INTEGER *)(v23 + 40) = *Lsn;
        v25 = *(_QWORD *)(v23 + 48);
        if ( !v25 || Lsn->QuadPart > v25 )
          *(LARGE_INTEGER *)(v23 + 48) = *Lsn;
        if ( Lsn->QuadPart > v13[32].QuadPart )
          v13[32] = *Lsn;
      }
      v26 = *(LARGE_INTEGER *)(v23 + 32);
      if ( v26.QuadPart > v13[6].QuadPart )
        v13[6] = v26;
      LowPart = v13[41].LowPart;
      v13[36].QuadPart = 0LL;
      v28 = _InterlockedCompareExchange((volatile signed __int32 *)v15, 1, 0);
      if ( v28 )
        ExpReleaseFastMutexContended(&v13[35], v28);
      __writecr8(LowPart);
      KeAbPostRelease((ULONG_PTR)&v13[35]);
    }
  }
  else
  {
    CcSetDirtyInMask(v6, (char *)BcbVoid + 8, *((unsigned int *)BcbVoid + 1), 0LL);
  }
}
