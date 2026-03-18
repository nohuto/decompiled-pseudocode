/*
 * XREFs of ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18014D35C
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800A64B0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18000D2D0 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z @ 0x18000D88C (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z.c)
 *     ??_ECColorSpaceLayer@@UEAAPEAXI@Z @ 0x180014200 (--_ECColorSpaceLayer@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CColorSpaceLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x180157F58 (-Create@CColorSpaceLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SP.c)
 */

__int64 __fastcall CDrawingContext::PushColorSpaceLayer(
        struct IRenderTarget **this,
        const struct CVisual *a2,
        enum DXGI_COLOR_SPACE_TYPE a3)
{
  CColorSpaceLayer *v4; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  _BYTE v12[40]; // [rsp+30h] [rbp-28h] BYREF
  CColorSpaceLayer *v13; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0LL;
  v13 = 0LL;
  v7 = CDrawingContext::ComputeExternalLayerOffsetAndBounds((CDrawingContext *)this, (struct MilPointAndSizeL *)v12);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x17B1u);
  }
  else
  {
    v9 = CColorSpaceLayer::Create(
           this[46],
           (const struct _GUID *)((char *)this[4] + 324),
           (const struct MilPointAndSizeL *)v12,
           a3,
           &v13);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x17B7u);
      v4 = v13;
    }
    else
    {
      v4 = v13;
      v10 = CDrawingContext::PushLayer((CDrawingContext *)this, a2, v13, 1, 1);
      v8 = v10;
      if ( v10 >= 0 )
        return v8;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x17BFu);
    }
  }
  if ( v4 )
    CColorSpaceLayer::`vector deleting destructor'(v4, 1);
  return v8;
}
