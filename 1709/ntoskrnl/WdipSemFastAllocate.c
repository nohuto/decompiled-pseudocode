/*
 * XREFs of WdipSemFastAllocate @ 0x1405AAA04
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x1405AA0BC (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x1405AA3A8 (WdipSemLoadNextScenario.c)
 *     WdipSemUpdateProviderTableWithEvent @ 0x1405AABF4 (WdipSemUpdateProviderTableWithEvent.c)
 *     WdipSemAddContextEventToScenario @ 0x14073EAB0 (WdipSemAddContextEventToScenario.c)
 *     WdipSemAddEndEventToScenario @ 0x14073EB74 (WdipSemAddEndEventToScenario.c)
 *     WdipSemBuildScenarioInstance @ 0x14073EE70 (WdipSemBuildScenarioInstance.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x14073F20C (WdipSemUpdateFrequentScenarioTable.c)
 *     WdipSemUpdateInflightScenarioTable @ 0x14073F2C8 (WdipSemUpdateInflightScenarioTable.c)
 *     WdipSemWriteSemActionsEvent @ 0x14073F9BC (WdipSemWriteSemActionsEvent.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     WdipSemAllocatePool @ 0x1405AACEC (WdipSemAllocatePool.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastAllocate(int a1, unsigned int a2)
{
  PSLIST_ENTRY result; // rax

  result = RtlpInterlockedPopEntrySList(&stru_14038CBB0 + a1);
  if ( !result )
    return (PSLIST_ENTRY)WdipSemAllocatePool(a2);
  return result;
}
