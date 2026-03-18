/*
 * XREFs of PsGetCurrentThreadWin32Thread @ 0x1400A9B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID PsGetCurrentThreadWin32Thread()
{
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
