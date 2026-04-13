/*
 * XREFs of ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18000B720
 * Callers:
 *     <none>
 * Callees:
 *     ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18000A6AC (-SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPT.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18000AD78 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x18000AE18 (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAXAEAV-$unique_any_t@.c)
 */

void __fastcall wil::details::WilApiImpl_SubscribeFeatureStateChangeNotification(
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  PSRWLOCK v7; // rdi

  *this = 0LL;
  if ( a3 != (void (*)(void *))-1LL )
  {
    if ( !wil::details::g_featureStateManager )
      return;
    AcquireSRWLockExclusive(&stru_18017A180);
    wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
      &qword_18017A1A8,
      (const struct __WIL__WNF_TYPE_ID *)0x418A073AA3BC7C75LL,
      &wil::details::g_featureStateManager);
    wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
      (__int64 *)&xmmword_18017A1B0,
      (const struct __WIL__WNF_TYPE_ID *)0x418A073AA3BC88F5LL,
      &wil::details::g_featureStateManager);
    wil::details_abi::SubscriptionList::SubscribeUnderLock(
      (wil::details_abi::SubscriptionList *)&CriticalSection,
      this,
      (void (*)(void *))a2,
      a3);
    goto LABEL_11;
  }
  if ( wil::details::g_featureStateManager
    && wil::details::FeatureStateManager::EnsureStateData((RTL_SRWLOCK *)&wil::details::g_featureStateManager) )
  {
    AcquireSRWLockExclusive(&stru_18017A180);
    if ( !*((_QWORD *)&xmmword_18017A1B0 + 1) )
    {
      v7 = qword_18017A178;
      if ( qword_18017A178 )
      {
        *((_QWORD *)&xmmword_18017A1B0 + 1) = 0LL;
        AcquireSRWLockExclusive(qword_18017A178);
        wil::details_abi::SubscriptionList::SubscribeUnderLock(
          (wil::details_abi::SubscriptionList *)&v7[25],
          (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)&xmmword_18017A1B0 + 1,
          (void (*)(void *))lambda_152aa9d2a3a0648fa2fa7fcef514b376_::_lambda_invoker_cdecl_,
          &wil::details::g_featureStateManager);
        ReleaseSRWLockExclusive(v7);
      }
    }
    wil::details_abi::SubscriptionList::SubscribeUnderLock(
      (wil::details_abi::SubscriptionList *)&stru_18017A208,
      this,
      (void (*)(void *))a2,
      0LL);
    if ( *this )
      *this = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)((unsigned __int64)*this | 0x80000000);
LABEL_11:
    ReleaseSRWLockExclusive(&stru_18017A180);
  }
}
