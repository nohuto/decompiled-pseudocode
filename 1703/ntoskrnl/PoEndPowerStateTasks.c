/*
 * XREFs of PoEndPowerStateTasks @ 0x140579E10
 * Callers:
 *     PoPowerOffMonitor @ 0x14013DBE8 (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x1404186F0 (PnprWakeDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoEndPowerStateTasks(_DWORD *a1)
{
  a1[4] = 8;
  return PopDispatchStateCallout(a1, 0LL);
}
