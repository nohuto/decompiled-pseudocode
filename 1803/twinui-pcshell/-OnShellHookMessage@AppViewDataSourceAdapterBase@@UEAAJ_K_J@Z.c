/*
 * XREFs of ?OnShellHookMessage@AppViewDataSourceAdapterBase@@UEAAJ_K_J@Z @ 0x180236D20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?FindItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180235B8C (-FindItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AppViewDataSourceAdapterBase::OnShellHookMessage(RTL_SRWLOCK *this, __int64 a2, __int64 a3)
{
  RTL_SRWLOCK *v6; // rbx
  const char *v7; // r9
  PVOID Ptr; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  try
  {
    v6 = this + 20;
    AcquireSRWLockExclusive(this + 20);
    if ( a2 == 6 )
    {
      Ptr = this[3].Ptr;
      v11 = 0LL;
      (*(void (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)Ptr + 48LL))(Ptr, a3, &v11);
      if ( v11 )
      {
        AppViewDataSourceAdapterBase::FindItemForView((__int64)&this[-1], &v12, v11);
        if ( v12 )
          (*((void (__fastcall **)(RTL_SRWLOCK *, __int64))this[-1].Ptr + 6))(this - 1, v11);
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v12);
      }
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v11);
    }
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7B,
                           (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
                           v7);
  }
  return result;
}
