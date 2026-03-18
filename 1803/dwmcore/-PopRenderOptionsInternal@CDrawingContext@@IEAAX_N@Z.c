/*
 * XREFs of ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180007C2C
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x180007DA8 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180060EAC (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x18006B3F0 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180090490 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x180150DB8 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?Draw@CPlaneCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015BA40 (-Draw@CPlaneCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801604F8 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180174B64 (-RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801764E0 (-RestoreState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801ADC70 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A6D8 (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 */

void __fastcall CDrawingContext::PopRenderOptionsInternal(CDrawingContext *this, char a2)
{
  CDrawingContext *v2; // r8
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int64 v8; // xmm1_8
  __int128 v9; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+30h] [rbp-10h]
  int v11; // [rsp+38h] [rbp-8h]

  v2 = this;
  if ( a2 )
    CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
      (char *)this + 448,
      &v9,
      this);
  v3 = *((_DWORD *)v2 + 244);
  if ( v3 )
  {
    v4 = (unsigned int)(v3 - 1);
    v5 = 28 * v4;
    *((_DWORD *)v2 + 244) = v4;
    v6 = *((_QWORD *)v2 + 124);
    v7 = *(_OWORD *)(v5 + v6);
    v8 = *(_QWORD *)(v5 + v6 + 16);
    LODWORD(v6) = *(_DWORD *)(v5 + v6 + 24);
    v9 = v7;
    v11 = v6;
    v10 = v8;
  }
  *((_BYTE *)v2 + 272) = v11;
  *(_QWORD *)((char *)v2 + 252) = v9;
  *((_DWORD *)v2 + 70) = DWORD2(v9);
  *((_DWORD *)v2 + 65) = HIDWORD(v9);
  *((_QWORD *)v2 + 33) = v10;
}
