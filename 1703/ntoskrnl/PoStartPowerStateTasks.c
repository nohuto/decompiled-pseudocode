/*
 * XREFs of PoStartPowerStateTasks @ 0x140579E24
 * Callers:
 *     PoPowerOffMonitor @ 0x14013DBE8 (PoPowerOffMonitor.c)
 *     PnprQuiesceDevices @ 0x140417C24 (PnprQuiesceDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoStartPowerStateTasks(_DWORD *a1)
{
  a1[4] = 1;
  return PopDispatchStateCallout(a1, 0LL);
}
