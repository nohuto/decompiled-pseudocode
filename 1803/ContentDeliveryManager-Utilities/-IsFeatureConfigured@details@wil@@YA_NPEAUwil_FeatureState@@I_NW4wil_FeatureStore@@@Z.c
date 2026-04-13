/*
 * XREFs of ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x18000B18C
 * Callers:
 *     ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x18000B410 (-WilApiImpl_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_T.c)
 * Callees:
 *     ?wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x1800079C4 (-wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x180008164 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     ?wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureState@@IH@Z @ 0x18000847C (-wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureS.c)
 *     ?wil_details_StagingConfig_AreAnyFeaturesConfigured@@YAHPEAUwil_details_StagingConfig@@@Z @ 0x180008634 (-wil_details_StagingConfig_AreAnyFeaturesConfigured@@YAHPEAUwil_details_StagingConfig@@@Z.c)
 *     ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x180008888 (-wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18000BBD4 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 */

bool __fastcall wil::details::IsFeatureConfigured(
        __int64 a1,
        int a2,
        unsigned __int8 a3,
        unsigned int a4,
        volatile signed __int32 *a5)
{
  bool v7; // al
  struct wil_details_StagingConfig *v8; // r15
  int v9; // r13d
  _DWORD *v10; // rdi
  int FeatureState; // esi
  HANDLE ProcessHeap; // rax
  int v13; // edi
  struct wil_details_FeatureTestState *i; // rax
  __int128 v15; // xmm1
  char v16; // cl
  int v17; // edx
  bool v18; // di
  _BOOL8 v19; // rbx
  signed __int32 v20; // esi
  bool v22; // [rsp+30h] [rbp-D0h]
  volatile signed __int32 v23; // [rsp+34h] [rbp-CCh] BYREF
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  __int128 v26; // [rsp+40h] [rbp-C0h]
  __int128 v27; // [rsp+50h] [rbp-B0h]
  unsigned int v28[6]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+78h] [rbp-88h]
  LPVOID lpMem; // [rsp+98h] [rbp-68h]
  int v31; // [rsp+B0h] [rbp-50h]
  char v32[208]; // [rsp+C0h] [rbp-40h] BYREF

  v7 = !g_wil_details_testStates && (*(_BYTE *)a5 & 3) == 0;
  v8 = g_wil_details_stagingConfigForUser;
  v22 = v7;
  v24 = 1;
  v9 = a3;
  v10 = (_DWORD *)((unsigned __int64)&v24 & -(__int64)v7);
  FeatureState = 0;
  if ( !a4 )
    v8 = g_wil_details_stagingConfigForMachine;
  if ( v8 )
  {
    if ( v10 )
      *v10 = wil_details_StagingConfig_AreAnyFeaturesConfigured(v8);
    FeatureState = wil_details_StagingConfig_QueryFeatureState(v8, (struct wil_FeatureState *)a1, a2, v9);
  }
  else
  {
    if ( v10 )
      *v10 = 0;
    if ( !g_wil_details_preventOnDemandStagingConfigReads
      && !(unsigned int)wil_details_StagingConfig_Load(v28, a4, 0xC8uLL, v32, 0) )
    {
      FeatureState = wil_details_StagingConfig_QueryFeatureState(
                       (struct wil_details_StagingConfig *)v28,
                       (struct wil_FeatureState *)a1,
                       a2,
                       v9);
      if ( v10 )
        *v10 = wil_details_StagingConfig_AreAnyFeaturesConfigured((struct wil_details_StagingConfig *)v28);
      if ( v31 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, lpMem);
        lpMem = 0LL;
        v29 = 0LL;
      }
    }
  }
  if ( g_wil_details_testStates )
  {
    if ( (unsigned int)wil_HasFeatureTestState(a2, (enum wil_FeatureEnabledState *)&v25) )
    {
      if ( !FeatureState )
      {
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
        FeatureState = 1;
      }
      *(_DWORD *)a1 = v25;
    }
    v13 = 0;
    if ( g_wil_details_testStates )
    {
      AcquireSRWLockShared(&g_wil_details_testFeatureStateLock);
      for ( i = g_wil_details_testStates; i; i = (struct wil_details_FeatureTestState *)*((_QWORD *)i + 3) )
      {
        if ( *((_DWORD *)i + 1) == a2 && *(_DWORD *)i == 1 )
        {
          v13 = 1;
          v15 = *((_OWORD *)i + 1);
          v26 = *(_OWORD *)i;
          v27 = v15;
          break;
        }
      }
      ReleaseSRWLockShared(&g_wil_details_testFeatureStateLock);
    }
    v16 = v13 != 0 ? BYTE12(v26) : 0;
    v17 = v13 != 0 ? v27 : 0;
    if ( v13 )
    {
      if ( !FeatureState )
      {
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
        FeatureState = 1;
      }
      *(_BYTE *)(a1 + 4) = v16;
      *(_DWORD *)(a1 + 12) = v17;
    }
  }
  v18 = FeatureState != 0;
  if ( v22 )
  {
    v19 = v24 != 0;
    do
    {
      v23 = *a5;
      v23 = *a5;
      v20 = v23;
    }
    while ( (unsigned int)wil_details_SetEnabledAndHasNotificationStateCallback(
                            (union wil_details_FeaturePropertyCache *)&v23,
                            (void *)(v19 + 1))
         && v20 != _InterlockedCompareExchange(a5, v23, v20) );
    if ( !v24 )
      wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
        &wil::details::g_enabledStateManager,
        a5,
        0LL);
  }
  return v18;
}
