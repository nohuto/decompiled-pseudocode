/*
 * XREFs of ??0CHwndRenderTargetRemoteApp@@QEAA@PEAVCComposition@@@Z @ 0x180155938
 * Callers:
 *     ?EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18006AAAC (-EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18006EBF8 (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800CE6DC (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?StartUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4DwmEventType@2@@Z @ 0x180187C10 (-StartUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4DwmEventType@2@@Z.c)
 */

CHwndRenderTargetRemoteApp *__fastcall CHwndRenderTargetRemoteApp::CHwndRenderTargetRemoteApp(
        CHwndRenderTargetRemoteApp *this,
        struct CComposition *a2)
{
  const struct _TlgProvider_t *v3; // rcx
  DwmCoreAsimov::CDwmEventManager_Private **Manager; // rax

  CHwndRenderTarget::CHwndRenderTarget(this, a2);
  *((_QWORD *)this + 8) = &CHwndRenderTargetRemoteApp::`vftable'{for `IRenderTargetResource'};
  *(_QWORD *)this = &CHwndRenderTargetRemoteApp::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 9) = &CHwndRenderTargetRemoteApp::`vftable'{for `IVisualTreeClient'};
  Manager = DwmCoreAsimov::CDwmEventManager::GetManager(
              v3,
              (const struct _TlgProvider_t *)&CHwndRenderTargetRemoteApp::`vftable'{for `CNotificationResource'});
  DwmCoreAsimov::CDwmEventManager::StartUsageLogging(Manager, this, 4LL);
  return this;
}
