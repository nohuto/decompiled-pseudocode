/*
 * XREFs of ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800CE678
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180004CD0 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800CF87C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@wi.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1800065D8 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x1800070E4 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x18000741C (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?wil_details_HasTestState@@YAHIW4wil_details_FeatureTestStateKind@@PEAUwil_details_FeatureTestState@@@Z @ 0x18008D468 (-wil_details_HasTestState@@YAHIW4wil_details_FeatureTestStateKind@@PEAUwil_details_FeatureTestSt.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetCachedFeatureEnabledState(
        __int64 a1,
        int a2,
        __int64 a3)
{
  int v3; // ebx
  unsigned int v4; // esi
  enum FEATURE_ENABLED_STATE FeatureEnabledState; // eax
  unsigned int v6; // edi
  unsigned int v7; // ecx
  int v8; // eax
  __int64 (__fastcall *v9)(signed __int32 *, void *); // rdx
  unsigned __int64 v10; // r8
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF

  v3 = `wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetFeaturePropertyCache'::`2'::data & 3;
  v4 = v3;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetFeaturePropertyCache'::`2'::data & 3) == 0
    || (`wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
  {
    FeatureEnabledState = wil::details::WilApi_GetFeatureEnabledState(0x98C3BDuLL, a2, a3);
    v6 = ((FeatureEnabledState & 0x80u) != 0) + 1;
    v7 = FeatureEnabledState & 0xFFFFFF7F;
    if ( (FeatureEnabledState & 0xFFFFFF7F) == 0 || (v8 = 2, v7 != 2) )
      v8 = 1;
    if ( !v3 )
      v4 = v8;
    wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
      (__int64)&wil::details::g_enabledStateManager,
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetFeaturePropertyCache'::`2'::data,
      0);
    if ( !g_wil_details_testStates || !(unsigned int)wil_details_HasTestState(10011581, 0, &v12) )
    {
      if ( v3 )
      {
        v10 = v6;
        v9 = (__int64 (__fastcall *)(signed __int32 *, void *))wil_details_SetHasNotificationStateCallback;
      }
      else
      {
        v9 = (__int64 (__fastcall *)(signed __int32 *, void *))wil_details_SetEnabledAndHasNotificationStateCallback;
        v10 = v4 | (unsigned __int64)(v6 << 8);
      }
      wil_details_ModifyFeatureData(
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetFeaturePropertyCache'::`2'::data,
        v9,
        (void *)v10);
    }
  }
  return v4;
}
