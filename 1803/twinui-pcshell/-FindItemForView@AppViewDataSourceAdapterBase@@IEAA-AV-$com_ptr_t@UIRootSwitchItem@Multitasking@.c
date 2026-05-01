/*
 * XREFs of ?FindItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180235B8C
 * Callers:
 *     ?GetSwitchItemForApplicationView@AppViewDataSourceAdapter@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x180235F40 (-GetSwitchItemForApplicationView@AppViewDataSourceAdapter@@UEAAJPEAUIApplicationView@@AEBU_GUID@.c)
 *     ?InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x18023662C (-InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ?OnApplicationViewChanged@AppViewDataSourceAdapterBase@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180236970 (-OnApplicationViewChanged@AppViewDataSourceAdapterBase@@UEAAJPEAUIApplicationView@@W4APPLICATION.c)
 *     ?OnShellHookMessage@AppViewDataSourceAdapterBase@@UEAAJ_K_J@Z @ 0x180236D20 (-OnShellHookMessage@AppViewDataSourceAdapterBase@@UEAAJ_K_J@Z.c)
 *     ?RemoveItemForView@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationView@@@Z @ 0x180237798 (-RemoveItemForView@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ??0?$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802233CC (--0-$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_pol.c)
 */

_QWORD *__fastcall AppViewDataSourceAdapterBase::FindItemForView(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 *v5; // rdx
  __int64 *v6; // rbx
  __int64 *v7; // r8
  __int64 *v8; // r9
  char v9; // cl
  __int64 v10; // rcx
  unsigned __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>(
    &v12,
    a3);
  v5 = *(__int64 **)(a1 + 136);
  v6 = v5;
  v7 = (__int64 *)v5[1];
  if ( *((_BYTE *)v7 + 25) )
    goto LABEL_10;
  do
  {
    v8 = v7;
    if ( v7[4] >= v12 )
    {
      v7 = (__int64 *)*v7;
      v9 = 0;
    }
    else
    {
      v7 = (__int64 *)v7[2];
      v9 = 1;
    }
    if ( !v9 )
      v6 = v8;
  }
  while ( !*((_BYTE *)v7 + 25) );
  if ( v6 == v5 || v12 < v6[4] )
LABEL_10:
    v6 = *(__int64 **)(a1 + 136);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v12);
  if ( v6 == *(__int64 **)(a1 + 136) )
  {
    *a2 = 0LL;
  }
  else
  {
    v10 = v6[5];
    *a2 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  }
  return a2;
}
