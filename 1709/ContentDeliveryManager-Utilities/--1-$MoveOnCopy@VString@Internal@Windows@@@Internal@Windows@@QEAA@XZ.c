/*
 * XREFs of ??1?$MoveOnCopy@VString@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x1800040C8
 * Callers:
 *     _ContentManagement::ThumbnailCacheHelper::AddThumbnailToCacheAsync_::_1_::dtor$0 @ 0x1800B5336 (_ContentManagement--ThumbnailCacheHelper--AddThumbnailToCacheAsync_--_1_--dtor$0.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$0 @ 0x1800B5E12 (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$0.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$1 @ 0x1800B5E1E (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$2 @ 0x1800B5E2A (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$2.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$3 @ 0x1800B5E36 (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$3.c)
 *     _ContentManagement::ContentManagementService::ResolveLayoutBindingsAsync_::_1_::dtor$0 @ 0x1800B5FDA (_ContentManagement--ContentManagementService--ResolveLayoutBindingsAsync_--_1_--dtor$0.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$8 @ 0x1800B6A3A (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$8.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$9 @ 0x1800B6A46 (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$9.c)
 *     _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$4 @ 0x1800B6AB2 (_CreativeFramework--SubscribedContentStore--ActivateSubscriptionIfInactive_--_1_--dtor$4.c)
 *     _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$5 @ 0x1800B6ABE (_CreativeFramework--SubscribedContentStore--ActivateSubscriptionIfInactive_--_1_--dtor$5.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$4 @ 0x1800B6C34 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_1800B6C34.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$5 @ 0x1800B6C40 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_1800B6C40.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::GetTriggeredItemsForStateAsync_::_1_::dtor$2 @ 0x1800B81D3 (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics_ea_1800B81D3.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::GetTriggeredItemsForStateAsync_::_1_::dtor$3 @ 0x1800B81DF (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics_ea_1800B81DF.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Internal::MoveOnCopy<Windows::Internal::String>::~MoveOnCopy<Windows::Internal::String>(
        HSTRING *a1)
{
  HSTRING v1; // rcx
  HRESULT result; // eax

  v1 = *a1;
  if ( v1 )
    return WindowsDeleteString(v1);
  return result;
}
