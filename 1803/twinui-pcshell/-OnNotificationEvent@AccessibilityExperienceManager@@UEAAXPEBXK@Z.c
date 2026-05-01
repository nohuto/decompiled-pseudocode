/*
 * XREFs of ?OnNotificationEvent@AccessibilityExperienceManager@@UEAAXPEBXK@Z @ 0x180259350
 * Callers:
 *     ?OnDeviceArrival@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x180259270 (-OnDeviceArrival@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x1802592D0 (-OnDeviceRemoval@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@AccessibilityExperienceManager@@AEAA_NXZ @ 0x180259060 (-IsEnabled@AccessibilityExperienceManager@@AEAA_NXZ.c)
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x18025A314 (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     ?_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z @ 0x18025A6F4 (-_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z.c)
 *     ?_TerminateApp@AccessibilityExperienceManager@@AEAAJXZ @ 0x18025AF40 (-_TerminateApp@AccessibilityExperienceManager@@AEAAJXZ.c)
 */

void __fastcall AccessibilityExperienceManager::OnNotificationEvent(
        AccessibilityExperienceManager *this,
        const void *a2)
{
  AccessibilityExperienceManager *v2; // rdi
  __int64 v4; // rcx
  AccessibilityExperienceManager *v5; // rcx

  v2 = (AccessibilityExperienceManager *)((char *)this - 136);
  if ( AccessibilityExperienceManager::IsEnabled((AccessibilityExperienceManager *)((char *)this - 136)) )
  {
    if ( !*((_BYTE *)this + 336) && (int)AccessibilityExperienceManager::_CreateModalExperienceAsync(v2) >= 0 )
    {
      v4 = *((_QWORD *)this + 31);
      *((_BYTE *)this + 336) = 1;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 40LL))(v4, 0LL);
    }
  }
  else
  {
    AccessibilityExperienceManager::_DismissView(v2, (AccessibilityExperienceManager *)((char *)this + 240));
    AccessibilityExperienceManager::_TerminateApp(v5);
  }
}
