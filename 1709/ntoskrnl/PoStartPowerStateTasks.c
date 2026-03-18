/*
 * XREFs of PoStartPowerStateTasks @ 0x1406FCA30
 * Callers:
 *     PoPowerOffMonitor @ 0x140242174 (PoPowerOffMonitor.c)
 *     PnprQuiesceDevices @ 0x14042CC58 (PnprQuiesceDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1406FCB40 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoStartPowerStateTasks(__int64 a1)
{
  *(_DWORD *)(a1 + 16) = 1;
  return PopDispatchStateCallout(a1, 0LL);
}
