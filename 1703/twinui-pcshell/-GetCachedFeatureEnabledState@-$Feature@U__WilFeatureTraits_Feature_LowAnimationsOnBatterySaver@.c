/*
 * XREFs of ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800965B8
 * Callers:
 *     ?OnViewCloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800949C0 (-OnViewCloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180094AE0 (-OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1800B77A0 (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@@Z @ 0x1800B84E8 (-Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperie.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2c3a81127ec11b603f32deec9cb27abe__&___ptr64_::Run @ 0x1800B9AC0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2c3a81127ec11b603f32deec9cb27abe__-___ptr64.c)
 * Callees:
 *     ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x18001D5BC (-wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z.c)
 *     ?wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCache@@W4wil_details_CachedFeatureEnabledState@@W4wil_details_CachedHasNotificationState@@@Z @ 0x18001D818 (-wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCach.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18001D958 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetCachedFeatureEnabledState()
{
  int v0; // esi
  unsigned int v1; // ebx
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  unsigned int v5; // ecx
  bool v6; // al
  int v7; // r9d
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v0 = `wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data & 3;
  v1 = v0;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data & 3) != 0
    && (`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
  {
    return v1;
  }
  if ( g_wil_details_internalGetFeatureEnabledState )
  {
    v2 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_internalGetFeatureEnabledState)(8027970LL, 0LL);
LABEL_5:
    v3 = v2;
    goto LABEL_11;
  }
  if ( g_wil_details_apiGetFeatureEnabledState )
  {
    if ( !(unsigned int)wil_HasFeatureTestState(8027970, (enum wil_FeatureEnabledState *)&v9) )
    {
      v2 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_apiGetFeatureEnabledState)(8027970LL, 0LL);
      goto LABEL_5;
    }
    v3 = v9;
  }
  else
  {
    v3 = 0;
  }
LABEL_11:
  v4 = ((v3 & 0x80u) != 0) + 1;
  v5 = v3 & 0xFFFFFF7F;
  if ( v5 )
    v6 = v5 == 2;
  else
    v6 = 0;
  v1 = v6 + 1;
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    &wil::details::g_enabledStateManager,
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data,
    0);
  if ( !g_wil_details_testStates || !(unsigned int)wil_HasFeatureTestState(8027970, 0LL) )
  {
    if ( v0 )
    {
      do
        v7 = `wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data;
      while ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) != (unsigned __int8)v4
           && v7 != _InterlockedCompareExchange(
                      &`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data,
                      ((unsigned __int8)`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data ^ (unsigned __int8)(16 * v4)) & 0x30 ^ `wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data,
                      `wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data) );
    }
    else
    {
      wil_details_SetEnabledAndHasNotificationStateProperties(
        &`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data,
        v1,
        v4);
    }
  }
  return v1;
}
