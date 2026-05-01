/*
 * XREFs of ?AddItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1802350F0
 * Callers:
 *     ?InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x18023662C (-InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ?OnApplicationViewChanged@AppViewDataSourceAdapterBase@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180236970 (-OnApplicationViewChanged@AppViewDataSourceAdapterBase@@UEAAJPEAUIApplicationView@@W4APPLICATION.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180093198 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802233CC (--0-$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_pol.c)
 *     ??$_Try_emplace@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@$$V@?$map@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18023452C (--$_Try_emplace@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@$$V@-$map@V-$co.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall AppViewDataSourceAdapterBase::AddItemForView(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v16[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v18; // [rsp+60h] [rbp+20h] BYREF
  __int64 v19; // [rsp+78h] [rbp+38h] BYREF

  v6 = a1[3];
  v18 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 48LL))(v6, &v18);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      317LL,
      (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 40))(a1, a3, v18);
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 48))(a1, a3, v18);
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 56))(a1, a3, v18);
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 64))(a1, a3, v18);
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 72))(a1, a3, v18);
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 88))(a1, a3, v18);
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 80))(a1, a3, v18);
  LOBYTE(v8) = 1;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 80LL))(v18, v8);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      329LL,
      (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 72LL))(v18, 0LL);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      332LL,
      (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService((__int64)retaddr, 3u, v11);
  v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1[3] + 56LL))(a1[3], v18);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      352LL,
      (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>(
    &v19,
    a3);
  std::map<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,wil::err_exception_policy>>::_Try_emplace<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,>(
    a1 + 17,
    (unsigned __int64)v16,
    &v19);
  v13 = *(_QWORD *)(v16[0] + 40);
  *(_QWORD *)(v16[0] + 40) = v18;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v19);
  v14 = v18;
  v18 = 0LL;
  *a2 = v14;
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v18);
  return a2;
}
