/*
 * XREFs of ?pop_back@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@QEAAXXZ @ 0x1802125C0
 * Callers:
 *     ?PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEAVCVisual@@0PEBVCVisualTree@@@Z @ 0x1802123E0 (-PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEAVCVisual@@0PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXXZ @ 0x1802113D8 (-_Tidy@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@std@@AEAAXXZ @ 0x180211484 (-_Tidy@-$vector@VCVisualDepthGeometry@@V-$allocator@VCVisualDepthGeometry@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::vector<CDepthSortedVisualCollection>::pop_back(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  std::vector<CVisualDepthGeometry>::_Tidy(v1 - 24);
  std::vector<CDepthSortingLayer>::_Tidy((__int64 *)(v1 - 56));
  *(_QWORD *)(a1 + 8) -= 56LL;
}
