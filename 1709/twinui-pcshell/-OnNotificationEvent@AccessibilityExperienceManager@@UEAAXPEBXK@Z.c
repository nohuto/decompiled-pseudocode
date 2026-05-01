/*
 * XREFs of ?OnNotificationEvent@AccessibilityExperienceManager@@UEAAXPEBXK@Z @ 0x1801B1650
 * Callers:
 *     ?OnDeviceArrival@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x1801B2480 (-OnDeviceArrival@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x1801B2530 (-OnDeviceRemoval@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z.c)
 * Callees:
 *     ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180034D60 (-SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z.c)
 *     ?_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z @ 0x1801B13B8 (-_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z.c)
 *     ?_TerminateApp@AccessibilityExperienceManager@@AEAAJXZ @ 0x1801B1464 (-_TerminateApp@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x1801B17BC (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 */

void __fastcall AccessibilityExperienceManager::OnNotificationEvent(
        AccessibilityExperienceManager *this,
        const void *a2)
{
  __int64 v3; // rcx
  AccessibilityExperienceManager *v4; // rcx
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  if ( *((int *)this + 84) > 0
    && (SHRegGetBOOL(HKEY_CURRENT_USER, L"Software\\Microsoft\\Input\\EC", L"Enabled", &v5), v5) )
  {
    if ( !*((_BYTE *)this + 328)
      && (int)AccessibilityExperienceManager::_CreateModalExperienceAsync((AccessibilityExperienceManager *)((char *)this - 136)) >= 0 )
    {
      v3 = *((_QWORD *)this + 31);
      *((_BYTE *)this + 328) = 1;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 40LL))(v3, 0LL);
    }
  }
  else
  {
    AccessibilityExperienceManager::_DismissView(
      (AccessibilityExperienceManager *)((char *)this - 136),
      (AccessibilityExperienceManager *)((char *)this + 240));
    AccessibilityExperienceManager::_TerminateApp(v4);
  }
}
