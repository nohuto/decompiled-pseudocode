/*
 * XREFs of ?Pop@CDrawingContext@@UEAAJXZ @ 0x1800A6380
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x180083B90 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18000CC78 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18000CD28 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PopAlpha@CDrawingContext@@AEAAX_N@Z @ 0x18000D258 (-PopAlpha@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18000D284 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800BF3E8 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?Top@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800BF410 (-Top@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x18012CFA4 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x18012D04C (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     ?Pop@CLightStack@@QEAAJXZ @ 0x18015610C (-Pop@CLightStack@@QEAAJXZ.c)
 */

__int64 __fastcall CDrawingContext::Pop(CDrawingContext *this)
{
  char *v1; // rsi
  int v3; // eax
  __int64 v4; // r8
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v9; // eax
  int v10; // eax
  _DWORD v11[6]; // [rsp+30h] [rbp-18h] BYREF

  v1 = (char *)this + 440;
  v3 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Top(
         (char *)this + 440,
         v11);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x1B2Eu);
  if ( v11[0] > 6 )
  {
    switch ( v11[0] )
    {
      case 7:
        CDrawingContext::PopAlpha(this, 1);
        break;
      case 8:
        CDrawingContext::PopRenderOptionsInternal(this, 1);
        break;
      case 9:
        CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v1, v11, v4);
        v10 = CLightStack::Pop((CDrawingContext *)((char *)this + 664));
        v5 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x2878u);
        if ( v5 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1B52u);
        break;
      case 0xA:
        CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v1, v11, v4);
        --*((_DWORD *)this + 210);
        break;
    }
  }
  else if ( v11[0] >= 5 )
  {
    v9 = CDrawingContext::PopLayer(this);
    v5 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1B42u);
  }
  else
  {
    switch ( v11[0] )
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
        CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v1, v11, v4);
        v6 = *((_DWORD *)this + 118);
        if ( v6 )
          *((_DWORD *)this + 118) = v6 - 1;
        v7 = *((_DWORD *)this + 126);
        if ( v7 )
          *((_DWORD *)this + 126) = v7 - 1;
        *((_BYTE *)this + 6768) = 1;
        break;
    }
  }
  return (unsigned int)v5;
}
