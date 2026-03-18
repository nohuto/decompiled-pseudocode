/*
 * XREFs of ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800BA428
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180048000 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004BFF0 (--1CVisual@@MEAA@XZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18014AB2C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CAX_NW4Report.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x1800BB294 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x1800BBC24 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1800C7700 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 *     ?wil_details_HasTestState@@YAHIW4wil_details_FeatureTestStateKind@@PEAUwil_details_FeatureTestState@@@Z @ 0x180143210 (-wil_details_HasTestState@@YAHIW4wil_details_FeatureTestStateKind@@PEAUwil_details_FeatureTestSt.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetCachedFeatureEnabledState(
        __int64 a1,
        unsigned int a2,
        enum FEATURE_CHANGE_TIME a3)
{
  int v3; // edi
  unsigned int v4; // ebx
  enum FEATURE_ENABLED_STATE FeatureEnabledState; // ecx
  int v6; // eax
  unsigned int v7; // esi
  unsigned int v8; // ecx
  int v9; // ebp
  int (*v10)(union wil_details_FeaturePropertyCache *, void *); // rdx
  unsigned __int64 v11; // r8
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = `wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetFeaturePropertyCache'::`2'::data & 3;
  v4 = v3;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetFeaturePropertyCache'::`2'::data & 3) == 0
    || (`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
  {
    FeatureEnabledState = wil::details::WilApi_GetFeatureEnabledState((wil::details *)0xCB67FA, a2, a3);
    v6 = ((unsigned int)FeatureEnabledState >> 6) & 1;
    v7 = ((FeatureEnabledState & 0x80u) != 0) + 1;
    v8 = FeatureEnabledState & 0xFFFFFF3F;
    if ( !v8 || (v4 = 2, v8 != 2) )
      v4 = 1;
    v9 = (`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
    if ( v3 )
      v4 = v3;
    else
      v9 = v6;
    wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
      &wil::details::g_enabledStateManager,
      &`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetFeaturePropertyCache'::`2'::data,
      0LL);
    if ( !g_wil_details_testStates || !(unsigned int)wil_details_HasTestState(13330426LL, 0LL, v13) )
    {
      if ( v3 )
      {
        v11 = v7;
        v10 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetHasNotificationStateCallback;
      }
      else
      {
        v10 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetEnabledAndHasNotificationStateCallback;
        v11 = v4 | (unsigned int)(v9 << 16) | (unsigned __int64)(v7 << 8);
      }
      wil_details_ModifyFeatureData(
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetFeaturePropertyCache'::`2'::data,
        v10,
        (void *)v11);
    }
  }
  return v4;
}
