/*
 * XREFs of ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180081418
 * Callers:
 *     ??0CTreeEffectLayer@@IEAA@AEBUMilPointAndSizeL@@AEBUMilPointAndSizeF@@PEAVIRenderTargetBitmap@@PEAVCEffectBrush@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@4MM@Z @ 0x180080F6C (--0CTreeEffectLayer@@IEAA@AEBUMilPointAndSizeL@@AEBUMilPointAndSizeF@@PEAVIRenderTargetBitmap@@P.c)
 *     ?Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@_NPEAPEAV1@@Z @ 0x1800BF430 (-Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@.c)
 *     ?Create@CHDRToSDRToneMapLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_FORMAT@@PEAPEAV1@@Z @ 0x18014B47C (-Create@CHDRToSDRToneMapLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TY.c)
 *     ?Create@CColorSpaceLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x18014B8A8 (-Create@CColorSpaceLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@P.c)
 *     ?Create@CColorTransformLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BE@@@PEAPEAV1@@Z @ 0x18014BB78 (-Create@CColorTransformLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAV-$TValueResource@U.c)
 *     ?Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x18014C86C (-Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVC.c)
 *     ??0CLinearInterpolationLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@MM@Z @ 0x18014CCC8 (--0CLinearInterpolationLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@MM@Z.c)
 *     ??0CResampleLayer@@IEAA@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResampleMode@@PEAVIRenderTargetBitmap@@@Z @ 0x18014D258 (--0CResampleLayer@@IEAA@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResampleMode@@PEAVIRenderTarge.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

CExternalLayer *__fastcall CExternalLayer::CExternalLayer(
        CExternalLayer *this,
        const struct MilPointAndSizeL *a2,
        struct IRenderTargetBitmap *a3)
{
  __int128 v3; // xmm0

  v3 = *(_OWORD *)a2;
  *(_QWORD *)this = &CExternalLayer::`vftable';
  *((_DWORD *)this + 8) = 0;
  *((_BYTE *)this + 36) = 0;
  *((_OWORD *)this + 1) = v3;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 1) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)a3 + 8LL))(a3);
  return this;
}
