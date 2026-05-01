/*
 * XREFs of _lambda_458208d6a7ae0bd08cfee5104eefb8a5_::operator() @ 0x1801EDFF0
 * Callers:
 *     wil::details::ScopeExitFn__lambda_458208d6a7ae0bd08cfee5104eefb8a5___::_ScopeExitFn__lambda_458208d6a7ae0bd08cfee5104eefb8a5___ @ 0x1801EDFD8 (wil--details--ScopeExitFn__lambda_458208d6a7ae0bd08cfee5104eefb8a5___--_ScopeExitFn__lambda_4582.c)
 *     _lambda_4f3507863b21d28a47ffae36e7c55767_::operator() @ 0x1801EE054 (_lambda_4f3507863b21d28a47ffae36e7c55767_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801F27B0 (-NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_458208d6a7ae0bd08cfee5104eefb8a5_::operator()(__int64 a1)
{
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*(_QWORD *)a1 + 320LL) + 152LL))(
    *(_QWORD *)(*(_QWORD *)a1 + 320LL),
    &SRWLock);
  WindowWrapperBase::NavigateInternal(*(_QWORD *)a1 + 8LL, 0LL);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
