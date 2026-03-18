/*
 * XREFs of WheapSqmIncrementDword @ 0x14028AD64
 * Callers:
 *     WheapPfaMemoryCheck @ 0x140763E1C (WheapPfaMemoryCheck.c)
 * Callees:
 *     WheapSqmDwordCommon @ 0x14028ACBC (WheapSqmDwordCommon.c)
 */

NTSTATUS __fastcall WheapSqmIncrementDword(int a1)
{
  return WheapSqmDwordCommon(6, &WHEA_SQM_EVENT_INCREMENTDWORD, a1, 1);
}
