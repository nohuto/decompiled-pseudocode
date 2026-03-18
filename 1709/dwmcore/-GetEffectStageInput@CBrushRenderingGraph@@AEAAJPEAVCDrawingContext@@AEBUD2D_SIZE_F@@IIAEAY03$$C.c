/*
 * XREFs of ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEAY03$$CBUEffectInput@@AEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@PEAU4@@Z @ 0x18006EFF8
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006E670 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 * Callees:
 *     ?GetInputMapping@CBrushRenderingGraph@@AEAAAEBUEffectInput@@IIAEAY03$$CBU2@AEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x18006E634 (-GetInputMapping@CBrushRenderingGraph@@AEAAAEBUEffectInput@@IIAEAY03$$CBU2@AEBV-$vector@UEffectI.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18006FB80 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEff.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x180070080 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBrushRenderingGraph::GetEffectStageInput(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        _QWORD *a7,
        struct EffectInput *a8)
{
  unsigned int v11; // ebx
  int InputBrushParameters; // eax

  v11 = 0;
  CBrushRenderingGraph::GetInputMapping((__int64)this, a4, a5, a6, a7);
  EffectInput::operator=(a8);
  if ( !*((_BYTE *)a8 + 44) )
  {
    InputBrushParameters = CBrushRenderingGraph::GetInputBrushParameters(this, a2, a3, a8);
    v11 = InputBrushParameters;
    if ( InputBrushParameters < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, InputBrushParameters, 0x551u);
  }
  return v11;
}
