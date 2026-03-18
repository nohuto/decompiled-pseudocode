/*
 * XREFs of KeStallWhileFrozen @ 0x140203430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 KeStallWhileFrozen()
{
  return KiCheckStall(KeGetCurrentPrcb(), 0LL);
}
