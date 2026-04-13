/*
 * XREFs of ?LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x18000FBD0
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
 *     _lambda_56cf871f6c9639d4a89a91dc6a4d1d9c_::operator() @ 0x18000FE44 (_lambda_56cf871f6c9639d4a89a91dc6a4d1d9c_--operator().c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180016294 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wi.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 ContentManagement::LaunchManager::LaunchUriAsync(__int64 a1, ...)
{
  int v1; // ebx
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  unsigned int v5; // ecx
  bool v6; // al
  unsigned int v7; // esi
  int v8; // eax
  wil::details_abi *v9; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v11; // rbx
  int v12; // eax
  int v13; // edi
  __int16 v15; // [rsp+30h] [rbp-41h]
  __int16 v16; // [rsp+38h] [rbp-39h]
  int v17; // [rsp+3Ch] [rbp-35h] BYREF
  int v18; // [rsp+40h] [rbp-31h] BYREF
  __int16 v19; // [rsp+44h] [rbp-2Dh]
  int v20; // [rsp+48h] [rbp-29h] BYREF
  __int16 v21; // [rsp+4Ch] [rbp-25h]
  int v22[2]; // [rsp+50h] [rbp-21h] BYREF
  int v23; // [rsp+58h] [rbp-19h]
  int v24; // [rsp+5Ch] [rbp-15h]
  _QWORD v25[3]; // [rsp+60h] [rbp-11h] BYREF
  unsigned int v26[2]; // [rsp+78h] [rbp+7h] BYREF
  const char *v27; // [rsp+80h] [rbp+Fh]
  __int64 v28; // [rsp+88h] [rbp+17h]
  __int16 v29; // [rsp+90h] [rbp+1Fh]
  __int64 v30; // [rsp+98h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  __int64 v32; // [rsp+E0h] [rbp+6Fh] BYREF
  va_list va; // [rsp+E0h] [rbp+6Fh]
  __int64 v34; // [rsp+E8h] [rbp+77h] BYREF
  va_list va1; // [rsp+E8h] [rbp+77h]
  _QWORD *v36; // [rsp+F0h] [rbp+7Fh] BYREF
  va_list va2; // [rsp+F0h] [rbp+7Fh]
  va_list va3; // [rsp+F8h] [rbp+87h] BYREF

  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v32 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v34 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v36 = va_arg(va3, _QWORD *);
  v30 = -2LL;
  *v36 = 0LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
    goto LABEL_21;
  v1 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 3;
  if ( g_wil_details_internalGetFeatureEnabledState )
  {
    v2 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_internalGetFeatureEnabledState)(7960589LL, 0LL);
  }
  else
  {
    if ( !g_wil_details_apiGetFeatureEnabledState )
    {
      v3 = 0;
      goto LABEL_10;
    }
    if ( (unsigned int)wil_HasFeatureTestState(7960589, (enum wil_FeatureEnabledState *)&v17) )
    {
      v3 = v17;
      goto LABEL_10;
    }
    v2 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_apiGetFeatureEnabledState)(7960589LL, 0LL);
  }
  v3 = v2;
LABEL_10:
  v4 = ((v3 & 0x80u) != 0) + 1;
  v5 = v3 & 0xFFFFFF7F;
  if ( v5 )
    v6 = v5 == 2;
  else
    v6 = 1;
  v7 = v6 + 1;
  if ( v1 )
    v7 = v1;
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
    0);
  if ( !g_wil_details_testStates || !(unsigned int)wil_HasFeatureTestState(7960589, 0LL) )
  {
    if ( v1 )
    {
      do
        v8 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data;
      while ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) != (unsigned __int8)v4
           && v8 != _InterlockedCompareExchange(
                      &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
                      ((unsigned __int8)`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data ^ (unsigned __int8)(16 * v4)) & 0x30 ^ `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
                      `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data) );
    }
    else
    {
      wil_details_SetEnabledAndHasNotificationStateProperties(
        &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
        v7,
        v4);
    }
  }
LABEL_21:
  LOBYTE(v15) = 3;
  v18 = 0;
  v19 = v15;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
    0x79780Du,
    (const struct FEATURE_LOGGED_TRAITS *)&v18,
    3);
  va_copy((va_list)v25, va);
  va_copy((va_list)&v25[1], va1);
  va_copy((va_list)&v25[2], va2);
  *(_QWORD *)v26 = retaddr;
  v27 = "shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp";
  v28 = 0LL;
  v29 = 729;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetCachedFeatureEnabledState();
  LOBYTE(v16) = 3;
  v20 = 0;
  v21 = v16;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
    0x79780Du,
    (const struct FEATURE_LOGGED_TRAITS *)&v20,
    3);
  LOBYTE(v9) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v9);
  v11 = ThreadLocalDataCache;
  *(_QWORD *)v22 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v24 = *((_DWORD *)ThreadLocalDataCache + 4);
    v23 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v23;
    v11 = *(struct wil::details_abi::ThreadLocalData **)v22;
  }
  v12 = lambda_56cf871f6c9639d4a89a91dc6a4d1d9c_::operator()(v25);
  v13 = v12;
  if ( v12 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v12,
      (__int64)v22,
      (struct wil::ThreadErrorContext *)0x79780D,
      (const struct wil::FailureInfo *)v26);
  if ( v11 )
    *((_DWORD *)v11 + 4) = v24;
  if ( v13 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x2D9,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v13);
  return (unsigned int)v13;
}
