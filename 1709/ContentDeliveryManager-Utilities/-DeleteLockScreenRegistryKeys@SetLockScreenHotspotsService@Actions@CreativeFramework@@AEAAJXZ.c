/*
 * XREFs of ?DeleteLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x180084598
 * Callers:
 *     ?Revert@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ @ 0x180084030 (-Revert@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?Unstage@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800840C0 (-Unstage@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800017F0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18002615C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

__int64 __fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::DeleteLockScreenRegistryKeys(
        CreativeFramework::Actions::SetLockScreenHotspotsService *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int ValueW; // eax
  __int64 v5; // rdx
  DWORD v6; // ebx
  const WCHAR *v7; // r8
  HKEY hKey; // [rsp+68h] [rbp-A0h] BYREF
  DWORD cSubKeys; // [rsp+70h] [rbp-98h] BYREF
  DWORD cchName; // [rsp+74h] [rbp-94h] BYREF
  DWORD pcbData; // [rsp+78h] [rbp-90h] BYREF
  int Data[3]; // [rsp+7Ch] [rbp-8Ch] BYREF
  WCHAR Name[256]; // [rsp+88h] [rbp-80h] BYREF
  WCHAR SubKey[264]; // [rsp+288h] [rbp+180h] BYREF
  WCHAR pvData[264]; // [rsp+498h] [rbp+390h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+6C0h] [rbp+5B8h]

  v2 = StringCchPrintfW(
         SubKey,
         260LL,
         L"%s\\%s",
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\Creative",
         *((_QWORD *)this + 2));
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x94,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  hKey = 0LL;
  ValueW = RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0xFu, &hKey);
  if ( ValueW )
  {
    v5 = 150LL;
  }
  else
  {
    ValueW = RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, &cSubKeys, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !ValueW )
    {
      v6 = 0;
      if ( cSubKeys )
      {
        while ( 1 )
        {
          cchName = 256;
          pcbData = 261;
          ValueW = RegEnumKeyExW(hKey, v6, Name, &cchName, 0LL, 0LL, 0LL, 0LL);
          if ( ValueW )
          {
            v5 = 161LL;
            goto LABEL_26;
          }
          ValueW = RegGetValueW(hKey, Name, L"contentId", 2u, 0LL, pvData, &pcbData);
          if ( ValueW )
          {
            v5 = 162LL;
            goto LABEL_26;
          }
          v7 = (const WCHAR *)((char *)this + 24);
          if ( *((_QWORD *)this + 6) >= 8uLL )
            v7 = *(const WCHAR **)v7;
          if ( CompareStringOrdinal(pvData, -1, v7, -1, 0) == 2 )
            break;
          if ( ++v6 >= cSubKeys )
            goto LABEL_14;
        }
        ValueW = RegDeleteKeyExW(hKey, Name, 0, 0);
        if ( ValueW )
        {
          v5 = 166LL;
          goto LABEL_26;
        }
        Data[0] = 1;
        ValueW = RegSetKeyValueW(hKey, 0LL, L"LockImageFlags", 4u, Data, 4u);
        if ( ValueW )
        {
          v5 = 170LL;
          goto LABEL_26;
        }
        *((_BYTE *)this + 124) = 1;
      }
      else
      {
LABEL_14:
        *((_BYTE *)this + 124) = 0;
      }
      v3 = 0;
      goto LABEL_16;
    }
    v5 = 154LL;
  }
LABEL_26:
  v3 = wil::details::in1diag3::Return_Win32(
         retaddr,
         (void *)v5,
         (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
         (const char *)ValueW);
LABEL_16:
  if ( hKey )
    RegCloseKey(hKey);
  return v3;
}
