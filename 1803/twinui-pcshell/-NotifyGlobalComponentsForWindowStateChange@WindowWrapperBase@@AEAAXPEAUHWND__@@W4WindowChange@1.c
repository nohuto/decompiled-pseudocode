/*
 * XREFs of ?NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x1801F2894
 * Callers:
 *     _lambda_84ae6e21f9379359c5dabe643d80e783_::operator() @ 0x1801F0970 (_lambda_84ae6e21f9379359c5dabe643d80e783_--operator().c)
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801F2D1C (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXW4NavigationLevel@ViewManagerI.c)
 *     ?WindowRemoved@WindowWrapperBase@@UEAAJXZ @ 0x1801F4770 (-WindowRemoved@WindowWrapperBase@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5c3eee82b519ba7ea88c1ca71d1d9821___ @ 0x1801EEE18 (Windows--Internal--ComTaskPool--QueueTask__lambda_5c3eee82b519ba7ea88c1ca71d1d9821___.c)
 *     ??0?$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802233CC (--0-$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_pol.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowWrapperBase::NotifyGlobalComponentsForWindowStateChange(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // [rsp+28h] [rbp-30h] BYREF
  __int64 v10[2]; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+40h] [rbp-18h]
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 312) + 168LL))(*(_QWORD *)(a1 + 312));
  if ( (*(_BYTE *)(a1 + 352) & 1) == 0 )
  {
    wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>(
      &v12,
      a1);
    v9 = a1;
    wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>(
      v10,
      v12);
    v10[1] = a2;
    v11 = a3;
    Windows::Internal::ComTaskPool::QueueTask__lambda_5c3eee82b519ba7ea88c1ca71d1d9821___(
      v8,
      v7,
      *(_DWORD *)(a1 + 476),
      (__int64)&v9);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(v10);
    return wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v12);
  }
  return result;
}
