/*
 * XREFs of ViDeadlockDetectionTryConvertSharedToExclusive @ 0x1402515C8
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x1402515F8 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x140251758 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockBeforeCallDriver @ 0x140779178 (VfDeadlockBeforeCallDriver.c)
 * Callees:
 *     ExTryConvertSharedSpinLockExclusive @ 0x14001C3D0 (ExTryConvertSharedSpinLockExclusive.c)
 */

LOGICAL ViDeadlockDetectionTryConvertSharedToExclusive()
{
  LOGICAL result; // eax

  result = ExTryConvertSharedSpinLockExclusive(&ViDeadlockDatabaseLock);
  if ( result )
    ViDeadlockDatabaseOwner = (__int64)KeGetCurrentThread();
  return result;
}
