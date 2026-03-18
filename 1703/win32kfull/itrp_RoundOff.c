/*
 * XREFs of itrp_RoundOff @ 0x1C02D7FF4
 * Callers:
 *     InvokeRoundValue @ 0x1C02CF758 (InvokeRoundValue.c)
 *     itrp_MDRP @ 0x1C02D5580 (itrp_MDRP.c)
 *     itrp_MIRP @ 0x1C02D5EC0 (itrp_MIRP.c)
 *     itrp_NROUND @ 0x1C02D6FD0 (itrp_NROUND.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_RoundOff(int a1, int a2)
{
  unsigned int v2; // r8d

  v2 = a1 + a2;
  if ( a1 < 0 )
    v2 = a1 - a2;
  if ( ((a1 ^ v2) & 0x80000000) != 0 && a1 )
    return 0;
  return v2;
}
