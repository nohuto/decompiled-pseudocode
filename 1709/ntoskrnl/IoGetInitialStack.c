/*
 * XREFs of IoGetInitialStack @ 0x1406B7630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID IoGetInitialStack(void)
{
  return KeGetCurrentThread()->InitialStack;
}
