/*
 * XREFs of ?ShouldIncludeView@AppViewSwitchItemDataSource@@AEAA_NPEAUIApplicationView@@@Z @ 0x18015DA10
 * Callers:
 *     ?OnApplicationViewChanged@AppViewSwitchItemDataSource@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18015CF30 (-OnApplicationViewChanged@AppViewSwitchItemDataSource@@UEAAJPEAUIApplicationView@@W4APPLICATION_.c)
 *     ?InitViewsFromCollection@AppViewSwitchItemDataSource@@AEAAJXZ @ 0x18015D2DC (-InitViewsFromCollection@AppViewSwitchItemDataSource@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall AppViewSwitchItemDataSource::ShouldIncludeView(
        AppViewSwitchItemDataSource *this,
        struct IApplicationView *a2)
{
  bool v3; // bl
  LPVOID pv; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+38h] [rbp-10h]
  AppViewSwitchItemDataSource *v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = this;
  pv = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v3 = 0;
  if ( (*(int (__fastcall **)(struct IApplicationView *, AppViewSwitchItemDataSource **))(*(_QWORD *)a2 + 192LL))(
         a2,
         &v8) >= 0 )
  {
    if ( (_DWORD)v8 )
    {
      v6 = -1LL;
      v7 = -1LL;
      if ( (*(int (__fastcall **)(struct IApplicationView *, LPVOID *))(*(_QWORD *)a2 + 112LL))(a2, &pv) >= 0 )
        v3 = 1;
    }
  }
  if ( pv )
    CoTaskMemFree(pv);
  return v3;
}
