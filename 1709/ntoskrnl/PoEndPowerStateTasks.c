/*
 * XREFs of PoEndPowerStateTasks @ 0x1406FC8D8
 * Callers:
 *     PoPowerOffMonitor @ 0x140242174 (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x14042D700 (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1406FCB40 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoEndPowerStateTasks(__int64 a1)
{
  *(_DWORD *)(a1 + 16) = 8;
  return PopDispatchStateCallout(a1, 0LL);
}
