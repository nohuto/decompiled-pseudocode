/*
 * XREFs of ?UpdateDisplayName@AppViewDataSourceAdapter@@CAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801921E0
 * Callers:
 *     ?OnShellHookMessage@AppViewDataSourceAdapter@@UEAAJ_K_J@Z @ 0x1801917B0 (-OnShellHookMessage@AppViewDataSourceAdapter@@UEAAJ_K_J@Z.c)
 *     ?AddItemForView@AppViewDataSourceAdapter@@AEAAXPEAUIApplicationView@@@Z @ 0x180191B00 (-AddItemForView@AppViewDataSourceAdapter@@AEAAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1801CD710 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AppViewDataSourceAdapter::UpdateDisplayName(
        struct IApplicationView *a1,
        struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *a2,
        unsigned __int16 **a3)
{
  int ViewTitle; // eax
  WCHAR *v5; // rbx
  __int64 v6; // rax
  HRESULT v7; // eax
  int v8; // eax
  PCNZWCH sourceString; // [rsp+28h] [rbp-18h] BYREF
  UINT32 length[2]; // [rsp+30h] [rbp-10h]
  __int64 v11; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  HSTRING string; // [rsp+70h] [rbp+30h] BYREF

  sourceString = 0LL;
  *(_QWORD *)length = -1LL;
  v11 = -1LL;
  ViewTitle = ApplicationViewHelpers::GetViewTitle(a1, (struct IApplicationView *)&sourceString, a3);
  if ( ViewTitle < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x163,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)ViewTitle);
    __debugbreak();
  }
  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  v5 = (WCHAR *)sourceString;
  LODWORD(v6) = length[0];
  if ( *(_QWORD *)length == -1LL )
  {
    if ( sourceString )
    {
      v6 = -1LL;
      do
        ++v6;
      while ( sourceString[v6] );
    }
    else
    {
      v6 = 0LL;
    }
    *(_QWORD *)length = v6;
  }
  v7 = WindowsCreateString(sourceString, v6, &string);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x165,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, HSTRING))(*(_QWORD *)a2 + 48LL))(
         a2,
         string);
  if ( v8 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x166,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v8);
  WindowsDeleteString(string);
  string = 0LL;
  if ( v5 )
    CoTaskMemFree(v5);
}
