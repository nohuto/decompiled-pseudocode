/*
 * XREFs of ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_WindowsTips@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180039730
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_WindowsTips@@@wil@@SA_NXZ @ 0x180032900 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_WindowsTips@@@wil@@SA_NXZ.c)
 * Callees:
 *     ?wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x1800079C4 (-wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@.c)
 *     ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x180008888 (-wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18000BBD4 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 wil::Feature<__WilFeatureTraits_Feature_WindowsTips>::GetCachedFeatureEnabledState()
{
  int v0; // esi
  unsigned int v1; // ebx
  unsigned int v2; // eax
  unsigned int v3; // ecx
  int v4; // edx
  int v5; // edi
  unsigned int v6; // ecx
  bool v7; // al
  unsigned int v8; // r14d
  void *v9; // rdi
  signed __int32 v10; // esi
  int v11; // r9d
  signed __int32 v13; // [rsp+58h] [rbp+38h] BYREF
  unsigned int v14; // [rsp+60h] [rbp+40h] BYREF

  v0 = `wil::Feature<__WilFeatureTraits_Feature_WindowsTips>::GetFeaturePropertyCache'::`2'::data & 3;
  v1 = v0;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_WindowsTips>::GetFeaturePropertyCache'::`2'::data & 3) != 0
    && (`wil::Feature<__WilFeatureTraits_Feature_WindowsTips>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
  {
    return v1;
  }
  if ( g_wil_details_internalGetFeatureEnabledState )
  {
    v2 = ((__int64 (__fastcall *)(__int64, __int64))g_wil_details_internalGetFeatureEnabledState)(11355840LL, 1LL);
LABEL_5:
    v3 = v2;
    goto LABEL_11;
  }
  if ( g_wil_details_apiGetFeatureEnabledState )
  {
    if ( !(unsigned int)wil_HasFeatureTestState(11355840, (enum wil_FeatureEnabledState *)&v14) )
    {
      v2 = ((__int64 (__fastcall *)(__int64, __int64))g_wil_details_apiGetFeatureEnabledState)(11355840LL, 1LL);
      goto LABEL_5;
    }
    v3 = v14;
  }
  else
  {
    v3 = 0;
  }
LABEL_11:
  v4 = (v3 >> 6) & 1;
  v5 = ((v3 & 0x80u) != 0) + 1;
  v6 = v3 & 0xFFFFFF3F;
  if ( v6 )
    v7 = v6 == 2;
  else
    v7 = 1;
  v8 = ((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_WindowsTips>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
  v1 = v7 + 1;
  if ( v0 )
    v1 = v0;
  else
    v8 = v4;
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_WindowsTips>::GetFeaturePropertyCache'::`2'::data,
    1);
  if ( !g_wil_details_testStates || !(unsigned int)wil_HasFeatureTestState(11355840, 0LL) )
  {
    if ( v0 )
    {
      do
        v11 = `wil::Feature<__WilFeatureTraits_Feature_WindowsTips>::GetFeaturePropertyCache'::`2'::data;
      while ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_WindowsTips>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) != (unsigned __int8)v5
           && v11 != _InterlockedCompareExchange(
                       &`wil::Feature<__WilFeatureTraits_Feature_WindowsTips>::GetFeaturePropertyCache'::`2'::data,
                       ((unsigned __int8)`wil::Feature<__WilFeatureTraits_Feature_WindowsTips>::GetFeaturePropertyCache'::`2'::data ^ (unsigned __int8)(16 * v5)) & 0x30 ^ `wil::Feature<__WilFeatureTraits_Feature_WindowsTips>::GetFeaturePropertyCache'::`2'::data,
                       `wil::Feature<__WilFeatureTraits_Feature_WindowsTips>::GetFeaturePropertyCache'::`2'::data) );
    }
    else
    {
      v9 = (void *)(v1 | (v8 << 16) | (unsigned __int64)(unsigned int)(v5 << 8));
      do
      {
        v13 = `wil::Feature<__WilFeatureTraits_Feature_WindowsTips>::GetFeaturePropertyCache'::`2'::data;
        v10 = `wil::Feature<__WilFeatureTraits_Feature_WindowsTips>::GetFeaturePropertyCache'::`2'::data;
      }
      while ( (unsigned int)wil_details_SetEnabledAndHasNotificationStateCallback(
                              (union wil_details_FeaturePropertyCache *)&v13,
                              v9)
           && v10 != _InterlockedCompareExchange(
                       &`wil::Feature<__WilFeatureTraits_Feature_WindowsTips>::GetFeaturePropertyCache'::`2'::data,
                       v13,
                       v10) );
    }
  }
  return v1;
}
