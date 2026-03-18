/*
 * XREFs of PnpEnablePnpEventWorkerWatchdog @ 0x14007578C
 * Callers:
 *     PnpDeviceEventWorker @ 0x14051FE70 (PnpDeviceEventWorker.c)
 * Callees:
 *     PnpEnableWatchdog @ 0x1400757B4 (PnpEnableWatchdog.c)
 */

__int64 __fastcall PnpEnablePnpEventWorkerWatchdog(__int64 a1)
{
  return PnpEnableWatchdog(*(_QWORD *)(a1 + 104), PnpEventWorkerWatchdogWorkItem, a1, 1LL);
}
