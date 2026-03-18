/*
 * XREFs of ??1CMagnifierRenderTarget@@EEAA@XZ @ 0x180137DD8
 * Callers:
 *     ??_GCMagnifierRenderTarget@@EEAAPEAXI@Z @ 0x180137E30 (--_GCMagnifierRenderTarget@@EEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMagnifierRenderTarget::~CMagnifierRenderTarget(CMagnifierRenderTarget *this)
{
  *(_QWORD *)this = &CMagnifierRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CMagnifierRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 14) = &CMagnifierRenderTarget::`vftable';
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
}
