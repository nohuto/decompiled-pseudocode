/*
 * XREFs of KeStallWhileFrozen @ 0x1402472A0
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckStall @ 0x140247470 (KiCheckStall.c)
 */

__int64 KeStallWhileFrozen()
{
  return KiCheckStall(KeGetCurrentPrcb(), 0LL);
}
