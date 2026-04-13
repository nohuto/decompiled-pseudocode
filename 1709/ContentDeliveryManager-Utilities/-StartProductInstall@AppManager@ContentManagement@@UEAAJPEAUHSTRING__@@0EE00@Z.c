/*
 * XREFs of ?StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z @ 0x18000DBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180003948 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003CE0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCache@@W4wil_details_CachedFeatureEnabledState@@W4wil_details_CachedHasNotificationState@@@Z @ 0x180007600 (-wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCach.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800078C4 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x180008208 (-wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18000B27C (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18000B808 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180016000 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TargetedContentUseProductIns.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::AppManager::StartProductInstall(
        ContentManagement::AppManager *this,
        HSTRING a2,
        HSTRING a3,
        char a4,
        unsigned __int8 a5,
        HSTRING a6,
        HSTRING a7)
{
  HSTRING v7; // r14
  HSTRING v8; // rsi
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // edi
  unsigned int v14; // ecx
  bool v15; // al
  unsigned int v16; // r15d
  int v17; // eax
  wil::details_abi *v18; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v20; // rdi
  HRESULT v21; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // ebx
  HRESULT v25; // eax
  HRESULT v26; // eax
  __int64 v27; // rdx
  HSTRING string1; // [rsp+60h] [rbp-89h] BYREF
  HSTRING newString; // [rsp+68h] [rbp-81h] BYREF
  int v31; // [rsp+70h] [rbp-79h]
  __int16 v32; // [rsp+74h] [rbp-75h]
  int v33; // [rsp+78h] [rbp-71h]
  __int16 v34; // [rsp+7Ch] [rbp-6Dh]
  int v35; // [rsp+80h] [rbp-69h] BYREF
  int v36; // [rsp+84h] [rbp-65h] BYREF
  __int16 v37; // [rsp+88h] [rbp-61h]
  int v38; // [rsp+8Ch] [rbp-5Dh] BYREF
  __int16 v39; // [rsp+90h] [rbp-59h]
  int v40[2]; // [rsp+98h] [rbp-51h] BYREF
  int v41; // [rsp+A0h] [rbp-49h]
  int v42; // [rsp+A4h] [rbp-45h]
  unsigned int v43[2]; // [rsp+A8h] [rbp-41h] BYREF
  const char *v44; // [rsp+B0h] [rbp-39h]
  __int64 v45; // [rsp+B8h] [rbp-31h]
  __int16 v46; // [rsp+C0h] [rbp-29h]
  __int64 v47; // [rsp+C8h] [rbp-21h]
  HSTRING_HEADER hstringHeader; // [rsp+D0h] [rbp-19h] BYREF
  HSTRING string; // [rsp+E8h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+47h]

  v47 = -2LL;
  v7 = a3;
  v8 = a2;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
    goto LABEL_22;
  v10 = `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data & 3;
  if ( g_wil_details_internalGetFeatureEnabledState )
  {
    v11 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_internalGetFeatureEnabledState)(8553651LL, 0LL);
  }
  else
  {
    if ( !g_wil_details_apiGetFeatureEnabledState )
    {
      v12 = 0;
      goto LABEL_10;
    }
    if ( (unsigned int)wil_HasFeatureTestState(8553651, (enum wil_FeatureEnabledState *)&v35) )
    {
      v12 = v35;
      goto LABEL_10;
    }
    v11 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_apiGetFeatureEnabledState)(8553651LL, 0LL);
  }
  v12 = v11;
LABEL_10:
  v13 = ((v12 & 0x80u) != 0) + 1;
  v14 = v12 & 0xFFFFFF7F;
  if ( v14 )
    v15 = v14 == 2;
  else
    v15 = 1;
  v16 = v15 + 1;
  if ( v10 )
    v16 = v10;
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
    0);
  if ( !g_wil_details_testStates || !(unsigned int)wil_HasFeatureTestState(8553651, 0LL) )
  {
    if ( v10 )
    {
      do
        v17 = `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data;
      while ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) != (unsigned __int8)v13
           && v17 != _InterlockedCompareExchange(
                       &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
                       ((unsigned __int8)`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data ^ (unsigned __int8)(16 * v13)) & 0x30 ^ `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
                       `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data) );
      v7 = a3;
      v8 = a2;
    }
    else
    {
      wil_details_SetEnabledAndHasNotificationStateProperties(
        &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
        v16,
        v13);
    }
  }
LABEL_22:
  v31 = 0;
  LOBYTE(v32) = 3;
  v36 = 0;
  v37 = v32;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
    0x8284B3u,
    (const struct FEATURE_LOGGED_TRAITS *)&v36,
    3);
  *(_QWORD *)v43 = retaddr;
  v44 = "shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp";
  v45 = 0LL;
  v46 = 363;
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
    1);
  LOBYTE(v18) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v18);
  v20 = ThreadLocalDataCache;
  *(_QWORD *)v40 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v42 = *((_DWORD *)ThreadLocalDataCache + 4);
    v41 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v41;
    v7 = a3;
    v8 = a2;
    v20 = *(struct wil::details_abi::ThreadLocalData **)v40;
  }
  WindowsDeleteString(0LL);
  newString = 0LL;
  if ( WindowsIsStringEmpty(v7) )
  {
    v21 = WindowsDuplicateString(v8, &newString);
    v24 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x16,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\storehelpers.h",
        (const char *)(unsigned int)v21);
      goto LABEL_38;
    }
    goto LABEL_37;
  }
  WindowsDeleteString(0LL);
  string1 = 0LL;
  string = 0LL;
  v25 = WindowsCreateStringReference(&CreativeFramework::StoreHelpers::c_storeIdSeparator, 1u, &hstringHeader, &string);
  if ( v25 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v25);
    __debugbreak();
  }
  v26 = WindowsConcatString(v8, string, &string1);
  v24 = v26;
  string = 0LL;
  if ( v26 < 0 )
  {
    v27 = 28LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v27,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\storehelpers.h",
      (const char *)(unsigned int)v26);
    WindowsDeleteString(string1);
    string1 = 0LL;
    goto LABEL_38;
  }
  v26 = WindowsConcatString(string1, v7, &newString);
  v24 = v26;
  if ( v26 < 0 )
  {
    v27 = 30LL;
    goto LABEL_33;
  }
  WindowsDeleteString(string1);
  string1 = 0LL;
LABEL_37:
  v24 = 0;
LABEL_38:
  if ( v24 >= 0 )
  {
    LOBYTE(v23) = a5;
    LOBYTE(v22) = a4;
    v24 = (*(__int64 (__fastcall **)(ContentManagement::AppManager *, HSTRING, __int64, __int64, HSTRING, _QWORD, _QWORD, HSTRING))(*(_QWORD *)this + 112LL))(
            this,
            newString,
            v22,
            v23,
            a6,
            0LL,
            0LL,
            a7);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x16B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v24);
  }
  WindowsDeleteString(newString);
  newString = 0LL;
  if ( v24 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v24,
      (__int64)v40,
      (struct wil::ThreadErrorContext *)0x8284B3,
      (const struct wil::FailureInfo *)v43);
  if ( v20 )
    *((_DWORD *)v20 + 4) = v42;
  if ( v24 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x16B,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v24);
  return (unsigned int)v24;
}
