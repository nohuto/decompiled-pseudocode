/*
 * XREFs of ?PublishServices@DesktopBlueLightReductionManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180083400
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180004774 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180082BF0 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_BlueLightReduction@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800846F0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_BlueLightReduction@@@wil@@CA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DesktopBlueLightReductionManager::PublishServices(
        DesktopBlueLightReductionManager *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  wil::details_abi *v3; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details::IFunctorHost *v5; // r8
  const char *v6; // r9
  __int64 result; // rax
  __int16 v8; // [rsp+34h] [rbp-94h]
  void **v9; // [rsp+40h] [rbp-88h] BYREF
  struct wil::details_abi::ThreadLocalData *v10; // [rsp+48h] [rbp-80h]
  int v11; // [rsp+50h] [rbp-78h]
  int v12; // [rsp+54h] [rbp-74h]
  _QWORD *v13; // [rsp+58h] [rbp-70h]
  int v14; // [rsp+60h] [rbp-68h]
  _QWORD v15[2]; // [rsp+68h] [rbp-60h] BYREF
  _QWORD v16[3]; // [rsp+78h] [rbp-50h] BYREF
  _QWORD v17[3]; // [rsp+90h] [rbp-38h] BYREF
  __int16 v18; // [rsp+A8h] [rbp-20h]
  __int64 v19; // [rsp+B0h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  int v21; // [rsp+D0h] [rbp+8h] BYREF
  __int16 v22; // [rsp+D4h] [rbp+Ch]
  struct IServiceProvider *v23; // [rsp+D8h] [rbp+10h] BYREF
  struct IProfferService *v24; // [rsp+E0h] [rbp+18h] BYREF

  v24 = a3;
  v23 = a2;
  v19 = -2LL;
  try
  {
    v16[0] = (char *)this - 32;
    v16[1] = &v23;
    v16[2] = &v24;
    v17[0] = retaddr;
    v17[1] = "pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp";
    v17[2] = 0LL;
    v18 = 92;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_BlueLightReduction>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_BlueLightReduction>::GetCachedFeatureEnabledState();
    LOBYTE(v8) = 3;
    v21 = 0;
    v22 = v8;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_BlueLightReduction>::GetFeaturePropertyCache'::`2'::data,
      0x6DE17Bu,
      (const struct FEATURE_LOGGED_TRAITS *)&v21,
      1,
      3);
    v15[0] = off_1801ADF38;
    v15[1] = v16;
    v9 = &wil::details::FeatureFunctorHost::`vftable';
    LOBYTE(v3) = 1;
    ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v3);
    v10 = ThreadLocalDataCache;
    if ( ThreadLocalDataCache )
    {
      v12 = *((_DWORD *)ThreadLocalDataCache + 4);
      v11 = **((_DWORD **)ThreadLocalDataCache + 1);
      *((_DWORD *)ThreadLocalDataCache + 4) = v11;
    }
    v13 = v17;
    v14 = 7201147;
    wil::details::RunFunctor((wil::details *)v15, (struct wil::details::IFunctor *)&v9, v5);
    if ( v10 )
      *((_DWORD *)v10 + 4) = v12;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x62,
                           (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                           v6);
  }
  return result;
}
