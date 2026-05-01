/*
 * XREFs of VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::ViewVirtualDesktopChanged @ 0x18027B0A0
 * Callers:
 *     <none>
 * Callees:
 *     ??_9IVirtualDesktopNotification@@$BDI@AA @ 0x1800A9D60 (--_9IVirtualDesktopNotification@@$BDI@AA.c)
 */

__int64 __fastcall VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::ViewVirtualDesktopChanged(
        __int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
     IVirtualDesktopNotification::`vcall'{56,{flat}}(v1);
  return 0LL;
}
