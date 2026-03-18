/*
 * XREFs of ViLowerIrql @ 0x140251888
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
