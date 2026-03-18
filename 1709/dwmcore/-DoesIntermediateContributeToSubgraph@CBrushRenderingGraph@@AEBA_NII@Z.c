/*
 * XREFs of ?DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z @ 0x18006EF94
 * Callers:
 *     ?DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z @ 0x18006EF94 (-DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18006F640 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180188018 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ @ 0x18006BA90 (-IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ.c)
 *     ?DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z @ 0x18006EF94 (-DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z.c)
 */

char __fastcall CBrushRenderingGraph::DoesIntermediateContributeToSubgraph(
        CBrushRenderingGraph *this,
        unsigned int a2,
        unsigned int a3)
{
  bool DoesIntermediateContributeToSubgraph; // bl
  CBrushRenderingGraph *v5; // r8
  unsigned int v6; // esi
  __int64 v7; // rdi
  unsigned int v8; // eax
  unsigned int *v9; // rdi
  __int64 v10; // rax
  unsigned int v13; // [rsp+48h] [rbp+10h]
  unsigned int v14; // [rsp+50h] [rbp+18h]

  DoesIntermediateContributeToSubgraph = 0;
  v5 = this;
  if ( a3 < a2 )
  {
    v6 = 0;
    v7 = *(_QWORD *)(*((_QWORD *)this + 38) + 8LL * a2);
    v8 = *(_DWORD *)(v7 + 92);
    v14 = v8;
    if ( v8 )
    {
      v9 = (unsigned int *)(v7 + 100);
      do
      {
        if ( *((_BYTE *)v9 + 4) )
        {
          v10 = *v9;
          v13 = v10;
          if ( (_DWORD)v10 == a3 )
            return 1;
          if ( CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(*(_QWORD *)(*((_QWORD *)v5 + 38)
                                                                                               + 8 * v10)
                                                                                   + 16LL)) )
            DoesIntermediateContributeToSubgraph = CBrushRenderingGraph::DoesIntermediateContributeToSubgraph(
                                                     this,
                                                     v13,
                                                     a3);
          if ( DoesIntermediateContributeToSubgraph )
            return DoesIntermediateContributeToSubgraph;
          v5 = this;
          v8 = v14;
        }
        ++v6;
        v9 += 8;
      }
      while ( v6 < v8 );
    }
  }
  return DoesIntermediateContributeToSubgraph;
}
