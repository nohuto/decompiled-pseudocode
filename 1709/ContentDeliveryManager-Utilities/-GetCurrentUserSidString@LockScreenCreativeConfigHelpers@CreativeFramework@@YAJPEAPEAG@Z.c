/*
 * XREFs of ?GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z @ 0x18002A244
 * Callers:
 *     ?GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z @ 0x18002A418 (-GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z.c)
 *     ?PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11PEA_N@Z @ 0x18002A808 (-PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11P.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800017F0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E10 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18002615C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHKEY__@@PEBG@Z @ 0x180030884 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHK.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

__int64 __fastcall CreativeFramework::LockScreenCreativeConfigHelpers::GetCurrentUserSidString(
        CreativeFramework::LockScreenCreativeConfigHelpers *this,
        unsigned __int16 **a2)
{
  unsigned int v3; // eax
  __int64 v4; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  void *v8; // rdi
  HKEY hKey; // [rsp+30h] [rbp-40h] BYREF
  HKEY phkResult; // [rsp+38h] [rbp-38h] BYREF
  LPVOID pv[3]; // [rsp+40h] [rbp-30h] BYREF
  WCHAR SubKey[8]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  *(_QWORD *)this = 0LL;
  hKey = 0LL;
  phkResult = 0LL;
  v3 = RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\SessionData",
         0,
         9u,
         &phkResult);
  if ( v3 )
  {
    v4 = 96LL;
LABEL_7:
    v6 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)v4,
           (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
           (const char *)v3);
    goto LABEL_15;
  }
  v5 = StringCchPrintfW(SubKey, 8LL, L"%d", NtCurrentPeb()->SessionId);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x63,
      (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
      (const char *)(unsigned int)v5);
    goto LABEL_15;
  }
  hKey = 0LL;
  v3 = RegOpenKeyExW(phkResult, SubKey, 0, 1u, &hKey);
  if ( v3 )
  {
    v4 = 100LL;
    goto LABEL_7;
  }
  memset(pv, 0, sizeof(pv));
  v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(pv, hKey);
  v8 = pv[0];
  v6 = v7;
  if ( v7 >= 0 )
  {
    if ( pv[0] )
    {
      v8 = 0LL;
      v6 = 0;
      *(LPVOID *)this = pv[0];
    }
    else
    {
      v6 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x68,
        (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
        (const char *)0x8007000ELL);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x67,
      (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
      (const char *)(unsigned int)v7);
  }
  if ( v8 )
    CoTaskMemFree(v8);
LABEL_15:
  if ( hKey )
    RegCloseKey(hKey);
  if ( phkResult )
    RegCloseKey(phkResult);
  return v6;
}
