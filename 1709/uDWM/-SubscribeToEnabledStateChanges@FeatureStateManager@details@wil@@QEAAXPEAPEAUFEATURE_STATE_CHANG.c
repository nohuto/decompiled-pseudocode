/*
 * XREFs of ?SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180040054
 * Callers:
 *     ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18003FF10 (-WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_.c)
 * Callees:
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x180040148 (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAXAEAV-$unique_any_t@.c)
 *     ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x1800402B4 (-SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPT.c)
 */

void __fastcall wil::details::FeatureStateManager::SubscribeToEnabledStateChanges(
        RTL_SRWLOCK *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  RTL_SRWLOCK *v8; // rdi

  *a2 = 0LL;
  if ( LOBYTE(this->Ptr) )
  {
    v8 = this + 4;
    AcquireSRWLockExclusive(this + 4);
    wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(&this[7], 0x418A073AA3BC7C75LL, this);
    wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(&this[8], 0x418A073AA3BC88F5LL, this);
    wil::details_abi::SubscriptionList::SubscribeUnderLock((wil::details_abi::SubscriptionList *)&this[10], a2, a3, a4);
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
  }
}
