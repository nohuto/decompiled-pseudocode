/*
 * XREFs of CcSetDirtyInMask @ 0x1400A2DB0
 * Callers:
 *     CcPrepareMdlWrite @ 0x1400339A0 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x140036100 (CcMdlWriteComplete2.c)
 *     CcMapAndCopyInToCache @ 0x14009EF20 (CcMapAndCopyInToCache.c)
 *     CcPurgeAndClearCacheSection @ 0x140118940 (CcPurgeAndClearCacheSection.c)
 *     CcSetDirtyPinnedData @ 0x140118BA0 (CcSetDirtyPinnedData.c)
 *     CcReleaseByteRangeFromWrite @ 0x14011A1E8 (CcReleaseByteRangeFromWrite.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     CcFindBitmapRangeToDirty @ 0x140026BF0 (CcFindBitmapRangeToDirty.c)
 *     CcAllocateInitializeMbcb @ 0x14002CC88 (CcAllocateInitializeMbcb.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14005302C (ExAllocateFromNPagedLookasideList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcChargeDirtyPages @ 0x1400AD3C8 (CcChargeDirtyPages.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExpReleaseFastMutexContended @ 0x140111A5C (ExpReleaseFastMutexContended.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     CcScheduleLazyWriteScan @ 0x140118B04 (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140119F6C (CcInsertIntoDirtySharedCacheMapList.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x14011C88C (ExpAcquireFastMutexContended.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14025328C (EtwTraceAutoBoostEntryExhaustion.c)
 */

