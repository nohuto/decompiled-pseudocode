/*
 * XREFs of ?GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z @ 0x18011B3B4
 * Callers:
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801B8790 (-Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializa.c)
 *     ?HDRConvertFromSingleShaderResourceView@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUPixelFormatInfo@@22@Z @ 0x1801B93DC (-HDRConvertFromSingleShaderResourceView@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourc.c)
 *     ?HDRConvertWithFakeOverlay@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@II0IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801B9564 (-HDRConvertWithFakeOverlay@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@II0IIA.c)
 *     ?IsDesktopDXGIResource@CHDRConversionRenderTarget@@IEBA_NPEAUIDXGIResource@@@Z @ 0x1801B9878 (-IsDesktopDXGIResource@CHDRConversionRenderTarget@@IEBA_NPEAUIDXGIResource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwapChainBase::GetLogicalBackBuffer(CSwapChainBase *this, struct CD3DSurface **a2)
{
  struct CD3DSurface *v2; // rcx

  v2 = (struct CD3DSurface *)**((_QWORD **)this + 47);
  *a2 = v2;
  (**(void (__fastcall ***)(struct CD3DSurface *))v2)(v2);
  return 0LL;
}
