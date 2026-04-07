/*
 * XREFs of ?wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z @ 0x18003F744
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x18003FBBC (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 * Callees:
 *     ?wil_details_StagingConfig_AreAnyFeaturesConfigured@@YAHPEAUwil_details_StagingConfig@@@Z @ 0x18003F82C (-wil_details_StagingConfig_AreAnyFeaturesConfigured@@YAHPEAUwil_details_StagingConfig@@@Z.c)
 *     ?wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureState@@IH@Z @ 0x18003F874 (-wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureS.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x18003F908 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x18006867C (-wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z.c)
 *     ?wil_details_HasTestState@@YAHIW4wil_details_FeatureTestStateKind@@PEAUwil_details_FeatureTestState@@@Z @ 0x1800686AC (-wil_details_HasTestState@@YAHIW4wil_details_FeatureTestStateKind@@PEAUwil_details_FeatureTestSt.c)
 */

__int64 __fastcall wil_QueryFeatureState(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  struct wil_details_StagingConfig *v5; // rbp
  unsigned int FeatureState; // edi
  int v7; // r15d
  HANDLE ProcessHeap; // rax
  int HasTestState; // eax
  char v13; // dl
  int v14; // r8d
  int v15; // [rsp+30h] [rbp-198h] BYREF
  _BYTE v16[16]; // [rsp+38h] [rbp-190h] BYREF
  int v17; // [rsp+48h] [rbp-180h]
  _BYTE v18[56]; // [rsp+60h] [rbp-168h] BYREF
  LPVOID lpMem; // [rsp+98h] [rbp-130h]
  int v20; // [rsp+B0h] [rbp-118h]
  _BYTE v21[208]; // [rsp+C0h] [rbp-108h] BYREF

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
    if ( (unsigned int)wil_HasFeatureTestState(a2, (enum wil_FeatureEnabledState *)&v15) )
    {
      if ( !FeatureState )
      {
        FeatureState = 1;
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_DWORD *)(a1 + 16) = 0;
      }
      *(_DWORD *)a1 = v15;
    }
    HasTestState = wil_details_HasTestState(a2, 1LL, v16);
    v13 = HasTestState != 0 ? v16[12] : 0;
    v14 = HasTestState != 0 ? v17 : 0;
    if ( HasTestState )
    {
      if ( !FeatureState )
      {
        FeatureState = 1;
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_DWORD *)(a1 + 16) = 0;
      }
      *(_BYTE *)(a1 + 4) = v13;
      *(_DWORD *)(a1 + 12) = v14;
    }
  }
  return FeatureState;
}
