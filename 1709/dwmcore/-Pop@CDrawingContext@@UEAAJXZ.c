/*
 * XREFs of ?Pop@CDrawingContext@@UEAAJXZ @ 0x18003B440
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18001E590 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?PopAlpha@CDrawingContext@@AEAAX_N@Z @ 0x18003B6C0 (-PopAlpha@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18003B6EC (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180041C44 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180043A30 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180045A3C (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?Top@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180045A64 (-Top@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Pop@CLightStack@@QEAAJXZ @ 0x18009E8F8 (-Pop@CLightStack@@QEAAJXZ.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x18011AC0C (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x18011ACB4 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 */

__int64 __fastcall CDrawingContext::Pop(CDrawingContext *this)
{
  char *v1; // rsi
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v8; // eax
  int v9; // eax
  _DWORD v10[6]; // [rsp+30h] [rbp-18h] BYREF

  v1 = (char *)this + 448;
  v3 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Top(
         (char *)this + 448,
         v10);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x1906u);
  if ( v10[0] > 6 )
  {
    switch ( v10[0] )
    {
      case 7:
        CDrawingContext::PopAlpha(this, 1);
        break;
      case 8:
        CDrawingContext::PopRenderOptionsInternal(this, 1);
        break;
      case 9:
        CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(v1, v10);
        v9 = CLightStack::Pop((CDrawingContext *)((char *)this + 672));
        v4 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x267Du);
        if ( v4 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x192Au);
        break;
      case 0xA:
        CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(v1, v10);
        --*((_DWORD *)this + 234);
        break;
    }
  }
  else if ( v10[0] >= 5 )
  {
    v8 = CDrawingContext::PopLayer(this);
    v4 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x191Au);
  }
  else
  {
    switch ( v10[0] )
    {
      case 1:
        CDrawingContext::PopGpuClipRectInternal(this, 1);
        break;
      case 2:
        CDrawingContext::PopCpuClip(this);
        break;
      case 3:
        CDrawingContext::PopClippingScope(this, 1);
        break;
      case 4:
        CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(v1, v10);
        v5 = *((_DWORD *)this + 120);
        if ( v5 )
          *((_DWORD *)this + 120) = v5 - 1;
        v6 = *((_DWORD *)this + 128);
        if ( v6 )
          *((_DWORD *)this + 128) = v6 - 1;
        *((_BYTE *)this + 6824) = 1;
        break;
    }
  }
  return (unsigned int)v4;
}
