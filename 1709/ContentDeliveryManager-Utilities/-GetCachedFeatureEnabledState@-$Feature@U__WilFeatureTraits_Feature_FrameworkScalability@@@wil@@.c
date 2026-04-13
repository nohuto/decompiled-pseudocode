/*
 * XREFs of ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_FrameworkScalability@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180034C08
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SilentInstalledApps@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180036234 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SilentInstalledApps@@@wil@@C.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TargetedContentAPI@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800432F0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TargetedContentAPI@@@wil@@CA.c)
 * Callees:
 *     ?wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCache@@W4wil_details_CachedFeatureEnabledState@@W4wil_details_CachedHasNotificationState@@@Z @ 0x180007600 (-wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCach.c)
 *     ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x180008208 (-wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18000B27C (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 wil::Feature<__WilFeatureTraits_Feature_FrameworkScalability>::GetCachedFeatureEnabledState()
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

  v0 = `wil::Feature<__WilFeatureTraits_Feature_FrameworkScalability>::GetFeaturePropertyCache'::`2'::data & 3;
  v1 = v0;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_FrameworkScalability>::GetFeaturePropertyCache'::`2'::data & 3) != 0
    && (`wil::Feature<__WilFeatureTraits_Feature_FrameworkScalability>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
  {
    return v1;
  }
  if ( g_wil_details_internalGetFeatureEnabledState )
  {
    v2 = ((__int64 (__fastcall *)(__int64, __int64))g_wil_details_internalGetFeatureEnabledState)(7328759LL, 1LL);
  }
  else
  {
    if ( !g_wil_details_apiGetFeatureEnabledState )
    {
      v3 = 0;
      goto LABEL_11;
    }
    if ( (unsigned int)wil_HasFeatureTestState(7328759, (enum wil_FeatureEnabledState *)&v9) )
    {
      v3 = v9;
      goto LABEL_11;
    }
    v2 = ((__int64 (__fastcall *)(__int64, __int64))g_wil_details_apiGetFeatureEnabledState)(7328759LL, 1LL);
  }
  v3 = v2;
LABEL_11:
  v4 = ((v3 & 0x80u) != 0) + 1;
  v5 = v3 & 0xFFFFFF7F;
  if ( v5 )
    v6 = v5 == 2;
  else
    v6 = 1;
  v1 = v6 + 1;
  if ( v0 )
    v1 = v0;
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_FrameworkScalability>::GetFeaturePropertyCache'::`2'::data,
    1);
  if ( !g_wil_details_testStates || !(unsigned int)wil_HasFeatureTestState(7328759, 0LL) )
  {
    if ( v0 )
    {
      do
        v7 = `wil::Feature<__WilFeatureTraits_Feature_FrameworkScalability>::GetFeaturePropertyCache'::`2'::data;
      while ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_FrameworkScalability>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) != (unsigned __int8)v4
           && v7 != _InterlockedCompareExchange(
                      &`wil::Feature<__WilFeatureTraits_Feature_FrameworkScalability>::GetFeaturePropertyCache'::`2'::data,
                      ((unsigned __int8)`wil::Feature<__WilFeatureTraits_Feature_FrameworkScalability>::GetFeaturePropertyCache'::`2'::data ^ (unsigned __int8)(16 * v4)) & 0x30 ^ `wil::Feature<__WilFeatureTraits_Feature_FrameworkScalability>::GetFeaturePropertyCache'::`2'::data,
                      `wil::Feature<__WilFeatureTraits_Feature_FrameworkScalability>::GetFeaturePropertyCache'::`2'::data) );
    }
    else
    {
      wil_details_SetEnabledAndHasNotificationStateProperties(
        &`wil::Feature<__WilFeatureTraits_Feature_FrameworkScalability>::GetFeaturePropertyCache'::`2'::data,
        v1,
        v4);
    }
  }
  return v1;
}
