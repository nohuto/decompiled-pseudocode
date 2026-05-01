/*
 * XREFs of ?OnShellHookMessage@AppViewDataSourceAdapter@@UEAAJ_K_J@Z @ 0x1801917B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindItemForView@AppViewDataSourceAdapter@@AEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180191F94 (-FindItemForView@AppViewDataSourceAdapter@@AEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@Comp.c)
 *     ?UpdateDisplayName@AppViewDataSourceAdapter@@CAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801921E0 (-UpdateDisplayName@AppViewDataSourceAdapter@@CAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multit.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppViewDataSourceAdapter::OnShellHookMessage(
        AppViewDataSourceAdapter *this,
        __int64 a2,
        const char *a3)
{
  const char *v3; // r9
  __int64 v5; // rcx
  struct IApplicationView *v6; // rax
  struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *v7; // rbx
  __int64 result; // rax
  struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *v9[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v11; // [rsp+58h] [rbp+20h] BYREF

  v9[1] = (struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *)-2LL;
  v3 = a3;
  try
  {
    if ( a2 == 6 )
    {
      v5 = *((_QWORD *)this + 9);
      v11 = 0LL;
      (*(void (__fastcall **)(__int64, const char *, struct IApplicationView **))(*(_QWORD *)v5 + 48LL))(v5, a3, &v11);
      v6 = v11;
      if ( v11 )
      {
        AppViewDataSourceAdapter::FindItemForView((char *)this - 32, v9, v11);
        v7 = v9[0];
        if ( v9[0] )
          AppViewDataSourceAdapter::UpdateDisplayName(v11, v9[0]);
        if ( v7 )
          (*(void (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *))(*(_QWORD *)v7 + 16LL))(v7);
        v6 = v11;
      }
      if ( v6 )
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v6 + 16LL))(v6);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xE5,
                           (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
                           v3);
  }
  return result;
}
