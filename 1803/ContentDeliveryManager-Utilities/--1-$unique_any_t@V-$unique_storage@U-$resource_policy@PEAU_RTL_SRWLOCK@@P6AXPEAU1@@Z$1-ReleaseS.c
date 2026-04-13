/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003368
 * Callers:
 *     _CreativeFramework::Health::details::GenericOffersHealthTracker_11_1_::GetOrCreateBaseEventForPlacementId_::_1_::dtor$2 @ 0x1800C3397 (_CreativeFramework--Health--details--GenericOffersHealthTracker_11_1_--GetOrCreateBaseEventForPl.c)
 *     _CreativeFramework::Health::details::GenericOffersHealthTracker_3_1_::GetOrCreateBaseEventForPlacementId_::_1_::dtor$2 @ 0x1800C33EF (_CreativeFramework--Health--details--GenericOffersHealthTracker_3_1_--GetOrCreateBaseEventForPla.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$11 @ 0x1800C3816 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_1800C3816.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::UnregisterSubscription_::_1_::dtor$0 @ 0x1800C3899 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--UnregisterSubscription_-.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::OnContentUpdated_::_1_::dtor$6 @ 0x1800C3935 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--OnContentUp_ea_1800C3935.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::GetOrCreateInstance_::_1_::dtor$1 @ 0x1800C39AD (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--GetOrCreate_ea_1800C39AD.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::UnregisterTrigger_::_1_::dtor$0 @ 0x1800C4CDE (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics--UnregisterT.c)
 *     __lambda_4d8c3aefd165ae46a39c8fe585e6dd35_::operator()_::_1_::dtor$0 @ 0x1800C60FC (__lambda_4d8c3aefd165ae46a39c8fe585e6dd35_--operator()_--_1_--dtor$0.c)
 *     _CreativeFramework::Triggers::GetWellKnownWnfStateByName_::_1_::dtor$2 @ 0x1800C6697 (_CreativeFramework--Triggers--GetWellKnownWnfStateByName_--_1_--dtor$2.c)
 *     _UniqueExtendedExecutionSession::CloseSession_::_1_::dtor$0 @ 0x1800C689E (_UniqueExtendedExecutionSession--CloseSession_--_1_--dtor$0.c)
 *     _UniqueExtendedExecutionSession::GetSharedExtendedExecutionSession_::_1_::dtor$0 @ 0x1800C68CE (_UniqueExtendedExecutionSession--GetSharedExtendedExecutionSession_--_1_--dtor$0.c)
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
