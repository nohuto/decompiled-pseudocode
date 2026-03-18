/*
 * XREFs of ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18000D2D0
 * Callers:
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18000D414 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x18000D620 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18000EB44 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z @ 0x1800A6430 (-PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z.c)
 *     ?PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBVCMILMatrix@@PEAVCShape@@@Z @ 0x18014D2B0 (-PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBVCMILMatrix@@PEAVCShape@@@Z.c)
 *     ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18014D35C (-PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DJ@@@@Z @ 0x18014D448 (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 *     ?PushHDRConversionLayer@CDrawingContext@@AEAAJXZ @ 0x18014D534 (-PushHDRConversionLayer@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ?FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ @ 0x18000D0B0 (-FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18000FB20 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800145C0 (-ApplyState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800BF3E8 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x1800BF438 (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
      v21 = 6441;
LABEL_24:
      v19 = v11;
      goto LABEL_31;
    }
  }
  if ( a5 )
  {
    LODWORD(v22[0]) = 5;
    v22[1] = a2;
    v11 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)this + 440, v22);
    v12 = v11;
    if ( v11 < 0 )
    {
      v21 = 6451;
      goto LABEL_24;
    }
    v5 = 1;
  }
  v13 = v23;
  v14 = *((unsigned int *)this + 140);
  v22[0] = a3;
  v15 = v14 + 1;
  if ( (int)v14 + 1 >= (unsigned int)v14 )
    v13 = v14 + 1;
  v12 = v15 < (unsigned int)v14 ? 0x80070216 : 0;
  if ( v15 < (unsigned int)v14 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xB5u);
  }
  else if ( v13 > *((_DWORD *)this + 139) )
  {
    v20 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 536, 8LL, 1LL, v22);
    v12 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 67) + 8 * v14) = v22[0];
    *((_DWORD *)this + 140) = v13;
  }
  if ( v12 < 0 )
  {
    v21 = 6458;
  }
  else
  {
    v6 = 1;
    if ( !a4 )
      goto LABEL_12;
    v17 = *(__int64 (__fastcall **)(CD2DLayer *__hidden, struct CDrawingContext *))(*(_QWORD *)a3 + 16LL);
    if ( v17 == CColorSpaceLayer::ApplyState )
    {
      v18 = CColorSpaceLayer::ApplyState(a3, this);
    }
    else if ( v17 == CD2DLayer::ApplyState )
    {
      v18 = CD2DLayer::ApplyState(a3, this);
    }
    else
    {
      v18 = v17(a3, this);
    }
    v12 = v18;
    if ( v18 >= 0 )
      return (unsigned int)v12;
    v21 = 6463;
  }
  v19 = v12;
LABEL_31:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, v21);
LABEL_12:
  if ( v12 < 0 )
  {
    if ( v6 )
      --*((_DWORD *)this + 140);
    if ( v5 )
      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)this + 440, 0LL, a3);
  }
  return (unsigned int)v12;
}
