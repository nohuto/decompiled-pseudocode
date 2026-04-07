/*
 * XREFs of ?EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ @ 0x180042BF0
 * Callers:
 *     ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x180042C5C (-SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRI.c)
 * Callees:
 *     ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180042DB8 (-SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPT.c)
 */

void __fastcall wil::details::FeatureStateManager::EnsureSubscribedToProcessWideUsageFlushUnderLock(
        wil::details::FeatureStateManager *this)
{
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **v1; // rdi
  RTL_SRWLOCK *v3; // rsi

  v1 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)((char *)this + 88);
  if ( !*((_QWORD *)this + 11) && *((_QWORD *)this + 3) )
  {
    *v1 = 0LL;
    v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 3);
    AcquireSRWLockExclusive(v3);
    wil::details_abi::SubscriptionList::SubscribeUnderLock(
      (wil::details_abi::SubscriptionList *)&v3[25],
      v1,
      lambda_152aa9d2a3a0648fa2fa7fcef514b376_::_lambda_invoker_cdecl_,
      this);
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
  }
}
