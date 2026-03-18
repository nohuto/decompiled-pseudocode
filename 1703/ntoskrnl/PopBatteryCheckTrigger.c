/*
 * XREFs of PopBatteryCheckTrigger @ 0x140582AD4
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14058289C (PopBatteryApplyCompositeState.c)
 *     PopRecalculateCBTriggerLevels @ 0x140582B64 (PopRecalculateCBTriggerLevels.c)
 * Callees:
 *     PopBatteryCheckTriggerAllBatteries @ 0x1406CA278 (PopBatteryCheckTriggerAllBatteries.c)
 */

bool __fastcall PopBatteryCheckTrigger(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( qword_14034B3E0 )
    return (unsigned __int8)PopBatteryCheckTriggerAllBatteries(a1, 0LL) != 0;
  return v1;
}
