/*
 * XREFs of _lambda_5dd7cd4bfb25944316609216e9eeedb1_::operator() @ 0x1801E2DC0
 * Callers:
 *     wil::details::ScopeExitFn__lambda_5dd7cd4bfb25944316609216e9eeedb1___::_ScopeExitFn__lambda_5dd7cd4bfb25944316609216e9eeedb1___ @ 0x1801E2D7C (wil--details--ScopeExitFn__lambda_5dd7cd4bfb25944316609216e9eeedb1___--_ScopeExitFn__lambda_5dd7.c)
 *     _lambda_5eeb3274d8dd6409222f94091fb661d1_::operator() @ 0x1801E2E2C (_lambda_5eeb3274d8dd6409222f94091fb661d1_--operator().c)
 * Callees:
 *     ?NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800EFD10 (-NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wind.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_5dd7cd4bfb25944316609216e9eeedb1_::operator()(__int64 a1)
{
  RTL_SRWLOCK *v2; // rdi

  v2 = (RTL_SRWLOCK *)(*(_QWORD *)(*(_QWORD *)a1 + 176LL) + 296LL);
  AcquireSRWLockExclusive(v2);
  ViewWrapperBase::NavigateInternal(*(_QWORD *)a1 + 8LL, 0);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
