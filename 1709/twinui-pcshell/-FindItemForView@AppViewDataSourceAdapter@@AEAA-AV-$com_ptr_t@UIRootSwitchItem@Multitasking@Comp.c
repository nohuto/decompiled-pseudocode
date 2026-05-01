/*
 * XREFs of ?FindItemForView@AppViewDataSourceAdapter@@AEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180191F94
 * Callers:
 *     ?OnApplicationViewChanged@AppViewDataSourceAdapter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1801915D0 (-OnApplicationViewChanged@AppViewDataSourceAdapter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIE.c)
 *     ?OnShellHookMessage@AppViewDataSourceAdapter@@UEAAJ_K_J@Z @ 0x1801917B0 (-OnShellHookMessage@AppViewDataSourceAdapter@@UEAAJ_K_J@Z.c)
 *     ?InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x180191874 (-InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ?RemoveItemForView@AppViewDataSourceAdapter@@AEAAXPEAUIApplicationView@@@Z @ 0x180191EC4 (-RemoveItemForView@AppViewDataSourceAdapter@@AEAAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall AppViewDataSourceAdapter::FindItemForView(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 *v6; // rax
  __int64 *v7; // rbx
  __int64 *v8; // rcx
  __int64 v9; // rcx

  if ( a3 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)a3 + 8LL))(a3);
  v6 = *(__int64 **)(a1 + 160);
  v7 = v6;
  v8 = (__int64 *)v6[1];
  while ( !*((_BYTE *)v8 + 25) )
  {
    if ( v8[4] >= a3 )
    {
      v7 = v8;
      v8 = (__int64 *)*v8;
    }
    else
    {
      v8 = (__int64 *)v8[2];
    }
  }
  if ( v7 == v6 || a3 < v7[4] )
    v7 = *(__int64 **)(a1 + 160);
  if ( a3 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)a3 + 16LL))(a3);
  if ( v7 == *(__int64 **)(a1 + 160) )
  {
    *a2 = 0LL;
  }
  else
  {
    v9 = v7[5];
    *a2 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  return a2;
}
