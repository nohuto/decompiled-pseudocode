/*
 * XREFs of ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x1800E8600
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005B114 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ @ 0x1800EA688 (-s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ.c)
 *     wil::details::ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___::_ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___ @ 0x1800EBABC (wil--details--ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___--_ScopeExitFn__lambda_d52e.c)
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800EBCD4 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$make_shared@UPeoplePaneViewInfo@@AEAPEBGW4ViewType@@AEAUtagSIZE@@@std@@YA?AV?$shared_ptr@UPeoplePaneViewInfo@@@0@AEAPEBG$$QEAW4ViewType@@AEAUtagSIZE@@@Z @ 0x1800EC448 (--$make_shared@UPeoplePaneViewInfo@@AEAPEBGW4ViewType@@AEAUtagSIZE@@@std@@YA-AV-$shared_ptr@UPeo.c)
 *     ??$emplace_back@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@@Z @ 0x1800EC560 (--$emplace_back@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeoplePaneView.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall PeoplePaneViewManager::LaunchPeopleShare(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2,
        struct IInspectable *a3)
{
  __int64 v5; // rax
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rbx
  HRESULT Instance; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  HRESULT v11; // eax
  IUnknown *v12; // rbx
  HRESULT v13; // eax
  HSTRING_HEADER *v14; // rax
  IUnknown *v15; // rcx
  IUnknown *pUnk; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v19[2]; // [rsp+50h] [rbp-B0h] BYREF
  const unsigned __int16 *v20; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v21; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v22[8]; // [rsp+70h] [rbp-90h] BYREF
  PSRWLOCK SRWLock; // [rsp+78h] [rbp-88h] BYREF
  const WCHAR *AppId; // [rsp+80h] [rbp-80h] BYREF
  __int128 v25; // [rsp+88h] [rbp-78h] BYREF
  __int64 v26; // [rsp+98h] [rbp-68h]
  _BYTE v27[8]; // [rsp+A0h] [rbp-60h] BYREF
  volatile signed __int32 *v28; // [rsp+A8h] [rbp-58h]
  _BYTE v29[24]; // [rsp+B0h] [rbp-50h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+C8h] [rbp-38h] BYREF
  HSTRING string; // [rsp+E0h] [rbp-20h] BYREF
  HSTRING_HEADER v32; // [rsp+E8h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  v26 = -2LL;
  v20 = a2;
  wil::srwlock::lock_exclusive(this + 4, &SRWLock);
  v19[0] = 500;
  v19[1] = 600;
  v18 = 1;
  v5 = std::make_shared<PeoplePaneViewInfo,unsigned short const * &,enum ViewType,tagSIZE &>(v27, &v20, &v18, v19);
  std::vector<std::shared_ptr<PeoplePaneViewInfo>>::emplace_back<std::shared_ptr<PeoplePaneViewInfo>>(&this[5], v5);
  v6 = v28;
  if ( v28 )
  {
    if ( !_InterlockedDecrement(v28 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( !_InterlockedDecrement(v6 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v21 = 0LL;
  std::shared_ptr<PeoplePaneViewInfo>::operator=(&v21, (char *)this[6].Ptr - 16);
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
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  *(_QWORD *)&v25 = this - 8;
  *((_QWORD *)&v25 + 1) = &v20;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)v29, &v25);
  pUnk = 0LL;
  Instance = CoCreateInstance(
               &CLSID_ApplicationActivationManager,
               0LL,
               1u,
               &GUID_998d66a2_4a54_496c_9e18_268890860004,
               (LPVOID *)&pUnk);
  v9 = Instance;
  if ( Instance < 0 )
  {
    v10 = 202LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_21;
  }
  v11 = CoAllowSetForegroundWindow(pUnk, 0LL);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xCC,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v11);
  AppId = PeoplePaneViewManager::s_GetAppId();
  v12 = pUnk;
  string = 0LL;
  v13 = WindowsCreateStringReference(L"Windows.Launch", 0xEu, &hstringHeader, &string);
  if ( v13 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v32, &AppId);
  Instance = ((__int64 (__fastcall *)(IUnknown *, PVOID, _QWORD, HSTRING, struct IInspectable *, _DWORD, _BYTE *))v12->lpVtbl[1].AddRef)(
               v12,
               v14[1].Reserved.Reserved1,
               0LL,
               string,
               a3,
               0,
               v22);
  v9 = Instance;
  if ( Instance < 0 )
  {
    v10 = 213LL;
    goto LABEL_19;
  }
  v29[16] = 0;
  v9 = 0;
LABEL_21:
  v15 = pUnk;
  if ( pUnk )
  {
    pUnk = 0LL;
    ((void (__fastcall *)(IUnknown *))v15->lpVtbl->Release)(v15);
  }
  wil::details::ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___::_ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___(v29);
  return v9;
}
