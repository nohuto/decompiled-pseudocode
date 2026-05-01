/*
 * XREFs of ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x180111530
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800279DC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009D91C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ @ 0x18011018C (-StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ.c)
 *     ?s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ @ 0x180113B38 (-s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ.c)
 *     wil::details::ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___::_ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___ @ 0x180115A00 (wil--details--ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___--_ScopeExitFn__lambda_d52e.c)
 *     ??$emplace_back@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@@Z @ 0x180117074 (--$emplace_back@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeoplePaneView.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801E2A80 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall PeoplePaneViewManager::LaunchPeopleShare(
        RTL_SRWLOCK *this,
        unsigned __int16 *a2,
        struct IInspectable *a3)
{
  char *v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 *ppv; // rax
  HRESULT Instance; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  HRESULT v12; // eax
  HWND WindowW; // rax
  const char *v14; // r9
  IUnknown *v15; // rbx
  HRESULT v16; // eax
  __int64 v17; // rax
  IUnknown *v18; // rcx
  IUnknown *pUnk; // [rsp+40h] [rbp-79h] BYREF
  __int128 v21; // [rsp+48h] [rbp-71h] BYREF
  __int64 v22; // [rsp+58h] [rbp-61h]
  void *Src; // [rsp+60h] [rbp-59h] BYREF
  const WCHAR *AppId; // [rsp+68h] [rbp-51h] BYREF
  char v25[8]; // [rsp+70h] [rbp-49h] BYREF
  RTL_SRWLOCK *v26; // [rsp+78h] [rbp-41h]
  __int128 v27; // [rsp+80h] [rbp-39h] BYREF
  char v28; // [rsp+90h] [rbp-29h]
  __int64 v29; // [rsp+98h] [rbp-21h]
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-19h] BYREF
  HSTRING string; // [rsp+B8h] [rbp-1h] BYREF
  char v32[32]; // [rsp+C0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v29 = -2LL;
  Src = a2;
  v22 = 0x25E000001F4LL;
  v5 = (char *)operator new(0x60uLL);
  AppId = (const WCHAR *)v5;
  *((_DWORD *)v5 + 2) = 1;
  *((_DWORD *)v5 + 3) = 1;
  *(_QWORD *)v5 = &std::_Ref_count_obj<PeoplePaneViewInfo>::`vftable';
  v26 = (RTL_SRWLOCK *)(v5 + 16);
  if ( v5 != (char *)-16LL )
  {
    std::wstring::wstring((unsigned __int64 *)v5 + 2, Src, v6);
    *((_QWORD *)v5 + 6) = 0LL;
    *((_DWORD *)v5 + 14) = 0;
    *((_QWORD *)v5 + 8) = 0LL;
    v5[72] = 0;
    *((_DWORD *)v5 + 19) = 1;
    *((_QWORD *)v5 + 10) = v22;
    *((_QWORD *)v5 + 11) = 0LL;
  }
  *((_QWORD *)&v21 + 1) = v5;
  *(_QWORD *)&v21 = v5 + 16;
  PeoplePaneViewInfo::StartTelemetryShowTimer((PeoplePaneViewInfo *)(v5 + 16));
  AcquireSRWLockExclusive(this + 5);
  v26 = this + 5;
  std::vector<std::shared_ptr<PeoplePaneViewInfo>>::emplace_back<std::shared_ptr<PeoplePaneViewInfo>>(&this[6], &v21);
  if ( this != (RTL_SRWLOCK *)-40LL )
    ReleaseSRWLockExclusive(this + 5);
  if ( *((_QWORD *)&v21 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v21 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v7 = *((_QWORD *)&v21 + 1);
      (***((void (__fastcall ****)(_QWORD))&v21 + 1))(*((_QWORD *)&v21 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v21 + 1) + 8LL))(*((_QWORD *)&v21 + 1));
    }
  }
  *(_QWORD *)&v21 = this - 11;
  *((_QWORD *)&v21 + 1) = &Src;
  v27 = v21;
  v28 = 1;
  pUnk = 0LL;
  ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&pUnk);
  Instance = CoCreateInstance(
               &CLSID_ApplicationActivationManager,
               0LL,
               1u,
               &GUID_998d66a2_4a54_496c_9e18_268890860004,
               (LPVOID *)ppv);
  v10 = Instance;
  if ( Instance < 0 )
  {
    v11 = 312LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_21;
  }
  v12 = CoAllowSetForegroundWindow(pUnk, 0LL);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x13A,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v12);
  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( !SetForegroundWindow(WindowW) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x13C,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      v14);
  AppId = PeoplePaneViewManager::s_GetAppId();
  v15 = pUnk;
  string = 0LL;
  v16 = WindowsCreateStringReference(L"Windows.Launch", 0xEu, &hstringHeader, &string);
  if ( v16 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16);
  v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v32, &AppId);
  Instance = ((__int64 (__fastcall *)(IUnknown *, _QWORD, _QWORD, HSTRING, struct IInspectable *, _DWORD, char *))v15->lpVtbl[1].AddRef)(
               v15,
               *(_QWORD *)(v17 + 24),
               0LL,
               string,
               a3,
               0,
               v25);
  v10 = Instance;
  if ( Instance < 0 )
  {
    v11 = 325LL;
    goto LABEL_19;
  }
  v28 = 0;
  v10 = 0;
LABEL_21:
  v18 = pUnk;
  if ( pUnk )
  {
    pUnk = 0LL;
    ((void (__fastcall *)(IUnknown *))v18->lpVtbl->Release)(v18);
  }
  wil::details::ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___::_ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___(&v27);
  return v10;
}
