/*
 * XREFs of ?GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z @ 0x1800C0560
 * Callers:
 *     ?GetLogicalBackBuffer@CHwDisplayRenderTarget@@UEAAJPEAPEAVCD3DSurface@@@Z @ 0x1800466C0 (-GetLogicalBackBuffer@CHwDisplayRenderTarget@@UEAAJPEAPEAVCD3DSurface@@@Z.c)
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18007CA60 (-Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializa.c)
 *     ?HDRConvertFromSingleShaderResourceView@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUPixelFormatInfo@@22@Z @ 0x1801F2C4C (-HDRConvertFromSingleShaderResourceView@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourc.c)
 *     ?HDRConvertWithFakeOverlay@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@II0IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801F2DD4 (-HDRConvertWithFakeOverlay@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@II0IIA.c)
 *     ?IsDesktopDXGIResource@CHDRConversionRenderTarget@@IEBA_NPEAUIDXGIResource@@@Z @ 0x1801F30E8 (-IsDesktopDXGIResource@CHDRConversionRenderTarget@@IEBA_NPEAUIDXGIResource@@@Z.c)
 * Callees:
 *     ?GetLogicalBackBufferIndex@CDWMSwapChain@@UEBAII@Z @ 0x18007CC30 (-GetLogicalBackBufferIndex@CDWMSwapChain@@UEBAII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwapChainBase::GetLogicalBackBuffer(CSwapChainBase *this, struct CD3DSurface **a2)
{
  __int64 (__fastcall *v4)(CDWMSwapChain *, int); // rax
  unsigned int LogicalBackBufferIndex; // eax
  struct CD3DSurface *v6; // rcx

  v4 = *(__int64 (__fastcall **)(CDWMSwapChain *, int))(*(_QWORD *)this + 336LL);
  if ( v4 == CDWMSwapChain::GetLogicalBackBufferIndex )
    LogicalBackBufferIndex = CDWMSwapChain::GetLogicalBackBufferIndex(this, 0);
  else
    LogicalBackBufferIndex = v4(this, 0);
  v6 = *(struct CD3DSurface **)(*((_QWORD *)this + 48) + 8LL * LogicalBackBufferIndex);
  *a2 = v6;
  (**(void (__fastcall ***)(struct CD3DSurface *))v6)(v6);
  return 0LL;
}
