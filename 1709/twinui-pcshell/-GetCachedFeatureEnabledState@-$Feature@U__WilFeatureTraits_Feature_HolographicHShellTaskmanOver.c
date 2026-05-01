/*
 * XREFs of ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180183E64
 * Callers:
 *     ?DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ @ 0x1801825C0 (-DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ.c)
 * Callees:
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18001E3B0 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x18001EA18 (-wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z.c)
 *     ?wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCache@@W4wil_details_CachedFeatureEnabledState@@W4wil_details_CachedHasNotificationState@@@Z @ 0x18001EA9C (-wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCach.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800DF850 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 wil::Feature<__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride>::GetCachedFeatureEnabledState()
{
  int v0; // edi
  unsigned int v1; // esi
  int v2; // eax
  int v3; // ecx
  int v4; // r14d
  int v5; // ebx
  unsigned int v6; // ecx
  bool v7; // al
  int v8; // r9d
  int v10; // [rsp+68h] [rbp+40h] BYREF
  int v11; // [rsp+70h] [rbp+48h]
  __int16 v12; // [rsp+74h] [rbp+4Ch]
  int v13; // [rsp+78h] [rbp+50h]
  __int16 v14; // [rsp+7Ch] [rbp+54h]

  v0 = `wil::Feature<__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride>::GetFeaturePropertyCache'::`2'::data & 3;
  v1 = v0;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride>::GetFeaturePropertyCache'::`2'::data & 3) != 0
    && (`wil::Feature<__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
  {
    return v1;
  }
  if ( g_wil_details_internalGetFeatureEnabledState )
  {
    v2 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_internalGetFeatureEnabledState)(9318646LL, 0LL);
  }
  else
  {
    if ( !g_wil_details_apiGetFeatureEnabledState )
    {
      v3 = 0;
      goto LABEL_11;
    }
    if ( (unsigned int)wil_HasFeatureTestState(9318646, (enum wil_FeatureEnabledState *)&v10) )
    {
      v3 = v10;
      goto LABEL_11;
    }
    v2 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_apiGetFeatureEnabledState)(9318646LL, 0LL);
  }
  v3 = v2;
LABEL_11:
  v4 = 2;
  v5 = ((v3 & 0x80u) != 0) + 1;
  v6 = v3 & 0xFFFFFF7F;
  if ( v6 )
    v7 = v6 == 2;
  else
    v7 = 1;
  if ( v7 )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetCachedFeatureEnabledState();
    LOBYTE(v12) = 3;
    v13 = 0;
    v14 = v12;
    v11 = 0;
  }
  else
  {
    v4 = 1;
  }
  if ( !v0 )
    v1 = v4;
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride>::GetFeaturePropertyCache'::`2'::data,
    0);
  if ( !g_wil_details_testStates || !(unsigned int)wil_HasFeatureTestState(9318646, 0LL) )
  {
    if ( v0 )
    {
      do
        v8 = `wil::Feature<__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride>::GetFeaturePropertyCache'::`2'::data;
      while ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) != (unsigned __int8)v5
           && v8 != _InterlockedCompareExchange(
                      &`wil::Feature<__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride>::GetFeaturePropertyCache'::`2'::data,
                      ((unsigned __int8)`wil::Feature<__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride>::GetFeaturePropertyCache'::`2'::data ^ (unsigned __int8)(16 * v5)) & 0x30 ^ `wil::Feature<__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride>::GetFeaturePropertyCache'::`2'::data,
                      `wil::Feature<__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride>::GetFeaturePropertyCache'::`2'::data) );
    }
    else
    {
      wil_details_SetEnabledAndHasNotificationStateProperties(
        &`wil::Feature<__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride>::GetFeaturePropertyCache'::`2'::data,
        v1,
        v5);
    }
  }
  return v1;
}
