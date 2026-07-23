/*
 * XREFs of WdipSemFastFree @ 0x140467AB8
 * Callers:
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x140454B34 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemDeleteTransitionalInstance @ 0x14046788C (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140467910 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadNextScenario @ 0x1405ADF68 (WdipSemLoadNextScenario.c)
 *     WdipSemFreeScenario @ 0x1405AE5C4 (WdipSemFreeScenario.c)
 *     WdipSemRollBackProviderTable @ 0x1407058EC (WdipSemRollBackProviderTable.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x1407059F8 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastFree(int a1, _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
    return RtlpInterlockedPushEntrySList(&stru_14036E9F0 + a1, a2);
  return result;
}
