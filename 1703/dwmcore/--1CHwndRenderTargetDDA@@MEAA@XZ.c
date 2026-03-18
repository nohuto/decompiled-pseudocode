/*
 * XREFs of ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x180155E54
 * Callers:
 *     ??_ECHwndRenderTargetDDA@@MEAAPEAXI@Z @ 0x180155EC0 (--_ECHwndRenderTargetDDA@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ @ 0x1800B7FB0 (-ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800C75BC (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800CE6DC (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?EndUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAX@Z @ 0x180187194 (-EndUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAX@Z.c)
 */

void __fastcall CHwndRenderTargetDDA::~CHwndRenderTargetDDA(CHwndRenderTargetDDA *this)
{
  CDisplay *v2; // rcx
  const struct _TlgProvider_t *v3; // rdx
  const struct _TlgProvider_t *v4; // rcx
  DwmCoreAsimov::CDwmEventManager_Private **Manager; // rax

  *(_QWORD *)this = &CHwndRenderTargetDDA::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CHwndRenderTargetDDA::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CHwndRenderTargetDDA::`vftable'{for `IVisualTreeClient'};
  v2 = (CDisplay *)*((_QWORD *)this + 14);
  if ( v2 )
    CDisplay::ReleaseDDAHwRenderTarget(v2);
  ReleaseInterface<CDisplay>((__int64 *)this + 14);
  Manager = DwmCoreAsimov::CDwmEventManager::GetManager(v4, v3);
  DwmCoreAsimov::CDwmEventManager::EndUsageLogging((DwmCoreAsimov::CDwmEventManager *)Manager, this);
  CHwndRenderTarget::~CHwndRenderTarget(this);
}
