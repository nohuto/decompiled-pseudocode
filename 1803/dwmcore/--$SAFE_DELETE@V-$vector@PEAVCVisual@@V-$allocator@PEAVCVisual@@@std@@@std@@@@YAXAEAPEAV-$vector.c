/*
 * XREFs of ??$SAFE_DELETE@V?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@@YAXAEAPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x1801A6ED0
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18004BFF0 (--1CVisual@@MEAA@XZ.c)
 *     ?DeleteDepthSortedList@CVisual@@AEAAXXZ @ 0x18013C71C (-DeleteDepthSortedList@CVisual@@AEAAXXZ.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall SAFE_DELETE<std::vector<CVisual *>>(__int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    if ( *(_QWORD *)v1 )
    {
      std::_Deallocate(*(char **)v1, (__int64)(*(_QWORD *)(v1 + 16) - *(_QWORD *)v1) >> 3, 8uLL);
      *(_QWORD *)v1 = 0LL;
      *(_QWORD *)(v1 + 8) = 0LL;
      *(_QWORD *)(v1 + 16) = 0LL;
    }
    operator delete((void *)v1);
    *a1 = 0LL;
  }
}
