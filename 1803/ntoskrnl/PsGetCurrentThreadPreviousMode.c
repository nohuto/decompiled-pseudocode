/*
 * XREFs of PsGetCurrentThreadPreviousMode @ 0x1400B7F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PsGetCurrentThreadPreviousMode()
{
  return KeGetCurrentThread()->PreviousMode;
}
