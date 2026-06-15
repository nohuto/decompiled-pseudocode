/*
 * XREFs of ?InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z @ 0x180005D20
 * Callers:
 *     ?GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ @ 0x180005FC0 (-GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ.c)
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180006050 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 * Callees:
 *     ?TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z @ 0x18001DB2C (-TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::InitAccessibilityAudioSettings(CWindowsPolicyManager *this, unsigned int a2)
{
  unsigned int v3; // ebx
  LSTATUS v4; // edi
  int v5; // edx
  HKEY phkResult; // [rsp+30h] [rbp-18h] BYREF
  CWindowsPolicyManager *cbData; // [rsp+70h] [rbp+28h] BYREF
  DWORD Type; // [rsp+78h] [rbp+30h] BYREF
  int Data; // [rsp+80h] [rbp+38h] BYREF
  HKEY hKey; // [rsp+88h] [rbp+40h] BYREF

  cbData = this;
  if ( a2 )
  {
    v3 = RpcImpersonateClient(0LL);
    if ( !v3 )
    {
      v4 = RegOpenCurrentUser(0x20019u, &phkResult);
      if ( !v4 )
      {
        v4 = RegOpenKeyExW(phkResult, L"Software\\Microsoft\\Multimedia\\Audio", 0, 1u, &hKey);
        if ( !v4 )
        {
          Type = 4;
          LODWORD(cbData) = 4;
          v4 = RegQueryValueExW(hKey, L"AccessibilityMonoMixState", 0LL, &Type, (LPBYTE)&Data, (LPDWORD)&cbData);
          if ( !v4 && Type == 4 && (_DWORD)cbData == 4 )
          {
            v5 = Data;
          }
          else
          {
            v5 = 0;
            Data = 0;
            v4 = 0;
          }
          TsSessionIdInitAccessibilityAudioSettings(a2, v5);
          RegCloseKey(hKey);
        }
        RegCloseKey(phkResult);
      }
      v3 = (unsigned __int16)v4 | 0x80070000;
      if ( v4 <= 0 )
        v3 = v4;
      RpcRevertToSelf();
    }
  }
  else
  {
    return 0;
  }
  return v3;
}
