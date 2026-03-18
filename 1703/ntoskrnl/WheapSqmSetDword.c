/*
 * XREFs of WheapSqmSetDword @ 0x140724D18
 * Callers:
 *     WheapSqmCollectWheaOscTelemetry @ 0x140260F88 (WheapSqmCollectWheaOscTelemetry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WheapSqmSetDword(int a1, int a2)
{
  return WheapSqmDwordCommon(5, &WHEA_SQM_EVENT_SETDWORD, a1, a2);
}
