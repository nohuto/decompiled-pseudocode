/*
 * XREFs of ViLowerIrql @ 0x1402AB208
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
