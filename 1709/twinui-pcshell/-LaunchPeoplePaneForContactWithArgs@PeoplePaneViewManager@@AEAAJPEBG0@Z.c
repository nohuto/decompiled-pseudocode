/*
 * XREFs of ?LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z @ 0x18011131C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_20c41668bf63e4a56980cdec2b4f71f2___::Run @ 0x180117B70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_20c41668bf63e4a56980cdec2b4f71f2___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ca651380094f5bc4672f860ee3183d95___::Run @ 0x180117C90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ca651380094f5bc4672f860ee3183d95___--Run.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009D91C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ @ 0x180113B38 (-s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180116724 (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PeoplePaneViewManager::LaunchPeoplePaneForContactWithArgs(
        PeoplePaneViewManager *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // r8
  void *v10; // rsi
  HRESULT v11; // eax
  __int64 v12; // rdx
  HWND WindowW; // rax
  const char *v14; // r9
  LPVOID v15; // rbx
  __int64 v16; // rdi
  const unsigned __int16 *AppId; // rax
  LPVOID v18; // rcx
  LPVOID pv[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  PeoplePaneViewManager *v22; // [rsp+80h] [rbp+30h] BYREF
  LPVOID ppv; // [rsp+98h] [rbp+48h] BYREF

  v22 = this;
  memset(pv, 0, sizeof(pv));
  v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
         pv,
         L"Windows.Internal.ShellExperience.PeoplePane",
         43LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 256LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v5);
    v10 = pv[0];
    goto LABEL_29;
  }
  v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(pv, L" ", 1LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 257LL;
    goto LABEL_18;
  }
  v8 = -1LL;
  if ( a2 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a2[v9] );
  }
  else
  {
    v9 = 0LL;
  }
  v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(pv, a2, v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 258LL;
    goto LABEL_18;
  }
  if ( a3 )
  {
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(pv, L" ", 1LL);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 262LL;
      goto LABEL_18;
    }
    do
      ++v8;
    while ( a3[v8] );
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(pv, a3, v8);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 263LL;
      goto LABEL_18;
    }
  }
  ppv = 0LL;
  v11 = CoCreateInstance(&CLSID_ApplicationActivationClient, 0LL, 1u, &GUID_2e941141_7f97_4756_ba1d_9decde894a3d, &ppv);
  v6 = v11;
  v10 = pv[0];
  if ( v11 < 0 )
  {
    v12 = 271LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_27;
  }
  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( !SetForegroundWindow(WindowW) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x111,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      v14);
  v15 = ppv;
  v16 = *(_QWORD *)ppv;
  AppId = PeoplePaneViewManager::s_GetAppId();
  v11 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, void *, _QWORD, PeoplePaneViewManager **))(v16 + 24))(
          v15,
          AppId,
          v10,
          0LL,
          &v22);
  v6 = v11;
  if ( v11 < 0 )
  {
    v12 = 280LL;
    goto LABEL_25;
  }
  v6 = 0;
LABEL_27:
  v18 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v18 + 16LL))(v18);
  }
LABEL_29:
  if ( v10 )
    CoTaskMemFree(v10);
  return v6;
}
