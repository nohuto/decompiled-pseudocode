/*
 * XREFs of ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18003F6B0
 * Callers:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180033DF0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CAX_NW4Reporti.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x180034044 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@@Z @ 0x18003FB08 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA-AW.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18003FDDC (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?wil_details_HasTestState@@YAHIW4wil_details_FeatureTestStateKind@@PEAUwil_details_FeatureTestState@@@Z @ 0x1800686AC (-wil_details_HasTestState@@YAHIW4wil_details_FeatureTestStateKind@@PEAUwil_details_FeatureTestSt.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::GetCachedFeatureEnabledState(__int64 a1)
{
  int v1; // ebx
  unsigned int v2; // edi
  unsigned int CurrentFeatureEnabledState; // eax
  unsigned int (__fastcall *v4)(signed __int32 *, void *); // rdx
  unsigned __int64 v5; // r8
  char v7[40]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+50h] [rbp+8h] BYREF

  LOBYTE(v8) = a1;
  v1 = `wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::GetFeaturePropertyCache'::`2'::data & 3;
  v2 = v1;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::GetFeaturePropertyCache'::`2'::data & 3) == 0
    || (`wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
  {
    v8 = 0;
    CurrentFeatureEnabledState = wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::GetCurrentFeatureEnabledState(
                                   a1,
                                   &v8);
    if ( !v1 )
      v2 = CurrentFeatureEnabledState;
    wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
      &wil::details::g_enabledStateManager,
      &`wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::GetFeaturePropertyCache'::`2'::data,
      0LL);
    if ( !g_wil_details_testStates || !(unsigned int)wil_details_HasTestState(11786145LL, 0LL, v7) )
    {
      if ( v1 )
      {
        v5 = v8;
        v4 = (unsigned int (__fastcall *)(signed __int32 *, void *))wil_details_SetHasNotificationStateCallback;
      }
      else
      {
        v4 = (unsigned int (__fastcall *)(signed __int32 *, void *))wil_details_SetEnabledAndHasNotificationStateCallback;
        v5 = v2 | (unsigned __int64)(v8 << 8);
      }
      wil_details_ModifyFeatureData(
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::GetFeaturePropertyCache'::`2'::data,
        v4,
        (void *)v5);
    }
  }
  return v2;
}
