/*
 * XREFs of ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800DFD74
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@SA_NXZ @ 0x1800DF550 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@SA_NXZ.c)
 * Callees:
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18001E3B0 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x18001EA18 (-wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z.c)
 *     ?wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCache@@W4wil_details_CachedFeatureEnabledState@@W4wil_details_CachedHasNotificationState@@@Z @ 0x18001EA9C (-wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCach.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_XamlExplorerHost@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800DF998 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_XamlExplorerHost@@@wil@@CA-A.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DesktopSwitcherDataModel@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800DFF00 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DesktopSwitcherDataModel@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetCachedFeatureEnabledState()
{
  int v0; // ebx
  unsigned int v1; // esi
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  __int64 v5; // rcx
  int v6; // eax
  int v7; // r9d
  int v9; // [rsp+68h] [rbp+38h] BYREF
  int v10; // [rsp+70h] [rbp+40h]
  __int16 v11; // [rsp+74h] [rbp+44h]
  int v12; // [rsp+78h] [rbp+48h]
  __int16 v13; // [rsp+7Ch] [rbp+4Ch]

  v0 = `wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetFeaturePropertyCache'::`2'::data & 3;
  v1 = v0;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetFeaturePropertyCache'::`2'::data & 3) != 0
    && (`wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
  {
    return v1;
  }
  if ( g_wil_details_internalGetFeatureEnabledState )
  {
    v2 = ((__int64 (__fastcall *)(__int64, __int64))g_wil_details_internalGetFeatureEnabledState)(7923987LL, 1LL);
  }
  else
  {
    if ( !g_wil_details_apiGetFeatureEnabledState )
    {
      v3 = 0;
      goto LABEL_11;
    }
    if ( (unsigned int)wil_HasFeatureTestState(7923987, (enum wil_FeatureEnabledState *)&v9) )
    {
      v3 = v9;
      goto LABEL_11;
    }
    v2 = ((__int64 (__fastcall *)(__int64, __int64))g_wil_details_apiGetFeatureEnabledState)(7923987LL, 1LL);
  }
  v3 = v2;
LABEL_11:
  v4 = ((v3 & 0x80u) != 0) + 1;
  v5 = v3 & 0xFFFFFF7F;
  if ( (_DWORD)v5 == 2 )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::GetCachedFeatureEnabledState();
    LOBYTE(v11) = 0;
    v10 = 0;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_DesktopSwitcherDataModel>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_DesktopSwitcherDataModel>::GetCachedFeatureEnabledState(v5);
    LOBYTE(v13) = 0;
    v6 = 3;
    v12 = 0;
  }
  else
  {
    v6 = 1;
  }
  if ( !v0 )
    v1 = v6;
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetFeaturePropertyCache'::`2'::data,
    1);
  if ( !g_wil_details_testStates || !(unsigned int)wil_HasFeatureTestState(7923987, 0LL) )
  {
    if ( v0 )
    {
      do
        v7 = `wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetFeaturePropertyCache'::`2'::data;
      while ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) != (unsigned __int8)v4
           && v7 != _InterlockedCompareExchange(
                      &`wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetFeaturePropertyCache'::`2'::data,
                      ((unsigned __int8)`wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetFeaturePropertyCache'::`2'::data ^ (unsigned __int8)(16 * v4)) & 0x30 ^ `wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetFeaturePropertyCache'::`2'::data,
                      `wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetFeaturePropertyCache'::`2'::data) );
    }
    else
    {
      wil_details_SetEnabledAndHasNotificationStateProperties(
        &`wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetFeaturePropertyCache'::`2'::data,
        v1,
        v4);
    }
  }
  return v1;
}
