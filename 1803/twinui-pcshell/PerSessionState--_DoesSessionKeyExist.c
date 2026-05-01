/*
 * XREFs of PerSessionState::_DoesSessionKeyExist @ 0x18022B828
 * Callers:
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x18022B6DC (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 *     ?_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ @ 0x18022B898 (-_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall PerSessionState::_DoesSessionKeyExist(LPCWSTR lpSubKey)
{
  char v2; // bl
  HKEY hKey; // [rsp+48h] [rbp+10h] BYREF
  HKEY phkResult; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  if ( (int)SHCreateSessionKey(131097LL, &hKey) >= 0 )
  {
    if ( !RegOpenKeyExW(hKey, lpSubKey, 0, 0x20019u, &phkResult) )
    {
      v2 = 1;
      RegCloseKey(phkResult);
    }
    RegCloseKey(hKey);
  }
  return v2;
}
