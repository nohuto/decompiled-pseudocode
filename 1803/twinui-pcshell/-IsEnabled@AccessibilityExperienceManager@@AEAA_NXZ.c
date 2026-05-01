/*
 * XREFs of ?IsEnabled@AccessibilityExperienceManager@@AEAA_NXZ @ 0x180259060
 * Callers:
 *     ?OnNotificationEvent@AccessibilityExperienceManager@@UEAAXPEBXK@Z @ 0x180259350 (-OnNotificationEvent@AccessibilityExperienceManager@@UEAAXPEBXK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall AccessibilityExperienceManager::IsEnabled(AccessibilityExperienceManager *this)
{
  char v1; // bl
  bool v2; // zf
  unsigned int v4; // [rsp+50h] [rbp+8h] BYREF
  DWORD v5; // [rsp+58h] [rbp+10h] BYREF
  DWORD v6; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0;
  if ( *((int *)this + 120) > 0 )
  {
    v5 = 0;
    v6 = 4;
    if ( !RegGetValueW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Input\\EC", L"Enabled", 0x10000012u, &v5, &v4, &v6) )
    {
      if ( v5 == 4 )
      {
        v2 = v4 == 1;
        if ( v4 <= 1 )
          return v2;
      }
      else if ( v6 == 4 && (unsigned __int16)(v4 - 48) <= 1u )
      {
        return (_WORD)v4 == 49;
      }
    }
  }
  return v1;
}
