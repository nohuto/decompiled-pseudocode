/*
 * XREFs of CcUnpinFileDataEx @ 0x14011A690
 * Callers:
 *     CcMapDataForOverwrite @ 0x140024DB0 (CcMapDataForOverwrite.c)
 *     CcPinFileData @ 0x14009C5A0 (CcPinFileData.c)
 *     CcZeroDataInCache @ 0x1401178EC (CcZeroDataInCache.c)
 *     CcReleaseByteRangeFromWrite @ 0x14011A1E8 (CcReleaseByteRangeFromWrite.c)
 *     CcGetDirtyPages @ 0x14011A310 (CcGetDirtyPages.c)
 *     CcAcquireByteRangeForWrite @ 0x14011B330 (CcAcquireByteRangeForWrite.c)
 *     CcUnpinRepinnedBcb @ 0x1401DDCA0 (CcUnpinRepinnedBcb.c)
 *     CcMapData @ 0x140514420 (CcMapData.c)
 *     CcUnpinData @ 0x14054B080 (CcUnpinData.c)
 *     CcUnpinDataForThread @ 0x14065E6B0 (CcUnpinDataForThread.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1400ADDA8 (CcInsertIntoCleanSharedCacheMapList.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ExpReleaseFastMutexContended @ 0x140111A5C (ExpReleaseFastMutexContended.c)
 *     ExpReleaseResourceForThreadLite @ 0x14011AB70 (ExpReleaseResourceForThreadLite.c)
 *     CcDeallocateBcb @ 0x14011B160 (CcDeallocateBcb.c)
 *     CcDeductDirtyPages @ 0x14011BDF4 (CcDeductDirtyPages.c)
 *     CcAdjustVacbLevelLockCount @ 0x14011BF6C (CcAdjustVacbLevelLockCount.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x14011C88C (ExpAcquireFastMutexContended.c)
 *     ExpFastResourceLegacyRelease @ 0x14014DBCC (ExpFastResourceLegacyRelease.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14025328C (EtwTraceAutoBoostEntryExhaustion.c)
 */

void __fastcall CcUnpinFileDataEx(__int64 a1, char a2, int a3)
{
  ULONG_PTR v3; // rbx
  __int64 v6; // rax
  struct _KEVENT *v7; // rcx
  __int64 v8; // r13
  __int64 v9; // r12
  volatile signed __int32 *v10; // rbp
  struct _KTHREAD *CurrentThread; // r14
  unsigned int AbEntrySummary; // ecx
  __int64 v13; // rax
  __int64 v14; // r15
  int SessionId; // eax
  __int16 v16; // ax
  unsigned __int8 CurrentIrql; // r14
  int v18; // eax
  __int64 v19; // rcx
  struct _KEVENT *v20; // rcx
  __int16 v21; // cx
  ULONG_PTR v22; // rdi
  __int16 v23; // cx
  unsigned __int8 v24; // bl
  signed __int32 v25; // eax
  unsigned int v26; // ebx
  unsigned int v27; // eax
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  __int64 v30; // rcx
  struct _KEVENT *v31; // rcx
  unsigned __int8 v32; // al
  struct _KTHREAD *v33; // rdx
  unsigned __int8 AbOrphanedEntrySummary; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v36; // [rsp+90h] [rbp+8h] BYREF
  int v37; // [rsp+A8h] [rbp+20h]

  v3 = a3;
  if ( *(_WORD *)a1 != 765 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(a1 + 16)) )
    {
      v7 = *(struct _KEVENT **)(v6 + 184);
      if ( v7 )
        KeSetEvent(v7, 0, 0);
    }
    return;
  }
  v8 = *(_QWORD *)(a1 + 176);
  v9 = *(_QWORD *)(v8 + 528);
  if ( (*(_DWORD *)(v8 + 152) & 0x200) == 0 || a3 == 1 )
    a2 = 1;
  v10 = (volatile signed __int32 *)(v8 + 280);
  v36 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v8 + 280, KeGetCurrentIrql(), 0LL);
  if ( !CurrentThread->AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v14 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v8 + 280);
      goto LABEL_74;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v13, AbEntrySummary);
  v37 = v13;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v13);
  v14 = (__int64)&CurrentThread->LockEntries[v13];
  if ( v14 )
  {
    if ( (unsigned __int64)v10 >= 0xFFFF800000000000uLL
      && byte_14036D700[(((unsigned __int64)v10 >> 39) & 0x1FF) - 256] == 1 )
    {
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v14 + 40) = SessionId;
    *(_QWORD *)(v14 + 32) = (unsigned __int64)v10 & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_14;
  }
