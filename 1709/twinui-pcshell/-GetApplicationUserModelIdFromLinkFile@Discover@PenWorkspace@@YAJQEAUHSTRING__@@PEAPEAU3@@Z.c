/*
 * XREFs of ?GetApplicationUserModelIdFromLinkFile@Discover@PenWorkspace@@YAJQEAUHSTRING__@@PEAPEAU3@@Z @ 0x1800EDD2C
 * Callers:
 *     ?LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z @ 0x1800E9D6C (-LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x1801C1F4C (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PenWorkspace::Discover::GetApplicationUserModelIdFromLinkFile(
        CallerIdentity *string,
        HSTRING *a2,
        HSTRING *a3)
{
  int IsShellExperience; // eax
  unsigned int v6; // ebx
  const WCHAR *StringRawBuffer; // rax
  signed int LastError; // eax
  __int64 *v9; // rax
  HRESULT v10; // eax
  HRESULT v11; // eax
  __int64 v12; // rdi
  int v13; // eax
  HRESULT v14; // eax
  __int64 v15; // r9
  __int64 v16; // rdx
  LPVOID v17; // rcx
  __int64 v18; // rcx
  LPVOID ppv; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C8h] BYREF
  PCNZWCH sourceString; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B8h]
  __int64 v24; // [rsp+58h] [rbp-B0h]
  __int64 v25; // [rsp+60h] [rbp-A8h]
  WCHAR Dst[264]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A0h] [rbp+198h]

  v25 = -2LL;
  *a2 = 0LL;
  IsShellExperience = CallerIdentity::EnsureCallingProcessIsShellExperience(string);
  v6 = IsShellExperience;
  if ( IsShellExperience < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x10,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\utilities.cpp",
      (const char *)(unsigned int)IsShellExperience);
    return v6;
  }
  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)string, 0LL);
  if ( !ExpandEnvironmentStringsW(StringRawBuffer, Dst, 0x104u) )
  {
    LastError = GetLastError();
    v6 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v6 = LastError;
    if ( (v6 & 0x80000000) == 0 )
      v6 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\utilities.cpp",
      (const char *)v6);
    return v6;
  }
  v21 = 0LL;
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v21);
  v10 = SHCreateItemFromParsingName(Dst, 0LL, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, (void **)v9);
  v6 = v10;
  if ( v10 >= 0 )
  {
    ppv = 0LL;
    v11 = CoCreateInstance(
            &GUID_660b90c8_73a9_4b58_8cae_355b7f55341b,
            0LL,
            3u,
            &GUID_c1b70261_a4cf_4e49_970e_ef941977e448,
            &ppv);
    v6 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1B,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\utilities.cpp",
        (const char *)(unsigned int)v11);
LABEL_25:
      v17 = ppv;
      if ( ppv )
      {
        ppv = 0LL;
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v17 + 16LL))(v17);
      }
      goto LABEL_27;
    }
    sourceString = 0LL;
    v12 = -1LL;
    v23 = -1LL;
    v24 = -1LL;
    v13 = (*(__int64 (__fastcall **)(LPVOID, __int64, PCNZWCH *))(*(_QWORD *)ppv + 120LL))(ppv, v21, &sourceString);
    v6 = v13;
    if ( v13 >= 0 )
    {
      if ( sourceString && *sourceString )
      {
        do
          ++v12;
        while ( sourceString[v12] );
        v14 = WindowsCreateString(sourceString, v12, a2);
        v6 = v14;
        if ( v14 >= 0 )
          goto LABEL_22;
        v15 = (unsigned int)v14;
        v16 = 34LL;
      }
      else
      {
        v6 = -2147024894;
        v15 = 2147942402LL;
        v16 = 41LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\utilities.cpp",
        (const char *)v15);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1D,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\utilities.cpp",
        (const char *)(unsigned int)v13);
    }
LABEL_22:
    if ( sourceString )
    {
      CoTaskMemFree((LPVOID)sourceString);
      sourceString = 0LL;
    }
    v23 = 0LL;
    v24 = 0LL;
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x17,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\utilities.cpp",
    (const char *)(unsigned int)v10);
LABEL_27:
  v18 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return v6;
}
