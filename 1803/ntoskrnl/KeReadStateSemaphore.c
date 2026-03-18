/*
 * XREFs of KeReadStateSemaphore @ 0x1400B07F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __stdcall KeReadStateSemaphore(PRKSEMAPHORE Semaphore)
{
  return Semaphore->Header.SignalState;
}
