/*
 * XREFs of ??1VirtualDesktopNotificationListener@@QEAA@XZ @ 0x1802076EC
 * Callers:
 *     ??_GVirtualDesktopThumbnailWindowFilter@@UEAAPEAXI@Z @ 0x180273840 (--_GVirtualDesktopThumbnailWindowFilter@@UEAAPEAXI@Z.c)
 *     ??1CSnapAssistViewHost@@UEAA@XZ @ 0x180276BF0 (--1CSnapAssistViewHost@@UEAA@XZ.c)
 *     ??_EVirtualDesktopItemCollection@@UEAAPEAXI@Z @ 0x18027AB80 (--_EVirtualDesktopItemCollection@@UEAAPEAXI@Z.c)
 *     ??1SwitchItemFilteredCollection@@UEAA@XZ @ 0x18027BD38 (--1SwitchItemFilteredCollection@@UEAA@XZ.c)
 * Callees:
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalRelease @ 0x1800A2398 (Microsoft--WRL--ComPtr__anonymous_namespace_--ObservableObjectArrayEventRegistration_--InternalR.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Unregister @ 0x180210680 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_180210680.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktopNotificationListener::~VirtualDesktopNotificationListener(
        VirtualDesktopNotificationListener *this)
{
  EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Unregister(this);
  Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalRelease((__int64 *)this + 1);
}
