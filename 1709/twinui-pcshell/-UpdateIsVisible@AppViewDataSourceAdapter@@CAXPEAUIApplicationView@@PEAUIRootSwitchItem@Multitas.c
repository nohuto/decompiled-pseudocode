/*
 * XREFs of ?UpdateIsVisible@AppViewDataSourceAdapter@@CAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18019249C
 * Callers:
 *     ?OnApplicationViewChanged@AppViewDataSourceAdapter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1801915D0 (-OnApplicationViewChanged@AppViewDataSourceAdapter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIE.c)
 *     ?AddItemForView@AppViewDataSourceAdapter@@AEAAXPEAUIApplicationView@@@Z @ 0x180191B00 (-AddItemForView@AppViewDataSourceAdapter@@AEAAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AppViewDataSourceAdapter::UpdateIsVisible(
        struct IApplicationView *a1,
        struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // rdx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v11; // [rsp+30h] [rbp+8h] BYREF
  HWND hWnd; // [rsp+40h] [rbp+18h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a1 + 64LL))(a1, &v11);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x17F,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  if ( v11 )
  {
    v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, HWND *))(*(_QWORD *)a1 + 48LL))(a1, &hWnd);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x187,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
    v7 = *(_QWORD *)a2;
    LOBYTE(v8) = !IsIconic(hWnd);
    v9 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, __int64))(v7 + 112))(
           a2,
           v8);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x188,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)v9);
      JUMPOUT(0x180192590LL);
    }
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, _QWORD))(*(_QWORD *)a2 + 112LL))(
           a2,
           0LL);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x182,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
  }
}
