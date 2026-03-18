/*
 * XREFs of PoStartPowerStateTasks @ 0x1405EEC40
 * Callers:
 *     PoPowerOffMonitor @ 0x140155CD8 (PoPowerOffMonitor.c)
 *     PnprQuiesceDevices @ 0x1404837F0 (PnprQuiesceDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x140583BFC (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoStartPowerStateTasks(_DWORD *a1)
{
  a1[4] = 1;
  return PopDispatchStateCallout(a1, 0LL);
}
