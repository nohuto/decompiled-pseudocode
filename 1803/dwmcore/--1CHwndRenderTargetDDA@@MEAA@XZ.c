/*
 * XREFs of ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x18016FF28
 * Callers:
 *     ??_ECHwndRenderTargetDDA@@MEAAPEAXI@Z @ 0x18016FF90 (--_ECHwndRenderTargetDDA@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ @ 0x1800B784C (-ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800C2374 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 */

void __fastcall CHwndRenderTargetDDA::~CHwndRenderTargetDDA(CHwndRenderTargetDDA *this)
{
  __int64 *v2; // rdi
  CDisplay *v3; // rcx

  *(_QWORD *)this = &CHwndRenderTargetDDA::`vftable'{for `CNotificationResource'};
  v2 = (__int64 *)((char *)this + 168);
  *((_QWORD *)this + 8) = &CHwndRenderTargetDDA::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CHwndRenderTargetDDA::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CIndirectSwapchainRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  v3 = (CDisplay *)*((_QWORD *)this + 21);
  if ( v3 )
    CDisplay::ReleaseDDAHwRenderTarget(v3);
  ReleaseInterface<CDisplay>(v2);
  CHwndRenderTarget::~CHwndRenderTarget(this);
}
