/*
 * XREFs of ?GetInputMapping@CBrushRenderingGraph@@AEAAAEBUEffectInput@@IIAEAY03$$CBU2@AEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x18006E634
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006E670 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 *     ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEAY03$$CBUEffectInput@@AEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@PEAU4@@Z @ 0x18006EFF8 (-GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEAY03$$C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBrushRenderingGraph::GetInputMapping(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  v5 = a2;
  v6 = 32LL * a3;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 304) + 8 * v5);
  v8 = *(unsigned int *)(v7 + v6 + 100);
  if ( *(_BYTE *)(v7 + v6 + 104) )
    return *a5 + 104 * v8;
  else
    return a4 + 104 * v8;
}
