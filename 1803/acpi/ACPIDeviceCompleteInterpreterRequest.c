/*
 * XREFs of ACPIDeviceCompleteInterpreterRequest @ 0x1C0019D70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0019CA0 (ACPIDeviceCompleteGenericPhase.c)
 */

__int64 __fastcall ACPIDeviceCompleteInterpreterRequest(__int64 a1)
{
  return ACPIDeviceCompleteGenericPhase(0LL, 0, 0LL, a1);
}
