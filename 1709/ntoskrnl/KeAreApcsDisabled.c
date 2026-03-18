/*
 * XREFs of KeAreApcsDisabled @ 0x1400B0EF0
 * Callers:
 *     sub_14016A6A0 @ 0x14016A6A0 (sub_14016A6A0.c)
 * Callees:
 *     <none>
 */

BOOLEAN KeAreApcsDisabled(void)
{
  return KeGetCurrentThread()->WaitBlock[3].SpareLong != 0;
}
