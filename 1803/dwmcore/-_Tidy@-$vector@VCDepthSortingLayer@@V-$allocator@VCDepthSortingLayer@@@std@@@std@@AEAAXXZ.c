/*
 * XREFs of ?_Tidy@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXXZ @ 0x1802113D8
 * Callers:
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x1800A29B8 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ?PreComputePreSubgraph@CDepthSortingPreComputeHelper@@QEAAXPEAVCVisual@@@Z @ 0x1802124C0 (-PreComputePreSubgraph@CDepthSortingPreComputeHelper@@QEAAXPEAVCVisual@@@Z.c)
 *     ?_Change_array@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@AEAAXQEAVCDepthSortedVisualCollection@@_K1@Z @ 0x18021250C (-_Change_array@-$vector@VCDepthSortedVisualCollection@@V-$allocator@VCDepthSortedVisualCollectio.c)
 *     ?pop_back@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@QEAAXXZ @ 0x1802125C0 (-pop_back@-$vector@VCDepthSortedVisualCollection@@V-$allocator@VCDepthSortedVisualCollection@@@s.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::vector<CDepthSortingLayer>::_Tidy(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v1 != v3 )
    {
      do
      {
        if ( *(_QWORD *)v1 )
        {
          std::_Deallocate(*(char **)v1, (__int64)(*(_QWORD *)(v1 + 16) - *(_QWORD *)v1) >> 2, 4uLL);
          *(_QWORD *)v1 = 0LL;
          *(_QWORD *)(v1 + 8) = 0LL;
          *(_QWORD *)(v1 + 16) = 0LL;
        }
        v1 += 40LL;
      }
      while ( v1 != v3 );
      v1 = *a1;
    }
    std::_Deallocate((char *)v1, (a1[2] - v1) / 40, 0x28uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
