/*
 * XREFs of ?CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ @ 0x180089590
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180088B30 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18008A0C0 (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 * Callees:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180004AC8 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_MdmSupportForEdu@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18008C510 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_MdmSupportForEdu@@@wil@@CA-A.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x18008CA2C (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskbarLayoutPolicyManager::CanApplyMDMLayout(TaskbarLayoutPolicyManager *this)
{
  wil::details_abi *v1; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details::IFunctorHost *v3; // r8
  __int64 result; // rax
  _QWORD v5[3]; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v6[3]; // [rsp+50h] [rbp-9h] BYREF
  __int16 v7; // [rsp+68h] [rbp+Fh]
  void **v8; // [rsp+70h] [rbp+17h] BYREF
  struct wil::details_abi::ThreadLocalData *v9; // [rsp+78h] [rbp+1Fh]
  int v10; // [rsp+80h] [rbp+27h]
  int v11; // [rsp+84h] [rbp+2Bh]
  _QWORD *v12; // [rsp+88h] [rbp+2Fh]
  int v13; // [rsp+90h] [rbp+37h]
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+5Fh]
  unsigned int v15; // [rsp+C0h] [rbp+67h] BYREF
  int v16; // [rsp+C8h] [rbp+6Fh]
  __int16 v17; // [rsp+CCh] [rbp+73h]
  int v18; // [rsp+D0h] [rbp+77h] BYREF
  __int16 v19; // [rsp+D4h] [rbp+7Bh]
  TaskbarLayoutPolicyManager *v20; // [rsp+D8h] [rbp+7Fh] BYREF

  v20 = this;
  v6[0] = retaddr;
  v6[1] = "pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp";
  v6[2] = 0LL;
  v7 = 284;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_MdmSupportForEdu>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_MdmSupportForEdu>::GetCachedFeatureEnabledState();
  v16 = 0;
  LOBYTE(v17) = 3;
  v18 = 0;
  v19 = v17;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_MdmSupportForEdu>::GetFeaturePropertyCache'::`2'::data,
    0x929D9Du,
    (const struct FEATURE_LOGGED_TRAITS *)&v18,
    1,
    3);
  v5[0] = off_1802011B0;
  v5[1] = &v20;
  v5[2] = &v15;
  v8 = &wil::details::FeatureFunctorHost::`vftable';
  LOBYTE(v1) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v1);
  v9 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v11 = *((_DWORD *)ThreadLocalDataCache + 4);
    v10 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v10;
  }
  v12 = v6;
  v13 = 9608605;
  wil::details::RunFunctor((wil::details *)v5, (struct wil::details::IFunctor *)&v8, v3);
  result = v15;
  if ( v9 )
    *((_DWORD *)v9 + 4) = v11;
  return result;
}
