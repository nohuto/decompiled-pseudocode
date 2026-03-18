/*
 * XREFs of PnpEnableDelayedRemoveWorkerWatchdog @ 0x14023C6B0
 * Callers:
 *     PnpDelayedRemoveWorker @ 0x1405C86A0 (PnpDelayedRemoveWorker.c)
 * Callees:
 *     PnpEnableWatchdog @ 0x1400757B4 (PnpEnableWatchdog.c)
 */

__int64 __fastcall PnpEnableDelayedRemoveWorkerWatchdog(__int64 a1)
{
  return PnpEnableWatchdog(*(_QWORD *)(a1 + 24), (__int64)PnpDelayedRemoveWorkerWatchdogWorkItem, a1, 3u);
}
