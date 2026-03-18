/*
 * XREFs of WheapSqmSetDword @ 0x1407CC4C4
 * Callers:
 *     WheapSqmCollectWheaOscTelemetry @ 0x1402C0244 (WheapSqmCollectWheaOscTelemetry.c)
 * Callees:
 *     WheapSqmDwordCommon @ 0x1402C03A8 (WheapSqmDwordCommon.c)
 */

NTSTATUS __fastcall WheapSqmSetDword(int a1, int a2)
{
  return WheapSqmDwordCommon(5, &WHEA_SQM_EVENT_SETDWORD, a1, a2);
}
