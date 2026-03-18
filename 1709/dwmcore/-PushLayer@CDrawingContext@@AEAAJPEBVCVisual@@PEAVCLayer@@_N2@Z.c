/*
 * XREFs of ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18003B750
 * Callers:
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18003B87C (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x18003BAAC (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18003E870 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18013DE18 (-PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BE@@@@Z @ 0x18013DEF4 (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 *     ?PushHDRToneMapVPBltLayer@CDrawingContext@@QEAAJXZ @ 0x18013DFD0 (-PushHDRToneMapVPBltLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z @ 0x18013E0A0 (-PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z.c)
 *     ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPointAndSizeL@@MM@Z @ 0x18013E270 (-PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPoi.c)
 * Callees:
 *     ?FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ @ 0x18003B568 (-FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ.c)
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180045A3C (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x180045A8C (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800818D0 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
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
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 (__fastcall *v17)(CD2DLayer *__hidden, struct CDrawingContext *); // rax
  int v18; // eax
  int v19; // r9d
  int v20; // eax
  unsigned int v21; // [rsp+20h] [rbp-48h]
  _QWORD v22[7]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v23; // [rsp+88h] [rbp+20h]

  v5 = 0;
  v6 = 0;
  if ( a4 )
  {
    v11 = CDrawingContext::FlushDeferredD2DLayers(this);
    v12 = v11;
    if ( v11 < 0 )
    {
      v21 = 5891;
LABEL_22:
      v19 = v11;
      goto LABEL_29;
    }
  }
  if ( a5 )
  {
    LODWORD(v22[0]) = 5;
    v22[1] = a2;
    v11 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)this + 448, v22);
    v12 = v11;
    if ( v11 < 0 )
    {
      v21 = 5901;
      goto LABEL_22;
    }
    v5 = 1;
  }
  v13 = v23;
  v14 = *((unsigned int *)this + 142);
  v22[0] = a3;
  v15 = v14 + 1;
  if ( (int)v14 + 1 >= (unsigned int)v14 )
    v13 = v14 + 1;
  v12 = v15 < (unsigned int)v14 ? 0x80070216 : 0;
  if ( v15 < (unsigned int)v14 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB5u);
  }
  else if ( v13 > *((_DWORD *)this + 141) )
  {
    v20 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 544, 8LL, 1LL, v22);
    v12 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 68) + 8 * v14) = v22[0];
    *((_DWORD *)this + 142) = v13;
  }
  if ( v12 < 0 )
  {
    v21 = 5908;
  }
  else
  {
    v6 = 1;
    if ( !a4 )
      goto LABEL_12;
    v17 = *(__int64 (__fastcall **)(CD2DLayer *__hidden, struct CDrawingContext *))(*(_QWORD *)a3 + 16LL);
    if ( v17 == CD2DLayer::ApplyState )
      v18 = CD2DLayer::ApplyState(a3, this);
    else
      v18 = v17(a3, this);
    v12 = v18;
    if ( v18 >= 0 )
      return (unsigned int)v12;
    v21 = 5913;
  }
  v19 = v12;
LABEL_29:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, v21);
LABEL_12:
  if ( v12 < 0 )
  {
    if ( v6 )
      --*((_DWORD *)this + 142);
    if ( v5 )
      CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
        (char *)this + 448,
        0LL);
  }
  return (unsigned int)v12;
}
