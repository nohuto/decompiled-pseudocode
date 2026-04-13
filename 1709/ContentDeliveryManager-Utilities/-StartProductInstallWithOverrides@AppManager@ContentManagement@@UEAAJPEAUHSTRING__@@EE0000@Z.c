/*
 * XREFs of ?StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z @ 0x18000D6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180003948 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCache@@W4wil_details_CachedFeatureEnabledState@@W4wil_details_CachedHasNotificationState@@@Z @ 0x180007600 (-wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCach.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800078C4 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x180008208 (-wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18000B27C (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18000B808 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     _lambda_b5a99c3c5b42a235eb360c5531067d61_::operator() @ 0x18000D93C (_lambda_b5a99c3c5b42a235eb360c5531067d61_--operator().c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180016000 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TargetedContentUseProductIns.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::AppManager::StartProductInstallWithOverrides(
        ContentManagement::AppManager *this,
        HSTRING a2,
        char a3,
        char a4,
        HSTRING a5,
        HSTRING a6,
        HSTRING a7,
        HSTRING a8)
{
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  int v11; // edi
  unsigned int v12; // ecx
  bool v13; // al
  unsigned int v14; // esi
  int v15; // eax
  wil::details_abi *v16; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v18; // rbx
  int v19; // eax
  int v20; // edi
  __int16 v22; // [rsp+30h] [rbp-91h]
  __int16 v23; // [rsp+38h] [rbp-89h]
  int v24; // [rsp+3Ch] [rbp-85h] BYREF
  int v25; // [rsp+40h] [rbp-81h] BYREF
  __int16 v26; // [rsp+44h] [rbp-7Dh]
  int v27; // [rsp+48h] [rbp-79h] BYREF
  __int16 v28; // [rsp+4Ch] [rbp-75h]
  int v29[2]; // [rsp+50h] [rbp-71h] BYREF
  int v30; // [rsp+58h] [rbp-69h]
  int v31; // [rsp+5Ch] [rbp-65h]
  unsigned int v32[2]; // [rsp+60h] [rbp-61h] BYREF
  const char *v33; // [rsp+68h] [rbp-59h]
  __int64 v34; // [rsp+70h] [rbp-51h]
  __int16 v35; // [rsp+78h] [rbp-49h]
  _QWORD v36[15]; // [rsp+80h] [rbp-41h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+3Fh]
  HSTRING v38; // [rsp+110h] [rbp+4Fh] BYREF
  char v39; // [rsp+118h] [rbp+57h] BYREF
  char v40; // [rsp+120h] [rbp+5Fh] BYREF

  v40 = a4;
  v39 = a3;
  v38 = a2;
  v36[7] = -2LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
    goto LABEL_21;
  v8 = `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data & 3;
  if ( g_wil_details_internalGetFeatureEnabledState )
  {
    v9 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_internalGetFeatureEnabledState)(8553651LL, 0LL);
  }
  else
  {
    if ( !g_wil_details_apiGetFeatureEnabledState )
    {
      v10 = 0;
      goto LABEL_10;
    }
    if ( (unsigned int)wil_HasFeatureTestState(8553651, (enum wil_FeatureEnabledState *)&v24) )
    {
      v10 = v24;
      goto LABEL_10;
    }
    v9 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_apiGetFeatureEnabledState)(8553651LL, 0LL);
  }
  v10 = v9;
LABEL_10:
  v11 = ((v10 & 0x80u) != 0) + 1;
  v12 = v10 & 0xFFFFFF7F;
  if ( v12 )
    v13 = v12 == 2;
  else
    v13 = 1;
  v14 = v13 + 1;
  if ( v8 )
    v14 = v8;
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
    0);
  if ( !g_wil_details_testStates || !(unsigned int)wil_HasFeatureTestState(8553651, 0LL) )
  {
    if ( v8 )
    {
      do
        v15 = `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data;
      while ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) != (unsigned __int8)v11
           && v15 != _InterlockedCompareExchange(
                       &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
                       ((unsigned __int8)`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data ^ (unsigned __int8)(16 * v11)) & 0x30 ^ `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
                       `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data) );
    }
    else
    {
      wil_details_SetEnabledAndHasNotificationStateProperties(
        &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
        v14,
        v11);
    }
  }
LABEL_21:
  LOBYTE(v22) = 3;
  v25 = 0;
  v26 = v22;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
    0x8284B3u,
    (const struct FEATURE_LOGGED_TRAITS *)&v25,
    3);
  v36[0] = &v38;
  v36[1] = &a6;
  v36[2] = &a7;
  v36[3] = &a5;
  v36[4] = &v39;
  v36[5] = &v40;
  v36[6] = &a8;
  *(_QWORD *)v32 = retaddr;
  v33 = "shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp";
  v34 = 0LL;
  v35 = 346;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetCachedFeatureEnabledState();
  LOBYTE(v23) = 3;
  v27 = 0;
  v28 = v23;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
    0x8284B3u,
    (const struct FEATURE_LOGGED_TRAITS *)&v27,
    1);
  LOBYTE(v16) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v16);
  v18 = ThreadLocalDataCache;
  *(_QWORD *)v29 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v31 = *((_DWORD *)ThreadLocalDataCache + 4);
    v30 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v30;
    v18 = *(struct wil::details_abi::ThreadLocalData **)v29;
  }
  v19 = lambda_b5a99c3c5b42a235eb360c5531067d61_::operator()(v36);
  v20 = v19;
  if ( v19 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v19,
      (__int64)v29,
      (struct wil::ThreadErrorContext *)0x8284B3,
      (const struct wil::FailureInfo *)v32);
  if ( v18 )
    *((_DWORD *)v18 + 4) = v31;
  if ( v20 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x15A,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v20);
  return (unsigned int)v20;
}
