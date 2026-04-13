/*
 * XREFs of ??1?$MakeAllocator@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180018E9C
 * Callers:
 *     _ContentManagement::ContentManagementBrokerServer::get_ContextualSuggestionsManager_::_1_::dtor$1 @ 0x1800B55BE (_ContentManagement--ContentManagementBrokerServer--get_ContextualSuggestionsManager_ea_1800B55BE.c)
 *     _ContentManagement::ContentManagementBrokerServer::get_ThumbnailCacheHelper_::_1_::dtor$1 @ 0x1800B55E2 (_ContentManagement--ContentManagementBrokerServer--get_ThumbnailCacheHelper_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementBrokerServer::get_FeatureManager_::_1_::dtor$1 @ 0x1800B561E (_ContentManagement--ContentManagementBrokerServer--get_FeatureManager_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementBrokerServer::get_IdentityManager_::_1_::dtor$0 @ 0x1800B5636 (_ContentManagement--ContentManagementBrokerServer--get_IdentityManager_--_1_--dtor$0.c)
 *     _ContentDeliveryManager::Background::CorrelationVectorWrapper::CorrelationVectorWrapper_::_1_::dtor$0 @ 0x1800B5CB9 (_ContentDeliveryManager--Background--CorrelationVectorWrapper--CorrelationVectorWrapper_--_1_--d.c)
 *     _ContentManagement::ContentManagementService::QueueActionAfterUnlock_::_1_::dtor$1 @ 0x1800B6106 (_ContentManagement--ContentManagementService--QueueActionAfterUnlock_--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl_ContentManagement::TargetedContent::Internal::ISubscriptionManager__::_1_::dtor$0 @ 0x1800B6FF2 (_Microsoft--WRL--Details--MakeAndInitialize_ContentManagement--TargetedContent--Internal--Subscr.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::CreateAction_::_1_::dtor$2 @ 0x1800B7A54 (_Windows--Services--TargetedContent--Internal--TargetedContentActionStatics--Create_ea_1800B7A54.c)
 *     _UniqueExtendedExecutionSession::GetSharedExtendedExecutionSession_::_1_::dtor$3 @ 0x1800B980D (_UniqueExtendedExecutionSession--GetSharedExtendedExecutionSession_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl>::~MakeAllocator<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
