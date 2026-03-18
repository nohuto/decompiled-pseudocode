/*
 * XREFs of ViDeadlockDetectionLock @ 0x1407BC61C
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x140277E68 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x140277FC8 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockAcquireResource @ 0x1407BA944 (VfDeadlockAcquireResource.c)
 *     VfDeadlockAfterCallDriver @ 0x1407BB028 (VfDeadlockAfterCallDriver.c)
 *     VfDeadlockBeforeCallDriver @ 0x1407BB094 (VfDeadlockBeforeCallDriver.c)
 *     VfDeadlockInitializeResource @ 0x1407BB52C (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x1407BB6AC (VfDeadlockReleaseResource.c)
 *     ViDeadlockDetectionApplySettings @ 0x1407BC5CC (ViDeadlockDetectionApplySettings.c)
 *     ViDeadlockEmptyDatabase @ 0x1407BC684 (ViDeadlockEmptyDatabase.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x1407BD32C (ViIsThreadInsidePagingCodePaths.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400D56B0 (ExAcquireSpinLockSharedAtDpcLevel.c)
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