LABEL_74:
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
LABEL_14:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(&CurrentThread->Header.Lock, v8 + 280, &v36);
  v16 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v16;
  if ( !v16 && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(v10, 0) )
    ExpAcquireFastMutexContended(v8 + 280, (PRTL_BALANCED_NODE)v14);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  *(_QWORD *)(v8 + 288) = KeGetCurrentThread();
  *(_DWORD *)(v8 + 328) = CurrentIrql;
  if ( (unsigned int)v3 > 1 )
  {
    if ( (_DWORD)v3 != 2 )
      KeBugCheckEx(0x34u, 0x20459uLL, v3, 0LL, 0LL);
    if ( *(_BYTE *)(a1 + 2) )
    {
      v26 = *(_DWORD *)(a1 + 4) >> 12;
      *(_BYTE *)(a1 + 2) = 0;
      *(_QWORD *)(a1 + 40) = 0LL;
      *(_QWORD *)(a1 + 48) = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 64), &LockHandle);
      CcDeductDirtyPages(v8, v26);
      v27 = *(_DWORD *)(v9 + 528);
      if ( v27 <= v26 )
        *(_DWORD *)(v9 + 528) = 0;
      else
        *(_DWORD *)(v9 + 528) = v27 - v26;
      if ( !*(_DWORD *)(v8 + 112) && *(_DWORD *)(v8 + 4) )
        CcInsertIntoCleanSharedCacheMapList(v8);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
  }
  else
  {
    v18 = *(_DWORD *)(a1 + 64);
    if ( !v18 )
      KeBugCheckEx(0x34u, 0x422uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(a1 + 64) = v18 - 1;
  }
  if ( *(_DWORD *)(a1 + 64) )
  {
    if ( !a2 )
      ExReleaseResourceLite((PERESOURCE)(a1 + 72));
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v8 + 280));
  }
  else if ( *(_BYTE *)(a1 + 2) )
  {
    if ( *(_QWORD *)(a1 + 184) )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL);
      if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 56) + 16LL)) )
      {
        v20 = *(struct _KEVENT **)(v19 + 184);
        if ( v20 )
          KeSetEvent(v20, 0, 0);
      }
      *(_QWORD *)(a1 + 184) = 0LL;
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    if ( !a2 )
    {
      v21 = *(_WORD *)(a1 + 98);
      v22 = a1 + 72;
      if ( (v21 & 0x41) == 1 )
        KeBugCheckEx(0x1C6u, 0xFuLL, v22, 0LL, 0LL);
      v23 = v21 & 1;
      if ( v23 )
      {
        v32 = KeGetCurrentIrql();
        v33 = KeGetCurrentThread();
        if ( v32 > 2u )
          KeBugCheckEx(0x1C6u, 0LL, v32, 2uLL, 0LL);
        if ( !v32 && (v33->MiscFlags & 0x400) == 0 && !v33->WaitBlock[3].SpareLong )
          KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
      if ( v23 )
        ExpFastResourceLegacyRelease(v22);
      else
        ExpReleaseResourceForThreadLite(v22, (ULONG_PTR)KeGetCurrentThread());
    }
    v24 = *(_BYTE *)(v8 + 328);
    *(_QWORD *)(v8 + 288) = 0LL;
    v25 = _InterlockedCompareExchange(v10, 1, 0);
    if ( v25 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)(v8 + 280), v25);
    __writecr8(v24);
    KeAbPostRelease(v8 + 280);
  }
  else
  {
    ExAcquirePushLockExclusiveEx(v8 + 104, 0LL);
    v28 = *(_QWORD *)(a1 + 16);
    v29 = *(_QWORD **)(a1 + 24);
    if ( *(_QWORD *)(v28 + 8) != a1 + 16 || *v29 != a1 + 16 )
      __fastfail(3u);
    *v29 = v28;
    *(_QWORD *)(v28 + 8) = v29;
    if ( *(__int64 *)(v8 + 32) > 0x2000000 && (*(_DWORD *)(v8 + 152) & 0x200) != 0 )
      CcAdjustVacbLevelLockCount(v8, *(_QWORD *)(a1 + 8), 0xFFFFFFFFLL);
    ExReleasePushLockEx(v8 + 104, 0LL);
    if ( *(_QWORD *)(a1 + 184) )
    {
      v30 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL);
      if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 56) + 16LL)) )
      {
        v31 = *(struct _KEVENT **)(v30 + 184);
        if ( v31 )
          KeSetEvent(v31, 0, 0);
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v8 + 280));
    CcDeallocateBcb(a1);
  }
}
