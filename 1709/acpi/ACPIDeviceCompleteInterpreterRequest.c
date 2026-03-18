/*
 * XREFs of ACPIDeviceCompleteInterpreterRequest @ 0x1C00480A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0006240 (ACPIDeviceCompleteGenericPhase.c)
 */

void __fastcall ACPIDeviceCompleteInterpreterRequest(__int64 a1)
{
  ACPIDeviceCompleteGenericPhase(0LL, 0, 0LL, a1);
}
