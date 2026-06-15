/*
 * XREFs of ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x180028C00
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SpatializerAsar@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180001D98 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SpatializerAsar@@@wil@@CA-AW.c)
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x180028618 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800470F0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllo.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_EnableAtmosSpeakersTechAllowed@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180047198 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_EnableAtmosSpeakersTechAllow.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1800289F4 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?EnsureSubscribedToStateChangesUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180028B80 (-EnsureSubscribedToStateChangesUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180028F44 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x1800ABCBC (-OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  void *v8; // r9
  int v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_BYTE *)a1 )
  {
    if ( a2 )
    {
      wil::srwlock::lock_exclusive(a1 + 8, &SRWLock);
      v9 = a3;
      v10 = a2;
      wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)(a1 + 72), &v9);
      wil::details::EnabledStateManager::EnsureSubscribedToStateChangesUnderLock(
        (wil::details::EnabledStateManager *)a1,
        v6,
        v7,
        v8);
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
    }
    else
    {
      wil::details::EnabledStateManager::OnStateChange((wil::details::EnabledStateManager *)a1);
    }
  }
}
