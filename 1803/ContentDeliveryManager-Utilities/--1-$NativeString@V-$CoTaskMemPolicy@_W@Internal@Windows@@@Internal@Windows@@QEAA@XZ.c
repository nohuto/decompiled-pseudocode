/*
 * XREFs of ??1?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x180016980
 * Callers:
 *     _CreativeFramework::LockScreenCategoryConfig::IsCallerInAllowedAppList_::_1_::dtor$0 @ 0x1800C1E7A (_CreativeFramework--LockScreenCategoryConfig--IsCallerInAllowedAppList_--_1_--dtor$0.c)
 *     _CreativeFramework::LockScreenCategoryConfig::IsCallerInAllowedAppList_::_1_::dtor$1 @ 0x1800C1E86 (_CreativeFramework--LockScreenCategoryConfig--IsCallerInAllowedAppList_--_1_--dtor$1.c)
 *     _CreativeFramework::LockScreenCreativeConfigHelpers::PeekLockScreenRegistryKeys_::_1_::dtor$1 @ 0x1800C2902 (_CreativeFramework--LockScreenCreativeConfigHelpers--PeekLockScreenRegistryKeys_--_1_--dtor$1.c)
 *     _ContentManagement::CreativeEventReportedCache::SetEventReported_::_1_::dtor$0 @ 0x1800C2CB8 (_ContentManagement--CreativeEventReportedCache--SetEventReported_--_1_--dtor$0.c)
 *     _ContentManagement::CreativeEventReportedCache::IsReportedEventExpired_::_1_::dtor$1 @ 0x1800C2CD0 (_ContentManagement--CreativeEventReportedCache--IsReportedEventExpired_--_1_--dtor$1.c)
 *     _ContentManagement::CreativeEventReportedCache::IsReportedEventExpired_::_1_::dtor$2 @ 0x1800C2CDC (_ContentManagement--CreativeEventReportedCache--IsReportedEventExpired_--_1_--dtor$2.c)
 *     _CreativeFramework::SubscribedContentStore::RefreshSubscriptionLastAccessed_::_1_::dtor$2 @ 0x1800C3508 (_CreativeFramework--SubscribedContentStore--RefreshSubscriptionLastAccessed_--_1_--dtor$2.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionState_::_1_::dtor$5 @ 0x1800C3520 (_CreativeFramework--SubscribedContentStore--GetSubscriptionState_--_1_--dtor$5.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$15 @ 0x1800C3568 (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$15.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$1 @ 0x1800C3574 (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$1.c)
 *     _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$9 @ 0x1800C3664 (_CreativeFramework--SubscribedContentStore--ActivateSubscriptionIfInactive_--_1_--dtor$9.c)
 *     _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$13 @ 0x1800C3688 (_CreativeFramework--SubscribedContentStore--ActivateSubscriptionIfInactive_--_1_--dtor$13.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::OnContentUpdated_::_1_::dtor$10 @ 0x1800C3959 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--OnContentUp_ea_1800C3959.c)
 *     _Windows::Services::TargetedContent::Internal::ResolveCDMTaskName_::_1_::dtor$0 @ 0x1800C53EB (_Windows--Services--TargetedContent--Internal--ResolveCDMTaskName_--_1_--dtor$0.c)
 *     _Windows::Services::TargetedContent::Internal::GetTaskNameForTrigger_::_1_::dtor$4 @ 0x1800C5499 (_Windows--Services--TargetedContent--Internal--GetTaskNameForTrigger_--_1_--dtor$4.c)
 *     _Windows::Services::TargetedContent::Internal::GetTaskNameForTrigger_::_1_::dtor$5 @ 0x1800C54A5 (_Windows--Services--TargetedContent--Internal--GetTaskNameForTrigger_--_1_--dtor$5.c)
 *     _Windows::Services::TargetedContent::Internal::LowerCaseBiPredicateCreator_::_1_::dtor$0 @ 0x1800C54D5 (_Windows--Services--TargetedContent--Internal--LowerCaseBiPredicateCreator_--_1_--dtor$0.c)
 *     _Windows::Services::TargetedContent::Internal::CreateTriggerKey_::_1_::dtor$4 @ 0x1800C597A (_Windows--Services--TargetedContent--Internal--CreateTriggerKey_--_1_--dtor$4.c)
 *     _CreativeFramework::NotificationManager::ToastHelpers::ExpandRatingParameters_::_1_::dtor$1 @ 0x1800C8D4F (_CreativeFramework--NotificationManager--ToastHelpers--ExpandRatingParameters_--_1_--dtor$1.c)
 *     _CreativeFramework::NotificationManager::ToastHelpers::ResolveRatingImage_::_1_::dtor$0 @ 0x1800C8DD3 (_CreativeFramework--NotificationManager--ToastHelpers--ResolveRatingImage_--_1_--dtor$0.c)
 *     _StartUI::MRTHelperBase::Resolve_::_1_::dtor$0 @ 0x1800C909A (_StartUI--MRTHelperBase--Resolve_--_1_--dtor$0.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::Settings::SetLayoutType_::_1_::dtor$2 @ 0x1800C9270 (_CreativeFramework--TargetedContentLayoutHelpers--Settings--SetLayoutType_--_1_--dtor$2.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::Settings::GetLayoutType_::_1_::dtor$4 @ 0x1800C92EE (_CreativeFramework--TargetedContentLayoutHelpers--Settings--GetLayoutType_--_1_--dtor$4.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::Settings::GetLayoutType_::_1_::dtor$1 @ 0x1800C92FA (_CreativeFramework--TargetedContentLayoutHelpers--Settings--GetLayoutType_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::~NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>(
        void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *a1 = 0LL;
  }
  a1[1] = 0LL;
  a1[2] = 0LL;
}
