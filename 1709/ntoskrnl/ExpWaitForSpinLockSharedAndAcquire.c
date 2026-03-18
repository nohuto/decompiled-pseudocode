/*
 * XREFs of ExpWaitForSpinLockSharedAndAcquire @ 0x1400BF390
 * Callers:
 *     MiEndingOffsetWithLock @ 0x14002B0E0 (MiEndingOffsetWithLock.c)
 *     ExFreeLargePool @ 0x14002E0E0 (ExFreeLargePool.c)
 *     MiQueryAddressState @ 0x14003F110 (MiQueryAddressState.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14005E0E0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     MiOffsetToProtos @ 0x14007AFB0 (MiOffsetToProtos.c)
 *     MiMarkSharedImageCfgBits @ 0x1400A5EA0 (MiMarkSharedImageCfgBits.c)
 *     MiLockPagableImageSection @ 0x1400BC630 (MiLockPagableImageSection.c)
 *     MiProbeAndLockPrepare @ 0x1400BEF50 (MiProbeAndLockPrepare.c)
 *     ExpAddTagForBigPages @ 0x1400C1690 (ExpAddTagForBigPages.c)
 *     MiPageToNode @ 0x1400C7140 (MiPageToNode.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400D56B0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14028607C (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
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
