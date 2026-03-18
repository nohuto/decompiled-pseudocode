/*
 * XREFs of WheapSqmIncrementDword @ 0x1402C0450
 * Callers:
 *     WheapPfaMemoryCheck @ 0x1407CBB04 (WheapPfaMemoryCheck.c)
 * Callees:
 *     WheapSqmDwordCommon @ 0x1402C03A8 (WheapSqmDwordCommon.c)
 */

NTSTATUS __fastcall WheapSqmIncrementDword(int a1)
{
  return WheapSqmDwordCommon(6, &WHEA_SQM_EVENT_INCREMENTDWORD, a1, 1);
}
