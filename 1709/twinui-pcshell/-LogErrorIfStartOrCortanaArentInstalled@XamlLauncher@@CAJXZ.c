/*
 * XREFs of ?LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAJXZ @ 0x180180C70
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_25afb7c3f8f549299b357b9b6f42197a___::Run @ 0x1801857D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_25afb7c3f8f549299b357b9b6f42197a___--Run.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ShellExperienceHostNotInstalled@AEAJ@StartWindowTelemetry@@SAXAEAJ@Z @ 0x180184578 (--$ShellExperienceHostNotInstalled@AEAJ@StartWindowTelemetry@@SAXAEAJ@Z.c)
 *     ??$CortanaNotInstalled@AEAJ@StartWindowTelemetry@@SAXAEAJ@Z @ 0x180184604 (--$CortanaNotInstalled@AEAJ@StartWindowTelemetry@@SAXAEAJ@Z.c)
 *     ?GetPackageFullNameFromAppIdForUser@StateRepository@Shared@DevPlat@@YAJPEAUHSTRING__@@0PEAPEAU4@@Z @ 0x1801DE470 (-GetPackageFullNameFromAppIdForUser@StateRepository@Shared@DevPlat@@YAJPEAUHSTRING__@@0PEAPEAU4@.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

// Hidden C++ exception states: #wind=6
__int64 XamlLauncher::LogErrorIfStartOrCortanaArentInstalled(void)
{
  const char *v0; // r9
  const char *v2; // r9
  unsigned int LastError; // ebx
  HRESULT v4; // eax
  __int64 v5; // rbx
  HSTRING *v6; // r9
  HRESULT v7; // eax
  __int64 v8; // rbx
  HSTRING *v9; // r9
  HSTRING v10; // [rsp+38h] [rbp-D0h] BYREF
  LPWSTR StringSid; // [rsp+40h] [rbp-C8h] BYREF
  int PackageFullNameFromAppIdForUser; // [rsp+48h] [rbp-C0h] BYREF
  int v13; // [rsp+4Ch] [rbp-BCh] BYREF
  DWORD ReturnLength[2]; // [rsp+50h] [rbp-B8h] BYREF
  const WCHAR *v15[2]; // [rsp+58h] [rbp-B0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-A0h] BYREF
  HSTRING string; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v18[32]; // [rsp+88h] [rbp-80h] BYREF
  PSID TokenInformation[12]; // [rsp+A8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+18h]

  v15[1] = (const WCHAR *)-2LL;
  memset(TokenInformation, 0, 0x54uLL);
  if ( !GetTokenInformation((HANDLE)0xFFFFFFFFFFFFFFFCLL, TokenUser, TokenInformation, 0x54u, ReturnLength) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x1EF,
             (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
             v0);
  StringSid = 0LL;
  if ( ConvertSidToStringSidW(TokenInformation[0], &StringSid) )
  {
    v10 = (HSTRING)StringSid;
    string = 0LL;
    v4 = WindowsCreateStringReference(
           L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
           0x37u,
           &hstringHeader,
           &string);
    if ( v4 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4);
    v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v18, (const WCHAR **)&v10);
    WindowsDeleteString(0LL);
    v10 = 0LL;
    PackageFullNameFromAppIdForUser = DevPlat::Shared::StateRepository::GetPackageFullNameFromAppIdForUser(
                                        *(DevPlat::Shared::StateRepository **)(v5 + 24),
                                        string,
                                        (HSTRING)&v10,
                                        v6);
    if ( PackageFullNameFromAppIdForUser < 0 )
      StartWindowTelemetry::ShellExperienceHostNotInstalled<long &>(&PackageFullNameFromAppIdForUser);
    v15[0] = StringSid;
    string = 0LL;
    v7 = WindowsCreateStringReference(
           L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI",
           0x31u,
           &hstringHeader,
           &string);
    if ( v7 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v18, v15);
    WindowsDeleteString(v10);
    v10 = 0LL;
    v13 = DevPlat::Shared::StateRepository::GetPackageFullNameFromAppIdForUser(
            *(DevPlat::Shared::StateRepository **)(v8 + 24),
            string,
            (HSTRING)&v10,
            v9);
    if ( v13 < 0 )
      StartWindowTelemetry::CortanaNotInstalled<long &>(&v13);
    LastError = 0;
    WindowsDeleteString(v10);
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x1F3,
                  (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
                  v2);
  }
  if ( StringSid )
    CoTaskMemFree(StringSid);
  return LastError;
}
