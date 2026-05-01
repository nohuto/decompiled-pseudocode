/*
 * XREFs of ?OnDeviceArrival@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x1801B2480
 * Callers:
 *     <none>
 * Callees:
 *     ?_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z @ 0x18008CBB0 (-_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z.c)
 *     ?OnNotificationEvent@AccessibilityExperienceManager@@UEAAXPEBXK@Z @ 0x1801B1650 (-OnNotificationEvent@AccessibilityExperienceManager@@UEAAXPEBXK@Z.c)
 */

void __fastcall AccessibilityExperienceManager::OnDeviceArrival(
        AccessibilityExperienceManager *this,
        const struct DeviceInfo *a2)
{
  int v3; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 && (*((_DWORD *)a2 + 1) & 0x4000) != 0 && ++*((_DWORD *)this + 80) == 1 )
  {
    v3 = 1;
    _RegSetKeyValue(HKEY_CURRENT_USER, L"Software\\Microsoft\\Input\\EC", L"ECHardware", 4u, (BYTE *)&v3, 4u);
    AccessibilityExperienceManager::OnNotificationEvent((AccessibilityExperienceManager *)((char *)this - 16), 0LL);
  }
}
