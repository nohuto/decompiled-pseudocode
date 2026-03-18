/*
 * XREFs of PsGetWin32KFilterSet @ 0x1400221D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 PsGetWin32KFilterSet()
{
  return KeGetCurrentThread()->ApcState.Process[2].ThreadSeed[14];
}
