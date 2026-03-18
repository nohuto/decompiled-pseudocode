/*
 * XREFs of PpmIdleUpdateHvStates @ 0x14076FB10
 * Callers:
 *     <none>
 * Callees:
 *     HvlGetLpIndexFromApicId @ 0x140226F70 (HvlGetLpIndexFromApicId.c)
 *     HvlConfigureIdleStates @ 0x14022BA34 (HvlConfigureIdleStates.c)
 */

__int64 __fastcall PpmIdleUpdateHvStates(__int64 a1)
{
  int LpIndexFromApicId; // eax

  if ( (HvlEnlightenments & 0x408) == 0 )
    return 3221225659LL;
  LpIndexFromApicId = HvlGetLpIndexFromApicId(*(unsigned int *)(a1 + 4));
  if ( LpIndexFromApicId == -1 )
    return 3221225485LL;
  else
    return HvlConfigureIdleStates(LpIndexFromApicId, *(_OWORD **)(a1 + 8));
}
