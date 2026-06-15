/*
 * XREFs of ?RemoveAll@?$CAtlList@U_tagKSTOPOLOGY_ENDPOINTIDPAIR@@VRoutingPairsTraits@@@ATL@@QEAAXXZ @ 0x1800EEA18
 * Callers:
 *     ??1TelephonyController@@MEAA@XZ @ 0x1800ED260 (--1TelephonyController@@MEAA@XZ.c)
 *     ?Initialize@TelephonyController@@IEAAJXZ @ 0x1800EDC74 (-Initialize@TelephonyController@@IEAAJXZ.c)
 *     ?RemoveAll@?$CAtlList@U_tagKSTOPOLOGY_ENDPOINTIDPAIR@@VRoutingPairsTraits@@@ATL@@QEAAXXZ @ 0x1800EEA18 (-RemoveAll@-$CAtlList@U_tagKSTOPOLOGY_ENDPOINTIDPAIR@@VRoutingPairsTraits@@@ATL@@QEAAXXZ.c)
 * Callees:
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x18005A990 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RemoveAll@?$CAtlList@U_tagKSTOPOLOGY_ENDPOINTIDPAIR@@VRoutingPairsTraits@@@ATL@@QEAAXXZ @ 0x1800EEA18 (-RemoveAll@-$CAtlList@U_tagKSTOPOLOGY_ENDPOINTIDPAIR@@VRoutingPairsTraits@@@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CAtlList<_tagKSTOPOLOGY_ENDPOINTIDPAIR,RoutingPairsTraits>::RemoveAll(__int64 a1)
{
  _QWORD *v2; // rcx
  bool v3; // zf
  ATL::CAtlPlex **v4; // rcx

  while ( *(_QWORD *)(a1 + 16) )
  {
    v2 = *(_QWORD **)a1;
    if ( !*(_QWORD *)a1 )
      ATL::AtlThrowImpl(-2147467259);
    *(_QWORD *)a1 = *v2;
    *v2 = *(_QWORD *)(a1 + 32);
    v3 = (*(_QWORD *)(a1 + 16))-- == 1LL;
    *(_QWORD *)(a1 + 32) = v2;
    if ( v3 )
      ATL::CAtlList<_tagKSTOPOLOGY_ENDPOINTIDPAIR,RoutingPairsTraits>::RemoveAll(a1);
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v4 = *(ATL::CAtlPlex ***)(a1 + 24);
  if ( v4 )
  {
    ATL::CAtlPlex::FreeDataChain(v4);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
