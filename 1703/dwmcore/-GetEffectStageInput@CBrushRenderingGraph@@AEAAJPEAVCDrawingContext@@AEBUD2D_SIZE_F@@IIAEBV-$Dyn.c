/*
 * XREFs of ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV?$DynArrayIANoCtor@UEffectInput@@$03$0A@@@AEBV?$DynArrayIANoCtor@UEffectInput@@$04$0A@@@PEAUEffectInput@@@Z @ 0x18001932C
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800186FC (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 * Callees:
 *     ?GetInputMapping@CBrushRenderingGraph@@AEAAAEBUEffectInput@@IIAEBV?$DynArrayIANoCtor@UEffectInput@@$03$0A@@@AEBV?$DynArrayIANoCtor@UEffectInput@@$04$0A@@@@Z @ 0x1800186C0 (-GetInputMapping@CBrushRenderingGraph@@AEAAAEBUEffectInput@@IIAEBV-$DynArrayIANoCtor@UEffectInpu.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801802D0 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEff.c)
 */

__int64 __fastcall CBrushRenderingGraph::GetEffectStageInput(
        __int64 a1,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        unsigned int a4,
        unsigned int a5,
        _QWORD *a6,
        _QWORD *a7,
        struct EffectInput *a8)
{
  unsigned int v10; // ebx
  __int64 InputMapping; // rax
  CBrushRenderingGraph *v12; // r11
  int InputBrushParameters; // eax

  v10 = 0;
  InputMapping = CBrushRenderingGraph::GetInputMapping(a1, a4, a5, a6, a7);
  *(_OWORD *)a8 = *(_OWORD *)InputMapping;
  *((_OWORD *)a8 + 1) = *(_OWORD *)(InputMapping + 16);
  *((_OWORD *)a8 + 2) = *(_OWORD *)(InputMapping + 32);
  *((_OWORD *)a8 + 3) = *(_OWORD *)(InputMapping + 48);
  *((_OWORD *)a8 + 4) = *(_OWORD *)(InputMapping + 64);
  *((_QWORD *)a8 + 10) = *(_QWORD *)(InputMapping + 80);
  if ( !*((_BYTE *)a8 + 28) )
  {
    InputBrushParameters = CBrushRenderingGraph::GetInputBrushParameters(v12, a2, a3, a8);
    v10 = InputBrushParameters;
    if ( InputBrushParameters < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, InputBrushParameters, 0x57Cu);
  }
  return v10;
}
