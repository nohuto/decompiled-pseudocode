/*
 * XREFs of ?erase@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@@2@0@Z @ 0x18018C9E8
 * Callers:
 *     ?resize@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@QEAAX_K@Z @ 0x1800B92A8 (-resize@-$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V-$allocator@USubgraphOutput@CBrus.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x1800B6D24 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??4?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B6D34 (--4-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?clear@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@QEAAXXZ @ 0x18018C940 (-clear@-$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V-$allocator@USubgraphOutput@CBrush.c)
 */

__int64 **__fastcall std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::erase(
        __int64 *a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v4; // rdi
  __int64 **v6; // r13
  __int64 *v8; // r12
  __int64 *v9; // r14
  signed __int64 v10; // r15
  signed __int64 v11; // rbp
  __int64 *v12; // r12
  __int64 *v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // r13

  v4 = a4;
  v6 = a2;
  if ( a3 == (__int64 *)*a1 && a4 == (__int64 *)a1[1] )
  {
    std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::clear(a1);
  }
  else if ( a3 != a4 )
  {
    v8 = (__int64 *)a1[1];
    v9 = a3;
    if ( a4 != v8 )
    {
      v10 = (char *)a4 - (char *)a3;
      v11 = (char *)a3 - (char *)a4;
      do
      {
        *(_DWORD *)v9 = *(_DWORD *)v4;
        std::unique_ptr<CRenderingTechniqueFragment>::operator=(
          (void ***)((char *)v4 + v11 + 8),
          (void ***)((char *)v4 + v11 + v10 + 8));
        v9 += 2;
        v4 += 2;
      }
      while ( v4 != v8 );
    }
    v12 = (__int64 *)a1[1];
    if ( v9 != v12 )
    {
      v13 = v9 + 1;
      do
      {
        v14 = *v13;
        if ( *v13 )
        {
          WPF::ProcessHeapImpl::Free(*(void **)(v14 + 112));
          v15 = *(_QWORD *)(v14 + 32);
          if ( v15 )
          {
            if ( v15 != *(_QWORD *)(v14 + 40) )
            {
              v16 = *(_QWORD *)(v14 + 40);
              do
              {
                std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>((void ***)(v15 + 8));
                v15 += 16LL;
              }
              while ( v15 != v16 );
            }
            WPF::ProcessHeapImpl::Free(*(void **)(v14 + 32));
            *(_QWORD *)(v14 + 32) = 0LL;
            *(_QWORD *)(v14 + 40) = 0LL;
            *(_QWORD *)(v14 + 48) = 0LL;
          }
          Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)v14);
          WPF::ProcessHeapImpl::Free((void *)v14);
        }
        v13 += 2;
      }
      while ( v13 - 1 != v12 );
      v6 = a2;
    }
    a1[1] = (__int64)v9;
  }
  *v6 = a3;
  return v6;
}
