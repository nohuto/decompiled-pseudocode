/*
 * XREFs of ?InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x18023662C
 * Callers:
 *     ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@PEAUIInspectable@@44@Z @ 0x1802378E8 (-RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJPEAUIApplicationViewCollection@@PEAUIAppl.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ObjectArrayAdapter@UIObservableObjectArrayChangedBeginEnd@@@@QEAA@PEAUIObjectArray@@@Z @ 0x18014F470 (--0-$ObjectArrayAdapter@UIObservableObjectArrayChangedBeginEnd@@@@QEAA@PEAUIObjectArray@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ @ 0x18015033C (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ.c)
 *     ?AddItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1802350F0 (-AddItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@C.c)
 *     ?FindItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180235B8C (-FindItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@.c)
 *     ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x180237AD0 (-ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall AppViewDataSourceAdapter::InitializeItems(AppViewDataSourceAdapter *this)
{
  AppViewDataSourceAdapter *v1; // rsi
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rdx
  struct IApplicationView *v6; // rbx
  const char *v7; // r9
  __int64 v8[2]; // [rsp+20h] [rbp-68h] BYREF
  void *v9; // [rsp+30h] [rbp-58h] BYREF
  int v10; // [rsp+38h] [rbp-50h]
  CWinRTApplicationView *v11; // [rsp+40h] [rbp-48h] BYREF
  struct IApplicationView *v12; // [rsp+48h] [rbp-40h] BYREF
  void **v13; // [rsp+50h] [rbp-38h]
  CWinRTApplicationView *v14; // [rsp+58h] [rbp-30h] BYREF
  CWinRTApplicationView *v15; // [rsp+60h] [rbp-28h] BYREF
  void **v16; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  AppViewDataSourceAdapter *v18; // [rsp+90h] [rbp+8h] BYREF
  __int64 v19; // [rsp+98h] [rbp+10h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+18h] BYREF
  CWinRTApplicationView *v21; // [rsp+A8h] [rbp+20h] BYREF

  v18 = this;
  v8[1] = -2LL;
  v1 = this;
  if ( !*((_QWORD *)this + 5) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      114LL,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)0x80070490LL);
    __debugbreak();
  }
  v20 = 0LL;
  v2 = *((_QWORD *)this + 5);
  v20 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 24LL))(v2, &v20);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      117LL,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  ObjectArrayAdapter<IObservableObjectArrayChangedBeginEnd>::ObjectArrayAdapter<IObservableObjectArrayChangedBeginEnd>(
    (__int64)&v9,
    v20);
  LODWORD(v11) = 0;
  v12 = 0LL;
  v13 = &v9;
  ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v11);
  LODWORD(v14) = v10;
  v15 = 0LL;
  v16 = &v9;
  ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v14);
  while ( (_DWORD)v11 != (_DWORD)v14 || v13 != v16 )
  {
    v6 = v12;
    v21 = v12;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v21);
    try
    {
      if ( AppViewDataSourceAdapter::ShouldIncludeView((AppViewDataSourceAdapter *)((char *)v1 + 8), v6) )
      {
        AppViewDataSourceAdapterBase::AddItemForView((__int64 *)v1 + 1, v8, (__int64)v6);
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(v8);
      }
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x81,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        v7);
      v1 = v18;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v21);
    LODWORD(v11) = (_DWORD)v11 + 1;
    ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v11);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v15);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v9);
  v19 = 0LL;
  v4 = *((_QWORD *)v1 + 5);
  v19 = 0LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 72LL))(v4, &v19);
  if ( v19 )
  {
    AppViewDataSourceAdapterBase::FindItemForView((__int64)v1 + 8, &v18, v19);
    if ( v18 )
    {
      LOBYTE(v5) = 1;
      (*(void (__fastcall **)(AppViewDataSourceAdapter *, __int64))(*(_QWORD *)v18 + 72LL))(v18, v5);
    }
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v18);
  }
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
}
