/*
 * XREFs of ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140286170
 * Callers:
 *     MiEndingOffsetWithLock @ 0x14002B0E0 (MiEndingOffsetWithLock.c)
 *     ExFreeLargePool @ 0x14002E0E0 (ExFreeLargePool.c)
 *     MiQueryAddressState @ 0x14003F110 (MiQueryAddressState.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14005E0E0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiOffsetToProtos @ 0x14007AFB0 (MiOffsetToProtos.c)
 *     MiMarkSharedImageCfgBits @ 0x1400A5EA0 (MiMarkSharedImageCfgBits.c)
 *     ExReleaseSpinLockShared @ 0x1400A6680 (ExReleaseSpinLockShared.c)
 *     MiLockPagableImageSection @ 0x1400BC630 (MiLockPagableImageSection.c)
 *     MiProbeAndLockPages @ 0x1400BDA70 (MiProbeAndLockPages.c)
 *     ExpAddTagForBigPages @ 0x1400C1690 (ExpAddTagForBigPages.c)
 *     MiPageToNode @ 0x1400C7140 (MiPageToNode.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x14027EC8C (PerfLogSpinLockRelease.c)
 */

void __fastcall ExpReleaseSpinLockSharedFromDpcLevelInstrumented(volatile signed __int32 *a1, __int64 a2)
{
  _InterlockedAnd(a1, 0xBFFFFFFF);
  _InterlockedDecrement(a1);
  PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
}
