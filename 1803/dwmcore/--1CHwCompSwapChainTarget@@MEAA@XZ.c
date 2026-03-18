/*
 * XREFs of ??1CHwCompSwapChainTarget@@MEAA@XZ @ 0x1801E4458
 * Callers:
 *     ??_ECHwCompSwapChainTarget@@MEAAPEAXI@Z @ 0x1801E44A0 (--_ECHwCompSwapChainTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CHwCompSwapChainTarget::~CHwCompSwapChainTarget(CHwCompSwapChainTarget *this)
{
  *(_QWORD *)this = &CHwCompSwapChainTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 20) = &CHwCompSwapChainTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 27) = &CHwCompSwapChainTarget::`vftable';
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 28);
  CHwSurfaceRenderTarget::~CHwSurfaceRenderTarget(this);
}
