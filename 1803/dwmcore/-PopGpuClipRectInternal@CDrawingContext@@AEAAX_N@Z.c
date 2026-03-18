/*
 * XREFs of ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18013D0F8
 * Callers:
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180024B90 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x18006B3F0 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180158A6C (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801604F8 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x180175210 (-RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180175D5C (-RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A6D8 (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ @ 0x180062FD8 (-PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ.c)
 */

void __fastcall CDrawingContext::PopGpuClipRectInternal(CDrawingContext *this, char a2)
{
  CDrawingContext *v2; // r8
  __int64 v3; // r8
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v2 = this;
  if ( a2 )
    CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
      (int *)this + 112,
      &v4);
  CScopedClipStack::PopGpuClipFromScope((CDrawingContext *)((char *)v2 + 1008));
  *(_BYTE *)(v3 + 6825) = 1;
}
