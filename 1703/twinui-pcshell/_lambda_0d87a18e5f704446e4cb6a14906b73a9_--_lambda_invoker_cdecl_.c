/*
 * XREFs of _lambda_0d87a18e5f704446e4cb6a14906b73a9_::_lambda_invoker_cdecl_ @ 0x180111EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800F185C (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?GetNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEBA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x180111C5C (-GetNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEBA-AW4NavigationLevel@ViewManager.c)
 *     ?NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180116F00 (-NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wind.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_0d87a18e5f704446e4cb6a14906b73a9_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_TIMER Timer)
{
  int v5; // edx
  struct _FILETIME *v6; // rdx
  struct _TP_TIMER *v7; // rcx
  unsigned int NavigationLevel; // eax
  __int64 v9; // [rsp+20h] [rbp-58h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+28h] [rbp-50h] BYREF
  _OWORD v11[3]; // [rsp+38h] [rbp-40h]

  SRWLock[1] = (PSRWLOCK)-2LL;
  ViewEventDispatcher::AcquireLockExclusive(*((RTL_SRWLOCK **)Context - 46), SRWLock);
  if ( !IsThreadpoolTimerSet(*((PTP_TIMER *)Context + 1)) )
    goto LABEL_10;
  v11[0] = _mm_load_si128((const __m128i *)&_xmm);
  v11[1] = _mm_load_si128((const __m128i *)&_xmm);
  v11[2] = _mm_load_si128((const __m128i *)&_xmm);
  v5 = *((_DWORD *)v11 + 2 * *(unsigned int *)Context + 1);
  if ( *((_DWORD *)Context + 1) == 1 )
    goto LABEL_6;
  if ( *((_DWORD *)Context + 1) != 2 )
    goto LABEL_8;
  if ( v5 >= 1 )
  {
LABEL_6:
    *((_DWORD *)Context + 1) = v5;
    v7 = (struct _TP_TIMER *)*((_QWORD *)Context + 1);
    v6 = 0LL;
  }
  else
  {
    *((_DWORD *)Context + 1) = 1;
    v9 = -10000 * (Context[20] != 0 ? 10000LL : 2000LL);
    v6 = (struct _FILETIME *)&v9;
    v7 = Timer;
  }
  SetThreadpoolTimer(v7, v6, 0, 0);
LABEL_8:
  if ( *((_DWORD *)Context - 97) )
  {
    NavigationLevel = LegacyViewWrapper::NavigationLevelHelper::GetNavigationLevel((unsigned int *)Context);
    ViewWrapperBase::NavigateInternal(Context - 520, NavigationLevel);
  }
LABEL_10:
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
}
