/*
 * XREFs of ?OnDeviceRemoval@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x1802592D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x18018887C (-SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z.c)
 *     ?OnNotificationEvent@AccessibilityExperienceManager@@UEAAXPEBXK@Z @ 0x180259350 (-OnNotificationEvent@AccessibilityExperienceManager@@UEAAXPEBXK@Z.c)
 */

void __fastcall AccessibilityExperienceManager::OnDeviceRemoval(
        AccessibilityExperienceManager *this,
        const struct DeviceInfo *a2)
{
  if ( a2 && (*((_DWORD *)a2 + 1) & 0x4000) != 0 && (*((_DWORD *)this + 80))-- == 1 )
  {
    SHRegSetBOOL((HKEY)this, L"Software\\Microsoft\\Input\\EC", L"ECHardware", 0);
    AccessibilityExperienceManager::OnNotificationEvent((AccessibilityExperienceManager *)((char *)this - 24), 0LL, 0);
  }
}
