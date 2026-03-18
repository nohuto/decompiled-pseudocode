/*
 * XREFs of KeStallWhileFrozen @ 0x140209720
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckStall @ 0x1402098AC (KiCheckStall.c)
 */

__int64 KeStallWhileFrozen()
{
  return KiCheckStall(KeGetCurrentPrcb(), 0LL);
}
