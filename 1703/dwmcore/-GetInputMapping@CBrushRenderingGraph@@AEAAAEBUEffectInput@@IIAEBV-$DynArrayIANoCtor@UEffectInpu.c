/*
 * XREFs of ?GetInputMapping@CBrushRenderingGraph@@AEAAAEBUEffectInput@@IIAEBV?$DynArrayIANoCtor@UEffectInput@@$03$0A@@@AEBV?$DynArrayIANoCtor@UEffectInput@@$04$0A@@@@Z @ 0x1800186C0
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800186FC (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 *     ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV?$DynArrayIANoCtor@UEffectInput@@$03$0A@@@AEBV?$DynArrayIANoCtor@UEffectInput@@$04$0A@@@PEAUEffectInput@@@Z @ 0x18001932C (-GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV-$Dyn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBrushRenderingGraph::GetInputMapping(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        _QWORD *a5)
{
  __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  v5 = a2;
  v6 = 32LL * a3;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 304) + 8 * v5);
  v8 = *(unsigned int *)(v7 + v6 + 116);
  if ( *(_BYTE *)(v7 + v6 + 120) )
    return *a5 + 88 * v8;
  else
    return *a4 + 88 * v8;
}
