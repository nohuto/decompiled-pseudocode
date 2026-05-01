/*
 * XREFs of ?LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAJXZ @ 0x18014BEE4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_55b264313a8019947342e051aa80fccd___::Run @ 0x1801511F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_55b264313a8019947342e051aa80fccd___--Run.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$ShellExperienceHostNotInstalled@AEAJ@StartWindowTelemetry@@SAXAEAJ@Z @ 0x18014F9BC (--$ShellExperienceHostNotInstalled@AEAJ@StartWindowTelemetry@@SAXAEAJ@Z.c)
 *     ??$CortanaNotInstalled@AEAJ@StartWindowTelemetry@@SAXAEAJ@Z @ 0x18014FA48 (--$CortanaNotInstalled@AEAJ@StartWindowTelemetry@@SAXAEAJ@Z.c)
 *     ?GetPackageFullNameFromAppIdForUser@StateRepository@Shared@DevPlat@@YAJPEAUHSTRING__@@0PEAPEAU4@@Z @ 0x180190AA0 (-GetPackageFullNameFromAppIdForUser@StateRepository@Shared@DevPlat@@YAJPEAUHSTRING__@@0PEAPEAU4@.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 */

// Hidden C++ exception states: #wind=6
void XamlLauncher::LogErrorIfStartOrCortanaArentInstalled(void)
{
  const char *v0; // r9
  const char *v1; // r9
  const WCHAR *v2; // r14
  HRESULT v3; // eax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  unsigned int v6; // esi
  unsigned int v7; // eax
  unsigned int v8; // r8d
  UINT32 v9; // edx
  HRESULT v10; // eax
  HSTRING *v11; // r9
  const WCHAR *v12; // r14
  HRESULT v13; // eax
  unsigned int v14; // eax
  UINT32 v15; // edx
  HRESULT v16; // eax
  HSTRING *v17; // r9
  HSTRING v18; // [rsp+38h] [rbp-D0h] BYREF
  LPWSTR StringSid; // [rsp+40h] [rbp-C8h] BYREF
  int PackageFullNameFromAppIdForUser; // [rsp+48h] [rbp-C0h] BYREF
  int v21; // [rsp+4Ch] [rbp-BCh] BYREF
  DWORD ReturnLength[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-B0h]
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-A8h] BYREF
  HSTRING string; // [rsp+78h] [rbp-90h] BYREF
  HSTRING_HEADER v26; // [rsp+80h] [rbp-88h] BYREF
  HSTRING v27[2]; // [rsp+98h] [rbp-70h] BYREF
  PSID TokenInformation[12]; // [rsp+A8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+18h]

  v23 = -2LL;
  memset(TokenInformation, 0, 0x54uLL);
  if ( !GetTokenInformation((HANDLE)0xFFFFFFFFFFFFFFFCLL, TokenUser, TokenInformation, 0x54u, ReturnLength) )
  {
    wil::details::in1diag3::Return_GetLastError(
      retaddr,
      (void *)0x25C,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      v0);
    return;
  }
  StringSid = 0LL;
  if ( ConvertSidToStringSidW(TokenInformation[0], &StringSid) )
  {
    v2 = StringSid;
    string = 0LL;
    v3 = WindowsCreateStringReference(
           L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
           0x37u,
           &hstringHeader,
           &string);
    if ( v3 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
    v27[0] = 0LL;
    v4 = -1LL;
    v5 = -1LL;
    do
      ++v5;
    while ( v2[v5] );
    v6 = -1;
    if ( v5 <= 0xFFFFFFFF )
    {
      v7 = v5 + 1;
      v8 = -1;
      if ( (int)v5 + 1 >= (unsigned int)v5 )
        v8 = v5 + 1;
      if ( v7 < (unsigned int)v5 )
      {
        Microsoft::WRL::Details::RaiseException(v7 < (unsigned int)v5 ? (Microsoft::WRL::Details *)0x80070216LL : 0);
        __debugbreak();
      }
      v9 = v8 - 1;
      if ( (unsigned int)v5 < v8 )
        v9 = v5;
      v10 = WindowsCreateStringReference(v2, v9, &v26, v27);
      if ( v10 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
      WindowsDeleteString(0LL);
      v18 = 0LL;
      PackageFullNameFromAppIdForUser = DevPlat::Shared::StateRepository::GetPackageFullNameFromAppIdForUser(
                                          (DevPlat::Shared::StateRepository *)v27[0],
                                          string,
                                          (HSTRING)&v18,
                                          v11);
      if ( PackageFullNameFromAppIdForUser < 0 )
        StartWindowTelemetry::ShellExperienceHostNotInstalled<long &>(&PackageFullNameFromAppIdForUser);
      v12 = StringSid;
      v27[0] = 0LL;
      v13 = WindowsCreateStringReference(L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI", 0x31u, &v26, v27);
      if ( v13 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
      string = 0LL;
      do
        ++v4;
      while ( v12[v4] );
      if ( v4 <= 0xFFFFFFFF )
      {
        v14 = v4 + 1;
        if ( (int)v4 + 1 >= (unsigned int)v4 )
          v6 = v4 + 1;
        if ( v14 < (unsigned int)v4 )
        {
          Microsoft::WRL::Details::RaiseException(v14 < (unsigned int)v4 ? (Microsoft::WRL::Details *)0x80070216LL : 0);
          __debugbreak();
        }
        v15 = v6 - 1;
        if ( (unsigned int)v4 < v6 )
          v15 = v4;
        v16 = WindowsCreateStringReference(v12, v15, &hstringHeader, &string);
        if ( v16 < 0 )
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16);
        WindowsDeleteString(v18);
        v18 = 0LL;
        v21 = DevPlat::Shared::StateRepository::GetPackageFullNameFromAppIdForUser(
                (DevPlat::Shared::StateRepository *)string,
                v27[0],
                (HSTRING)&v18,
                v17);
        if ( v21 < 0 )
          StartWindowTelemetry::CortanaNotInstalled<long &>(&v21);
        WindowsDeleteString(v18);
        goto LABEL_36;
      }
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    }
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    return;
  }
  wil::details::in1diag3::Return_GetLastError(
    retaddr,
    (void *)0x260,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    v1);
LABEL_36:
  if ( StringSid )
    CoTaskMemFree(StringSid);
}
