/*
 * XREFs of WdipSemFastAllocate @ 0x140467AE4
 * Callers:
 *     WdipSemWriteSemActionsEvent @ 0x140467910 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemBuildScenarioInstance @ 0x14057CCA4 (WdipSemBuildScenarioInstance.c)
 *     WdipSemLoadScenarioTable @ 0x1405ADC7C (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x1405ADF68 (WdipSemLoadNextScenario.c)
 *     WdipSemUpdateProviderTableWithEvent @ 0x1405AEFE0 (WdipSemUpdateProviderTableWithEvent.c)
 *     WdipSemAddContextEventToScenario @ 0x1405D95C0 (WdipSemAddContextEventToScenario.c)
 *     WdipSemAddEndEventToScenario @ 0x1405D9684 (WdipSemAddEndEventToScenario.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x140705BB4 (WdipSemUpdateFrequentScenarioTable.c)
 *     WdipSemUpdateInflightScenarioTable @ 0x140705C70 (WdipSemUpdateInflightScenarioTable.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastAllocate(int a1, unsigned int a2)
{
  PSLIST_ENTRY result; // rax

  result = RtlpInterlockedPopEntrySList(&stru_14036E9F0 + a1);
  if ( !result )
    return (PSLIST_ENTRY)WdipSemAllocatePool(a2);
  return result;
}
