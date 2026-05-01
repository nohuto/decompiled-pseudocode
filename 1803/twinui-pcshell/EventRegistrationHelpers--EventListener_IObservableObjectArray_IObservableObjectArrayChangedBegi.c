/*
 * XREFs of EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Unregister @ 0x180210650
 * Callers:
 *     ??1?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@QEAA@XZ @ 0x1802072AC (--1-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@QEAA@XZ.c)
 *     ??1MonitorEventListener@@QEAA@XZ @ 0x180207558 (--1MonitorEventListener@@QEAA@XZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18020AAC0 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register @ 0x18020E114 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNo.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ @ 0x180278250 (-DismissView@-$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register_1 @ 0x1802785F0 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_1802785F0.c)
 *     ??1SwitchItemFilteredCollection@@UEAA@XZ @ 0x18027BD38 (--1SwitchItemFilteredCollection@@UEAA@XZ.c)
 *     ??1CSwitchItemGrid@@UEAA@XZ @ 0x18028E50C (--1CSwitchItemGrid@@UEAA@XZ.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChanged__anonymous_namespace_::ObservableObjectArrayEventRegistration_::Register @ 0x18028F780 (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArrayChanged__an.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Register @ 0x18028F854 (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArr_ea_18028F854.c)
 *     ?SetItems@CSwitchItemGrid@@UEAAJPEAUIObservableObjectArray@@@Z @ 0x18028FF70 (-SetItems@CSwitchItemGrid@@UEAAJPEAUIObservableObjectArray@@@Z.c)
 *     ??1CVirtualDesktopContainerElement@@UEAA@XZ @ 0x1802A69C8 (--1CVirtualDesktopContainerElement@@UEAA@XZ.c)
 * Callees:
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalRelease @ 0x1800A2398 (Microsoft--WRL--ComPtr__anonymous_namespace_--ObservableObjectArrayEventRegistration_--InternalR.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Unregister(
        __int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
    return Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalRelease(v1);
  }
  return result;
}
