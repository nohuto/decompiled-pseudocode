/*
 * XREFs of ViDeadlockDetectionLock @ 0x14077A724
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x1402515F8 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x140251758 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockAcquireResource @ 0x140778A28 (VfDeadlockAcquireResource.c)
 *     VfDeadlockAfterCallDriver @ 0x14077910C (VfDeadlockAfterCallDriver.c)
 *     VfDeadlockBeforeCallDriver @ 0x140779178 (VfDeadlockBeforeCallDriver.c)
 *     VfDeadlockInitializeResource @ 0x140779620 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x1407797A0 (VfDeadlockReleaseResource.c)
 *     ViDeadlockDetectionApplySettings @ 0x14077A6D0 (ViDeadlockDetectionApplySettings.c)
 *     ViDeadlockEmptyDatabase @ 0x14077A780 (ViDeadlockEmptyDatabase.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x14077B420 (ViIsThreadInsidePagingCodePaths.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall ViDeadlockDetectionLock(int a1)
{
  if ( a1 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(&ViDeadlockDatabaseLock);
    ViDeadlockDatabaseOwner = (__int64)KeGetCurrentThread();
  }
  else
  {
    ExAcquireSpinLockSharedAtDpcLevel(&ViDeadlockDatabaseLock);
  }
}
