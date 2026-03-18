/*
 * XREFs of ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18006BC74
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x180007E98 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18006BDCC (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18006CEC8 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180162018 (-PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BG@@@@Z @ 0x1801620D8 (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 *     ?PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z @ 0x180162198 (-PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z.c)
 *     ?PushHDRToneMapVPBltLayer@CDrawingContext@@QEAAJXZ @ 0x180162224 (-PushHDRToneMapVPBltLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z @ 0x1801622D8 (-PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z.c)
 *     ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPointAndSizeL@@MM@Z @ 0x1801624A4 (-PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPoi.c)
 * Callees:
 *     ?ApplyState@CTreeEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180009780 (-ApplyState@CTreeEffectLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A6D8 (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180024DA0 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ @ 0x18006BA74 (-FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x1800BDD0C (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PushLayer(
        CDrawingContext *this,
        const struct CVisual *a2,
        struct CLayer *a3,
        char a4,
        bool a5)
{
  char v5; // r15
  char v6; // r12
  int v11; // eax
  int v12; // ebx
  unsigned int v13; // eax
  unsigned int v14; // edx
  __int64 (__fastcall *v16)(CTreeEffectLayer *, struct CDrawingContext *); // rax
  int v17; // eax
  int v18; // r9d
  int v19; // eax
  unsigned int v20; // [rsp+20h] [rbp-38h]
  _QWORD v21[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0;
  v6 = 0;
  if ( a4 )
  {
    v11 = CDrawingContext::FlushDeferredD2DLayers(this);
    v12 = v11;
    if ( v11 < 0 )
    {
      v20 = 5974;
LABEL_23:
      v18 = v11;
      goto LABEL_30;
    }
  }
  if ( a5 )
  {
    LODWORD(v21[0]) = 5;
    v21[1] = a2;
    v11 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((char *)this + 448, v21);
    v12 = v11;
    if ( v11 < 0 )
    {
      v20 = 5984;
      goto LABEL_23;
    }
    v5 = 1;
  }
  v21[0] = a3;
  v13 = *((_DWORD *)this + 142);
  v14 = v13 + 1;
  v12 = v13 + 1 < v13 ? 0x80070216 : 0;
  if ( v13 + 1 < v13 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB5u);
  }
  else if ( v14 > *((_DWORD *)this + 141) )
  {
    v19 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 544, 8LL, 1LL, v21);
    v12 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 68) + 8LL * v13) = v21[0];
    *((_DWORD *)this + 142) = v14;
  }
  if ( v12 < 0 )
  {
    v20 = 5991;
  }
  else
  {
    v6 = 1;
    if ( !a4
      || ((v16 = *(__int64 (__fastcall **)(CTreeEffectLayer *, struct CDrawingContext *))(*(_QWORD *)a3 + 16LL),
           v16 != CTreeEffectLayer::ApplyState)
        ? (v16 != CD2DLayer::ApplyState
         ? (v17 = v16(a3, this))
         : (v17 = CD2DLayer::ApplyState(a3, this)))
        : (v17 = CTreeEffectLayer::ApplyState(a3, this)),
          v12 = v17,
          v17 >= 0) )
    {
      ++dword_1802D6248;
      ++dword_1802D62F8;
      goto LABEL_11;
    }
    v20 = 5996;
  }
  v18 = v12;
LABEL_30:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, v20);
LABEL_11:
  if ( v12 < 0 )
  {
    if ( v6 )
      --*((_DWORD *)this + 142);
    if ( v5 )
      CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
        (int *)this + 112,
        0LL);
  }
  return (unsigned int)v12;
}
