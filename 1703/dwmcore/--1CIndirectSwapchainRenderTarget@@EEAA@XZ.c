/*
 * XREFs of ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x180148F90
 * Callers:
 *     ??_GCIndirectSwapchainRenderTarget@@EEAAPEAXI@Z @ 0x180149000 (--_GCIndirectSwapchainRenderTarget@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180129734 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

void __fastcall CIndirectSwapchainRenderTarget::~CIndirectSwapchainRenderTarget(CIndirectSwapchainRenderTarget *this)
{
  *(_QWORD *)this = &CIndirectSwapchainRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CIndirectSwapchainRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 14) = &CIndirectSwapchainRenderTarget::`vftable';
  CIndirectSwapchainRenderTarget::Unregister(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 53);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 47);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 43);
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
}
