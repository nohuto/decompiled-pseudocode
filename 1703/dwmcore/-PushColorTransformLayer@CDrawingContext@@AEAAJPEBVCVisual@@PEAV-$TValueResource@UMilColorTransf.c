/*
 * XREFs of ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DJ@@@@Z @ 0x18014D448
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800A64B0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x1800D45E0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18000D2D0 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z @ 0x18000D88C (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_ECColorTransformLayer@@UEAAPEAXI@Z @ 0x18014ABC0 (--_ECColorTransformLayer@@UEAAPEAXI@Z.c)
 *     ?Create@CColorTransformLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DJ@@@PEAPEAV1@@Z @ 0x180158258 (-Create@CColorTransformLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAV-$TValu.c)
 */

__int64 __fastcall CDrawingContext::PushColorTransformLayer(CDrawingContext *this, struct CVisual *a2, __int64 a3)
{
  CColorTransformLayer *v4; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  _BYTE v12[40]; // [rsp+30h] [rbp-28h] BYREF
  CColorTransformLayer *v13; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0LL;
  v13 = 0LL;
  v7 = CDrawingContext::ComputeExternalLayerOffsetAndBounds(this, (struct MilPointAndSizeL *)v12);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x17DEu);
  }
  else
  {
    v9 = CColorTransformLayer::Create(*((_QWORD *)this + 46), *((_QWORD *)this + 4) + 324LL, v12, a3, &v13);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x17E4u);
      v4 = v13;
    }
    else
    {
      v4 = v13;
      v10 = CDrawingContext::PushLayer(this, a2, v13, 1, 1);
      v8 = v10;
      if ( v10 >= 0 )
        return v8;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x17ECu);
    }
  }
  if ( v4 )
    CColorTransformLayer::`vector deleting destructor'(v4, 1);
  return v8;
}
