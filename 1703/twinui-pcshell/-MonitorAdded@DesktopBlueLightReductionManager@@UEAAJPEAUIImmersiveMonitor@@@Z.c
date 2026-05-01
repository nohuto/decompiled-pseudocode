/*
 * XREFs of ?MonitorAdded@DesktopBlueLightReductionManager@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x180083E70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180004774 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180082BF0 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_BlueLightReduction@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800846F0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_BlueLightReduction@@@wil@@CA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DesktopBlueLightReductionManager::MonitorAdded(
        DesktopBlueLightReductionManager *this,
        struct IImmersiveMonitor *a2)
{
  wil::details_abi *v2; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details::IFunctorHost *v4; // r8
  const char *v5; // r9
  __int64 result; // rax
  __int16 v7; // [rsp+3Ch] [rbp-6Ch]
  _QWORD v8[2]; // [rsp+48h] [rbp-60h] BYREF
  _QWORD v9[3]; // [rsp+58h] [rbp-50h] BYREF
  __int16 v10; // [rsp+70h] [rbp-38h]
  void **v11; // [rsp+78h] [rbp-30h] BYREF
  struct wil::details_abi::ThreadLocalData *v12; // [rsp+80h] [rbp-28h]
  int v13; // [rsp+88h] [rbp-20h]
  int v14; // [rsp+8Ch] [rbp-1Ch]
  _QWORD *v15; // [rsp+90h] [rbp-18h]
  int v16; // [rsp+98h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  int v18; // [rsp+B0h] [rbp+8h] BYREF
  __int16 v19; // [rsp+B4h] [rbp+Ch]
  char *v20; // [rsp+C0h] [rbp+18h] BYREF

  try
  {
    v20 = (char *)this - 88;
    v9[0] = retaddr;
    v9[1] = "pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp";
    v9[2] = 0LL;
    v10 = 221;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_BlueLightReduction>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_BlueLightReduction>::GetCachedFeatureEnabledState();
    LOBYTE(v7) = 3;
    v18 = 0;
    v19 = v7;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_BlueLightReduction>::GetFeaturePropertyCache'::`2'::data,
      0x6DE17Bu,
      (const struct FEATURE_LOGGED_TRAITS *)&v18,
      1,
      3);
    v8[0] = off_1801ADE98;
    v8[1] = &v20;
    v11 = &wil::details::FeatureFunctorHost::`vftable';
    LOBYTE(v2) = 1;
    ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v2);
    v12 = ThreadLocalDataCache;
    if ( ThreadLocalDataCache )
    {
      v14 = *((_DWORD *)ThreadLocalDataCache + 4);
      v13 = **((_DWORD **)ThreadLocalDataCache + 1);
      *((_DWORD *)ThreadLocalDataCache + 4) = v13;
    }
    v15 = v9;
    v16 = 7201147;
    wil::details::RunFunctor((wil::details *)v8, (struct wil::details::IFunctor *)&v11, v4);
    if ( v12 )
      *((_DWORD *)v12 + 4) = v14;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xEA,
                           (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                           v5);
  }
  return result;
}
