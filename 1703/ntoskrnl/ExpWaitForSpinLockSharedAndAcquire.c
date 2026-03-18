/*
 * XREFs of ExpWaitForSpinLockSharedAndAcquire @ 0x1400B2E80
 * Callers:
 *     KiAbEntryGetLockedHeadEntry @ 0x140049DE0 (KiAbEntryGetLockedHeadEntry.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14006CF50 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiAllocateCombineProto @ 0x140078CA0 (MiAllocateCombineProto.c)
 *     ExpAddTagForBigPages @ 0x14008CCA0 (ExpAddTagForBigPages.c)
 *     MiOffsetToProtos @ 0x14009DAD0 (MiOffsetToProtos.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     MiLockWorkingSetShared @ 0x1400A7E80 (MiLockWorkingSetShared.c)
 *     MiProbeAndLockPrepare @ 0x1400B4C90 (MiProbeAndLockPrepare.c)
 *     MiPageToNode @ 0x1400B70B0 (MiPageToNode.c)
 *     MiEndingOffsetWithLock @ 0x1400CDD20 (MiEndingOffsetWithLock.c)
 *     MiQueryAddressState @ 0x1400D1AC0 (MiQueryAddressState.c)
 *     ExFreeLargePool @ 0x1400DCA30 (ExFreeLargePool.c)
 *     RtlpWalkFrameChain @ 0x1400E4C20 (RtlpWalkFrameChain.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14025C760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall ExpWaitForSpinLockSharedAndAcquire(volatile signed __int32 *a1, unsigned __int8 CurrentIrql)
{
  unsigned int v2; // edi
  signed __int32 v5; // eax
  signed __int32 v7; // ett

  v2 = 0;
  do
  {
    v5 = *a1;
    while ( v5 < 0 )
    {
      if ( (v5 & 0x40000000) == 0 )
      {
        v7 = v5;
        v5 = _InterlockedCompareExchange(a1, v5 | 0x40000000, v5);
        if ( v7 != v5 )
          continue;
      }
      if ( CurrentIrql != 0xFF )
        __writecr8(CurrentIrql);
      if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v2);
      if ( CurrentIrql != 0xFF )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      v5 = *a1;
    }
  }
  while ( v5 != _InterlockedCompareExchange(a1, (v5 + 1) & 0xBFFFFFFF, v5) );
  return v2;
}
