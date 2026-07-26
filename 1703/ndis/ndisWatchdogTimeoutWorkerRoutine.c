/*
 * XREFs of ndisWatchdogTimeoutWorkerRoutine @ 0x1C00F0400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ndisWatchdogTimeoutWorkerRoutine(struct _KEVENT *this)
{
  NdisWatchdogState::ReportTimeout(this);
}
