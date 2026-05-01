/*
 * XREFs of ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x180237AD0
 * Callers:
 *     ?InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x18023662C (-InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ShouldIncludeView@AppViewDataSourceAdapterBase@@MEAA_NPEAUIApplicationView@@@Z @ 0x180237B60 (-ShouldIncludeView@AppViewDataSourceAdapterBase@@MEAA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall AppViewDataSourceAdapter::ShouldIncludeView(
        AppViewDataSourceAdapter *this,
        struct IApplicationView *a2)
{
  bool v3; // bl
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  v3 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( AppViewDataSourceAdapterBase::ShouldIncludeView(this, a2) )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v5);
    v6 = -1LL;
    v7 = -1LL;
    v3 = (*(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 136LL))(a2, &v5) >= 0;
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v5);
  return v3;
}
