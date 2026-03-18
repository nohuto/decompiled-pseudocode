/*
 * XREFs of PopUserShutdownDelayWorkerCallback @ 0x1406FDBE0
 * Callers:
 *     <none>
 * Callees:
 *     PopUserShutdownCancelled @ 0x1406FDB68 (PopUserShutdownCancelled.c)
 */

__int64 (__fastcall *PopUserShutdownDelayWorkerCallback())(_QWORD)
{
  _InterlockedExchange(&PopUserShutdown, 0);
  return PopUserShutdownCancelled(0);
}
