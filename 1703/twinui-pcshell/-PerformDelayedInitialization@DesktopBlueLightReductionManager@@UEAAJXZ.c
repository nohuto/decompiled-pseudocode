/*
 * XREFs of ?PerformDelayedInitialization@DesktopBlueLightReductionManager@@UEAAJXZ @ 0x1800838E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180004774 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180082BF0 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_BlueLightReduction@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800846F0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_BlueLightReduction@@@wil@@CA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DesktopBlueLightReductionManager::PerformDelayedInitialization(
        DesktopBlueLightReductionManager *this)
{
  wil::details_abi *v1; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details::IFunctorHost *v3; // r8
  const char *v4; // r9
  __int64 result; // rax
  __int16 v6; // [rsp+3Ch] [rbp-6Ch]
  _QWORD v7[2]; // [rsp+48h] [rbp-60h] BYREF
  _QWORD v8[3]; // [rsp+58h] [rbp-50h] BYREF
  __int16 v9; // [rsp+70h] [rbp-38h]
  void **v10; // [rsp+78h] [rbp-30h] BYREF
  struct wil::details_abi::ThreadLocalData *v11; // [rsp+80h] [rbp-28h]
  int v12; // [rsp+88h] [rbp-20h]
  int v13; // [rsp+8Ch] [rbp-1Ch]
  _QWORD *v14; // [rsp+90h] [rbp-18h]
  int v15; // [rsp+98h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  int v17; // [rsp+B0h] [rbp+8h] BYREF
  __int16 v18; // [rsp+B4h] [rbp+Ch]
  char *v19; // [rsp+B8h] [rbp+10h] BYREF

  try
  {
    v19 = (char *)this - 32;
    v8[0] = retaddr;
    v8[1] = "pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp";
    v8[2] = 0LL;
    v9 = 124;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_BlueLightReduction>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_BlueLightReduction>::GetCachedFeatureEnabledState();
    LOBYTE(v6) = 3;
    v17 = 0;
    v18 = v6;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_BlueLightReduction>::GetFeaturePropertyCache'::`2'::data,
      0x6DE17Bu,
      (const struct FEATURE_LOGGED_TRAITS *)&v17,
      1,
      3);
    v7[0] = &off_1801ADDF8;
    v7[1] = &v19;
    v10 = &wil::details::FeatureFunctorHost::`vftable';
    LOBYTE(v1) = 1;
    ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v1);
    v11 = ThreadLocalDataCache;
    if ( ThreadLocalDataCache )
    {
      v13 = *((_DWORD *)ThreadLocalDataCache + 4);
      v12 = **((_DWORD **)ThreadLocalDataCache + 1);
      *((_DWORD *)ThreadLocalDataCache + 4) = v12;
    }
    v14 = v8;
    v15 = 7201147;
    wil::details::RunFunctor((wil::details *)v7, (struct wil::details::IFunctor *)&v10, v3);
    if ( v11 )
      *((_DWORD *)v11 + 4) = v13;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x82,
                           (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                           v4);
  }
  return result;
}
