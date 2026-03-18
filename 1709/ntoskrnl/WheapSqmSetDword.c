/*
 * XREFs of WheapSqmSetDword @ 0x1407647E0
 * Callers:
 *     WheapSqmCollectWheaOscTelemetry @ 0x14028AB58 (WheapSqmCollectWheaOscTelemetry.c)
 * Callees:
 *     WheapSqmDwordCommon @ 0x14028ACBC (WheapSqmDwordCommon.c)
 */

NTSTATUS __fastcall WheapSqmSetDword(int a1, int a2)
{
  return WheapSqmDwordCommon(5, &WHEA_SQM_EVENT_SETDWORD, a1, a2);
}
