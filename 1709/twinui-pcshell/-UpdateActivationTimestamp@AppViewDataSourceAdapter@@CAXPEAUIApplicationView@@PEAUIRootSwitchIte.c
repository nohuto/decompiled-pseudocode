/*
 * XREFs of ?UpdateActivationTimestamp@AppViewDataSourceAdapter@@CAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180192424
 * Callers:
 *     ?OnApplicationViewChanged@AppViewDataSourceAdapter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1801915D0 (-OnApplicationViewChanged@AppViewDataSourceAdapter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIE.c)
 *     ?AddItemForView@AppViewDataSourceAdapter@@AEAAXPEAUIApplicationView@@@Z @ 0x180191B00 (-AddItemForView@AppViewDataSourceAdapter@@AEAAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AppViewDataSourceAdapter::UpdateActivationTimestamp(
        struct IApplicationView *a1,
        struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *a2)
{
  int v3; // eax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a1 + 160LL))(a1, &v6);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x175,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, __int64))(*(_QWORD *)a2 + 64LL))(
         a2,
         v6);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x179,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x180192498LL);
  }
}
