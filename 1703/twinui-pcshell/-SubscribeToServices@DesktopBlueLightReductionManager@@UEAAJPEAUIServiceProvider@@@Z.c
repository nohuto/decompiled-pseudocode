/*
 * XREFs of ?SubscribeToServices@DesktopBlueLightReductionManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180083550
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180004774 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180082BF0 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_BlueLightReduction@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800846F0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_BlueLightReduction@@@wil@@CA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DesktopBlueLightReductionManager::SubscribeToServices(
        DesktopBlueLightReductionManager *this,
        struct IServiceProvider *a2)
{
  wil::details_abi *v2; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details::IFunctorHost *v4; // r8
  const char *v5; // r9
  __int64 result; // rax
  __int16 v7; // [rsp+34h] [rbp-84h]
  void **v8; // [rsp+40h] [rbp-78h] BYREF
  struct wil::details_abi::ThreadLocalData *v9; // [rsp+48h] [rbp-70h]
  int v10; // [rsp+50h] [rbp-68h]
  int v11; // [rsp+54h] [rbp-64h]
  _QWORD *v12; // [rsp+58h] [rbp-60h]
  int v13; // [rsp+60h] [rbp-58h]
  _QWORD v14[2]; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v15[2]; // [rsp+78h] [rbp-40h] BYREF
  _QWORD v16[3]; // [rsp+88h] [rbp-30h] BYREF
  __int16 v17; // [rsp+A0h] [rbp-18h]
  __int64 v18; // [rsp+A8h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  int v20; // [rsp+C0h] [rbp+8h] BYREF
  __int16 v21; // [rsp+C4h] [rbp+Ch]
  struct IServiceProvider *v22; // [rsp+C8h] [rbp+10h] BYREF

  v22 = a2;
  v18 = -2LL;
  try
  {
    v14[0] = (char *)this - 32;
    v14[1] = &v22;
    v16[0] = retaddr;
    v16[1] = "pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp";
    v16[2] = 0LL;
    v17 = 102;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_BlueLightReduction>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_BlueLightReduction>::GetCachedFeatureEnabledState();
    LOBYTE(v7) = 3;
    v20 = 0;
    v21 = v7;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_BlueLightReduction>::GetFeaturePropertyCache'::`2'::data,
      0x6DE17Bu,
      (const struct FEATURE_LOGGED_TRAITS *)&v20,
      1,
      3);
    v15[0] = off_1801ADE38;
    v15[1] = v14;
    v8 = &wil::details::FeatureFunctorHost::`vftable';
    LOBYTE(v2) = 1;
    ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v2);
    v9 = ThreadLocalDataCache;
    if ( ThreadLocalDataCache )
    {
      v11 = *((_DWORD *)ThreadLocalDataCache + 4);
      v10 = **((_DWORD **)ThreadLocalDataCache + 1);
      *((_DWORD *)ThreadLocalDataCache + 4) = v10;
    }
    v12 = v16;
    v13 = 7201147;
    wil::details::RunFunctor((wil::details *)v15, (struct wil::details::IFunctor *)&v8, v4);
    if ( v9 )
      *((_DWORD *)v9 + 4) = v11;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x78,
                           (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                           v5);
  }
  return result;
}
