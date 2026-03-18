/*
 * XREFs of ??0CHwCompSwapChainTarget@@IEAA@XZ @ 0x1801E440C
 * Callers:
 *     ?Create@CHwCompSwapChainTarget@@SAJPEAVCD3DDeviceLevel1@@IIAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1801E4558 (-Create@CHwCompSwapChainTarget@@SAJPEAVCD3DDeviceLevel1@@IIAEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z @ 0x180078ADC (--0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z.c)
 */

CHwCompSwapChainTarget *__fastcall CHwCompSwapChainTarget::CHwCompSwapChainTarget(CHwCompSwapChainTarget *this)
{
  CHwCompSwapChainTarget *result; // rax

  CHwSurfaceRenderTarget::CHwSurfaceRenderTarget((__int64)this);
  *(_QWORD *)this = &CHwCompSwapChainTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 20) = &CHwCompSwapChainTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 27) = &CHwCompSwapChainTarget::`vftable';
  result = this;
  *((_QWORD *)this + 28) = 0LL;
  return result;
}
