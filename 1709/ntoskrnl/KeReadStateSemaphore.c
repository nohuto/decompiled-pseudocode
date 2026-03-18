/*
 * XREFs of KeReadStateSemaphore @ 0x140112E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __stdcall KeReadStateSemaphore(PRKSEMAPHORE Semaphore)
{
  return Semaphore->Header.SignalState;
}
