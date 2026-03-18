/*
 * XREFs of itrp_RoundToGrid @ 0x1C02D1D58
 * Callers:
 *     InvokeRoundValue @ 0x1C02C94DC (InvokeRoundValue.c)
 *     itrp_EVEN @ 0x1C02CB090 (itrp_EVEN.c)
 *     itrp_ODD @ 0x1C02D0F60 (itrp_ODD.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_RoundToGrid(int a1, int a2)
{
  unsigned int v2; // edx

  if ( a1 < 0 )
    v2 = -((a2 - a1 + 32) & 0xFFFFFFC0);
  else
    v2 = (a1 + a2 + 32) & 0xFFFFFFC0;
  if ( ((a1 ^ v2) & 0x80000000) != 0 && a1 )
    return 0;
  return v2;
}
