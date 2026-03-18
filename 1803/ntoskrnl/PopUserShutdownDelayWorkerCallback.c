/*
 * XREFs of PopUserShutdownDelayWorkerCallback @ 0x140762E90
 * Callers:
 *     <none>
 * Callees:
 *     PopUserShutdownCancelled @ 0x1405EACD0 (PopUserShutdownCancelled.c)
 */

__int64 (__fastcall *PopUserShutdownDelayWorkerCallback())(_QWORD)
{
  _InterlockedExchange(&PopUserShutdown, 0);
  return PopUserShutdownCancelled(0);
}
