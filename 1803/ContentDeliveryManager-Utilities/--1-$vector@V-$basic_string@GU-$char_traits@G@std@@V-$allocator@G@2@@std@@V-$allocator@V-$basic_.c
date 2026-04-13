/*
 * XREFs of ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x18003245C
 * Callers:
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x18002E0B0 (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 *     _anonymous_namespace_::DecodeBatchIdFromCreativeId @ 0x18002E2B4 (_anonymous_namespace_--DecodeBatchIdFromCreativeId.c)
 *     ?GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA?AV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEBG_N@Z @ 0x180042890 (-GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA-AV-$map@V-$basic_string@GU-.c)
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x18006D630 (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 *     ?EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV?$function@$$A6A_NPEAUHSTRING__@@W4TargetedContentTriggerState@Internal@TargetedContent@Services@Windows@@1@Z@std@@@Z @ 0x18006DD2C (-EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV-$function.c)
 *     ?DeleteLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x18008FBC8 (-DeleteLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ.c)
 *     _CreativeFramework::SubscribedContentStore::Details::SplitString_::_1_::dtor$0 @ 0x1800C290E (_CreativeFramework--SubscribedContentStore--Details--SplitString_--_1_--dtor$0.c)
 *     __anonymous_namespace_::GetImpressionEventExpirationTime_::_1_::dtor$1 @ 0x1800C294C (__anonymous_namespace_--GetImpressionEventExpirationTime_--_1_--dtor$1.c)
 *     __anonymous_namespace_::DecodeBatchIdFromCreativeId_::_1_::dtor$1 @ 0x1800C297C (__anonymous_namespace_--DecodeBatchIdFromCreativeId_--_1_--dtor$1.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$3 @ 0x1800C358C (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$3.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$7 @ 0x1800C35BC (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$7.c)
 *     _Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainerFromName_::_1_::dtor$1 @ 0x1800C5C88 (_Windows--Services--TargetedContent--Internal--GetTriggerSettingsContainerFromName_--_1_--dtor$1.c)
 *     _Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainerFromName_::_1_::dtor$7 @ 0x1800C5CC4 (_Windows--Services--TargetedContent--Internal--GetTriggerSettingsContainerFromName_--_1_--dtor$7.c)
 *     _Windows::Services::TargetedContent::Internal::EnumerateTriggerStateTransitions_::_1_::dtor$2 @ 0x1800C5D44 (_Windows--Services--TargetedContent--Internal--EnumerateTriggerStateTransitions_--_1_--dtor$2.c)
 *     _Windows::Services::TargetedContent::Internal::EnumerateTriggerStateTransitions_::_1_::dtor$4 @ 0x1800C5D5C (_Windows--Services--TargetedContent--Internal--EnumerateTriggerStateTransitions_--_1_--dtor$4.c)
 *     _CreativeFramework::Actions::SetLockScreenHotspotsService::DeleteLockScreenRegistryKeys_::_1_::dtor$1 @ 0x1800C87A4 (_CreativeFramework--Actions--SetLockScreenHotspotsService--DeleteLockScreenRegistry_ea_1800C87A4.c)
 *     _CreativeFramework::CommonHelper::StringUtils::SplitString_::_1_::dtor$0 @ 0x1800C9CA9 (_CreativeFramework--CommonHelper--StringUtils--SplitString_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::vector<std::wstring>::~vector<std::wstring>(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v1 != v3 )
    {
      do
      {
        if ( *(_QWORD *)(v1 + 24) >= 8uLL )
          operator delete(*(void **)v1);
        *(_QWORD *)(v1 + 24) = 7LL;
        *(_QWORD *)(v1 + 16) = 0LL;
        *(_WORD *)v1 = 0;
        v1 += 32LL;
      }
      while ( v1 != v3 );
      v1 = *a1;
    }
    operator delete((void *)v1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
