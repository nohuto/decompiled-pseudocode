/*
 * XREFs of PopThermalZoneTimerCallback @ 0x140278FE0
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x1400B6B20 (IoCancelIrp.c)
 */

BOOLEAN __fastcall PopThermalZoneTimerCallback(__int64 a1, __int64 a2)
{
  return IoCancelIrp(*(PIRP *)(a2 + 56));
}
