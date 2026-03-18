/*
 * XREFs of CcGetPartition @ 0x1400E0200
 * Callers:
 *     CcShouldLazyWriteCacheMap @ 0x140042794 (CcShouldLazyWriteCacheMap.c)
 *     CcWriteBehind @ 0x140042EF0 (CcWriteBehind.c)
 *     CcPerformReadAhead @ 0x140045EB4 (CcPerformReadAhead.c)
 *     CcGetFlushedValidData @ 0x14004DC70 (CcGetFlushedValidData.c)
 *     CcPurgeCacheSection @ 0x140050C80 (CcPurgeCacheSection.c)
 *     CcPrepareMdlWrite @ 0x140098000 (CcPrepareMdlWrite.c)
 *     CcGetPartitionFromFileObject @ 0x1400988C0 (CcGetPartitionFromFileObject.c)
 *     CcForceWriteThrough @ 0x140098ED0 (CcForceWriteThrough.c)
 *     CcUpdateSharedCacheMapFlag @ 0x14009AF9C (CcUpdateSharedCacheMapFlag.c)
 *     CcSetLogHandleForFileEx @ 0x1400B5910 (CcSetLogHandleForFileEx.c)
 *     CcMapDataForOverwrite @ 0x1400B7AE0 (CcMapDataForOverwrite.c)
 *     CcAmILowPriorityWriter @ 0x1400BAFF8 (CcAmILowPriorityWriter.c)
 *     CcDeleteMbcb @ 0x1400BE080 (CcDeleteMbcb.c)
 *     CcWaitForUninitializeCacheMap @ 0x1400BF4BC (CcWaitForUninitializeCacheMap.c)
 *     CcMdlWriteComplete2 @ 0x1400CB7B4 (CcMdlWriteComplete2.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1400D0618 (CcNotifyOfMappedWriteComplete.c)
 *     CcDeleteSharedCacheMap @ 0x1400DAF00 (CcDeleteSharedCacheMap.c)
 *     CcDeductDirtyPages @ 0x1400DC394 (CcDeductDirtyPages.c)
 *     CcSetAdditionalCacheAttributes @ 0x1400DC480 (CcSetAdditionalCacheAttributes.c)
 *     CcSetParallelFlushFile @ 0x1400DC970 (CcSetParallelFlushFile.c)
 *     CcUninitializeCacheMap @ 0x1400DCA00 (CcUninitializeCacheMap.c)
 *     CcUnmapVacbArray @ 0x1400DCE30 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x1400DD440 (CcGetVacbMiss.c)
 *     CcWriteBehindInternal @ 0x1400DE8B0 (CcWriteBehindInternal.c)
 *     CcFlushCachePriv @ 0x1400DEE80 (CcFlushCachePriv.c)
 *     CcDecrementOpenCount @ 0x1400DF768 (CcDecrementOpenCount.c)
 *     CcInitializeCacheMapEx @ 0x1400DF8F0 (CcInitializeCacheMapEx.c)
 *     CcSetFileSizesEx @ 0x1400E0340 (CcSetFileSizesEx.c)
 *     CcSetAdditionalCacheAttributesEx @ 0x1400E07F0 (CcSetAdditionalCacheAttributesEx.c)
 *     CcAcquireByteRangeForWrite @ 0x1400E0910 (CcAcquireByteRangeForWrite.c)
 *     CcChargeDirtyPages @ 0x1400E3214 (CcChargeDirtyPages.c)
 *     CcNotifyOfMappedWrite @ 0x140133730 (CcNotifyOfMappedWrite.c)
 *     CcScheduleReadAheadEx @ 0x1401357B0 (CcScheduleReadAheadEx.c)
 *     CcAsyncCopyRead @ 0x1401392C0 (CcAsyncCopyRead.c)
 *     CcDeleteBcbs @ 0x14014C85C (CcDeleteBcbs.c)
 *     CcUnmapInactiveViewsInternal @ 0x14015C0D8 (CcUnmapInactiveViewsInternal.c)
 *     CcUnpinRepinnedBcb @ 0x1402203F0 (CcUnpinRepinnedBcb.c)
 *     CcSetLogHandleForFile @ 0x1402208C0 (CcSetLogHandleForFile.c)
 *     CcMdlWriteAbort @ 0x140220CC0 (CcMdlWriteAbort.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall CcGetPartition(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  signed __int32 v6; // edx
  ULONG_PTR *v7; // rdi
  struct _KPRCB *v8; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v11; // zf
  signed __int32 v12; // eax
  int v13; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1[66];
  if ( a1[21] )
  {
    v3 = *(_QWORD *)((a1[12] & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_1403CB280, CurrentIrql);
    }
    else
    {
      LOBYTE(a2) = 1;
      CurrentPrcb = KeGetCurrentPrcb();
      v15 = 0;
      KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
      if ( _interlockedbittestandset(&dword_1403CB280, 0x1Fu) )
      {
        KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
        v15 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_1403CB280, CurrentIrql);
      }
      v6 = dword_1403CB280;
      while ( (v6 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v6 & 0x40000000) == 0 )
        {
          v12 = _InterlockedCompareExchange(&dword_1403CB280, v6 | 0x40000000, v6);
          v11 = v6 == v12;
          v6 = v12;
          if ( !v11 )
            continue;
        }
        KeYieldProcessorEx(&v15);
        v6 = dword_1403CB280;
      }
    }
    if ( *(_QWORD *)v3 )
      v7 = *(ULONG_PTR **)(qword_1403CBD88 + 8LL * (*(_WORD *)(*(_QWORD *)v3 + 60LL) & 0x3FF));
    else
      v7 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_1403CB280, retaddr);
    else
      dword_1403CB280 = 0;
    v8 = KeGetCurrentPrcb();
    SchedulerAssist = v8->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v8->NestingLevel <= 1u )
      {
        v13 = SchedulerAssist[5] - 1;
        SchedulerAssist[5] = v13;
        if ( !v13 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(v8);
      }
    }
    __writecr8(CurrentIrql);
    if ( v2 != *(_QWORD *)(v7[21] + 8) )
      KeBugCheckEx(0x34u, 0x12A5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  return v2;
}
