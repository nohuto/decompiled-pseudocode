/*
 * XREFs of ?StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z @ 0x18000EAC0
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
 *     ?GenerateStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0PEAPEAU3@@Z @ 0x18000CF80 (-GenerateStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0PEAPEAU3@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18001851C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TargetedContentUseProductIns.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::AppManager::StartProductInstall(
        ContentManagement::AppManager *this,
        HSTRING a2,
        HSTRING a3,
        char a4,
        char a5,
        HSTRING a6,
        HSTRING a7)
{
  int v8; // edi
  unsigned int v9; // eax
  unsigned int v10; // ecx
  int v11; // ebx
  int v12; // edx
  unsigned int v13; // ecx
  bool v14; // al
  unsigned int v15; // r14d
  unsigned int v16; // esi
  void *v17; // rbx
  signed __int32 v18; // edi
  int v19; // eax
  wil::details_abi *v20; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v22; // rdi
  HSTRING *v23; // r9
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // ebx
  signed __int32 v29; // [rsp+5Ch] [rbp-5Dh] BYREF
  HSTRING string; // [rsp+60h] [rbp-59h] BYREF
  int v31; // [rsp+68h] [rbp-51h]
  __int16 v32; // [rsp+6Ch] [rbp-4Dh]
  int v33; // [rsp+70h] [rbp-49h]
  __int16 v34; // [rsp+74h] [rbp-45h]
  unsigned int v35; // [rsp+78h] [rbp-41h] BYREF
  int v36; // [rsp+7Ch] [rbp-3Dh] BYREF
  __int16 v37; // [rsp+80h] [rbp-39h]
  int v38; // [rsp+84h] [rbp-35h] BYREF
  __int16 v39; // [rsp+88h] [rbp-31h]
  int v40[2]; // [rsp+90h] [rbp-29h] BYREF
  int v41; // [rsp+98h] [rbp-21h]
  int v42; // [rsp+9Ch] [rbp-1Dh]
  unsigned int v43[2]; // [rsp+A0h] [rbp-19h] BYREF
  const char *v44; // [rsp+A8h] [rbp-11h]
  __int64 v45; // [rsp+B0h] [rbp-9h]
  __int16 v46; // [rsp+B8h] [rbp-1h]
  __int64 v47; // [rsp+C0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+47h]

  v47 = -2LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
    goto LABEL_25;
  v8 = `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data & 3;
  if ( g_wil_details_internalGetFeatureEnabledState )
  {
    v9 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_internalGetFeatureEnabledState)(8553651LL, 0LL);
LABEL_4:
    v10 = v9;
    goto LABEL_10;
  }
  if ( g_wil_details_apiGetFeatureEnabledState )
  {
    if ( !(unsigned int)wil_HasFeatureTestState(8553651, (enum wil_FeatureEnabledState *)&v35) )
    {
      v9 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_apiGetFeatureEnabledState)(8553651LL, 0LL);
      goto LABEL_4;
    }
    v10 = v35;
  }
  else
  {
    v10 = 0;
  }
LABEL_10:
  v11 = ((v10 & 0x80u) != 0) + 1;
  v12 = (v10 >> 6) & 1;
  v13 = v10 & 0xFFFFFF3F;
  if ( v13 )
    v14 = v13 == 2;
  else
    v14 = 1;
  v15 = v14 + 1;
  v16 = ((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
  if ( v8 )
    v15 = v8;
  else
    v16 = v12;
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
    0);
  if ( !g_wil_details_testStates || !(unsigned int)wil_HasFeatureTestState(8553651, 0LL) )
  {
    if ( v8 )
    {
      do
        v19 = `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data;
      while ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) != (unsigned __int8)v11
           && v19 != _InterlockedCompareExchange(
                       &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
                       ((unsigned __int8)`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data ^ (unsigned __int8)(16 * v11)) & 0x30 ^ `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
                       `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data) );
    }
    else
    {
      v17 = (void *)(v15 | (v16 << 16) | (unsigned __int64)(unsigned int)(v11 << 8));
      do
      {
        v29 = `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data;
        v18 = `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data;
      }
      while ( (unsigned int)wil_details_SetEnabledAndHasNotificationStateCallback(
                              (union wil_details_FeaturePropertyCache *)&v29,
                              v17)
           && v18 != _InterlockedCompareExchange(
                       &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
                       v29,
                       v18) );
    }
  }
LABEL_25:
  v31 = 0;
  LOBYTE(v32) = 3;
  v36 = 0;
  v37 = v32;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
    0x8284B3u,
    (const struct FEATURE_LOGGED_TRAITS *)&v36,
    1,
    3u);
  *(_QWORD *)v43 = retaddr;
  v44 = "shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp";
  v45 = 0LL;
  v46 = 373;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetCachedFeatureEnabledState();
  v33 = 0;
  LOBYTE(v34) = 3;
  v38 = 0;
  v39 = v34;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
    0x8284B3u,
    (const struct FEATURE_LOGGED_TRAITS *)&v38,
    1,
    1u);
  LOBYTE(v20) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v20);
  v22 = ThreadLocalDataCache;
  *(_QWORD *)v40 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v42 = *((_DWORD *)ThreadLocalDataCache + 4);
    v41 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v41;
    v22 = *(struct wil::details_abi::ThreadLocalData **)v40;
  }
  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  v24 = CreativeFramework::StoreHelpers::GenerateStoreId(a2, a3, &string, v23);
  v27 = v24;
  if ( v24 >= 0 )
  {
    LOBYTE(v26) = a5;
    LOBYTE(v25) = a4;
    v27 = (*(__int64 (__fastcall **)(ContentManagement::AppManager *, HSTRING, __int64, __int64, HSTRING, _QWORD, _QWORD, HSTRING))(*(_QWORD *)this + 112LL))(
            this,
            string,
            v25,
            v26,
            a6,
            0LL,
            0LL,
            a7);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x175,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v24);
  }
  WindowsDeleteString(string);
  string = 0LL;
  if ( v27 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v27,
      (__int64)v40,
      (struct wil::ThreadErrorContext *)0x8284B3,
      (const struct wil::FailureInfo *)v43);
  if ( v22 )
    *((_DWORD *)v22 + 4) = v42;
  if ( v27 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x175,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v27);
  return (unsigned int)v27;
}
