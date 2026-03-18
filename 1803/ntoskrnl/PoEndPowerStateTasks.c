/*
 * XREFs of PoEndPowerStateTasks @ 0x1405EEC20
 * Callers:
 *     PoPowerOffMonitor @ 0x140155CD8 (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x1404842A0 (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x140583BFC (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoEndPowerStateTasks(_DWORD *a1)
{
  a1[4] = 8;
  return PopDispatchStateCallout(a1, 0LL);
}
