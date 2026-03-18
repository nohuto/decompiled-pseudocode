/*
 * XREFs of ACPIWakeRestoreEnablesCompletion @ 0x1C005AA40
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0006240 (ACPIDeviceCompleteGenericPhase.c)
 */

void __fastcall ACPIWakeRestoreEnablesCompletion(__int64 a1, __int64 a2, int a3)
{
  ACPIDeviceCompleteGenericPhase(0LL, a3, 0LL, a2);
}
