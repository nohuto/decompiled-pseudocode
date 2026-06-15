/*
 * XREFs of ?IsValidEndpointPair@TelephonyController@@UEAAJU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@PEAH@Z @ 0x18011B850
 * Callers:
 *     <none>
 * Callees:
 *     ?Find@?$CAtlList@U_tagKSTOPOLOGY_ENDPOINTIDPAIR@@VRoutingPairsTraits@@@ATL@@QEBAPEAU__POSITION@@AEBU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@PEAU3@@Z @ 0x18011A674 (-Find@-$CAtlList@U_tagKSTOPOLOGY_ENDPOINTIDPAIR@@VRoutingPairsTraits@@@ATL@@QEBAPEAU__POSITION@@.c)
 */

__int64 __fastcall TelephonyController::IsValidEndpointPair(
        __int64 a1,
        const struct _tagKSTOPOLOGY_ENDPOINTIDPAIR *a2,
        _DWORD *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( a3 )
    *a3 = ATL::CAtlList<_tagKSTOPOLOGY_ENDPOINTIDPAIR,RoutingPairsTraits>::Find((__int64 **)(a1 + 80), a2) != 0LL;
  else
    return (unsigned int)-2147467261;
  return v3;
}
