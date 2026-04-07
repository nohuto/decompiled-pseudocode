/*
 * XREFs of ?EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ @ 0x18003FF40
 * Callers:
 *     ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x18003FFC4 (-SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRI.c)
 * Callees:
 *     ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x1800402B4 (-SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPT.c)
 *     ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x180068450 (-Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSC.c)
 */

void __fastcall wil::details::FeatureStateManager::EnsureSubscribedToProcessWideUsageFlushUnderLock(
        wil::details::FeatureStateManager *this)
{
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **v1; // rdi
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v3; // rsi
  RTL_SRWLOCK *v4; // rsi
  DWORD LastError; // ebp

  v1 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)((char *)this + 72);
  if ( !*((_QWORD *)this + 9) && *((_QWORD *)this + 3) )
  {
    v3 = *v1;
    if ( *v1 )
    {
      LastError = GetLastError();
      if ( SRWLock )
        wil::details_abi::SubscriptionList::Unsubscribe((LPCRITICAL_SECTION)&SRWLock[25], SRWLock, v3);
      SetLastError(LastError);
    }
    *v1 = 0LL;
    v4 = (RTL_SRWLOCK *)*((_QWORD *)this + 3);
    AcquireSRWLockExclusive(v4);
    wil::details_abi::SubscriptionList::SubscribeUnderLock(
      (wil::details_abi::SubscriptionList *)&v4[25],
      v1,
      lambda_152aa9d2a3a0648fa2fa7fcef514b376_::_lambda_invoker_cdecl_,
      this);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
}
