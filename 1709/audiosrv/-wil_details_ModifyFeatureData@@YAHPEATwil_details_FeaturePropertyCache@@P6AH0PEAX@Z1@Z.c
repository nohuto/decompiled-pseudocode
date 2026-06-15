/*
 * XREFs of ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1800065D8
 * Callers:
 *     _lambda_3a8e20f2e77891984b45453b80f2a737_::_lambda_invoker_cdecl_ @ 0x180006120 (_lambda_3a8e20f2e77891984b45453b80f2a737_--_lambda_invoker_cdecl_.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180006F20 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18000736C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAtte.c)
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x1800074BC (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18005C1F8 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x18008C3FC (-OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SpatializerAsar@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18009A6E0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SpatializerAsar@@@wil@@CA-AW.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800CE678 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllo.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_EnableAtmosSpeakersTechAllowed@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800CE744 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_EnableAtmosSpeakersTechAllow.c)
 * Callees:
 *     _lambda_a6162ed205bf533298d20564adf5c8f3_::_lambda_invoker_cdecl_ @ 0x180006670 (_lambda_a6162ed205bf533298d20564adf5c8f3_--_lambda_invoker_cdecl_.c)
 *     ?wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x1800072E0 (-wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_ModifyFeatureData(
        union wil_details_FeaturePropertyCache *a1,
        __int64 (__fastcall *a2)(signed __int32 *, void *),
        void *a3)
{
  signed __int32 v6; // ebp
  int v7; // eax
  signed __int32 v9; // [rsp+30h] [rbp+8h] BYREF

  while ( 1 )
  {
    v9 = *(_DWORD *)a1;
    v9 = *(_DWORD *)a1;
    v6 = v9;
    if ( (char *)a2 == (char *)lambda_a6162ed205bf533298d20564adf5c8f3_::_lambda_invoker_cdecl_ )
      v7 = lambda_a6162ed205bf533298d20564adf5c8f3_::_lambda_invoker_cdecl_(
             (union wil_details_FeaturePropertyCache *)&v9,
             a3);
    else
      v7 = (char *)a2 == (char *)wil_details_SetEnabledAndHasNotificationStateCallback
         ? wil_details_SetEnabledAndHasNotificationStateCallback((union wil_details_FeaturePropertyCache *)&v9, a3)
         : a2(&v9, a3);
    if ( !v7 )
      break;
    if ( v6 == _InterlockedCompareExchange((volatile signed __int32 *)a1, v9, v6) )
      return 1LL;
  }
  return 0LL;
}
