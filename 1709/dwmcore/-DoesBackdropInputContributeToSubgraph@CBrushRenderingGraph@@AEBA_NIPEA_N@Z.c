/*
 * XREFs of ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z @ 0x180187F30
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006E670 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 *     ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z @ 0x180187F30 (-DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z.c)
 * Callees:
 *     ?IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ @ 0x18006BA90 (-IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ.c)
 *     ?IsWindowBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z @ 0x18006FE70 (-IsWindowBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z.c)
 *     ?IsBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z @ 0x18006FEC4 (-IsBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z.c)
 *     ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z @ 0x180187F30 (-DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z.c)
 */

char __fastcall CBrushRenderingGraph::DoesBackdropInputContributeToSubgraph(
        CBrushRenderingGraph *this,
        unsigned int a2,
        bool *a3)
{
  char v3; // bl
  CBrushRenderingGraph *v4; // r8
  char v5; // si
  __int64 v6; // rdi
  unsigned int *v7; // rdi
  __int64 v8; // rbp
  char v9; // cl
  bool v10; // al
  unsigned int v12; // [rsp+20h] [rbp-38h]
  unsigned int v15; // [rsp+78h] [rbp+20h]

  v3 = 0;
  v4 = this;
  v5 = 0;
  v15 = 0;
  v6 = *(_QWORD *)(*((_QWORD *)this + 38) + 8LL * a2);
  v12 = *(_DWORD *)(v6 + 92);
  if ( v12 )
  {
    v7 = (unsigned int *)(v6 + 100);
    do
    {
      v8 = *v7;
      if ( *((_BYTE *)v7 + 4) )
      {
        if ( CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(*(_QWORD *)(*((_QWORD *)v4 + 38)
                                                                                             + 8 * v8)
                                                                                 + 16LL)) )
          v5 |= CBrushRenderingGraph::DoesBackdropInputContributeToSubgraph(this, v8, a3);
      }
      else if ( CBrushRenderingGraph::IsBackdropInput(v4, v8) || CBrushRenderingGraph::IsWindowBackdropInput(this, v8) )
      {
        v9 = 1;
        goto LABEL_13;
      }
      v7 += 8;
      v4 = this;
      ++v15;
    }
    while ( v15 < v12 );
    v9 = 0;
    if ( !v5 )
      goto LABEL_13;
    v10 = 1;
  }
  else
  {
    v9 = 0;
LABEL_13:
    v10 = 0;
  }
  *a3 = v10;
  if ( v9 || v5 )
    return 1;
  return v3;
}
