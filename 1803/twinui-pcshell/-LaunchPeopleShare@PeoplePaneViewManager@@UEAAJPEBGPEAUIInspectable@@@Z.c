/*
 * XREFs of ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x1801C3CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180098DA4 (--2@YAPEAX_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180110E88 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$emplace_back@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@@Z @ 0x1801BFF64 (--$emplace_back@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeoplePaneView.c)
 *     ??0PeoplePaneViewInfo@@QEAA@PEBGW4ViewType@@UtagSIZE@@@Z @ 0x1801C0498 (--0PeoplePaneViewInfo@@QEAA@PEBGW4ViewType@@UtagSIZE@@@Z.c)
 *     ?RemovePendingShareViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1801C4390 (-RemovePendingShareViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 *     ?StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ @ 0x1801C48D4 (-StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ.c)
 *     ?s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ @ 0x1801C5A04 (-s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall PeoplePaneViewManager::LaunchPeopleShare(
        RTL_SRWLOCK *this,
        unsigned __int16 *a2,
        struct IInspectable *a3)
{
  _DWORD *v5; // rdi
  char v6; // si
  HRESULT Instance; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  HRESULT v10; // eax
  HWND WindowW; // rax
  const char *v12; // r9
  IUnknown *v13; // rbx
  __int64 v14; // rax
  IUnknown *pUnk; // [rsp+48h] [rbp-59h] BYREF
  __int64 AppId; // [rsp+50h] [rbp-51h] BYREF
  unsigned __int16 *v18; // [rsp+58h] [rbp-49h] BYREF
  RTL_SRWLOCK *v19; // [rsp+60h] [rbp-41h]
  unsigned __int16 **v20; // [rsp+68h] [rbp-39h]
  char v21; // [rsp+70h] [rbp-31h]
  _BYTE v22[8]; // [rsp+78h] [rbp-29h] BYREF
  __int64 v23; // [rsp+80h] [rbp-21h]
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-19h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-1h]
  _BYTE v26[32]; // [rsp+A8h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v23 = -2LL;
  v18 = a2;
  AppId = 0x25E000001F4LL;
  v5 = operator new(0x60uLL);
  v6 = 1;
  v5[2] = 1;
  v5[3] = 1;
  *(_QWORD *)v5 = &std::_Ref_count_obj<PeoplePaneViewInfo>::`vftable';
  PeoplePaneViewInfo::PeoplePaneViewInfo((__int64)(v5 + 4), v18, 1, AppId);
  hstringHeader.Reserved.Reserved1 = v5 + 4;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = v5;
  PeoplePaneViewInfo::StartTelemetryShowTimer((PeoplePaneViewInfo *)(v5 + 4));
  AcquireSRWLockExclusive(this + 5);
  v19 = this + 5;
  std::vector<std::shared_ptr<PeoplePaneViewInfo>>::emplace_back<std::shared_ptr<PeoplePaneViewInfo>>(
    (__int64)&this[6],
    &hstringHeader);
  if ( this != (RTL_SRWLOCK *)-40LL )
    ReleaseSRWLockExclusive(this + 5);
  if ( *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] )
    std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&hstringHeader.Reserved.Reserved2[8]);
  v19 = this - 11;
  v20 = &v18;
  v21 = 1;
  pUnk = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pUnk);
  Instance = CoCreateInstance(
               &CLSID_ApplicationActivationManager,
               0LL,
               1u,
               &GUID_998d66a2_4a54_496c_9e18_268890860004,
               (LPVOID *)&pUnk);
  v8 = Instance;
  if ( Instance < 0 )
  {
    v9 = 301LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_15;
  }
  v10 = CoAllowSetForegroundWindow(pUnk, 0LL);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      303LL,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v10);
  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( !SetForegroundWindow(WindowW) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x131,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      v12);
  AppId = (__int64)PeoplePaneViewManager::s_GetAppId();
  v13 = pUnk;
  v25 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Windows.Launch", 0xFu, 0xEu);
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v26, (const WCHAR **)&AppId);
  Instance = ((__int64 (__fastcall *)(IUnknown *, _QWORD, _QWORD, __int64, struct IInspectable *, _DWORD, _BYTE *))v13->lpVtbl[1].AddRef)(
               v13,
               *(_QWORD *)(v14 + 24),
               0LL,
               v25,
               a3,
               0,
               v22);
  v8 = Instance;
  if ( Instance < 0 )
  {
    v9 = 314LL;
    goto LABEL_13;
  }
  v6 = 0;
  v8 = 0;
LABEL_15:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pUnk);
  if ( v6 )
    PeoplePaneViewManager::RemovePendingShareViewInfoForContactId((PeoplePaneViewManager *)&this[-11], v18);
  return v8;
}
