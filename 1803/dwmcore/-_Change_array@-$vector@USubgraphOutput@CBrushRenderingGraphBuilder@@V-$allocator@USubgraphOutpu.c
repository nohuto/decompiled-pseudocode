/*
 * XREFs of ?_Change_array@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@AEAAXQEAUSubgraphOutput@CBrushRenderingGraphBuilder@@_K1@Z @ 0x180037684
 * Callers:
 *     std::vector_CBrushRenderingGraphBuilder::SubgraphOutput_std::allocator_CBrushRenderingGraphBuilder::SubgraphOutput___::_Resize__lambda_dff6e1f67755268cd94743775101cf3d___ @ 0x1800376E8 (std--vector_CBrushRenderingGraphBuilder--SubgraphOutput_std--allocator_CBrushRenderingGraphBuild.c)
 * Callees:
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x18003673C (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v9; // r15
  CRenderingTechniqueFragment *v10; // rcx

  v4 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(_QWORD **)(a1 + 8);
    if ( v4 != v9 )
    {
      do
      {
        v10 = (CRenderingTechniqueFragment *)v4[1];
        if ( v10 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v10);
        v4 += 2;
      }
      while ( v4 != v9 );
      v4 = *(_QWORD **)a1;
    }
    std::_Deallocate(v4, (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v4) >> 4, 0x10uLL);
  }
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
  *(_QWORD *)a1 = a2;
}
