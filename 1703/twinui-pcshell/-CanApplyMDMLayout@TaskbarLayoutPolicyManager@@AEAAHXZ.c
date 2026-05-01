/*
 * XREFs of ?CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ @ 0x1800870B8
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180086780 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180087BE8 (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 * Callees:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180004774 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180082BF0 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_MdmSupportForEdu@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18008A190 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_MdmSupportForEdu@@@wil@@CA-A.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskbarLayoutPolicyManager::CanApplyMDMLayout(TaskbarLayoutPolicyManager *this)
{
  wil::details_abi *v1; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details::IFunctorHost *v3; // r8
  __int64 result; // rax
  __int16 v5; // [rsp+3Ch] [rbp-25h]
  void **v6; // [rsp+48h] [rbp-19h] BYREF
  struct wil::details_abi::ThreadLocalData *v7; // [rsp+50h] [rbp-11h]
  int v8; // [rsp+58h] [rbp-9h]
  int v9; // [rsp+5Ch] [rbp-5h]
  _QWORD *v10; // [rsp+60h] [rbp-1h]
  int v11; // [rsp+68h] [rbp+7h]
  _QWORD v12[3]; // [rsp+70h] [rbp+Fh] BYREF
  _QWORD v13[3]; // [rsp+88h] [rbp+27h] BYREF
  __int16 v14; // [rsp+A0h] [rbp+3Fh]
  __int64 v15; // [rsp+A8h] [rbp+47h]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh]
  unsigned int v17; // [rsp+C8h] [rbp+67h] BYREF
  int v18; // [rsp+D0h] [rbp+6Fh] BYREF
  __int16 v19; // [rsp+D4h] [rbp+73h]
  TaskbarLayoutPolicyManager *v20; // [rsp+D8h] [rbp+77h] BYREF

  v15 = -2LL;
  v20 = this;
  v13[0] = retaddr;
  v13[1] = "pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp";
  v13[2] = 0LL;
  v14 = 284;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_MdmSupportForEdu>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_MdmSupportForEdu>::GetCachedFeatureEnabledState();
  LOBYTE(v5) = 3;
  v18 = 0;
  v19 = v5;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_MdmSupportForEdu>::GetFeaturePropertyCache'::`2'::data,
    0x929D9Du,
    (const struct FEATURE_LOGGED_TRAITS *)&v18,
    1,
    3);
  v12[0] = off_1801AE118;
  v12[1] = &v20;
  v12[2] = &v17;
  v6 = &wil::details::FeatureFunctorHost::`vftable';
  LOBYTE(v1) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v1);
  v7 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v9 = *((_DWORD *)ThreadLocalDataCache + 4);
    v8 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v8;
  }
  v10 = v13;
  v11 = 9608605;
  wil::details::RunFunctor((wil::details *)v12, (struct wil::details::IFunctor *)&v6, v3);
  result = v17;
  if ( v7 )
    *((_DWORD *)v7 + 4) = v9;
  return result;
}
