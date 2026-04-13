/*
 * XREFs of ??1?$function@$$A6AJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@QEAA@XZ @ 0x18002F428
 * Callers:
 *     _CreativeFramework::TargetedContent::GetSubscriptionBehavior_::_1_::dtor$0 @ 0x1800B5CD1 (_CreativeFramework--TargetedContent--GetSubscriptionBehavior_--_1_--dtor$0.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::RegisterTriggerInternal_::_1_::dtor$9 @ 0x1800B80B3 (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics_ea_1800B80B3.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::RegisterTriggerInternal_::_1_::dtor$12 @ 0x1800B80E3 (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics_ea_1800B80E3.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::UnregisterTriggerInternal_::_1_::dtor$6 @ 0x1800B816D (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics_ea_1800B816D.c)
 *     _Windows::Services::TargetedContent::Internal::ResolvePredicateHandler_::_1_::dtor$0 @ 0x1800B87A8 (_Windows--Services--TargetedContent--Internal--ResolvePredicateHandler_--_1_--dtor$0.c)
 *     _Windows::Services::TargetedContent::Internal::ResolvePredicateHandler_::_1_::dtor$1 @ 0x1800B87CE (_Windows--Services--TargetedContent--Internal--ResolvePredicateHandler_--_1_--dtor$1.c)
 *     _Windows::Services::TargetedContent::Internal::RegisterWnfTrigger_::_1_::dtor$3 @ 0x1800B87FE (_Windows--Services--TargetedContent--Internal--RegisterWnfTrigger_--_1_--dtor$3.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerTypeTaskHandlerMap___::_1_::dtor$0 @ 0x1800B8A4A (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerT_ea_1800B8A4A.c)
 *     _CreativeFramework::Actions::SwapStartTileService::GetSourceTileIdentifier_::_1_::dtor$6 @ 0x1800BA299 (_CreativeFramework--Actions--SwapStartTileService--GetSourceTileIdentifier_--_1_--dtor$6.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ProcessLayoutBindings_::_1_::dtor$8 @ 0x1800BBF86 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--ProcessLayoutBind_ea_1800BBF86.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ExtractTargetedContentTilesInLayout_::_1_::dtor$1 @ 0x1800BC5B9 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--ExtractTargetedCo_ea_1800BC5B9.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::function<long (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>::~function<long (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 )
  {
    LOBYTE(a2) = v5 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, a2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
