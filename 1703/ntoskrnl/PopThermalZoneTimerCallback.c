/*
 * XREFs of PopThermalZoneTimerCallback @ 0x14022F7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall PopThermalZoneTimerCallback(__int64 a1, __int64 a2)
{
  return IoCancelIrp(*(PIRP *)(a2 + 56));
}
