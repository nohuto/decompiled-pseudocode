/*
 * XREFs of KeReadStateSemaphore @ 0x14001B240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeReadStateSemaphore(PKTIMER Timer)
{
  return Timer->Header.SignalState;
}
