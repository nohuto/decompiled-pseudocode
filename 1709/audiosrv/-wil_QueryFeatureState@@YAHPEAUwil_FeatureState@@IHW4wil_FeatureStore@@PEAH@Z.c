/*
 * XREFs of ?wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z @ 0x18008D1C4
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x1800074BC (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x18008D14C (-wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z.c)
 *     ?wil_HasFeatureVariantTestState@@YAHIPEAEPEAI@Z @ 0x18008D17C (-wil_HasFeatureVariantTestState@@YAHIPEAEPEAI@Z.c)
 *     ?wil_details_StagingConfig_AreAnyFeaturesConfigured@@YAHPEAUwil_details_StagingConfig@@@Z @ 0x18008D750 (-wil_details_StagingConfig_AreAnyFeaturesConfigured@@YAHPEAUwil_details_StagingConfig@@@Z.c)
 *     ?wil_details_StagingConfig_Free@@YAXPEAUwil_details_StagingConfig@@@Z @ 0x18008D96C (-wil_details_StagingConfig_Free@@YAXPEAUwil_details_StagingConfig@@@Z.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x18008D9A0 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     ?wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureState@@IH@Z @ 0x18008DC88 (-wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureS.c)
 */

__int64 __fastcall wil_QueryFeatureState(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  struct wil_details_StagingConfig *v5; // rbp
  unsigned int FeatureState; // edi
  int v7; // r15d
  unsigned __int8 v11[4]; // [rsp+30h] [rbp-178h] BYREF
  unsigned int v12[3]; // [rsp+34h] [rbp-174h] BYREF
  _BYTE v13[96]; // [rsp+40h] [rbp-168h] BYREF
  _BYTE v14[208]; // [rsp+A0h] [rbp-108h] BYREF

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
      && !(unsigned int)wil_details_StagingConfig_Load(v13, a4, a3, v14) )
    {
      FeatureState = wil_details_StagingConfig_QueryFeatureState(
                       (struct wil_details_StagingConfig *)v13,
                       (struct wil_FeatureState *)a1,
                       a2,
                       v7);
      if ( a5 )
        *a5 = wil_details_StagingConfig_AreAnyFeaturesConfigured((struct wil_details_StagingConfig *)v13);
      wil_details_StagingConfig_Free((struct wil_details_StagingConfig *)v13);
    }
  }
  if ( g_wil_details_testStates )
  {
    if ( (unsigned int)wil_HasFeatureTestState(a2, (enum wil_FeatureEnabledState *)v12) )
    {
      if ( !FeatureState )
      {
        FeatureState = 1;
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_DWORD *)(a1 + 16) = 0;
      }
      *(_DWORD *)a1 = v12[0];
    }
    if ( (unsigned int)wil_HasFeatureVariantTestState(a2, v11, v12) )
    {
      if ( !FeatureState )
      {
        FeatureState = 1;
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_DWORD *)(a1 + 16) = 0;
      }
      *(_BYTE *)(a1 + 4) = v11[0];
      *(_DWORD *)(a1 + 12) = v12[0];
    }
  }
  return FeatureState;
}
