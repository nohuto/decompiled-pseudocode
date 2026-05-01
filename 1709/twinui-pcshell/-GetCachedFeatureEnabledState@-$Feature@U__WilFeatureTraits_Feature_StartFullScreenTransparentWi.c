/*
 * XREFs of ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_StartFullScreenTransparentWindow@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800B9900
 * Callers:
 *     ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800B6FB0 (-OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAU.c)
 *     ?WorkAreaMayHaveChanged@CStartExperienceManager@@UEAAJXZ @ 0x1800B7F70 (-WorkAreaMayHaveChanged@CStartExperienceManager@@UEAAJXZ.c)
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x1800B8324 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 * Callees:
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18001E3B0 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x18001EA18 (-wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z.c)
 *     ?wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCache@@W4wil_details_CachedFeatureEnabledState@@W4wil_details_CachedHasNotificationState@@@Z @ 0x18001EA9C (-wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCach.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_StartAcrylicBackground@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800B97B4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_StartAcrylicBackground@@@wil.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 wil::Feature<__WilFeatureTraits_Feature_StartFullScreenTransparentWindow>::GetCachedFeatureEnabledState()
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
  int v10; // [rsp+68h] [rbp+48h] BYREF
  int v11; // [rsp+70h] [rbp+50h]
  __int16 v12; // [rsp+74h] [rbp+54h]
  int v13; // [rsp+78h] [rbp+58h]
  __int16 v14; // [rsp+7Ch] [rbp+5Ch]

  v0 = `wil::Feature<__WilFeatureTraits_Feature_StartFullScreenTransparentWindow>::GetFeaturePropertyCache'::`2'::data & 3;
  v1 = v0;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_StartFullScreenTransparentWindow>::GetFeaturePropertyCache'::`2'::data & 3) != 0
    && (`wil::Feature<__WilFeatureTraits_Feature_StartFullScreenTransparentWindow>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
  {
    return v1;
  }
  if ( g_wil_details_internalGetFeatureEnabledState )
  {
    v2 = ((__int64 (__fastcall *)(__int64, __int64))g_wil_details_internalGetFeatureEnabledState)(8052891LL, 3LL);
  }
  else
  {
    if ( !g_wil_details_apiGetFeatureEnabledState )
    {
      v3 = 0;
      goto LABEL_11;
    }
    if ( (unsigned int)wil_HasFeatureTestState(8052891, (enum wil_FeatureEnabledState *)&v10) )
    {
      v3 = v10;
      goto LABEL_11;
    }
    v2 = ((__int64 (__fastcall *)(__int64, __int64))g_wil_details_apiGetFeatureEnabledState)(8052891LL, 3LL);
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
    if ( (`wil::Feature<__WilFeatureTraits_Feature_StartAcrylicBackground>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_StartAcrylicBackground>::GetCachedFeatureEnabledState();
    LOBYTE(v12) = 3;
    v13 = 3;
    v14 = v12;
    v11 = 3;
  }
  else
  {
    v4 = 1;
  }
  if ( !v0 )
    v1 = v4;
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_StartFullScreenTransparentWindow>::GetFeaturePropertyCache'::`2'::data,
    3);
  if ( !g_wil_details_testStates || !(unsigned int)wil_HasFeatureTestState(8052891, 0LL) )
  {
    if ( v0 )
    {
      do
        v8 = `wil::Feature<__WilFeatureTraits_Feature_StartFullScreenTransparentWindow>::GetFeaturePropertyCache'::`2'::data;
      while ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_StartFullScreenTransparentWindow>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) != (unsigned __int8)v5
           && v8 != _InterlockedCompareExchange(
                      &`wil::Feature<__WilFeatureTraits_Feature_StartFullScreenTransparentWindow>::GetFeaturePropertyCache'::`2'::data,
                      ((unsigned __int8)`wil::Feature<__WilFeatureTraits_Feature_StartFullScreenTransparentWindow>::GetFeaturePropertyCache'::`2'::data ^ (unsigned __int8)(16 * v5)) & 0x30 ^ `wil::Feature<__WilFeatureTraits_Feature_StartFullScreenTransparentWindow>::GetFeaturePropertyCache'::`2'::data,
                      `wil::Feature<__WilFeatureTraits_Feature_StartFullScreenTransparentWindow>::GetFeaturePropertyCache'::`2'::data) );
    }
    else
    {
      wil_details_SetEnabledAndHasNotificationStateProperties(
        &`wil::Feature<__WilFeatureTraits_Feature_StartFullScreenTransparentWindow>::GetFeaturePropertyCache'::`2'::data,
        v1,
        v5);
    }
  }
  return v1;
}
