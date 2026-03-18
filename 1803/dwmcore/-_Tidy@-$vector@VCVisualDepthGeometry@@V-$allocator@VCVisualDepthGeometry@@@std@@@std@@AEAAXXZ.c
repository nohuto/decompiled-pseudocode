/*
 * XREFs of ?_Tidy@?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@std@@AEAAXXZ @ 0x180211484
 * Callers:
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x1800A29B8 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ?PreComputePreSubgraph@CDepthSortingPreComputeHelper@@QEAAXPEAVCVisual@@@Z @ 0x1802124C0 (-PreComputePreSubgraph@CDepthSortingPreComputeHelper@@QEAAXPEAVCVisual@@@Z.c)
 *     ?_Change_array@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@AEAAXQEAVCDepthSortedVisualCollection@@_K1@Z @ 0x18021250C (-_Change_array@-$vector@VCDepthSortedVisualCollection@@V-$allocator@VCDepthSortedVisualCollectio.c)
 *     ?pop_back@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@QEAAXXZ @ 0x1802125C0 (-pop_back@-$vector@VCDepthSortedVisualCollection@@V-$allocator@VCDepthSortedVisualCollection@@@s.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CD5B4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall std::vector<CVisualDepthGeometry>::_Tidy(__int64 a1)
{
  char *v1; // rbx
  char *v3; // rsi

  v1 = *(char **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(char **)(a1 + 8);
    if ( v1 != v3 )
    {
      do
      {
        `vector destructor iterator'(
          v1 + 84,
          16LL,
          4LL,
          dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly);
        v1 += 192;
      }
      while ( v1 != v3 );
      v1 = *(char **)a1;
    }
    std::_Deallocate(v1, (*(_QWORD *)(a1 + 16) - (_QWORD)v1) / 192LL, 0xC0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
