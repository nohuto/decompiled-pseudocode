/*
 * XREFs of ?_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ @ 0x180186DC4
 * Callers:
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x180186E7C (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 * Callees:
 *     PerSessionState::_DoesSessionKeyExist @ 0x180186D0C (PerSessionState--_DoesSessionKeyExist.c)
 *     ?IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ @ 0x180186D7C (-IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ.c)
 */

char __fastcall PerSessionState::_HasDesktopSwitchCompleted(PerSessionState *this)
{
  char v1; // bl
  PerSessionState *v2; // rcx
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF
  HKEY phkResult; // [rsp+68h] [rbp+10h] BYREF

  v1 = byte_1802BAADC;
  if ( !byte_1802BAADC )
  {
    if ( PerSessionState::_DoesSessionKeyExist(L"DesktopSwitchCompleted") )
    {
      v1 = 1;
    }
    else
    {
      if ( !PerSessionState::IsCurrentThreadOnInputDesktop(v2) )
        return byte_1802BAADC;
      v1 = 1;
      if ( (int)SHCreateSessionKey(131078LL, &hKey) >= 0 )
      {
        if ( !RegCreateKeyExW(hKey, L"DesktopSwitchCompleted", 0, 0LL, 1u, 0x20006u, 0LL, &phkResult, 0LL) )
          RegCloseKey(phkResult);
        RegCloseKey(hKey);
      }
    }
    byte_1802BAADC = 1;
  }
  return v1;
}
