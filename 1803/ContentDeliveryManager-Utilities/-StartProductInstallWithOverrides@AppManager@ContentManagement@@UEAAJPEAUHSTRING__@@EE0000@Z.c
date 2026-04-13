/*
 * XREFs of ?StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z @ 0x18000E560
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180003CBC (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x1800079C4 (-wil_details_SetEnabledAndHasNotificationStateCallback@@YAHPEATwil_details_FeaturePropertyCache@.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180007E94 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x180008888 (-wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18000BBD4 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18000C128 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     _lambda_ac2cff6578927b0407b87560b06f9ace_::operator() @ 0x18000E880 (_lambda_ac2cff6578927b0407b87560b06f9ace_--operator().c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18001851C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TargetedContentUseProductIns.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
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
  int v9; // edi
  unsigned int v10; // eax
  unsigned int v11; // ecx
  int v12; // ebx
  int v13; // edx
  unsigned int v14; // ecx
  bool v15; // al
  unsigned int v16; // r14d
  unsigned int v17; // esi
  void *v18; // rbx
  signed __int32 v19; // edi
  int v20; // eax
  wil::details_abi *v21; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v23; // rbx
  int v24; // eax
  int v25; // edi
  signed __int32 v27[2]; // [rsp+3Ch] [rbp-A5h] BYREF
  __int16 v28; // [rsp+44h] [rbp-9Dh]
  int v29; // [rsp+48h] [rbp-99h]
  int v30; // [rsp+4Ch] [rbp-95h]
  unsigned int v31; // [rsp+50h] [rbp-91h] BYREF
  int v32; // [rsp+54h] [rbp-8Dh] BYREF
  __int16 v33; // [rsp+58h] [rbp-89h]
  int v34; // [rsp+5Ch] [rbp-85h] BYREF
  __int16 v35; // [rsp+60h] [rbp-81h]
  int v36[2]; // [rsp+68h] [rbp-79h] BYREF
  int v37; // [rsp+70h] [rbp-71h]
  int v38; // [rsp+74h] [rbp-6Dh]
  unsigned int v39[2]; // [rsp+78h] [rbp-69h] BYREF
  const char *v40; // [rsp+80h] [rbp-61h]
  __int64 v41; // [rsp+88h] [rbp-59h]
  __int16 v42; // [rsp+90h] [rbp-51h]
  _QWORD v43[16]; // [rsp+98h] [rbp-49h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+3Fh]
  HSTRING v45; // [rsp+130h] [rbp+4Fh] BYREF
  char v46; // [rsp+138h] [rbp+57h] BYREF
  char v47; // [rsp+140h] [rbp+5Fh] BYREF

  v47 = a4;
  v46 = a3;
  v45 = a2;
  v43[8] = -2LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
    goto LABEL_25;
  v9 = `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data & 3;
  if ( g_wil_details_internalGetFeatureEnabledState )
  {
    v10 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_internalGetFeatureEnabledState)(8553651LL, 0LL);
LABEL_4:
    v11 = v10;
    goto LABEL_10;
  }
  if ( g_wil_details_apiGetFeatureEnabledState )
  {
    if ( !(unsigned int)wil_HasFeatureTestState(8553651, (enum wil_FeatureEnabledState *)&v31) )
    {
      v10 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_apiGetFeatureEnabledState)(8553651LL, 0LL);
      goto LABEL_4;
    }
    v11 = v31;
  }
  else
  {
    v11 = 0;
  }
LABEL_10:
  v12 = ((v11 & 0x80u) != 0) + 1;
  v13 = (v11 >> 6) & 1;
  v14 = v11 & 0xFFFFFF3F;
  if ( v14 )
    v15 = v14 == 2;
  else
    v15 = 1;
  v16 = v15 + 1;
  v17 = ((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
  if ( v9 )
    v16 = v9;
  else
    v17 = v13;
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
    0);
  if ( !g_wil_details_testStates || !(unsigned int)wil_HasFeatureTestState(8553651, 0LL) )
  {
    if ( v9 )
    {
      do
        v20 = `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data;
      while ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) != (unsigned __int8)v12
           && v20 != _InterlockedCompareExchange(
                       &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
                       ((unsigned __int8)`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data ^ (unsigned __int8)(16 * v12)) & 0x30 ^ `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
                       `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data) );
    }
    else
    {
      v18 = (void *)(v16 | (v17 << 16) | (unsigned __int64)(unsigned int)(v12 << 8));
      do
      {
        v27[0] = `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data;
        v19 = `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data;
      }
      while ( (unsigned int)wil_details_SetEnabledAndHasNotificationStateCallback(
                              (union wil_details_FeaturePropertyCache *)v27,
                              v18)
           && v19 != _InterlockedCompareExchange(
                       &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
                       v27[0],
                       v19) );
    }
  }
LABEL_25:
  v27[1] = 0;
  LOBYTE(v28) = 3;
  v32 = 0;
  v33 = v28;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
    0x8284B3u,
    (const struct FEATURE_LOGGED_TRAITS *)&v32,
    1,
    3u);
  v43[0] = (char *)this - 48;
  v43[1] = &v45;
  v43[2] = &a6;
  v43[3] = &a7;
  v43[4] = &a5;
  v43[5] = &v46;
  v43[6] = &v47;
  v43[7] = &a8;
  *(_QWORD *)v39 = retaddr;
  v40 = "shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp";
  v41 = 0LL;
  v42 = 356;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetCachedFeatureEnabledState();
  v29 = 0;
  LOBYTE(v30) = 3;
  v34 = 0;
  v35 = v30;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
    0x8284B3u,
    (const struct FEATURE_LOGGED_TRAITS *)&v34,
    1,
    1u);
  LOBYTE(v21) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v21);
  v23 = ThreadLocalDataCache;
  *(_QWORD *)v36 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v38 = *((_DWORD *)ThreadLocalDataCache + 4);
    v37 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v37;
    v23 = *(struct wil::details_abi::ThreadLocalData **)v36;
  }
  v24 = lambda_ac2cff6578927b0407b87560b06f9ace_::operator()(v43);
  v25 = v24;
  if ( v24 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v24,
      (__int64)v36,
      (struct wil::ThreadErrorContext *)0x8284B3,
      (const struct wil::FailureInfo *)v39);
  if ( v23 )
    *((_DWORD *)v23 + 4) = v38;
  if ( v25 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x164,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v25);
  return (unsigned int)v25;
}
