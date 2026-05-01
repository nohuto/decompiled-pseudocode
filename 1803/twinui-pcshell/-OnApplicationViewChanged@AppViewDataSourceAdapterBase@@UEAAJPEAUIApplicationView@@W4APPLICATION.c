/*
 * XREFs of ?OnApplicationViewChanged@AppViewDataSourceAdapterBase@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180236970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1802350F0 (-AddItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@C.c)
 *     ?FindItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180235B8C (-FindItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@.c)
 *     ?RemoveItemForView@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationView@@@Z @ 0x180237798 (-RemoveItemForView@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppViewDataSourceAdapterBase::OnApplicationViewChanged(
        RTL_SRWLOCK *a1,
        struct IApplicationView *a2,
        int a3)
{
  RTL_SRWLOCK *v6; // r15
  __int64 v7; // rdx
  void (__fastcall *v8)(RTL_SRWLOCK *, struct IApplicationView *); // rax
  int v9; // eax
  const char *v10; // r9
  __int64 result; // rax
  __int64 v12[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v12[1] = -2LL;
  try
  {
    v6 = a1 + 21;
    AcquireSRWLockExclusive(a1 + 21);
    v12[2] = (__int64)v6;
    AppViewDataSourceAdapterBase::FindItemForView((__int64)a1, &v14, (__int64)a2);
    switch ( a3 )
    {
      case 0:
LABEL_25:
        if ( !(*((unsigned __int8 (__fastcall **)(RTL_SRWLOCK *, struct IApplicationView *))a1->Ptr + 4))(a1, a2) || v14 )
          break;
        goto LABEL_27;
      case 1:
        goto LABEL_23;
      case 3:
        if ( v14 )
        {
          v8 = (void (__fastcall *)(RTL_SRWLOCK *, struct IApplicationView *))*((_QWORD *)a1->Ptr + 9);
LABEL_22:
          v8(a1, a2);
        }
        break;
      case 5:
        if ( !(*((unsigned __int8 (__fastcall **)(RTL_SRWLOCK *, struct IApplicationView *))a1->Ptr + 4))(a1, a2) )
          goto LABEL_23;
        if ( !v14 )
        {
LABEL_27:
          AppViewDataSourceAdapterBase::AddItemForView((__int64 *)a1, v12, (__int64)a2);
          wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(v12);
          break;
        }
        (*((void (__fastcall **)(RTL_SRWLOCK *, struct IApplicationView *))a1->Ptr + 7))(a1, a2);
        break;
      case 7:
      case 9:
        if ( v14 )
        {
          LOBYTE(v7) = a3 == 7;
          v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 72LL))(v14, v7);
          if ( v9 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              46LL,
              (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
              (const char *)(unsigned int)v9);
          v8 = (void (__fastcall *)(RTL_SRWLOCK *, struct IApplicationView *))*((_QWORD *)a1->Ptr + 8);
          goto LABEL_22;
        }
        break;
      case 10:
        goto LABEL_25;
      case 11:
LABEL_23:
        if ( v14 )
          AppViewDataSourceAdapterBase::RemoveItemForView((AppViewDataSourceAdapterBase *)a1, a2);
        break;
      default:
        if ( a3 != 12 || !v14 )
          break;
        v8 = (void (__fastcall *)(RTL_SRWLOCK *, struct IApplicationView *))*((_QWORD *)a1->Ptr + 10);
        goto LABEL_22;
    }
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v14);
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x66,
                           (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
                           v10);
  }
  return result;
}
