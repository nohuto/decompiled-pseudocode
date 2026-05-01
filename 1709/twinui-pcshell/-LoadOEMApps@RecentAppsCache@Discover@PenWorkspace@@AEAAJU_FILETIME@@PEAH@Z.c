/*
 * XREFs of ?LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z @ 0x1800E9D6C
 * Callers:
 *     ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1800E9C98 (-LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@PenWorkspaceBrokerTelemetry@@KAPEAV1@XZ @ 0x1800E7A74 (-Instance@PenWorkspaceBrokerTelemetry@@KAPEAV1@XZ.c)
 *     ?OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z @ 0x1800E7B54 (-OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z.c)
 *     ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x1800EA15C (-PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIPenWorkspaceLayoutItem@@@@AEAAXXZ @ 0x1800EB5C0 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIPenWorkspaceLayoutItem@@@@AEAAXXZ.c)
 *     ?GetApplicationUserModelIdFromLinkFile@Discover@PenWorkspace@@YAJQEAUHSTRING__@@PEAPEAU3@@Z @ 0x1800EDD2C (-GetApplicationUserModelIdFromLinkFile@Discover@PenWorkspace@@YAJQEAUHSTRING__@@PEAPEAU3@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::LoadOEMApps(
        PenWorkspace::Discover::RecentAppsCache *this,
        struct _FILETIME a2,
        int *a3)
{
  HRESULT v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  const WCHAR *v10; // rbx
  WCHAR *v11; // rdi
  _DWORD *v12; // rcx
  PenWorkspaceBrokerTelemetry *v13; // rcx
  HSTRING v14; // rsi
  DWORD LastError; // edi
  HSTRING v16; // rcx
  WCHAR *StringRawBuffer; // rsi
  __int64 v18; // rdi
  HSTRING *v19; // r8
  const unsigned __int16 *v20; // rax
  _DWORD *v21; // rcx
  PenWorkspaceBrokerTelemetry *v22; // rcx
  __int64 v23; // rcx
  const WCHAR *v24; // rcx
  __int64 v25; // rcx
  LPVOID v26; // rcx
  __int64 v28; // [rsp+30h] [rbp-89h] BYREF
  HSTRING v29; // [rsp+38h] [rbp-81h] BYREF
  HSTRING v30; // [rsp+40h] [rbp-79h] BYREF
  LPVOID ppv; // [rsp+48h] [rbp-71h] BYREF
  struct _FILETIME v32; // [rsp+50h] [rbp-69h] BYREF
  HSTRING string; // [rsp+58h] [rbp-61h] BYREF
  __int64 v34; // [rsp+60h] [rbp-59h] BYREF
  int v35; // [rsp+68h] [rbp-51h] BYREF
  int v36; // [rsp+70h] [rbp-49h] BYREF
  const WCHAR *v37; // [rsp+78h] [rbp-41h]
  __int64 *v38; // [rsp+80h] [rbp-39h]
  int v39; // [rsp+88h] [rbp-31h] BYREF
  __int64 v40; // [rsp+90h] [rbp-29h]
  __int64 *v41; // [rsp+98h] [rbp-21h]
  const WCHAR *v42[3]; // [rsp+A0h] [rbp-19h] BYREF
  char v43[32]; // [rsp+B8h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v42[1] = (const WCHAR *)-2LL;
  *a3 = 0;
  v28 = *(_QWORD *)&a2 + 100000000LL;
  v32 = (struct _FILETIME)(*(_QWORD *)&a2 + 100000000LL);
  ppv = 0LL;
  v5 = CoCreateInstance(
         &CLSID_PenWorkspaceLayoutPolicyManager,
         0LL,
         1u,
         &GUID_9302a129_7433_42a0_9cb8_5da5964f2756,
         &ppv);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x267,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_45;
  }
  v28 = 0LL;
  v7 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 32LL))(ppv, 1LL, &v28);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x26A,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v7);
  v8 = v28;
  if ( v28 )
  {
    v34 = v28;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
    v35 = 0;
    v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 24LL))(v8, &v35);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD,
        (__int64)"internal\\shell\\private\\inc\\objectarrayadapter.h",
        (const char *)(unsigned int)v9);
    v36 = 0;
    v37 = 0LL;
    v38 = &v34;
    ObjectArrayAdapter<IPenWorkspaceLayoutItem>::Iterator::GetCurrentObject(&v36);
    v39 = v35;
    v40 = 0LL;
    v41 = &v34;
    ObjectArrayAdapter<IPenWorkspaceLayoutItem>::Iterator::GetCurrentObject(&v39);
    while ( 1 )
    {
      if ( v36 == v39 && v38 == v41 )
      {
        v23 = v40;
        if ( v40 )
        {
          v40 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        }
        v24 = v37;
        if ( v37 )
        {
          v37 = 0LL;
          (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v24 + 16LL))(v24);
        }
        v25 = v34;
        if ( v34 )
        {
          v34 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        }
        v8 = v28;
        break;
      }
      v10 = v37;
      v42[2] = v37;
      if ( v37 )
        (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v37 + 8LL))(v37);
      v29 = 0LL;
      string = 0LL;
      if ( (*(int (__fastcall **)(const WCHAR *, HSTRING *))(*(_QWORD *)v10 + 24LL))(v10, &string) < 0 )
      {
        v14 = v29;
        if ( v29 )
        {
          LastError = GetLastError();
          WindowsDeleteString(v14);
          SetLastError(LastError);
        }
        v29 = 0LL;
        if ( (*(int (__fastcall **)(const WCHAR *, HSTRING *))(*(_QWORD *)v10 + 32LL))(v10, &v29) >= 0 )
        {
          v16 = v29;
          if ( !v29 )
            goto LABEL_31;
          StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(v29, 0LL);
          v42[0] = StringRawBuffer;
          v30 = 0LL;
          v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v43, v42);
          WindowsDeleteString(v30);
          v30 = 0LL;
          if ( (int)PenWorkspace::Discover::GetApplicationUserModelIdFromLinkFile(
                      *(HSTRING *)(v18 + 24),
                      (HSTRING)&v30,
                      v19) >= 0 )
          {
            v20 = WindowsGetStringRawBuffer(v30, 0LL);
            if ( PenWorkspace::Discover::RecentAppsCache::PrependDefaultApp(this, v20, &v32) >= 0 )
            {
              v21 = (_DWORD *)*((_QWORD *)PenWorkspaceBrokerTelemetry::Instance() + 1);
              if ( v21 && *v21 )
              {
                PenWorkspaceBrokerTelemetry::Instance();
                PenWorkspaceBrokerTelemetry::OemAppLoaded_(v22, StringRawBuffer);
              }
              ++*a3;
            }
          }
          WindowsDeleteString(v30);
          v30 = 0LL;
        }
      }
      else
      {
        v11 = (WCHAR *)WindowsGetStringRawBuffer(string, 0LL);
        if ( PenWorkspace::Discover::RecentAppsCache::PrependDefaultApp(this, v11, &v32) >= 0 )
        {
          v12 = (_DWORD *)*((_QWORD *)PenWorkspaceBrokerTelemetry::Instance() + 1);
          if ( v12 && *v12 )
          {
            PenWorkspaceBrokerTelemetry::Instance();
            PenWorkspaceBrokerTelemetry::OemAppLoaded_(v13, v11);
          }
          ++*a3;
        }
      }
      v16 = v29;
LABEL_31:
      if ( v16 )
        WindowsDeleteString(v16);
      if ( string )
        WindowsDeleteString(string);
      (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v10 + 16LL))(v10);
      ++v36;
      ObjectArrayAdapter<IPenWorkspaceLayoutItem>::Iterator::GetCurrentObject(&v36);
    }
  }
  v6 = 0;
  if ( v8 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
LABEL_45:
  v26 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v26 + 16LL))(v26);
  }
  return v6;
}
