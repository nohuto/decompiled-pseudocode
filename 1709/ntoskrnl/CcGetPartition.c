/*
 * XREFs of CcGetPartition @ 0x1400644A0
 * Callers:
 *     CcNotifyOfMappedWriteComplete @ 0x14000DA50 (CcNotifyOfMappedWriteComplete.c)
 *     CcChargeDirtyPages @ 0x14001BBB4 (CcChargeDirtyPages.c)
 *     CcDeleteMbcb @ 0x14001EBD0 (CcDeleteMbcb.c)
 *     CcDeleteSharedCacheMap @ 0x14001FD84 (CcDeleteSharedCacheMap.c)
 *     CcAsyncCopyRead @ 0x140020890 (CcAsyncCopyRead.c)
 *     CcPerformReadAhead @ 0x140020ED4 (CcPerformReadAhead.c)
 *     CcShouldLazyWriteCacheMap @ 0x1400223FC (CcShouldLazyWriteCacheMap.c)
 *     CcWriteBehind @ 0x140022B24 (CcWriteBehind.c)
 *     CcScheduleReadAheadEx @ 0x1400625A0 (CcScheduleReadAheadEx.c)
 *     CcUnmapVacbArray @ 0x140062A30 (CcUnmapVacbArray.c)
 *     CcFlushCachePriv @ 0x140062D40 (CcFlushCachePriv.c)
 *     CcDecrementOpenCount @ 0x14006365C (CcDecrementOpenCount.c)
 *     CcInitializeCacheMapEx @ 0x1400636F0 (CcInitializeCacheMapEx.c)
 *     CcDeductDirtyPages @ 0x140066B70 (CcDeductDirtyPages.c)
 *     CcUninitializeCacheMap @ 0x140066BF0 (CcUninitializeCacheMap.c)
 *     CcSetFileSizesEx @ 0x140089D90 (CcSetFileSizesEx.c)
 *     CcWriteBehindInternal @ 0x14008A070 (CcWriteBehindInternal.c)
 *     CcSetParallelFlushFile @ 0x14008A780 (CcSetParallelFlushFile.c)
 *     CcGetVacbMiss @ 0x1400A3D50 (CcGetVacbMiss.c)
 *     CcNotifyOfMappedWrite @ 0x1400EF1C8 (CcNotifyOfMappedWrite.c)
 *     CcPurgeCacheSection @ 0x1400F28C0 (CcPurgeCacheSection.c)
 *     CcGetFlushedValidData @ 0x1400F2BA0 (CcGetFlushedValidData.c)
 *     CcAcquireByteRangeForWrite @ 0x1400F2DD0 (CcAcquireByteRangeForWrite.c)
 *     CcSetAdditionalCacheAttributesEx @ 0x140115AF0 (CcSetAdditionalCacheAttributesEx.c)
 *     CcSetAdditionalCacheAttributes @ 0x140115BF0 (CcSetAdditionalCacheAttributes.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140116AA8 (CcUpdateSharedCacheMapFlag.c)
 *     CcMapDataForOverwrite @ 0x140117964 (CcMapDataForOverwrite.c)
 *     CcAmILowPriorityWriter @ 0x14011C2D0 (CcAmILowPriorityWriter.c)
 *     CcSetLogHandleForFileEx @ 0x14011D1A0 (CcSetLogHandleForFileEx.c)
 *     CcGetPartitionFromFileObject @ 0x14011ED14 (CcGetPartitionFromFileObject.c)
 *     CcWaitForUninitializeCacheMap @ 0x140121200 (CcWaitForUninitializeCacheMap.c)
 *     CcPrepareMdlWrite @ 0x14012D230 (CcPrepareMdlWrite.c)
 *     CcForceWriteThrough @ 0x14012D540 (CcForceWriteThrough.c)
 *     CcMdlWriteComplete2 @ 0x14012F234 (CcMdlWriteComplete2.c)
 *     CcDeleteBcbs @ 0x14012F610 (CcDeleteBcbs.c)
 *     CcUnpinRepinnedBcb @ 0x1401E0CF0 (CcUnpinRepinnedBcb.c)
 *     CcClearPrivateWriteFile @ 0x1401E0E7C (CcClearPrivateWriteFile.c)
 *     CcSetLogHandleForFile @ 0x1401E1240 (CcSetLogHandleForFile.c)
 *     CcSetPrivateWriteFile @ 0x1401E1390 (CcSetPrivateWriteFile.c)
 *     CcUnmapInactiveViewsInternal @ 0x1401E1B40 (CcUnmapInactiveViewsInternal.c)
 *     CcMdlWriteAbort @ 0x1401E20B0 (CcMdlWriteAbort.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall CcGetPartition(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // si
  signed __int32 v4; // edx
  ULONG_PTR *v5; // rdi
  bool v7; // zf
  signed __int32 v8; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+8h] BYREF

  v1 = a1[66];
  if ( a1[21] )
  {
    v2 = *(_QWORD *)((a1[12] & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140388100, CurrentIrql);
    }
    else
    {
      v10 = 0;
      if ( _interlockedbittestandset(&dword_140388100, 0x1Fu) )
        v10 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140388100, CurrentIrql);
      v4 = dword_140388100;
      while ( (v4 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v4 & 0x40000000) == 0 )
        {
          v8 = _InterlockedCompareExchange(&dword_140388100, v4 | 0x40000000, v4);
          v7 = v4 == v8;
          v4 = v8;
          if ( !v7 )
            continue;
        }
        KeYieldProcessorEx(&v10);
        v4 = dword_140388100;
      }
    }
    if ( *(_QWORD *)v2 )
      v5 = *(ULONG_PTR **)(qword_140388AF0 + 8LL * (*(_WORD *)(*(_QWORD *)v2 + 60LL) & 0x3FF));
    else
      v5 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140388100, retaddr);
    else
      dword_140388100 = 0;
    __writecr8(CurrentIrql);
    if ( v1 != *(_QWORD *)(v5[21] + 8) )
      KeBugCheckEx(0x34u, 0x1292uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  return v1;
}
