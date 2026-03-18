/*
 * XREFs of ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z @ 0x18000D8F8
 * Callers:
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18000F688 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x18000D124 (-FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ.c)
 *     ?EnterClippingScope@CScopedClipStack@@QEAAJ_NPEBVCMILMatrix@@@Z @ 0x18000F9B0 (-EnterClippingScope@CScopedClipStack@@QEAAJ_NPEBVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800BF3E8 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x1800BF438 (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 */

__int64 __fastcall CDrawingContext::PushClippingScope(
        CDrawingContext *this,
        const struct CVisual *a2,
        bool a3,
        const struct CMILMatrix *a4,
        bool a5)
{
  char v9; // bp
  char v10; // si
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  __int64 v15; // r8
  int v17; // [rsp+30h] [rbp-28h] BYREF
  const struct CVisual *v18; // [rsp+38h] [rbp-20h]

  v9 = 0;
  v10 = 0;
  v11 = CDrawingContext::FlushAllDeferredClipping(this);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x145Eu);
  }
  else
  {
    if ( a5 )
    {
      v17 = 3;
      v18 = a2;
      v13 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)this + 440, &v17);
      v12 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1463u);
        goto LABEL_7;
      }
      v9 = 1;
    }
    v14 = CScopedClipStack::EnterClippingScope((CDrawingContext *)((char *)this + 912), a3, a4);
    v12 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x1467u);
    else
      v10 = 1;
  }
LABEL_7:
  if ( v12 < 0 )
  {
    if ( v10 )
      --*((_DWORD *)this + 234);
    if ( v9 )
      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)this + 440, 0LL, v15);
  }
  return (unsigned int)v12;
}
