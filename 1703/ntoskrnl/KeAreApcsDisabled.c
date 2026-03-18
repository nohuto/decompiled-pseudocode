/*
 * XREFs of KeAreApcsDisabled @ 0x140070080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN KeAreApcsDisabled(void)
{
  return KeGetCurrentThread()->WaitBlock[3].SpareLong != 0;
}
