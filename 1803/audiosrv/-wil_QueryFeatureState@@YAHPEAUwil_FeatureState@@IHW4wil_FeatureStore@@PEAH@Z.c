/*
 * XREFs of ?wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z @ 0x18005F120
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x18001573C (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 * Callees:
 *     ?wil_details_StagingConfig_AreAnyFeaturesConfigured@@YAHPEAUwil_details_StagingConfig@@@Z @ 0x18005F208 (-wil_details_StagingConfig_AreAnyFeaturesConfigured@@YAHPEAUwil_details_StagingConfig@@@Z.c)
 *     ?wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureState@@IH@Z @ 0x18005F250 (-wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureS.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x18005F2E4 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x1800B3984 (-wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z.c)
 *     ?wil_HasFeatureVariantTestState@@YAHIPEAEPEAI@Z @ 0x1800B39B4 (-wil_HasFeatureVariantTestState@@YAHIPEAEPEAI@Z.c)
 */

__int64 __fastcall wil_QueryFeatureState(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  struct wil_details_StagingConfig *v5; // r14
  unsigned int FeatureState; // edi
  int v7; // r12d
  HANDLE ProcessHeap; // rax
  unsigned __int8 v12[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v13[3]; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v14[56]; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID lpMem; // [rsp+78h] [rbp-88h]
  int v16; // [rsp+90h] [rbp-70h]
  _BYTE v17[208]; // [rsp+A0h] [rbp-60h] BYREF

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
      && !(unsigned int)wil_details_StagingConfig_Load(v14, a4, a3, v17) )
    {
      FeatureState = wil_details_StagingConfig_QueryFeatureState(
                       (struct wil_details_StagingConfig *)v14,
                       (struct wil_FeatureState *)a1,
                       a2,
                       v7);
      if ( a5 )
        *a5 = wil_details_StagingConfig_AreAnyFeaturesConfigured((struct wil_details_StagingConfig *)v14);
      if ( v16 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, lpMem);
      }
    }
  }
  if ( g_wil_details_testStates )
  {
    if ( (unsigned int)wil_HasFeatureTestState(a2, (enum wil_FeatureEnabledState *)v13) )
    {
      if ( !FeatureState )
      {
        FeatureState = 1;
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
      }
      *(_DWORD *)a1 = v13[0];
    }
    if ( (unsigned int)wil_HasFeatureVariantTestState(a2, v12, v13) )
    {
      if ( !FeatureState )
      {
        FeatureState = 1;
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
      }
      *(_BYTE *)(a1 + 4) = v12[0];
      *(_DWORD *)(a1 + 12) = v13[0];
    }
  }
  return FeatureState;
}
