/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800284AC
 * Callers:
 *     _ContentManagement::ContentManagementService::PeekLockScreenRegistryKeys_::_1_::dtor$0 @ 0x1800B60D6 (_ContentManagement--ContentManagementService--PeekLockScreenRegistryKeys_--_1_--dtor$0.c)
 *     _ContentManagement::ContentManagementService::PeekLockScreenRegistryKeys_::_1_::dtor$1 @ 0x1800B60E2 (_ContentManagement--ContentManagementService--PeekLockScreenRegistryKeys_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementService::PeekLockScreenRegistryKeys_::_1_::dtor$2 @ 0x1800B60EE (_ContentManagement--ContentManagementService--PeekLockScreenRegistryKeys_--_1_--dtor$2.c)
 *     _CreativeFramework::SubscribedContentStore::RefreshSubscriptionLastAccessed_::_1_::dtor$0 @ 0x1800B696E (_CreativeFramework--SubscribedContentStore--RefreshSubscriptionLastAccessed_--_1_--dtor$0.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionState_::_1_::dtor$0 @ 0x1800B6986 (_CreativeFramework--SubscribedContentStore--GetSubscriptionState_--_1_--dtor$0.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$0 @ 0x1800B69CE (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$0.c)
 *     _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$6 @ 0x1800B6ACA (_CreativeFramework--SubscribedContentStore--ActivateSubscriptionIfInactive_--_1_--dtor$6.c)
 *     _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$9 @ 0x1800B6AEE (_CreativeFramework--SubscribedContentStore--ActivateSubscriptionIfInactive_--_1_--dtor$9.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::OnContentUpdated_::_1_::dtor$5 @ 0x1800B6DBF (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--OnContentUp_ea_1800B6DBF.c)
 *     _Windows::Services::TargetedContent::Internal::DefaultBiPredicateCreator_::_1_::dtor$0 @ 0x1800B86AC (_Windows--Services--TargetedContent--Internal--DefaultBiPredicateCreator_--_1_--dtor$0.c)
 *     _Windows::Services::TargetedContent::Internal::DwordBiPredicateCreator_::_1_::dtor$1 @ 0x1800B86D0 (_Windows--Services--TargetedContent--Internal--DwordBiPredicateCreator_--_1_--dtor$1.c)
 *     _Windows::Services::TargetedContent::Internal::GuidBiPredicateCreator_::_1_::dtor$0 @ 0x1800B86DC (_Windows--Services--TargetedContent--Internal--GuidBiPredicateCreator_--_1_--dtor$0.c)
 *     _Windows::Services::TargetedContent::Internal::RegisterWnfTrigger_::_1_::dtor$1 @ 0x1800B87E6 (_Windows--Services--TargetedContent--Internal--RegisterWnfTrigger_--_1_--dtor$1.c)
 *     _CreativeFramework::Actions::SetLockScreenHotspotsService::SetLockScreenHotspotsService_::_1_::dtor$2 @ 0x1800BB5E5 (_CreativeFramework--Actions--SetLockScreenHotspotsService--SetLockScreenHotspotsSer_ea_1800BB5E5.c)
 *     _CreativeFramework::NotificationManager::ToastHelpers::ExpandRatingParameters_::_1_::dtor$0 @ 0x1800BB959 (_CreativeFramework--NotificationManager--ToastHelpers--ExpandRatingParameters_--_1_--dtor$0.c)
 *     _CreativeFramework::NotificationManager::ToastHelpers::ResolveRatingImage_::_1_::dtor$1 @ 0x1800BB9F5 (_CreativeFramework--NotificationManager--ToastHelpers--ResolveRatingImage_--_1_--dtor$1.c)
 *     _Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1800BBC64 (_Windows--Internal--Extensions--ApplicationModel--ContentDeliveryManagerAppDisplayI_ea_1800BBC64.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::Settings::SetLayoutType_::_1_::dtor$0 @ 0x1800BBDE6 (_CreativeFramework--TargetedContentLayoutHelpers--Settings--SetLayoutType_--_1_--dtor$0.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::Settings::GetLayoutType_::_1_::dtor$0 @ 0x1800BBE64 (_CreativeFramework--TargetedContentLayoutHelpers--Settings--GetLayoutType_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CoTaskMemFree(v1);
}
