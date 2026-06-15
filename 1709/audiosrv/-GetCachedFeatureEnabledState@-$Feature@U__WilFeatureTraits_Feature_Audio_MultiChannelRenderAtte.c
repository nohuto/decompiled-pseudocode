/*
 * XREFs of ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18000736C
 * Callers:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180007208 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1800065D8 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x1800070E4 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x18000741C (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?wil_details_HasTestState@@YAHIW4wil_details_FeatureTestStateKind@@PEAUwil_details_FeatureTestState@@@Z @ 0x18008D468 (-wil_details_HasTestState@@YAHIW4wil_details_FeatureTestStateKind@@PEAUwil_details_FeatureTestSt.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetCachedFeatureEnabledState(
        __int64 a1,
        unsigned int a2,
        enum FEATURE_CHANGE_TIME a3)
{
  int v3; // esi
  unsigned int v4; // ebx
  enum FEATURE_ENABLED_STATE FeatureEnabledState; // eax
  unsigned int v6; // edi
  bool v7; // al
  __int64 (__fastcall *v8)(signed __int32 *, void *); // rdx
  unsigned __int64 v9; // r8
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = `wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetFeaturePropertyCache'::`2'::data & 3;
  v4 = v3;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetFeaturePropertyCache'::`2'::data & 3) == 0
    || (`wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
  {
    FeatureEnabledState = wil::details::WilApi_GetFeatureEnabledState((wil::details *)0xB487B0, a2, a3);
    v6 = ((FeatureEnabledState & 0x80u) != 0) + 1;
    v7 = (FeatureEnabledState & 0xFFFFFF7F) == 0 || (FeatureEnabledState & 0xFFFFFF7F) == 2;
    v4 = v7 + 1;
    if ( v3 )
      v4 = v3;
    wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
      (__int64)&wil::details::g_enabledStateManager,
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetFeaturePropertyCache'::`2'::data,
      0);
    if ( !g_wil_details_testStates || !(unsigned int)wil_details_HasTestState(11831216LL, 0LL, v11) )
    {
      if ( v3 )
      {
        v9 = v6;
        v8 = (__int64 (__fastcall *)(signed __int32 *, void *))wil_details_SetHasNotificationStateCallback;
      }
      else
      {
        v8 = (__int64 (__fastcall *)(signed __int32 *, void *))wil_details_SetEnabledAndHasNotificationStateCallback;
        v9 = v4 | (unsigned __int64)(v6 << 8);
      }
      wil_details_ModifyFeatureData(
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetFeaturePropertyCache'::`2'::data,
        v8,
        (void *)v9);
    }
  }
  return v4;
}
