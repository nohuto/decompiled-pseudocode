/*
 * XREFs of PsGetCurrentThreadPreviousMode @ 0x140022AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PsGetCurrentThreadPreviousMode()
{
  return KeGetCurrentThread()->PreviousMode;
}
