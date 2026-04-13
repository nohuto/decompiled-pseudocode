/*
 * XREFs of atexit @ 0x1800B3E18
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001300 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180001310 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     Windows::Internal::Details::_dynamic_initializer_for___git__ @ 0x180001370 (Windows--Internal--Details--_dynamic_initializer_for___git__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001380 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x1800013F0 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_Generic_object__ @ 0x180001470 (_dynamic_initializer_for__std--_Error_objects_int_--_Generic_object__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_Iostream_object__ @ 0x180001480 (_dynamic_initializer_for__std--_Error_objects_int_--_Iostream_object__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_System_object__ @ 0x180001490 (_dynamic_initializer_for__std--_Error_objects_int_--_System_object__.c)
 *     _dynamic_initializer_for__Microsoft::WRL::Module_1_Microsoft::WRL::Details::DefaultModule_1___::isInitialized__ @ 0x1800014D0 (_dynamic_initializer_for__Microsoft--WRL--Module_1_Microsoft--WRL--Details--DefaultModule_1___--.c)
 *     CreativeFramework::Health::details::_dynamic_initializer_for__s_placementToBaseScenarioEventsMap__ @ 0x180001550 (CreativeFramework--Health--details--_dynamic_initializer_for__s_placementToBaseScenarioEventsMap.c)
 *     _dynamic_initializer_for__ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak__ @ 0x180001570 (_dynamic_initializer_for__ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl-.c)
 *     Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerPredicateKindMap__ @ 0x180001580 (Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerPredicateKindMa.c)
 *     Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_predicateKindHandlerMap__ @ 0x1800015A0 (Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_predicateKindHandlerMa.c)
 *     Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_registerTaskHandlerMap__ @ 0x1800015C0 (Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_registerTaskHandlerMap.c)
 *     Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerTypeTaskHandlerMap__ @ 0x1800015E0 (Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerTypeTaskHandler.c)
 *     CreativeFramework::Triggers::_dynamic_initializer_for__wellKnownWnfs__ @ 0x180001600 (CreativeFramework--Triggers--_dynamic_initializer_for__wellKnownWnfs__.c)
 *     _dynamic_initializer_for__UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession__ @ 0x180001620 (_dynamic_initializer_for__UniqueExtendedExecutionSession--s_weakSharedExtendedExecutionSession__.c)
 *     std::_dynamic_initializer_for__initlocks__ @ 0x180001630 (std--_dynamic_initializer_for__initlocks__.c)
 *     std::_dynamic_initializer_for___Fac_tidy_reg__ @ 0x180001650 (std--_dynamic_initializer_for___Fac_tidy_reg__.c)
 *     std::_dynamic_initializer_for__classic_locale__ @ 0x180001660 (std--_dynamic_initializer_for__classic_locale__.c)
 *     _dynamic_initializer_for__init_atexit__ @ 0x180001670 (_dynamic_initializer_for__init_atexit__.c)
 *     std::_dynamic_initializer_for__initlocks___0 @ 0x180001680 (std--_dynamic_initializer_for__initlocks___0.c)
 *     ?Instance@FeatureLogging@details@wil@@KAPEAV123@XZ @ 0x18000BA80 (-Instance@FeatureLogging@details@wil@@KAPEAV123@XZ.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x1800229D8 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?FallbackTelemetryCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x180022DF0 (-FallbackTelemetryCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA.c)
 *     ?GetModule@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x1800231F0 (-GetModule@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$Defau.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x180026EAC (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ @ 0x1800458E8 (-Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Provider@CDMUtilsUnlockLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18006CFE8 (-Provider@CDMUtilsUnlockLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __scrt_initialize_thread_safe_statics @ 0x1800B3EA0 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     _onexit_0 @ 0x1800B3D88 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
