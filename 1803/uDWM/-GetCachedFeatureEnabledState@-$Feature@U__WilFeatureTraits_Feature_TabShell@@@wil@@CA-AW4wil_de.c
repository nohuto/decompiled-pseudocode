/*
 * XREFs of ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800845A4
 * Callers:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180085D84 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1800354C0 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x180042A58 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?wil_details_HasTestState@@YAHIW4wil_details_FeatureTestStateKind@@PEAUwil_details_FeatureTestState@@@Z @ 0x18006EE44 (-wil_details_HasTestState@@YAHIW4wil_details_FeatureTestStateKind@@PEAUwil_details_FeatureTestSt.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x180084934 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA-AW4wil_d.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetCachedFeatureEnabledState(__int64 a1)
{
  int v1; // ebx
  unsigned int v2; // esi
  unsigned int CurrentFeatureEnabledState; // eax
  int v4; // edi
  unsigned int (__fastcall *v5)(signed __int32 *, void *); // rdx
  unsigned __int64 v6; // r8
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+58h] [rbp+10h] BYREF

  LOBYTE(v9) = a1;
  v1 = `wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data & 3;
  v2 = v1;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data & 3) == 0
    || (`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
  {
    v9 = 0;
    CurrentFeatureEnabledState = wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetCurrentFeatureEnabledState(
                                   a1,
                                   &v9,
                                   &v10);
    v4 = (`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
    if ( !v1 )
    {
      v4 = v10;
      v2 = CurrentFeatureEnabledState;
    }
    wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
      (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data,
      3);
    if ( !g_wil_details_testStates || !(unsigned int)wil_details_HasTestState(10727725, 0, &v8) )
    {
      if ( v1 )
      {
        v6 = v9;
        v5 = (unsigned int (__fastcall *)(signed __int32 *, void *))wil_details_SetHasNotificationStateCallback;
      }
      else
      {
        v5 = (unsigned int (__fastcall *)(signed __int32 *, void *))wil_details_SetEnabledAndHasNotificationStateCallback;
        v6 = v2 | (unsigned int)(v4 << 16) | (unsigned __int64)(unsigned int)(v9 << 8);
      }
      wil_details_ModifyFeatureData(
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data,
        v5,
        (void *)v6);
    }
  }
  return v2;
}
