/*
 * XREFs of ndisWatchdogTimeoutWorkerRoutine @ 0x1C00F9BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportTimeout@NdisWatchdogState@@QEAAXXZ @ 0x1C00F9750 (-ReportTimeout@NdisWatchdogState@@QEAAXXZ.c)
 */

void __fastcall ndisWatchdogTimeoutWorkerRoutine(struct _KEVENT *a1)
{
  NdisWatchdogState::ReportTimeout(a1);
}
