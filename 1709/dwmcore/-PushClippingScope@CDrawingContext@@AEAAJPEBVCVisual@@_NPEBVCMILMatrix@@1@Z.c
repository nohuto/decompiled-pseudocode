/*
 * XREFs of ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z @ 0x18003CC3C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180042D8C (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18013CE88 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?EnterClippingScope@CScopedClipStack@@QEAAJ_NPEBVCMILMatrix@@@Z @ 0x180031F20 (-EnterClippingScope@CScopedClipStack@@QEAAJ_NPEBVCMILMatrix@@@Z.c)
 *     ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x18003B5DC (-FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ.c)
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180045A3C (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x180045A8C (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawingContext::PushClippingScope(
        CDrawingContext *this,
        const struct CVisual *a2,
        char a3,
        const struct CMILMatrix *a4,
        bool a5)
{
  char v9; // bp
  char v10; // si
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v16; // [rsp+30h] [rbp-28h] BYREF
  const struct CVisual *v17; // [rsp+38h] [rbp-20h]

  v9 = 0;
  v10 = 0;
  v11 = CDrawingContext::FlushAllDeferredClipping(this);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x1214u);
  }
  else
  {
    if ( a5 )
    {
      v16 = 3;
      v17 = a2;
      v13 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)this + 448, &v16);
      v12 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x1219u);
        goto LABEL_7;
      }
      v9 = 1;
    }
    v14 = CScopedClipStack::EnterClippingScope((CDrawingContext *)((char *)this + 1008), a3, a4);
    v12 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x121Du);
    else
      v10 = 1;
  }
LABEL_7:
  if ( v12 < 0 )
  {
    if ( v10 )
      --*((_DWORD *)this + 258);
    if ( v9 )
      CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
        (char *)this + 448,
        0LL);
  }
  return (unsigned int)v12;
}
