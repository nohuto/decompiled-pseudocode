/*
 * XREFs of ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402BA870
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14000B2A0 (MiTrimOrAgeWorkingSet.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiMoveDirtyBitsToPfns @ 0x140023A70 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x140024440 (NtGetWriteWatch.c)
 *     MmProtectPool @ 0x14004B80C (MmProtectPool.c)
 *     ExReleaseSpinLockShared @ 0x1400A5E30 (ExReleaseSpinLockShared.c)
 *     ExpAddTagForBigPages @ 0x1400D9480 (ExpAddTagForBigPages.c)
 *     ExFreeLargePool @ 0x1400DB3B0 (ExFreeLargePool.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiOffsetToProtos @ 0x14011D9C0 (MiOffsetToProtos.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x140123010 (MiQueueLargeFreeZeroRebuild.c)
 *     MiEndingOffsetWithLock @ 0x140128880 (MiEndingOffsetWithLock.c)
 *     MiSetSystemCodeProtection @ 0x14013EB40 (MiSetSystemCodeProtection.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x1402B1E58 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall ExpReleaseSpinLockSharedFromDpcLevelInstrumented(volatile signed __int32 *a1, __int64 a2)
{
  _InterlockedAnd(a1, 0xBFFFFFFF);
  _InterlockedDecrement(a1);
  return PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
}
