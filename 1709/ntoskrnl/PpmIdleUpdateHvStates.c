/*
 * XREFs of PpmIdleUpdateHvStates @ 0x14070C650
 * Callers:
 *     <none>
 * Callees:
 *     HvlGetLpIndexFromApicId @ 0x1401E9ED0 (HvlGetLpIndexFromApicId.c)
 *     HvlConfigureIdleStates @ 0x1401EE198 (HvlConfigureIdleStates.c)
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
