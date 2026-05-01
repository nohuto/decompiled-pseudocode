/*
 * XREFs of ??0VirtualDesktopNotificationListener@@QEAA@PEAUIVirtualDesktopNotification@@@Z @ 0x180205D48
 * Callers:
 *     ??0VirtualDesktopThumbnailWindowFilter@@QEAA@XZ @ 0x1802737A4 (--0VirtualDesktopThumbnailWindowFilter@@QEAA@XZ.c)
 *     ??0CSnapAssistViewHost@@QEAA@XZ @ 0x180276B44 (--0CSnapAssistViewHost@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UIExternalDragHost@@@WRL@Microsoft@@QEAA@XZ @ 0x180277E64 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIPPIAllU.c)
 *     ??0VirtualDesktopItemCollection@@QEAA@XZ @ 0x18027A964 (--0VirtualDesktopItemCollection@@QEAA@XZ.c)
 *     ??0SwitchItemFilteredCollection@@QEAA@XZ @ 0x18027BC5C (--0SwitchItemFilteredCollection@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

VirtualDesktopNotificationListener *__fastcall VirtualDesktopNotificationListener::VirtualDesktopNotificationListener(
        VirtualDesktopNotificationListener *this,
        struct IVirtualDesktopNotification *a2)
{
  VirtualDesktopNotificationListener *result; // rax

  *((_QWORD *)this + 1) = 0LL;
  result = this;
  *(_QWORD *)this = a2;
  return result;
}
