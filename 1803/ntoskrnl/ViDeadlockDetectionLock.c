/*
 * XREFs of ViDeadlockDetectionLock @ 0x1408299DC
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x1402AAF78 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x1402AB0D8 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockAcquireResource @ 0x140827CF8 (VfDeadlockAcquireResource.c)
 *     VfDeadlockAfterCallDriver @ 0x1408283D8 (VfDeadlockAfterCallDriver.c)
 *     VfDeadlockBeforeCallDriver @ 0x140828444 (VfDeadlockBeforeCallDriver.c)
 *     VfDeadlockInitializeResource @ 0x1408288DC (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x140828A64 (VfDeadlockReleaseResource.c)
 *     ViDeadlockDetectionApplySettings @ 0x14082998C (ViDeadlockDetectionApplySettings.c)
 *     ViDeadlockEmptyDatabase @ 0x140829A44 (ViDeadlockEmptyDatabase.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x14082A6D8 (ViIsThreadInsidePagingCodePaths.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140122DC0 (ExAcquireSpinLockSharedAtDpcLevel.c)
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
