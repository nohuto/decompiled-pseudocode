/*
 * XREFs of wil::details::ScopeExitFn__lambda_38a469cfc36654f5507ebeb2b95efe45___::_ScopeExitFn__lambda_38a469cfc36654f5507ebeb2b95efe45___ @ 0x18013BBCC
 * Callers:
 *     __lambda_e749f471b43b5c52416cbe595e41d9dc_::operator()_::_1_::dtor$0 @ 0x1801EF340 (__lambda_e749f471b43b5c52416cbe595e41d9dc_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18011C2F8 (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180141554 (-NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wind.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_38a469cfc36654f5507ebeb2b95efe45___::_ScopeExitFn__lambda_38a469cfc36654f5507ebeb2b95efe45___(
        _BYTE *a1)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  if ( a1[8] )
  {
    a1[8] = 0;
    ViewEventDispatcher::AcquireLockExclusive(*(RTL_SRWLOCK **)(*(_QWORD *)a1 + 184LL), &SRWLock);
    ViewWrapperBase::NavigateInternal(*(_QWORD *)a1 + 8LL, 0LL);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
}
