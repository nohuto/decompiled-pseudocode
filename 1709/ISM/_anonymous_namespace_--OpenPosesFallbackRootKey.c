/*
 * XREFs of _anonymous_namespace_::OpenPosesFallbackRootKey @ 0x1800740D4
 * Callers:
 *     _anonymous_namespace_::GetPoseData @ 0x180074550 (_anonymous_namespace_--GetPoseData.c)
 * Callees:
 *     ??$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ @ 0x1800759E4 (--$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

__int64 __fastcall anonymous_namespace_::OpenPosesFallbackRootKey(
        unsigned __int16 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        __int64 a4,
        HKEY *a5)
{
  LSTATUS v9; // eax
  unsigned int v10; // ebx
  HKEY v11; // rdi
  DWORD LastError; // ebx
  LSTATUS v13; // eax
  HKEY v14; // rcx
  HKEY v15; // rax
  PHKEY phkResult; // [rsp+20h] [rbp-A1h]
  HKEY hKey; // [rsp+30h] [rbp-91h] BYREF
  HKEY v19; // [rsp+38h] [rbp-89h] BYREF
  WCHAR SubKey[64]; // [rsp+40h] [rbp-81h] BYREF

  v19 = 0LL;
  *a5 = 0LL;
  v9 = RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Holographic\\ControllerPoses",
         0,
         0x20019u,
         &v19);
  if ( v9 )
  {
    v10 = (unsigned __int16)v9 | 0x80070000;
    if ( v9 <= 0 )
      v10 = v9;
  }
  else
  {
    LODWORD(phkResult) = a3;
    swprintf_s<64>(SubKey, L"%04x_%04x_%04x\\%ws", a1, a2, phkResult, a4);
    hKey = 0LL;
    if ( !RegOpenKeyExW(v19, SubKey, 0, 0x20019u, &hKey) )
      goto LABEL_12;
    swprintf_s<64>(SubKey, L"%04x_%04x\\%ws", a1, a2, a4);
    v11 = hKey;
    if ( hKey )
    {
      LastError = GetLastError();
      RegCloseKey(v11);
      SetLastError(LastError);
    }
    hKey = 0LL;
    v13 = RegOpenKeyExW(v19, SubKey, 0, 0x20019u, &hKey);
    if ( v13 )
    {
      v14 = hKey;
      v10 = (unsigned __int16)v13 | 0x80070000;
      if ( v13 <= 0 )
        v10 = v13;
    }
    else
    {
LABEL_12:
      v15 = hKey;
      v14 = 0LL;
      hKey = 0LL;
      v10 = 0;
      *a5 = v15;
    }
    if ( v14 )
      RegCloseKey(v14);
  }
  if ( v19 )
    RegCloseKey(v19);
  return v10;
}
