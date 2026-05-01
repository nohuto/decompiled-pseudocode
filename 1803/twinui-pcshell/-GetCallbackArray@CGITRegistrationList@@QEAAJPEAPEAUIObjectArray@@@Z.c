/*
 * XREFs of ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18030A064
 * Callers:
 *     ?FullScreenVisibilityChangedEvent@FullScreenPositioner@@AEAAX_N@Z @ 0x18014D5C0 (-FullScreenVisibilityChangedEvent@FullScreenPositioner@@AEAAX_N@Z.c)
 *     ?_FireFullScreenModeChangedEvent@CFullScreenManager@@AEAAXH@Z @ 0x1801528AC (-_FireFullScreenModeChangedEvent@CFullScreenManager@@AEAAXH@Z.c)
 *     ?OnMoveSizeAttempted@ViewPresentationMediator@@UEAAXPEAUIApplicationView@@K@Z @ 0x1801F6540 (-OnMoveSizeAttempted@ViewPresentationMediator@@UEAAXPEAUIApplicationView@@K@Z.c)
 *     ?OnShellTrackedWindowPosChanged@ViewPresentationMediator@@UEAAXPEAUIApplicationView@@HKUtagRECT@@@Z @ 0x1801F6690 (-OnShellTrackedWindowPosChanged@ViewPresentationMediator@@UEAAXPEAUIApplicationView@@HKUtagRECT@.c)
 *     ?OnShowWindowPolicy@ViewPresentationMediator@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z @ 0x1801F6810 (-OnShowWindowPolicy@ViewPresentationMediator@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z.c)
 *     ?UpdateVisibility@MultitaskingViewVisibilityService@@AEAAXW4MULTITASKING_VIEW_TYPES@@0@Z @ 0x18026BB0C (-UpdateVisibility@MultitaskingViewVisibilityService@@AEAAXW4MULTITASKING_VIEW_TYPES@@0@Z.c)
 *     ?_FireNotification@ObservableObjectArray@@AEAAJP8IObservableObjectArrayChanged@@EAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@ZW4ObservableArrayOperation@@1@Z @ 0x180286B68 (-_FireNotification@ObservableObjectArray@@AEAAJP8IObservableObjectArrayChanged@@EAAXPEAUIObserva.c)
 *     ?FullScreenVisibilityChanged@CPerMonitorDesktopVisibilityService@@UEAAJH@Z @ 0x1802B3CD0 (-FullScreenVisibilityChanged@CPerMonitorDesktopVisibilityService@@UEAAJH@Z.c)
 *     ?NotifyAppLayoutChanged@TabletModePositionerManager@@AEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z @ 0x1802C2B38 (-NotifyAppLayoutChanged@TabletModePositionerManager@@AEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutO.c)
 * Callees:
 *     __Platform_ReleaseSRWLockShared @ 0x180099304 (__Platform_ReleaseSRWLockShared.c)
 *     __Platform_AcquireSRWLockShared @ 0x180099316 (__Platform_AcquireSRWLockShared.c)
 *     ??$MakeAndInitialize@VCGITCallbackArray@@UIObjectArray@@AEAV?$CCoSimpleArray@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@@@@Details@WRL@Microsoft@@YAJPEAPEAUIObjectArray@@AEAV?$CCoSimpleArray@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@@@@Z @ 0x180309CCC (--$MakeAndInitialize@VCGITCallbackArray@@UIObjectArray@@AEAV-$CCoSimpleArray@V-$ComPtr@UIGITCook.c)
 */

__int64 __fastcall CGITRegistrationList::GetCallbackArray(RTL_SRWLOCK *this, struct IObjectArray **a2)
{
  RTL_SRWLOCK *v2; // rdi
  RTL_SRWLOCK *v3; // rbx

  *a2 = 0LL;
  v2 = this + 1;
  v3 = this;
  _Platform_AcquireSRWLockShared(this + 1);
  LODWORD(v3) = Microsoft::WRL::Details::MakeAndInitialize<CGITCallbackArray,IObjectArray,CCoSimpleArray<Microsoft::WRL::ComPtr<IGITCookieObject>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IGITCookieObject>>> &>(
                  a2,
                  (__int64)&v3[2]);
  _Platform_ReleaseSRWLockShared(v2);
  return (unsigned int)v3;
}
