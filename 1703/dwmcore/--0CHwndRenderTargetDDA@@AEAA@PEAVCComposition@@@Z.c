/*
 * XREFs of ??0CHwndRenderTargetDDA@@AEAA@PEAVCComposition@@@Z @ 0x180155E04
 * Callers:
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x180146B38 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 * Callees:
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18006EBF8 (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800CE6DC (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?StartUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4DwmEventType@2@@Z @ 0x180187C10 (-StartUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4DwmEventType@2@@Z.c)
 */

CHwndRenderTargetDDA *__fastcall CHwndRenderTargetDDA::CHwndRenderTargetDDA(
        CHwndRenderTargetDDA *this,
        struct CComposition *a2)
{
  const struct _TlgProvider_t *v3; // rcx
  DwmCoreAsimov::CDwmEventManager_Private **Manager; // rax

  CHwndRenderTarget::CHwndRenderTarget(this, a2);
  *((_QWORD *)this + 8) = &CHwndRenderTargetDDA::`vftable'{for `IRenderTargetResource'};
  *(_QWORD *)this = &CHwndRenderTargetDDA::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 9) = &CHwndRenderTargetDDA::`vftable'{for `IVisualTreeClient'};
  Manager = DwmCoreAsimov::CDwmEventManager::GetManager(
              v3,
              (const struct _TlgProvider_t *)&CHwndRenderTargetDDA::`vftable'{for `CNotificationResource'});
  DwmCoreAsimov::CDwmEventManager::StartUsageLogging(Manager, this, 5LL);
  return this;
}
