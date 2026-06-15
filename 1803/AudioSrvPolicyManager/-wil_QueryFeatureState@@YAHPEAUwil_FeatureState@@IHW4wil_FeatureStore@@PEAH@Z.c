/*
 * XREFs of ?wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z @ 0x180004170
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x180006230 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 * Callees:
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x180003A7C (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     ?wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureState@@IH@Z @ 0x180003D64 (-wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureS.c)
 *     ?wil_details_StagingConfig_AreAnyFeaturesConfigured@@YAHPEAUwil_details_StagingConfig@@@Z @ 0x180003F1C (-wil_details_StagingConfig_AreAnyFeaturesConfigured@@YAHPEAUwil_details_StagingConfig@@@Z.c)
 *     __security_check_cookie @ 0x180034E70 (__security_check_cookie.c)
 */

__int64 __fastcall wil_QueryFeatureState(__int64 a1, int a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  struct wil_details_StagingConfig *v5; // r14
  unsigned int FeatureState; // esi
  int v7; // r12d
  HANDLE ProcessHeap; // rax
  int v11; // edi
  struct wil_details_FeatureTestState *i; // rax
  int v13; // edi
  struct wil_details_FeatureTestState *j; // rax
  __int128 v16; // [rsp+30h] [rbp-D0h]
  __int128 v17; // [rsp+40h] [rbp-C0h]
  unsigned int v18[14]; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID lpMem; // [rsp+88h] [rbp-78h]
  int v20; // [rsp+A0h] [rbp-60h]
  _BYTE v21[208]; // [rsp+B0h] [rbp-50h] BYREF

  v5 = g_wil_details_stagingConfigForUser;
  FeatureState = 0;
  v7 = a3;
  if ( !a4 )
    v5 = g_wil_details_stagingConfigForMachine;
  if ( v5 )
  {
    if ( a5 )
      *a5 = wil_details_StagingConfig_AreAnyFeaturesConfigured(v5);
    FeatureState = wil_details_StagingConfig_QueryFeatureState(v5, (struct wil_FeatureState *)a1, a2, v7);
  }
  else
  {
    if ( a5 )
      *a5 = 0;
    if ( !g_wil_details_preventOnDemandStagingConfigReads
      && !(unsigned int)wil_details_StagingConfig_Load(v18, a4, a3, v21) )
    {
      FeatureState = wil_details_StagingConfig_QueryFeatureState(
                       (struct wil_details_StagingConfig *)v18,
                       (struct wil_FeatureState *)a1,
                       a2,
                       v7);
      if ( a5 )
        *a5 = wil_details_StagingConfig_AreAnyFeaturesConfigured((struct wil_details_StagingConfig *)v18);
      if ( v20 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, lpMem);
      }
    }
  }
  if ( g_wil_details_testStates )
  {
    v11 = 0;
    AcquireSRWLockShared(&g_wil_details_testFeatureStateLock);
    for ( i = g_wil_details_testStates; i; i = (struct wil_details_FeatureTestState *)*((_QWORD *)i + 3) )
    {
      if ( *((_DWORD *)i + 1) == a2 && !*(_DWORD *)i )
      {
        v11 = 1;
        v16 = *(_OWORD *)i;
        v17 = *((_OWORD *)i + 1);
        break;
      }
    }
    ReleaseSRWLockShared(&g_wil_details_testFeatureStateLock);
    if ( v11 )
    {
      if ( !FeatureState )
      {
        FeatureState = 1;
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
      }
      *(_DWORD *)a1 = v11 != 0 ? DWORD2(v16) : 0;
    }
    v13 = 0;
    if ( g_wil_details_testStates )
    {
      AcquireSRWLockShared(&g_wil_details_testFeatureStateLock);
      for ( j = g_wil_details_testStates; j; j = (struct wil_details_FeatureTestState *)*((_QWORD *)j + 3) )
      {
        if ( *((_DWORD *)j + 1) == a2 && *(_DWORD *)j == 1 )
        {
          v13 = 1;
          v16 = *(_OWORD *)j;
          v17 = *((_OWORD *)j + 1);
          break;
        }
      }
      ReleaseSRWLockShared(&g_wil_details_testFeatureStateLock);
    }
    if ( v13 )
    {
      if ( !FeatureState )
      {
        FeatureState = 1;
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
      }
      *(_BYTE *)(a1 + 4) = v13 != 0 ? BYTE12(v16) : 0;
      *(_DWORD *)(a1 + 12) = v13 != 0 ? v17 : 0;
    }
  }
  return FeatureState;
}
