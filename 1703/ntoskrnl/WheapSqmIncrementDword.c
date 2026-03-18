/*
 * XREFs of WheapSqmIncrementDword @ 0x140261194
 * Callers:
 *     WheapPfaMemoryCheck @ 0x140724354 (WheapPfaMemoryCheck.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WheapSqmIncrementDword(int a1)
{
  return WheapSqmDwordCommon(6, &WHEA_SQM_EVENT_INCREMENTDWORD, a1, 1);
}
