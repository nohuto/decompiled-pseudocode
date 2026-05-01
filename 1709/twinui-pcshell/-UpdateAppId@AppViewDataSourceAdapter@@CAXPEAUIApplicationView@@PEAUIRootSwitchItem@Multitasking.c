/*
 * XREFs of ?UpdateAppId@AppViewDataSourceAdapter@@CAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801922FC
 * Callers:
 *     ?OnApplicationViewChanged@AppViewDataSourceAdapter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1801915D0 (-OnApplicationViewChanged@AppViewDataSourceAdapter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIE.c)
 *     ?AddItemForView@AppViewDataSourceAdapter@@AEAAXPEAUIApplicationView@@@Z @ 0x180191B00 (-AddItemForView@AppViewDataSourceAdapter@@AEAAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AppViewDataSourceAdapter::UpdateAppId(
        struct IApplicationView *a1,
        struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *a2)
{
  int v3; // eax
  __int64 v4; // rax
  HRESULT v5; // eax
  int v6; // eax
  PCNZWCH sourceString; // [rsp+28h] [rbp-18h] BYREF
  UINT32 length[2]; // [rsp+30h] [rbp-10h]
  __int64 v9; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  HSTRING string; // [rsp+50h] [rbp+10h] BYREF

  sourceString = 0LL;
  *(_QWORD *)length = -1LL;
  v9 = -1LL;
  v3 = (*(__int64 (__fastcall **)(struct IApplicationView *, PCNZWCH *))(*(_QWORD *)a1 + 112LL))(a1, &sourceString);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x16C,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  LODWORD(v4) = length[0];
  if ( *(_QWORD *)length == -1LL )
  {
    if ( sourceString )
    {
      v4 = -1LL;
      do
        ++v4;
      while ( sourceString[v4] );
    }
    else
    {
      v4 = 0LL;
    }
    *(_QWORD *)length = v4;
  }
  v5 = WindowsCreateString(sourceString, v4, &string);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x16E,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, HSTRING))(*(_QWORD *)a2 + 56LL))(
         a2,
         string);
  if ( v6 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x16F,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v6);
  WindowsDeleteString(string);
  string = 0LL;
  if ( sourceString )
    CoTaskMemFree((LPVOID)sourceString);
}
