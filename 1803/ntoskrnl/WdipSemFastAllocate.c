/*
 * XREFs of WdipSemFastAllocate @ 0x14060CBAC
 * Callers:
 *     WdipSemBuildScenarioInstance @ 0x14060C8AC (WdipSemBuildScenarioInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x14060C9A8 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadScenarioTable @ 0x140639AE4 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140639ECC (WdipSemLoadNextScenario.c)
 *     WdipSemUpdateProviderTableWithEvent @ 0x14063A714 (WdipSemUpdateProviderTableWithEvent.c)
 *     WdipSemAddContextEventToScenario @ 0x14063AA64 (WdipSemAddContextEventToScenario.c)
 *     WdipSemAddEndEventToScenario @ 0x14063AB24 (WdipSemAddEndEventToScenario.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x1407A15FC (WdipSemUpdateFrequentScenarioTable.c)
 *     WdipSemUpdateInflightScenarioTable @ 0x1407A16B8 (WdipSemUpdateInflightScenarioTable.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     WdipSemAllocatePool @ 0x1406443DC (WdipSemAllocatePool.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastAllocate(int a1, unsigned int a2)
{
  PSLIST_ENTRY result; // rax

  result = RtlpInterlockedPopEntrySList(&stru_1403D0E70 + a1);
  if ( !result )
    return (PSLIST_ENTRY)WdipSemAllocatePool(a2);
  return result;
}
