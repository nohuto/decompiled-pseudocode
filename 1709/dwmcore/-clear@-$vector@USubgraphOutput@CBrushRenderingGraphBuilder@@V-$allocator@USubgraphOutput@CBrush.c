/*
 * XREFs of ?clear@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@QEAAXXZ @ 0x18018C940
 * Callers:
 *     ?erase@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@@2@0@Z @ 0x18018C9E8 (-erase@-$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V-$allocator@USubgraphOutput@CBrush.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x1800B6D24 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::clear(__int64 *a1)
{
  __int64 v1; // r14
  __int64 i; // rdi
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // r15
  __int64 result; // rax

  v1 = a1[1];
  for ( i = *a1; i != v1; i += 16LL )
  {
    v4 = *(_QWORD *)(i + 8);
    if ( v4 )
    {
      WPF::ProcessHeapImpl::Free(*(void **)(v4 + 112));
      v5 = *(_QWORD *)(v4 + 32);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v4 + 40);
        while ( v5 != v6 )
        {
          std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>((void ***)(v5 + 8));
          v5 += 16LL;
        }
        WPF::ProcessHeapImpl::Free(*(void **)(v4 + 32));
        *(_QWORD *)(v4 + 32) = 0LL;
        *(_QWORD *)(v4 + 40) = 0LL;
        *(_QWORD *)(v4 + 48) = 0LL;
      }
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)v4);
      WPF::ProcessHeapImpl::Free((void *)v4);
    }
  }
  result = *a1;
  a1[1] = *a1;
  return result;
}
