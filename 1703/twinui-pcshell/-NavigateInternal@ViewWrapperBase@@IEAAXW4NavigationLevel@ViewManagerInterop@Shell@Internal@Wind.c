/*
 * XREFs of ?NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180116F00
 * Callers:
 *     ?v_OnWindowDestroyed@LegacyViewWrapper@@EEAAXXZ @ 0x180110D10 (-v_OnWindowDestroyed@LegacyViewWrapper@@EEAAXXZ.c)
 *     ?v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180111280 (-v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Int.c)
 *     _lambda_e749f471b43b5c52416cbe595e41d9dc_::operator() @ 0x1801113D0 (_lambda_e749f471b43b5c52416cbe595e41d9dc_--operator().c)
 *     wil::details::ScopeExitFn__lambda_38a469cfc36654f5507ebeb2b95efe45___::_ScopeExitFn__lambda_38a469cfc36654f5507ebeb2b95efe45___ @ 0x18011193C (wil--details--ScopeExitFn__lambda_38a469cfc36654f5507ebeb2b95efe45___--_ScopeExitFn__lambda_38a4.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180111CCC (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewM.c)
 *     _lambda_0d87a18e5f704446e4cb6a14906b73a9_::_lambda_invoker_cdecl_ @ 0x180111EE0 (_lambda_0d87a18e5f704446e4cb6a14906b73a9_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewWrapperBase::NavigateInternal(__int64 a1, unsigned int a2)
{
  bool v2; // zf
  __int64 result; // rax

  if ( a2 != *(_DWORD *)(a1 + 260) )
  {
    v2 = *(_DWORD *)(a1 + 312) == 0;
    *(_DWORD *)(a1 + 260) = a2;
    if ( v2 )
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 152) + 448LL) + 32LL))(
               *(_QWORD *)(*(_QWORD *)(a1 + 152) + 448LL),
               *(unsigned int *)(a1 + 132),
               a2);
  }
  return result;
}
