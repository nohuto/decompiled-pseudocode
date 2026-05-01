/*
 * XREFs of ??1?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@QEAA@XZ @ 0x1802072AC
 * Callers:
 *     ??1XamlAllUpViewHost@@UEAA@XZ @ 0x180207714 (--1XamlAllUpViewHost@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UIXamlViewHost@@UIAllUpViewHostInternal@@UITabletModeChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180208890 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIAllUpV.c)
 *     ??1XamlAltTabViewHost@@UEAA@XZ @ 0x1802168F0 (--1XamlAltTabViewHost@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIXamlViewHost@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180216CA0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UISnapAs.c)
 *     ??1XamlSnapAssistViewHost@@UEAA@XZ @ 0x180218018 (--1XamlSnapAssistViewHost@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UIAltTabViewHostInternal@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180274E10 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIAltTab.c)
 *     ??_ECAltTabViewHost@@UEAAPEAXI@Z @ 0x180274E50 (--_ECAltTabViewHost@@UEAAPEAXI@Z.c)
 *     ??1CSnapAssistViewHost@@UEAA@XZ @ 0x180276BF0 (--1CSnapAssistViewHost@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIInvocationAnimationHost@@UIAnimatedDismissableHost@@UIDismissalAnimationHost@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180276C80 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHost_ea_180276C80.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalRelease @ 0x1800A2398 (Microsoft--WRL--ComPtr__anonymous_namespace_--ObservableObjectArrayEventRegistration_--InternalR.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Unregister @ 0x180210650 (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArrayChangedBegi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMultitaskingViewHostBase<ISnapAssistViewHost>::~CMultitaskingViewHostBase<ISnapAssistViewHost>(
        __int64 a1)
{
  EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Unregister(a1 + 96);
  Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalRelease((__int64 *)(a1 + 104));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 88));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 80));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
}
