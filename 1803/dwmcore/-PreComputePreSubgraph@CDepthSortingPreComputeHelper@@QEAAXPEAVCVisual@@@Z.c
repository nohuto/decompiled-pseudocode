/*
 * XREFs of ?PreComputePreSubgraph@CDepthSortingPreComputeHelper@@QEAAXPEAVCVisual@@@Z @ 0x1802124C0
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A0E20 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXXZ @ 0x1802113D8 (-_Tidy@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@std@@AEAAXXZ @ 0x180211484 (-_Tidy@-$vector@VCVisualDepthGeometry@@V-$allocator@VCVisualDepthGeometry@@@std@@@std@@AEAAXXZ.c)
 *     ??$emplace_back@VCDepthSortedVisualCollection@@@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@QEAAX$$QEAVCDepthSortedVisualCollection@@@Z @ 0x180212190 (--$emplace_back@VCDepthSortedVisualCollection@@@-$vector@VCDepthSortedVisualCollection@@V-$alloc.c)
 */

void __fastcall CDepthSortingPreComputeHelper::PreComputePreSubgraph(
        CDepthSortingPreComputeHelper *this,
        struct CVisual *a2)
{
  __int128 v2; // [rsp+20h] [rbp-48h] BYREF
  __int64 v3; // [rsp+30h] [rbp-38h]
  int v4; // [rsp+38h] [rbp-30h]
  __int128 v5; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp-18h]

  if ( *((_DWORD *)a2 + 25) == 3 )
  {
    v3 = 0LL;
    v4 = -1;
    v6 = 0LL;
    v2 = 0LL;
    v5 = 0LL;
    std::vector<CDepthSortedVisualCollection>::emplace_back<CDepthSortedVisualCollection>(this, (__int64)&v2);
    std::vector<CVisualDepthGeometry>::_Tidy((__int64)&v5);
    std::vector<CDepthSortingLayer>::_Tidy((__int64 *)&v2);
  }
}
