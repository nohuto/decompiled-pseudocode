/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003008
 * Callers:
 *     _CreativeFramework::Health::details::GenericOffersHealthTracker_11_1_::GetOrCreateBaseEventForPlacementId_::_1_::dtor$2 @ 0x1800B6779 (_CreativeFramework--Health--details--GenericOffersHealthTracker_11_1_--GetOrCreateBaseEventForPl.c)
 *     _CreativeFramework::Health::details::GenericOffersHealthTracker_3_1_::GetOrCreateBaseEventForPlacementId_::_1_::dtor$2 @ 0x1800B68DB (_CreativeFramework--Health--details--GenericOffersHealthTracker_3_1_--GetOrCreateBaseEventForPla.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$11 @ 0x1800B6C88 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_1800B6C88.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::UnregisterSubscription_::_1_::dtor$0 @ 0x1800B6D0B (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--UnregisterSubscription_-.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::OnContentUpdated_::_1_::dtor$4 @ 0x1800B6DA7 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--OnContentUp_ea_1800B6DA7.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::GetOrCreateInstance_::_1_::dtor$1 @ 0x1800B6E1F (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--GetOrCreate_ea_1800B6E1F.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::UnregisterTrigger_::_1_::dtor$0 @ 0x1800B7FF3 (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics--UnregisterT.c)
 *     _CreativeFramework::Triggers::GetWellKnownWnfStateByName_::_1_::dtor$2 @ 0x1800B9596 (_CreativeFramework--Triggers--GetWellKnownWnfStateByName_--_1_--dtor$2.c)
 *     _UniqueExtendedExecutionSession::CloseSession_::_1_::dtor$0 @ 0x1800B97B9 (_UniqueExtendedExecutionSession--CloseSession_--_1_--dtor$0.c)
 *     _UniqueExtendedExecutionSession::GetSharedExtendedExecutionSession_::_1_::dtor$0 @ 0x1800B97E9 (_UniqueExtendedExecutionSession--GetSharedExtendedExecutionSession_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
