/*
 * XREFs of WdipSemFastFree @ 0x1405AAA94
 * Callers:
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x14058F7F4 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemLoadNextScenario @ 0x1405AA3A8 (WdipSemLoadNextScenario.c)
 *     WdipSemFreeScenario @ 0x1405AAA3C (WdipSemFreeScenario.c)
 *     WdipSemRollBackProviderTable @ 0x14073ED10 (WdipSemRollBackProviderTable.c)
 *     WdipSemDeleteTransitionalInstance @ 0x14073EEE8 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x14073EF6C (WdipSemLogInflightLimitExceededInformation.c)
 *     WdipSemWriteSemActionsEvent @ 0x14073F9BC (WdipSemWriteSemActionsEvent.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastFree(int a1, _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
    return RtlpInterlockedPushEntrySList(&stru_14038CBB0 + a1, a2);
  return result;
}
