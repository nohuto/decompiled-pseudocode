/*
 * XREFs of ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_WindowStyleUpdates@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180045BF4
 * Callers:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowStyleUpdates@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180014F00 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowStyleUpdates@@@wil@@CAX_NW4Rep.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x180018888 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_WindowStyleUpdates@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@@Z @ 0x180046044 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_WindowStyleUpdates@@@wil@@C.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x180046294 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?wil_details_HasTestState@@YAHIW4wil_details_FeatureTestStateKind@@PEAUwil_details_FeatureTestState@@@Z @ 0x1800815AC (-wil_details_HasTestState@@YAHIW4wil_details_FeatureTestStateKind@@PEAUwil_details_FeatureTestSt.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_WindowStyleUpdates>::GetCachedFeatureEnabledState(
        __int64 a1)
{
  int v1; // ebx
  __int64 CurrentFeatureEnabledState; // rdi
  unsigned int (__fastcall *v3)(signed __int32 *, void *); // rdx
  unsigned __int64 v4; // r8
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF

  LOBYTE(v7) = a1;
  v1 = `wil::Feature<__WilFeatureTraits_Feature_WindowStyleUpdates>::GetFeaturePropertyCache'::`2'::data & 3;
  LODWORD(CurrentFeatureEnabledState) = v1;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_WindowStyleUpdates>::GetFeaturePropertyCache'::`2'::data & 3) == 0
    || (`wil::Feature<__WilFeatureTraits_Feature_WindowStyleUpdates>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
  {
    v7 = 0;
    CurrentFeatureEnabledState = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_WindowStyleUpdates>::GetCurrentFeatureEnabledState(
                                                 a1,
                                                 &v7);
    wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
      &wil::details::g_enabledStateManager,
      &`wil::Feature<__WilFeatureTraits_Feature_WindowStyleUpdates>::GetFeaturePropertyCache'::`2'::data,
      0LL);
    if ( !g_wil_details_testStates || !(unsigned int)wil_details_HasTestState(10095438LL, 0LL, v6) )
    {
      if ( v1 )
      {
        v4 = v7;
        v3 = (unsigned int (__fastcall *)(signed __int32 *, void *))wil_details_SetHasNotificationStateCallback;
      }
      else
      {
        v3 = (unsigned int (__fastcall *)(signed __int32 *, void *))wil_details_SetEnabledAndHasNotificationStateCallback;
        v4 = CurrentFeatureEnabledState | (v7 << 8);
      }
      wil_details_ModifyFeatureData(
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_WindowStyleUpdates>::GetFeaturePropertyCache'::`2'::data,
        v3,
        (void *)v4);
    }
  }
  return (unsigned int)CurrentFeatureEnabledState;
}
