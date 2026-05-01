/*
 * XREFs of EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Unregister @ 0x180210680
 * Callers:
 *     ??1VirtualDesktopNotificationListener@@QEAA@XZ @ 0x1802076EC (--1VirtualDesktopNotificationListener@@QEAA@XZ.c)
 *     ??1XamlAllUpViewHost@@UEAA@XZ @ 0x180207714 (--1XamlAllUpViewHost@@UEAA@XZ.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register @ 0x18020E1FC (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotifi.c)
 *     ?v_DismissView@CSnapAssistViewHost@@MEAAXXZ @ 0x180277B80 (-v_DismissView@CSnapAssistViewHost@@MEAAXXZ.c)
 *     ?Destroy@VirtualDesktopItemCollection@@UEAAXXZ @ 0x18027AD00 (-Destroy@VirtualDesktopItemCollection@@UEAAXXZ.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_0 @ 0x18027ADB0 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_18027ADB0.c)
 * Callees:
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalRelease @ 0x1800A2398 (Microsoft--WRL--ComPtr__anonymous_namespace_--ObservableObjectArrayEventRegistration_--InternalR.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Unregister(
        __int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 88LL))(v2);
    return Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalRelease(v1);
  }
  return result;
}
