/*
 * XREFs of ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x180147B04
 * Callers:
 *     ??_ECHwndRenderTargetDDA@@MEAAPEAXI@Z @ 0x180147B60 (--_ECHwndRenderTargetDDA@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ @ 0x180077F00 (-ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800B7818 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 */

void __fastcall CHwndRenderTargetDDA::~CHwndRenderTargetDDA(CHwndRenderTargetDDA *this)
{
  CDisplay *v2; // rcx

  *(_QWORD *)this = &CHwndRenderTargetDDA::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CHwndRenderTargetDDA::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CHwndRenderTargetDDA::`vftable'{for `IVisualTreeClient'};
  v2 = (CDisplay *)*((_QWORD *)this + 14);
  if ( v2 )
    CDisplay::ReleaseDDAHwRenderTarget(v2);
  ReleaseInterface<CDisplay>((__int64 *)this + 14);
  CHwndRenderTarget::~CHwndRenderTarget(this);
}
