/*
 * XREFs of ?Find@?$CAtlList@U_tagKSTOPOLOGY_ENDPOINTIDPAIR@@VRoutingPairsTraits@@@ATL@@QEBAPEAU__POSITION@@AEBU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@PEAU3@@Z @ 0x1800ED580
 * Callers:
 *     ?IsValidEndpointPair@TelephonyController@@UEAAJU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@PEAH@Z @ 0x1800EE6D0 (-IsValidEndpointPair@TelephonyController@@UEAAJU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@PEAH@Z.c)
 *     ?SetCellularRouting@TelephonyController@@UEAAJU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@@Z @ 0x1800EED00 (-SetCellularRouting@TelephonyController@@UEAAJU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@@Z.c)
 * Callees:
 *     ?CompareElements@RoutingPairsTraits@@SA_NAEBU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@0@Z @ 0x1800ED2FC (-CompareElements@RoutingPairsTraits@@SA_NAEBU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@0@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<_tagKSTOPOLOGY_ENDPOINTIDPAIR,RoutingPairsTraits>::Find(
        __int64 **a1,
        const struct _tagKSTOPOLOGY_ENDPOINTIDPAIR *a2)
{
  __int64 *i; // rbx

  for ( i = *a1; ; i = (__int64 *)*i )
  {
    if ( !i )
      return 0LL;
    if ( RoutingPairsTraits::CompareElements((const struct _tagKSTOPOLOGY_ENDPOINTIDPAIR *)(i + 2), a2) )
      break;
  }
  return i;
}
