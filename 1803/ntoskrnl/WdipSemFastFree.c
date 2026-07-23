/*
 * XREFs of WdipSemFastFree @ 0x14060CB80
 * Callers:
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x14052DB58 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemDeleteTransitionalInstance @ 0x14060C924 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x14060C9A8 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadNextScenario @ 0x140639ECC (WdipSemLoadNextScenario.c)
 *     WdipSemFreeScenario @ 0x14063A530 (WdipSemFreeScenario.c)
 *     WdipSemRollBackProviderTable @ 0x1407A1334 (WdipSemRollBackProviderTable.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x1407A1440 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastFree(int a1, _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
    return RtlpInterlockedPushEntrySList(&stru_1403D0E70 + a1, a2);
  return result;
}
