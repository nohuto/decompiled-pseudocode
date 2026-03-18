/*
 * XREFs of PopUserShutdownDelayWorkerCallback @ 0x1406CA1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (__fastcall *PopUserShutdownDelayWorkerCallback())(_QWORD)
{
  _InterlockedExchange(&PopUserShutdown, 0);
  return PopUserShutdownCancelled(0);
}
