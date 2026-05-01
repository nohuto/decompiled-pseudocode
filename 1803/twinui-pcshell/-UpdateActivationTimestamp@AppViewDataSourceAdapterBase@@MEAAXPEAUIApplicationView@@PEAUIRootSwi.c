/*
 * XREFs of ?UpdateActivationTimestamp@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180237C70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall AppViewDataSourceAdapterBase::UpdateActivationTimestamp(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *a3)
{
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 184LL))(a2, &v7);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      422LL,
      (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, __int64))(*(_QWORD *)a3 + 64LL))(
         a3,
         v7);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      426LL,
      (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
}
