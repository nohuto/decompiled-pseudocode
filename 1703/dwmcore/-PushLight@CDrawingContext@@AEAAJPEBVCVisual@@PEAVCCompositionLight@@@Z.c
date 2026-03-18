/*
 * XREFs of ?PushLight@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCCompositionLight@@@Z @ 0x18014D5FC
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800BF3E8 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x1800BF438 (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?Push@CLightStack@@QEAAJPEAVCCompositionLight@@@Z @ 0x180156158 (-Push@CLightStack@@QEAAJPEAVCCompositionLight@@@Z.c)
 */

__int64 __fastcall CDrawingContext::PushLight(
        CDrawingContext *this,
        const struct CVisual *a2,
        struct CCompositionLight *a3)
{
  int *v3; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  v3 = (int *)((char *)this + 440);
  *((_QWORD *)&v10 + 1) = a2;
  LODWORD(v10) = 9;
  v6 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((unsigned int *)this + 110, &v10);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x285Fu);
  }
  else
  {
    v8 = CLightStack::Push((CDrawingContext *)((char *)this + 664), a3);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x2862u);
      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v3, 0LL);
    }
  }
  return v7;
}
