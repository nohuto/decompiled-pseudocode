/*
 * XREFs of HvlIsHypercallOverlayLocked @ 0x1401E996C
 * Callers:
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 * Callees:
 *     <none>
 */

bool HvlIsHypercallOverlayLocked()
{
  return (HvlEnlightenments & 0x100000) != 0;
}
