/*
 * XREFs of ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x18000D9D8
 * Callers:
 *     ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18000E140 (-WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_.c)
 * Callees:
 *     ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18000D43C (-SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPT.c)
 *     ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x18000D4FC (-Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSC.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18000DB00 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 */

void __fastcall wil::details::FeatureStateManager::SubscribeToUsageFlush(
        wil::details::FeatureStateManager *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *))
{
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **v6; // r14
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v7; // rbp
  DWORD LastError; // r15d
  RTL_SRWLOCK *v9; // rbp

  *a2 = 0LL;
  if ( *(_BYTE *)this && wil::details::FeatureStateManager::EnsureStateData(this) )
  {
    AcquireSRWLockExclusive((PSRWLOCK)this + 4);
    v6 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)((char *)this + 72);
    if ( !*((_QWORD *)this + 9) && *((_QWORD *)this + 3) )
    {
      v7 = *v6;
      if ( *v6 )
      {
        LastError = GetLastError();
        if ( qword_18010D658 )
          wil::details_abi::SubscriptionList::Unsubscribe((LPCRITICAL_SECTION)&qword_18010D658[25], qword_18010D658, v7);
        SetLastError(LastError);
      }
      *v6 = 0LL;
      v9 = (RTL_SRWLOCK *)*((_QWORD *)this + 3);
      AcquireSRWLockExclusive(v9);
      wil::details_abi::SubscriptionList::SubscribeUnderLock(
        (wil::details_abi::SubscriptionList *)&v9[25],
        (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)this + 9,
        lambda_152aa9d2a3a0648fa2fa7fcef514b376_::_lambda_invoker_cdecl_,
        this);
      if ( v9 )
        ReleaseSRWLockExclusive(v9);
    }
    wil::details_abi::SubscriptionList::SubscribeUnderLock(
      (wil::details::FeatureStateManager *)((char *)this + 152),
      a2,
      a3,
      0LL);
    if ( *a2 )
      *a2 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)((unsigned __int64)*a2 | 0x80000000);
    if ( this != (wil::details::FeatureStateManager *)-32LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 4);
  }
}
