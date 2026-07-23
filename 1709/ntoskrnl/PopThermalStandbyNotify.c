/*
 * XREFs of PopThermalStandbyNotify @ 0x140243B00
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1402436CC (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsExit @ 0x140243A20 (PopThermalCsExit.c)
 *     PopThermalZoneRemove @ 0x140700820 (PopThermalZoneRemove.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14012C528 (PopDiagTraceEventNoPayload.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PopThermalStandbyNotify(char a1)
{
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 )
  {
    Buffer = 1;
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_THERMAL_STANDBY_NOTIFICATION);
  }
  else
  {
    Buffer = 0;
  }
  return ZwUpdateWnfStateData(&WNF_PO_THERMAL_STANDBY, &Buffer, 4u, 0LL, 0LL, 0, 0);
}