void __fastcall CcSetDirtyInMask(__int64 a1, __int64 *a2, unsigned int a3, struct _KTHREAD *a4)
{
  __int64 v4; // rbp
  __int64 v5; // r14
  unsigned int v8; // r12d
  __int64 v9; // r15
  signed __int64 v10; // rbp
  signed __int64 v11; // r15
  int v12; // ebx
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int32 *v14; // rsi
  unsigned int AbEntrySummary; // ecx
  __int64 v16; // rax
  int v17; // eax
  __int16 v18; // ax
  unsigned __int8 CurrentIrql; // bl
  __int64 v20; // r14
  __int64 v21; // rcx
  bool v22; // zf
  ULONG_PTR v23; // rbx
  unsigned __int8 v24; // di
  unsigned __int32 v25; // eax
  _QWORD *BitmapRangeToDirty; // rax
  _QWORD *v27; // rsi
  __int64 v28; // rdx
  _DWORD *v29; // rdx
  int v30; // ebx
  __int64 v31; // rcx
  struct _KTHREAD *v32; // r9
  unsigned __int64 v33; // rcx
  PVOID v34; // rax
  _OWORD *v35; // rbx
  _OWORD *v36; // rax
  __int64 v37; // rax
  __int64 **v38; // rdx
  __int64 *v39; // rcx
  __int64 *v40; // rcx
  __int64 **v41; // rdx
  _QWORD *InitializeMbcb; // rax
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v44; // eax
  PVOID Entry; // [rsp+38h] [rbp-70h] BYREF
  __int64 v46; // [rsp+40h] [rbp-68h]
  __int64 v47; // [rsp+48h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-58h] BYREF
  int v49; // [rsp+B8h] [rbp+10h] BYREF
  int v50; // [rsp+C0h] [rbp+18h]
  struct _KTHREAD *v51; // [rsp+C8h] [rbp+20h]

  v51 = a4;
  v4 = *a2;
  v5 = 0LL;
  v47 = a3;
  Entry = 0LL;
  v8 = 0;
  v9 = v4 + a3 - 1LL;
  if ( ((v4 ^ v9) & 0xFFFFFFFFFE000000uLL) != 0 )
    KeBugCheckEx(0x34u, 0xC32uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v10 = v4 >> 12;
  v11 = v9 >> 12;
  if ( *(_QWORD *)(a1 + 32) / 4096LL <= v11 )
    KeBugCheckEx(0x34u, 0xC44uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v12 = 0;
  v46 = *(_QWORD *)(a1 + 528);
  while ( 1 )
  {
    if ( *(_QWORD *)(a1 + 32) > 0x300000uLL )
    {
      v34 = ExAllocateFromNPagedLookasideList(&CcBitmapLookasideList);
      if ( !v34 )
      {
        ++CcDbgNumberOfFailedBitmapAllocations;
        goto LABEL_82;
      }
      Entry = v34;
    }
    v49 = 0;
    CurrentThread = KeGetCurrentThread();
    v50 = 1;
    v14 = (volatile signed __int32 *)(a1 + 280);
    --CurrentThread->SpecialApcDisable;
    if ( ++CurrentThread->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, a1 + 280, KeGetCurrentIrql(), 0LL);
    if ( !CurrentThread->AbEntrySummary )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, a1 + 280);
LABEL_75:
        _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
        goto LABEL_12;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = CurrentThread->AbEntrySummary;
    _BitScanForward((unsigned int *)&v16, AbEntrySummary);
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v16);
    v5 = (__int64)&CurrentThread->LockEntries[v16];
    if ( !v5 )
      goto LABEL_75;
    v17 = (unsigned __int64)v14 >= 0xFFFF800000000000uLL
       && byte_14036D700[(((unsigned __int64)v14 >> 39) & 0x1FF) - 256] == 1
        ? MmGetSessionIdEx(CurrentThread->ApcState.Process)
        : -1;
    *(_DWORD *)(v5 + 40) = v17;
    *(_QWORD *)(v5 + 32) = (unsigned __int64)v14 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_12:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(CurrentThread, a1 + 280, &v49);
    v18 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v18;
    if ( !v18
      && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset(v14, 0) )
      ExpAcquireFastMutexContended(a1 + 280, (PRTL_BALANCED_NODE)v5);
    if ( v5 )
      *(_BYTE *)(v5 + 26) |= 1u;
    *(_QWORD *)(a1 + 288) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 328) = CurrentIrql;
    v20 = *(_QWORD *)(a1 + 160);
    if ( v20 )
      goto LABEL_20;
    InitializeMbcb = CcAllocateInitializeMbcb();
    v20 = (__int64)InitializeMbcb;
    if ( !InitializeMbcb )
      break;
    *(_QWORD *)(a1 + 160) = InitializeMbcb;
LABEL_20:
    if ( v10 == v11 && v10 == *(_QWORD *)(v20 + 40) || (*(_DWORD *)(a1 + 152) & 0x40000000) != 0 )
      goto LABEL_22;
    if ( (unsigned __int64)v11 < 0x300 || *(_WORD *)v20 == 761 )
    {
      BitmapRangeToDirty = CcFindBitmapRangeToDirty(v20, v10, &Entry);
      v27 = BitmapRangeToDirty;
      if ( !BitmapRangeToDirty )
        break;
      v28 = BitmapRangeToDirty[2];
      if ( v10 < v28 + *((unsigned int *)BitmapRangeToDirty + 6) )
        *((_DWORD *)BitmapRangeToDirty + 6) = v10 - v28;
      if ( v11 > v28 + *((unsigned int *)BitmapRangeToDirty + 7) )
        *((_DWORD *)BitmapRangeToDirty + 7) = v11 - v28;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v46 + 64), &LockHandle);
      if ( !*(_DWORD *)(a1 + 112) && (*(_DWORD *)(a1 + 152) & 2) == 0 )
      {
        CcScheduleLazyWriteScan(*(_QWORD *)(a1 + 528), 0LL, 0LL);
        CcInsertIntoDirtySharedCacheMapList(a1);
        *(_QWORD *)(v20 + 32) = v10;
      }
      v29 = (_DWORD *)(v27[5] + 4 * ((unsigned __int64)(unsigned int)(v10 - *((_DWORD *)v27 + 4)) >> 5));
      v30 = 1 << (v10 & 0x1F);
      if ( v10 <= v11 )
      {
        v31 = v11 - v10 + 1;
        v10 = v11 + 1;
        do
        {
          if ( (*v29 & v30) == 0 )
          {
            *v29 |= v30;
            ++v8;
          }
          v30 *= 2;
          if ( !v30 )
          {
            ++v29;
            v30 = 1;
          }
          --v31;
        }
        while ( v31 );
      }
      CcChargeDirtyPages(a1, v20, v27, v8);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      if ( (*(_DWORD *)(a1 + 152) & 0x10000000) != 0 && v8 )
      {
        v32 = v51;
        if ( !v51 )
        {
          v32 = KeGetCurrentThread();
          v51 = v32;
        }
        v33 = v32->Process[2].ActiveProcessors.Bitmap[8];
        if ( v33 )
        {
          if ( v8 << 12 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v33 + 8), v8 << 12);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v33 + 24), 1uLL);
        }
      }
      if ( v30 )
      {
        *(_QWORD *)(v20 + 40) = v11;
LABEL_22:
        v21 = *a2 + v47;
        if ( v21 > *(_QWORD *)(a1 + 48) )
        {
          v22 = (*(_DWORD *)(a1 + 152) & 0x40000000) == 0;
          *(_QWORD *)(a1 + 48) = v21;
          if ( !v22 )
          {
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v46 + 64), &LockHandle);
            v44 = *(_DWORD *)(a1 + 152);
            if ( (v44 & 0x400) == 0 )
              *(_DWORD *)(a1 + 152) = v44 | 0x400;
            CcInsertIntoDirtySharedCacheMapList(a1);
            CcScheduleLazyWriteScan(*(_QWORD *)(a1 + 528), 0LL, 0LL);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            __writecr8(LockHandle.OldIrql);
          }
        }
