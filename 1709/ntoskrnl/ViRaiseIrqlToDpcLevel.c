/*
 * XREFs of ViRaiseIrqlToDpcLevel @ 0x140278110
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
 *     <none>
 */

__int64 ViRaiseIrqlToDpcLevel()
{
  __int64 result; // rax

  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result < 2u )
  {
    KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  return result;
}
