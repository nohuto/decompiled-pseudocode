/*
 * XREFs of ?_Tidy@?$vector@UDepthGraphNode@@V?$allocator@UDepthGraphNode@@@std@@@std@@AEAAXXZ @ 0x1802201A4
 * Callers:
 *     ?SortVisuals@CDepthSortingLayer@@QEAA_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@AEBV?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@3@@Z @ 0x18021FF24 (-SortVisuals@CDepthSortingLayer@@QEAA_NPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::vector<DepthGraphNode>::_Tidy(__int64 a1)
{
  char *v1; // rbx
  char *v3; // rbp
  _QWORD *v4; // rdi
  char *v5; // rcx

  v1 = *(char **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(char **)(a1 + 8);
    if ( v1 != v3 )
    {
      v4 = v1 + 40;
      do
      {
        v5 = (char *)*(v4 - 2);
        if ( v5 )
        {
          std::_Deallocate(v5, (__int64)(*v4 - (_QWORD)v5) >> 3, 8uLL);
          *(v4 - 2) = 0LL;
          *(v4 - 1) = 0LL;
          *v4 = 0LL;
        }
        v1 += 56;
        v4 += 7;
      }
      while ( v1 != v3 );
      v1 = *(char **)a1;
    }
    std::_Deallocate(v1, (*(_QWORD *)(a1 + 16) - (_QWORD)v1) / 56LL, 0x38uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
