/*
 * XREFs of ?ShouldIncludeView@AppViewDataSourceAdapter@@CA_NPEAUIApplicationView@@@Z @ 0x180192144
 * Callers:
 *     ?OnApplicationViewChanged@AppViewDataSourceAdapter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1801915D0 (-OnApplicationViewChanged@AppViewDataSourceAdapter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIE.c)
 *     ?InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x180191874 (-InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall AppViewDataSourceAdapter::ShouldIncludeView(struct IApplicationView *a1)
{
  bool v2; // bl
  LPVOID pv; // [rsp+28h] [rbp-20h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]
  __int64 v6; // [rsp+38h] [rbp-10h]
  int v7; // [rsp+50h] [rbp+8h] BYREF

  pv = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v2 = 0;
  if ( (*(int (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a1 + 192LL))(a1, &v7) >= 0 )
  {
    if ( v7 )
    {
      v5 = -1LL;
      v6 = -1LL;
      if ( (*(int (__fastcall **)(struct IApplicationView *, LPVOID *))(*(_QWORD *)a1 + 112LL))(a1, &pv) >= 0 )
        v2 = 1;
    }
  }
  if ( pv )
    CoTaskMemFree(pv);
  return v2;
}
