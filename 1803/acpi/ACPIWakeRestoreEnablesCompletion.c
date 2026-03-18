/*
 * XREFs of ACPIWakeRestoreEnablesCompletion @ 0x1C0041BD0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0019CA0 (ACPIDeviceCompleteGenericPhase.c)
 */

__int64 __fastcall ACPIWakeRestoreEnablesCompletion(__int64 a1, __int64 a2, int a3)
{
  return ACPIDeviceCompleteGenericPhase(0LL, a3, 0LL, a2);
}
