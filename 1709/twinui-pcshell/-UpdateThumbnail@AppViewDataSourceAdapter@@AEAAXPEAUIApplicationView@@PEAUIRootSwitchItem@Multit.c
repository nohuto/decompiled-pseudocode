/*
 * XREFs of ?UpdateThumbnail@AppViewDataSourceAdapter@@AEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180192054
 * Callers:
 *     ?OnApplicationViewChanged@AppViewDataSourceAdapter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1801915D0 (-OnApplicationViewChanged@AppViewDataSourceAdapter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIE.c)
 *     ?AddItemForView@AppViewDataSourceAdapter@@AEAAXPEAUIApplicationView@@@Z @ 0x180191B00 (-AddItemForView@AppViewDataSourceAdapter@@AEAAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AppViewDataSourceAdapter::UpdateThumbnail(
        AppViewDataSourceAdapter *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *a3)
{
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+58h] [rbp+20h] BYREF

  if ( *((_QWORD *)this + 15) )
  {
    v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, unsigned int *))(*(_QWORD *)a2 + 48LL))(a2, &v11);
    if ( v5 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x147,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)v5);
    v6 = *((_QWORD *)this + 15);
    v10 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v6 + 48LL))(v6, v11, &v10);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x14B,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, __int64))(*(_QWORD *)a3 + 104LL))(
           a3,
           v10);
    if ( v8 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x14C,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)v8);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
}
