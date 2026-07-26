/*
 * XREFs of ndisWatchdogTimeoutWorkerRoutine @ 0x1C00FC770
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportTimeout@NdisWatchdogState@@QEAAXXZ @ 0x1C00FC330 (-ReportTimeout@NdisWatchdogState@@QEAAXXZ.c)
 */

void __fastcall ndisWatchdogTimeoutWorkerRoutine(struct _KEVENT *a1)
{
  NdisWatchdogState::ReportTimeout(a1);
}
