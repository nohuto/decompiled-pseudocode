/*
 * XREFs of CcSetDirtyPinnedData @ 0x140118BA0
 * Callers:
 *     CcZeroDataInCache @ 0x1401178EC (CcZeroDataInCache.c)
 *     CcReleaseByteRangeFromWrite @ 0x14011A1E8 (CcReleaseByteRangeFromWrite.c)
 *     CcUnpinRepinnedBcb @ 0x1401DDCA0 (CcUnpinRepinnedBcb.c)
 *     CcPreparePinWrite @ 0x140440510 (CcPreparePinWrite.c)
 *     HvViewMapFlush @ 0x140675B48 (HvViewMapFlush.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcSetDirtyInMask @ 0x1400A2DB0 (CcSetDirtyInMask.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcChargeDirtyPages @ 0x1400AD3C8 (CcChargeDirtyPages.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExpReleaseFastMutexContended @ 0x140111A5C (ExpReleaseFastMutexContended.c)
 *     CcScheduleLazyWriteScan @ 0x140118B04 (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140119F6C (CcInsertIntoDirtySharedCacheMapList.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x14011C88C (ExpAcquireFastMutexContended.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14025328C (EtwTraceAutoBoostEntryExhaustion.c)
 */

void __stdcall CcSetDirtyPinnedData(PVOID BcbVoid, PLARGE_INTEGER Lsn)
{
  __int16 v2; // ax
  char *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // r13
  __int64 i; // rax
  LARGE_INTEGER *v9; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  LARGE_INTEGER *v11; // rdi
  unsigned int AbEntrySummary; // ecx
  __int64 v13; // rax
  __int64 v14; // rsi
  int SessionId; // eax
  __int16 v16; // ax
  unsigned __int8 CurrentIrql; // bl
  ULONG v18; // eax
  __int64 v19; // rbx
  LONGLONG v20; // rax
  LONGLONG v21; // rax
  LARGE_INTEGER v22; // rax
  unsigned __int8 LowPart; // bl
  signed __int32 v24; // eax
  unsigned int v25; // esi
  unsigned int v26; // esi
  unsigned __int64 v27; // rdx
  __int64 AbOrphanedEntrySummary; // rax
  _QWORD v29[2]; // [rsp+30h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v31; // [rsp+A0h] [rbp+8h] BYREF
  int v32; // [rsp+B0h] [rbp+18h]

  v2 = *(_WORD *)BcbVoid;
  if ( *(_WORD *)BcbVoid != 765 && v2 != 762 )
    KeBugCheckEx(0x34u, 0xE3EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = (char *)v29;
  v29[0] = BcbVoid;
  v29[1] = 0LL;
  if ( v2 == 762 )
    v5 = (char *)BcbVoid + 16;
  v6 = *(_QWORD *)(*(_QWORD *)v5 + 176LL);
  v7 = *(_QWORD *)(v6 + 528);
  if ( (*(_DWORD *)(v6 + 152) & 0x1000000) != 0 && *(_QWORD *)(*(_QWORD *)(v6 + 240) + 136LL) == -1LL )
    *(_QWORD *)(*(_QWORD *)(v6 + 240) + 136LL) = MEMORY[0xFFFFF78000000320];
  if ( (*(_DWORD *)(v6 + 152) & 0x200) != 0 )
  {
    for ( i = *(_QWORD *)v5; *(_QWORD *)v5; i = *(_QWORD *)v5 )
    {
      v29[0] = i;
      v5 += 8;
      if ( (i & 1) != 0 )
        KeBugCheckEx(0x34u, 0xE9EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      v9 = *(LARGE_INTEGER **)(i + 176);
      v31 = 0;
      CurrentThread = KeGetCurrentThread();
      v11 = v9 + 35;
      --CurrentThread->SpecialApcDisable;
      if ( ++CurrentThread->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&v9[35], KeGetCurrentIrql(), 0LL);
      if ( !CurrentThread->AbEntrySummary )
      {
        if ( !CurrentThread->AbOrphanedEntrySummary )
        {
          v14 = 0LL;
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            EtwTraceAutoBoostEntryExhaustion(CurrentThread, &v9[35]);
          goto LABEL_57;
        }
        AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
        CurrentThread->AbOrphanedEntrySummary = 0;
        CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
      }
      AbEntrySummary = CurrentThread->AbEntrySummary;
      _BitScanForward((unsigned int *)&v13, AbEntrySummary);
      v32 = v13;
      CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v13);
      v14 = (__int64)&CurrentThread->LockEntries[v13];
      if ( v14 )
      {
        if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&v9[35]) == 1 )
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        *(_DWORD *)(v14 + 40) = SessionId;
        *(_QWORD *)(v14 + 32) = (unsigned __int64)v11 & 0x7FFFFFFFFFFFFFFCLL;
        goto LABEL_16;
      }
LABEL_57:
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
LABEL_16:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(&CurrentThread->Header.Lock, (__int64)&v9[35], &v31);
      v16 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v16;
      if ( !v16
        && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)v11, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&v9[35], (PRTL_BALANCED_NODE)v14);
      if ( v14 )
        *(_BYTE *)(v14 + 26) |= 1u;
      v9[36].QuadPart = (LONGLONG)KeGetCurrentThread();
      v18 = CurrentIrql;
      v19 = v29[0];
      v9[41].LowPart = v18;
      if ( !*(_BYTE *)(v19 + 2) )
      {
        v25 = *(_DWORD *)(v19 + 4) >> 12;
        *(_BYTE *)(v19 + 2) = 1;
        if ( Lsn )
        {
          *(LARGE_INTEGER *)(v19 + 40) = *Lsn;
          *(LARGE_INTEGER *)(v19 + 48) = *Lsn;
        }
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 64), &LockHandle);
        if ( !v9[14].LowPart && (v9[19].LowPart & 2) == 0 )
        {
          CcScheduleLazyWriteScan(v7, 0, 0);
          CcInsertIntoDirtySharedCacheMapList(v9);
        }
        CcChargeDirtyPages((__int64)v9, 0LL, 0LL, v25);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        if ( (v9[19].LowPart & 0x10000000) != 0 )
        {
          v26 = v25 << 12;
          v27 = KeGetCurrentThread()->Process[2].ActiveProcessors.Bitmap[8];
          if ( v27 )
          {
            if ( v26 )
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 8), v26);
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 24), 1uLL);
            v19 = v29[0];
          }
          else
          {
            v19 = v29[0];
          }
        }
      }
      if ( Lsn )
      {
        v20 = *(_QWORD *)(v19 + 40);
        if ( !v20 || Lsn->QuadPart < v20 )
          *(LARGE_INTEGER *)(v19 + 40) = *Lsn;
        v21 = *(_QWORD *)(v19 + 48);
        if ( !v21 || Lsn->QuadPart > v21 )
          *(LARGE_INTEGER *)(v19 + 48) = *Lsn;
        if ( Lsn->QuadPart > v9[32].QuadPart )
          v9[32] = *Lsn;
      }
      v22 = *(LARGE_INTEGER *)(v19 + 32);
      if ( v22.QuadPart > v9[6].QuadPart )
        v9[6] = v22;
      LowPart = v9[41].LowPart;
      v9[36].QuadPart = 0LL;
      v24 = _InterlockedCompareExchange((volatile signed __int32 *)v11, 1, 0);
      if ( v24 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&v9[35], v24);
      __writecr8(LowPart);
      KeAbPostRelease((ULONG_PTR)&v9[35]);
    }
  }
  else
  {
    CcSetDirtyInMask(v6, (__int64 *)BcbVoid + 1, *((_DWORD *)BcbVoid + 1), 0LL);
  }
}
