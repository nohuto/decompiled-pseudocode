/*
 * XREFs of ?OnApplicationViewChanged@AppViewDataSourceAdapter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1801915D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddItemForView@AppViewDataSourceAdapter@@AEAAXPEAUIApplicationView@@@Z @ 0x180191B00 (-AddItemForView@AppViewDataSourceAdapter@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?RemoveItemForView@AppViewDataSourceAdapter@@AEAAXPEAUIApplicationView@@@Z @ 0x180191EC4 (-RemoveItemForView@AppViewDataSourceAdapter@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?FindItemForView@AppViewDataSourceAdapter@@AEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180191F94 (-FindItemForView@AppViewDataSourceAdapter@@AEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@Comp.c)
 *     ?UpdateThumbnail@AppViewDataSourceAdapter@@AEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180192054 (-UpdateThumbnail@AppViewDataSourceAdapter@@AEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multit.c)
 *     ?ShouldIncludeView@AppViewDataSourceAdapter@@CA_NPEAUIApplicationView@@@Z @ 0x180192144 (-ShouldIncludeView@AppViewDataSourceAdapter@@CA_NPEAUIApplicationView@@@Z.c)
 *     ?UpdateAppId@AppViewDataSourceAdapter@@CAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801922FC (-UpdateAppId@AppViewDataSourceAdapter@@CAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking.c)
 *     ?UpdateActivationTimestamp@AppViewDataSourceAdapter@@CAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180192424 (-UpdateActivationTimestamp@AppViewDataSourceAdapter@@CAXPEAUIApplicationView@@PEAUIRootSwitchIte.c)
 *     ?UpdateIsVisible@AppViewDataSourceAdapter@@CAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18019249C (-UpdateIsVisible@AppViewDataSourceAdapter@@CAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitas.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppViewDataSourceAdapter::OnApplicationViewChanged(
        RTL_SRWLOCK *a1,
        struct IApplicationView *a2,
        int a3)
{
  RTL_SRWLOCK *v6; // r14
  AppViewDataSourceAdapter *v7; // rsi
  const char *v8; // r9
  __int64 v9; // rdx
  struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *v10; // rbx
  int v11; // eax
  bool ShouldIncludeView; // al
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *v15; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    v6 = a1 + 19;
    AcquireSRWLockExclusive(a1 + 19);
    v7 = (AppViewDataSourceAdapter *)&a1[-3];
    AppViewDataSourceAdapter::FindItemForView(v7, &v15, a2);
    if ( a3 )
    {
      switch ( a3 )
      {
        case 1:
LABEL_23:
          v10 = v15;
LABEL_24:
          if ( v10 )
            AppViewDataSourceAdapter::RemoveItemForView(v7, a2);
          goto LABEL_30;
        case 3:
          v10 = v15;
          if ( v15 )
            AppViewDataSourceAdapter::UpdateIsVisible(a2, v15);
          goto LABEL_30;
        case 5:
          ShouldIncludeView = AppViewDataSourceAdapter::ShouldIncludeView(a2);
          v10 = v15;
          if ( !ShouldIncludeView )
            goto LABEL_24;
          if ( v15 )
          {
            AppViewDataSourceAdapter::UpdateAppId(a2, v15);
            goto LABEL_30;
          }
          goto LABEL_19;
      }
      v9 = (unsigned int)(a3 - 7);
      if ( a3 == 7 || (v9 = (unsigned int)(a3 - 9), a3 == 9) )
      {
        v10 = v15;
        if ( v15 )
        {
          LOBYTE(v9) = a3 == 7;
          v11 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, __int64))(*(_QWORD *)v15 + 72LL))(
                  v15,
                  v9);
          if ( v11 < 0 )
            wil::details::in1diag3::_Throw_Hr(
              retaddr,
              (void *)0x9A,
              (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
              (const char *)(unsigned int)v11);
          AppViewDataSourceAdapter::UpdateActivationTimestamp(a2, v10);
        }
        goto LABEL_30;
      }
      if ( a3 != 10 )
      {
        if ( a3 != 11 )
        {
          if ( a3 == 12 )
          {
            v10 = v15;
            if ( v15 )
              AppViewDataSourceAdapter::UpdateThumbnail(v7, a2, v15);
            goto LABEL_30;
          }
          goto LABEL_29;
        }
        goto LABEL_23;
      }
    }
    if ( !AppViewDataSourceAdapter::ShouldIncludeView(a2) )
    {
LABEL_29:
      v10 = v15;
      goto LABEL_30;
    }
    v10 = v15;
    if ( v15 )
    {
LABEL_30:
      if ( v10 )
        (*(void (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *))(*(_QWORD *)v10 + 16LL))(v10);
      if ( v6 )
        ReleaseSRWLockExclusive(v6);
      return 0LL;
    }
LABEL_19:
    AppViewDataSourceAdapter::AddItemForView(v7, a2);
    goto LABEL_30;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD2,
                           (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
                           v8);
  }
  return result;
}
