/*
 * XREFs of HvlRescindEnlightenments @ 0x1400D2E3C
 * Callers:
 *     KiEnableKvaShadowing @ 0x14047BF08 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

void HvlRescindEnlightenments()
{
  _InterlockedOr(&HvlpRescindedEnlightenments, 1u);
  _InterlockedAnd(&HvlEnlightenments, 0xFFFFFFFE);
  _InterlockedAnd(&HvlpEnlightenments, 0xFFFFFFFE);
}
