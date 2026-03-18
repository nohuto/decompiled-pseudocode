/*
 * XREFs of ?_Change_array@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@AEAAXQEAVCDepthSortedVisualCollection@@_K1@Z @ 0x18021250C
 * Callers:
 *     ??$emplace_back@VCDepthSortedVisualCollection@@@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@QEAAX$$QEAVCDepthSortedVisualCollection@@@Z @ 0x180212190 (--$emplace_back@VCDepthSortedVisualCollection@@@-$vector@VCDepthSortedVisualCollection@@V-$alloc.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Tidy@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXXZ @ 0x1802113D8 (-_Tidy@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@std@@AEAAXXZ @ 0x180211484 (-_Tidy@-$vector@VCVisualDepthGeometry@@V-$allocator@VCVisualDepthGeometry@@@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::vector<CDepthSortedVisualCollection>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v4; // rbx
  __int64 *v9; // rbp
  __int64 result; // rax

  v4 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(__int64 **)(a1 + 8);
    if ( v4 != v9 )
    {
      do
      {
        std::vector<CVisualDepthGeometry>::_Tidy((__int64)(v4 + 4));
        std::vector<CDepthSortingLayer>::_Tidy(v4);
        v4 += 7;
      }
      while ( v4 != v9 );
      v4 = *(__int64 **)a1;
    }
    std::_Deallocate((char *)v4, (*(_QWORD *)(a1 + 16) - (_QWORD)v4) / 56LL, 0x38uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 56 * a3;
  result = a2 + 56 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
