/*
 * XREFs of ?InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x180191874
 * Callers:
 *     ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Z @ 0x1801912A8 (-RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJPEAUIApplicationViewCollection@@PEAUIAppl.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x180003B78 (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ObjectArrayAdapter@UIApplicationView@@@@QEAA@PEAUIObjectArray@@@Z @ 0x180100FA0 (--0-$ObjectArrayAdapter@UIApplicationView@@@@QEAA@PEAUIObjectArray@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ @ 0x180102B74 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ.c)
 *     ?AddItemForView@AppViewDataSourceAdapter@@AEAAXPEAUIApplicationView@@@Z @ 0x180191B00 (-AddItemForView@AppViewDataSourceAdapter@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?FindItemForView@AppViewDataSourceAdapter@@AEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180191F94 (-FindItemForView@AppViewDataSourceAdapter@@AEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@Comp.c)
 *     ?ShouldIncludeView@AppViewDataSourceAdapter@@CA_NPEAUIApplicationView@@@Z @ 0x180192144 (-ShouldIncludeView@AppViewDataSourceAdapter@@CA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall AppViewDataSourceAdapter::InitializeItems(AppViewDataSourceAdapter *this)
{
  AppViewDataSourceAdapter *v1; // rsi
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  struct IApplicationView *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  AppViewDataSourceAdapter *v10; // rbx
  struct IApplicationView *v11; // rbx
  const char *v12; // r9
  __int64 v13; // [rsp+28h] [rbp-60h] BYREF
  unsigned int v14; // [rsp+30h] [rbp-58h]
  unsigned int v15; // [rsp+38h] [rbp-50h] BYREF
  struct IApplicationView *v16; // [rsp+40h] [rbp-48h]
  __int64 *v17; // [rsp+48h] [rbp-40h]
  unsigned int v18; // [rsp+50h] [rbp-38h] BYREF
  __int64 v19; // [rsp+58h] [rbp-30h]
  __int64 *v20; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  AppViewDataSourceAdapter *v22; // [rsp+90h] [rbp+8h] BYREF
  __int64 v23; // [rsp+98h] [rbp+10h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+18h] BYREF
  struct IApplicationView *v25; // [rsp+A8h] [rbp+20h]

  v22 = this;
  v1 = this;
  v2 = *((_QWORD *)this + 13);
  if ( !v2 )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xE9,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)0x80070490LL);
  }
  v24 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 24LL))(v2, &v24);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xEC,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  ObjectArrayAdapter<IApplicationView>::ObjectArrayAdapter<IApplicationView>((__int64)&v13, v24);
  v15 = 0;
  v16 = 0LL;
  v17 = &v13;
  ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v15);
  v18 = v14;
  v19 = 0LL;
  v20 = &v13;
  ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v18);
  while ( v15 != v18 || v17 != v20 )
  {
    v11 = v16;
    v25 = v16;
    if ( v16 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v16 + 8LL))(v16);
    try
    {
      if ( AppViewDataSourceAdapter::ShouldIncludeView(v11) )
        AppViewDataSourceAdapter::AddItemForView(v1, v11);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0xF8,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        v12);
      v1 = v22;
      v11 = v25;
    }
    if ( v11 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v11 + 16LL))(v11);
    ++v15;
    ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v15);
  }
  v4 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)v1 + 13);
  v23 = 0LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 72LL))(v7, &v23);
  v8 = v23;
  if ( v23 )
  {
    AppViewDataSourceAdapter::FindItemForView(v1, &v22, v23);
    v10 = v22;
    if ( v22 )
    {
      LOBYTE(v9) = 1;
      (*(void (__fastcall **)(AppViewDataSourceAdapter *, __int64))(*(_QWORD *)v22 + 72LL))(v22, v9);
    }
    if ( v10 )
      (*(void (__fastcall **)(AppViewDataSourceAdapter *))(*(_QWORD *)v10 + 16LL))(v10);
    v8 = v23;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
}
