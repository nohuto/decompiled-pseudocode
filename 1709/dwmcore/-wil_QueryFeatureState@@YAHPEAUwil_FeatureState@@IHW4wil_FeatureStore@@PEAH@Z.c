/*
 * XREFs of ?wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z @ 0x180134E5C
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x18007B0CC (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x180134E2C (-wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z.c)
 *     ?wil_details_HasTestState@@YAHIW4wil_details_FeatureTestStateKind@@PEAUwil_details_FeatureTestState@@@Z @ 0x180134FCC (-wil_details_HasTestState@@YAHIW4wil_details_FeatureTestStateKind@@PEAUwil_details_FeatureTestSt.c)
 *     ?wil_details_StagingConfig_AreAnyFeaturesConfigured@@YAHPEAUwil_details_StagingConfig@@@Z @ 0x1801351EC (-wil_details_StagingConfig_AreAnyFeaturesConfigured@@YAHPEAUwil_details_StagingConfig@@@Z.c)
 *     ?wil_details_StagingConfig_Free@@YAXPEAUwil_details_StagingConfig@@@Z @ 0x180135408 (-wil_details_StagingConfig_Free@@YAXPEAUwil_details_StagingConfig@@@Z.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x18013543C (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     ?wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureState@@IH@Z @ 0x180135724 (-wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureS.c)
 */

__int64 __fastcall wil_QueryFeatureState(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  struct wil_details_StagingConfig *v5; // rbp
  unsigned int FeatureState; // edi
  int v7; // r15d
  int HasTestState; // eax
  char v11; // dl
  int v12; // r8d
  int v14; // [rsp+30h] [rbp-198h] BYREF
  _BYTE v15[16]; // [rsp+38h] [rbp-190h] BYREF
  int v16; // [rsp+48h] [rbp-180h]
  _BYTE v17[96]; // [rsp+60h] [rbp-168h] BYREF
  _BYTE v18[208]; // [rsp+C0h] [rbp-108h] BYREF

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
      && !(unsigned int)wil_details_StagingConfig_Load(v17, a4, a3, v18) )
    {
      FeatureState = wil_details_StagingConfig_QueryFeatureState(
                       (struct wil_details_StagingConfig *)v17,
                       (struct wil_FeatureState *)a1,
                       a2,
                       v7);
      if ( a5 )
        *a5 = wil_details_StagingConfig_AreAnyFeaturesConfigured((struct wil_details_StagingConfig *)v17);
      wil_details_StagingConfig_Free((struct wil_details_StagingConfig *)v17);
    }
  }
  if ( g_wil_details_testStates )
  {
    if ( (unsigned int)wil_HasFeatureTestState(a2, (enum wil_FeatureEnabledState *)&v14) )
    {
      if ( !FeatureState )
      {
        FeatureState = 1;
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_DWORD *)(a1 + 16) = 0;
      }
      *(_DWORD *)a1 = v14;
    }
    HasTestState = wil_details_HasTestState(a2, 1LL, v15);
    v11 = HasTestState != 0 ? v15[12] : 0;
    v12 = HasTestState != 0 ? v16 : 0;
    if ( HasTestState )
    {
      if ( !FeatureState )
      {
        FeatureState = 1;
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_DWORD *)(a1 + 16) = 0;
      }
      *(_BYTE *)(a1 + 4) = v11;
      *(_DWORD *)(a1 + 12) = v12;
    }
  }
  return FeatureState;
}
