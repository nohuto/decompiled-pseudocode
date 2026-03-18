/*
 * XREFs of itrp_RoundOff @ 0x1C02D1CFC
 * Callers:
 *     InvokeRoundValue @ 0x1C02C94DC (InvokeRoundValue.c)
 *     itrp_MDRP @ 0x1C02CF350 (itrp_MDRP.c)
 *     itrp_MIRP @ 0x1C02CFC80 (itrp_MIRP.c)
 *     itrp_NROUND @ 0x1C02D0D90 (itrp_NROUND.c)
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
