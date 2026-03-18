/*
 * XREFs of ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@2PEAUEffectInput@@@Z @ 0x18008DC58
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18008EB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18008E6C0 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x18008F6E8 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 */

__int64 __fastcall CBrushRenderingGraph::GetEffectStageInput(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        unsigned int a4,
        unsigned int a5,
        _QWORD *a6,
        _QWORD *a7,
        struct EffectInput *a8)
{
  __int64 v10; // rbx
  unsigned int v12; // edi
  __int64 v14; // r10
  int InputBrushParameters; // eax

  v10 = 44LL * a5;
  v12 = 0;
  v14 = *(_QWORD *)(*((_QWORD *)this + 18) + 8LL * a4);
  if ( !*(_BYTE *)(v14 + v10 + 104) )
    a7 = a6;
  EffectInput::operator=(a8, *a7 + 104LL * *(unsigned int *)(v14 + v10 + 100));
  if ( !*((_BYTE *)a8 + 44) )
  {
    InputBrushParameters = CBrushRenderingGraph::GetInputBrushParameters(this, a2, a3, a4, a5, a8);
    v12 = InputBrushParameters;
    if ( InputBrushParameters < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, InputBrushParameters, 0x4F6u);
  }
  return v12;
}
