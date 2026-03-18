/*
 * XREFs of HvlRescindEnlightenments @ 0x14017B6CC
 * Callers:
 *     KiEnableKvaShadowing @ 0x140403784 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

void HvlRescindEnlightenments()
{
  _InterlockedOr(&HvlpRescindedEnlightenments, 1u);
  _InterlockedAnd(&HvlEnlightenments, 0xFFFFFFFE);
  _InterlockedAnd(&HvlpEnlightenments, 0xFFFFFFFE);
}
