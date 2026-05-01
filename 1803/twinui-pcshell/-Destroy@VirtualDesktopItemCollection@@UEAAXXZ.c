/*
 * XREFs of ?Destroy@VirtualDesktopItemCollection@@UEAAXXZ @ 0x18027AD00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopItemCollection::Destroy(VirtualDesktopItemCollection *this)
{
  EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Unregister((__int64)this + 176);
}