LABEL_24:
        v23 = a1 + 280;
        v24 = *(_BYTE *)(a1 + 328);
        *(_QWORD *)(v23 + 8) = 0LL;
        v25 = _InterlockedCompareExchange((volatile signed __int32 *)v23, 1, 0);
        if ( v25 )
          ExpReleaseFastMutexContended(v23, v25);
        __writecr8(v24);
        KeAbPostRelease(v23);
        goto LABEL_27;
      }
      v12 = v50;
      v5 = 0LL;
    }
    else
    {
      v35 = Entry;
      memset(Entry, 0, 0x400uLL);
      if ( *(_DWORD *)(v20 + 80) )
      {
        v36 = *(_OWORD **)(v20 + 88);
        *v35 = *v36;
        v35[1] = v36[1];
        v35[2] = v36[2];
        v35[3] = v36[3];
        v35[4] = v36[4];
        v35[5] = v36[5];
        memset(*(void **)(v20 + 88), 0, 0x60uLL);
      }
      v37 = v20 + 16;
      *(_QWORD *)(v20 + 88) = v35;
      v38 = *(__int64 ***)(v20 + 24);
      v39 = (__int64 *)(v20 + 96);
      Entry = 0LL;
      if ( *v38 != (__int64 *)(v20 + 16) )
        __fastfail(3u);
      *v39 = v37;
      *(_QWORD *)(v20 + 104) = v38;
      *v38 = v39;
      *(_QWORD *)(v20 + 24) = v39;
      v40 = (__int64 *)(v20 + 144);
      *(_QWORD *)(v20 + 112) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v20 + 120) = -1;
      v41 = *(__int64 ***)(v20 + 24);
      if ( *v41 != (__int64 *)v37 )
        __fastfail(3u);
      *v40 = v37;
      *(_QWORD *)(v20 + 152) = v41;
      *v41 = v40;
      *(_QWORD *)(v20 + 24) = v40;
      *(_WORD *)v20 = 761;
      *(_QWORD *)(v20 + 160) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v20 + 168) = -1;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
      v5 = 0LL;
      v12 = 0;
    }
  }
  v12 = v50;
LABEL_82:
  if ( (*(_DWORD *)(a1 + 152) & 0x20000) == 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v46 + 64), &LockHandle);
    *(_DWORD *)(a1 + 152) |= 0x20000u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  if ( v12 )
    goto LABEL_24;
LABEL_27:
  if ( Entry )
    ExFreeToNPagedLookasideList(&CcBitmapLookasideList, Entry);
}
