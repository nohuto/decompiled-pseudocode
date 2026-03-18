/*
 * XREFs of ViLowerIrql @ 0x1402780F8
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

__int64 __fastcall ViLowerIrql(unsigned __int8 a1)
{
  __int64 result; // rax

  result = KeGetCurrentIrql();
  if ( a1 < (unsigned __int8)result )
  {
    result = a1;
    __writecr8(a1);
  }
  return result;
}
