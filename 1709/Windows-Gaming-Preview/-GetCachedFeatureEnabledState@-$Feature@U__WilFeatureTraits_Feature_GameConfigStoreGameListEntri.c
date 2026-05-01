/*
 * XREFs of ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntries@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18000C640
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800091E8 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCache@@W4wil_details_CachedFeatureEnabledState@@W4wil_details_CachedHasNotificationState@@@Z @ 0x180003C30 (-wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCach.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x180006BEC (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetCachedFeatureEnabledState()
{
  int v0; // esi
  unsigned int v1; // ebx
  int v2; // eax
  int v3; // ecx
  enum FEATURE_ENABLED_STATE (*v4)(unsigned int, enum FEATURE_CHANGE_TIME); // r8
  int v5; // ebx
  struct wil_details_FeatureTestState *i; // rax
  int v7; // edi
  unsigned int v8; // ecx
  bool v9; // al
  int v10; // ebp
  struct wil_details_FeatureTestState *j; // rax
  int v12; // r9d
  __int128 v14; // [rsp+20h] [rbp-38h]

  v0 = `wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetFeaturePropertyCache'::`2'::data & 3;
  v1 = v0;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetFeaturePropertyCache'::`2'::data & 3) != 0
    && (`wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
  {
    return v1;
  }
  if ( g_wil_details_internalGetFeatureEnabledState )
  {
    v2 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_internalGetFeatureEnabledState)(11973136LL, 0LL);
  }
  else
  {
    v4 = g_wil_details_apiGetFeatureEnabledState;
    if ( !g_wil_details_apiGetFeatureEnabledState )
    {
      v3 = 0;
      goto LABEL_18;
    }
    v5 = 0;
    if ( g_wil_details_testStates )
    {
      AcquireSRWLockShared(&g_wil_details_testFeatureStateLock);
      for ( i = g_wil_details_testStates; i; i = (struct wil_details_FeatureTestState *)*((_QWORD *)i + 3) )
      {
        if ( *((_DWORD *)i + 1) == 11973136 && !*(_DWORD *)i )
        {
          v5 = 1;
          v14 = *(_OWORD *)i;
          break;
        }
      }
      ReleaseSRWLockShared(&g_wil_details_testFeatureStateLock);
      v4 = g_wil_details_apiGetFeatureEnabledState;
    }
    v3 = v5 != 0 ? DWORD2(v14) : 0;
    if ( v5 )
      goto LABEL_18;
    v2 = ((__int64 (__fastcall *)(__int64, _QWORD))v4)(11973136LL, 0LL);
  }
  v3 = v2;
LABEL_18:
  v7 = ((v3 & 0x80u) != 0) + 1;
  v8 = v3 & 0xFFFFFF7F;
  if ( v8 )
    v9 = v8 == 2;
  else
    v9 = 1;
  v1 = v9 + 1;
  if ( v0 )
    v1 = v0;
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetFeaturePropertyCache'::`2'::data,
    0);
  if ( !g_wil_details_testStates )
    goto LABEL_31;
  v10 = 0;
  AcquireSRWLockShared(&g_wil_details_testFeatureStateLock);
  for ( j = g_wil_details_testStates; j; j = (struct wil_details_FeatureTestState *)*((_QWORD *)j + 3) )
  {
    if ( *((_DWORD *)j + 1) == 11973136 && !*(_DWORD *)j )
    {
      v10 = 1;
      break;
    }
  }
  ReleaseSRWLockShared(&g_wil_details_testFeatureStateLock);
  if ( !v10 )
  {
LABEL_31:
    if ( v0 )
    {
      do
        v12 = `wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetFeaturePropertyCache'::`2'::data;
      while ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) != (unsigned __int8)v7
           && v12 != _InterlockedCompareExchange(
                       &`wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetFeaturePropertyCache'::`2'::data,
                       ((unsigned __int8)`wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetFeaturePropertyCache'::`2'::data ^ (unsigned __int8)(16 * v7)) & 0x30 ^ `wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetFeaturePropertyCache'::`2'::data,
                       `wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetFeaturePropertyCache'::`2'::data) );
    }
    else
    {
      wil_details_SetEnabledAndHasNotificationStateProperties(
        &`wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetFeaturePropertyCache'::`2'::data,
        v1,
        v7);
    }
  }
  return v1;
}
