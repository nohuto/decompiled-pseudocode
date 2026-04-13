/*
 * XREFs of ?LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x1800105E0
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
 *     _lambda_31043bab68d029d4b2dc53516d0f9a2d_::operator() @ 0x1800108B0 (_lambda_31043bab68d029d4b2dc53516d0f9a2d_--operator().c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18001883C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wi.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 ContentManagement::LaunchManager::LaunchUriAsync(__int64 a1, ...)
{
  int v1; // edi
  unsigned int v2; // eax
  unsigned int v3; // ecx
  int v4; // ebx
  int v5; // edx
  unsigned int v6; // ecx
  bool v7; // al
  unsigned int v8; // r14d
  unsigned int v9; // esi
  void *v10; // rbx
  signed __int32 v11; // edi
  int v12; // eax
  wil::details_abi *v13; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v15; // rbx
  int v16; // eax
  int v17; // edi
  signed __int32 v19[2]; // [rsp+3Ch] [rbp-55h] BYREF
  __int16 v20; // [rsp+44h] [rbp-4Dh]
  int v21; // [rsp+48h] [rbp-49h]
  __int16 v22; // [rsp+4Ch] [rbp-45h]
  unsigned int v23; // [rsp+50h] [rbp-41h] BYREF
  int v24; // [rsp+54h] [rbp-3Dh] BYREF
  __int16 v25; // [rsp+58h] [rbp-39h]
  int v26; // [rsp+5Ch] [rbp-35h] BYREF
  __int16 v27; // [rsp+60h] [rbp-31h]
  int v28[2]; // [rsp+68h] [rbp-29h] BYREF
  int v29; // [rsp+70h] [rbp-21h]
  int v30; // [rsp+74h] [rbp-1Dh]
  _QWORD v31[3]; // [rsp+78h] [rbp-19h] BYREF
  unsigned int v32[2]; // [rsp+90h] [rbp-1h] BYREF
  const char *v33; // [rsp+98h] [rbp+7h]
  __int64 v34; // [rsp+A0h] [rbp+Fh]
  __int16 v35; // [rsp+A8h] [rbp+17h]
  __int64 v36; // [rsp+B0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  __int64 v38; // [rsp+100h] [rbp+6Fh] BYREF
  va_list va; // [rsp+100h] [rbp+6Fh]
  __int64 v40; // [rsp+108h] [rbp+77h] BYREF
  va_list va1; // [rsp+108h] [rbp+77h]
  _QWORD *v42; // [rsp+110h] [rbp+7Fh] BYREF
  va_list va2; // [rsp+110h] [rbp+7Fh]
  va_list va3; // [rsp+118h] [rbp+87h] BYREF

  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v38 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v40 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v42 = va_arg(va3, _QWORD *);
  v36 = -2LL;
  *v42 = 0LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
    goto LABEL_25;
  v1 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 3;
  if ( g_wil_details_internalGetFeatureEnabledState )
  {
    v2 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_internalGetFeatureEnabledState)(7960589LL, 0LL);
LABEL_4:
    v3 = v2;
    goto LABEL_10;
  }
  if ( g_wil_details_apiGetFeatureEnabledState )
  {
    if ( !(unsigned int)wil_HasFeatureTestState(7960589, (enum wil_FeatureEnabledState *)&v23) )
    {
      v2 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_apiGetFeatureEnabledState)(7960589LL, 0LL);
      goto LABEL_4;
    }
    v3 = v23;
  }
  else
  {
    v3 = 0;
  }
LABEL_10:
  v4 = ((v3 & 0x80u) != 0) + 1;
  v5 = (v3 >> 6) & 1;
  v6 = v3 & 0xFFFFFF3F;
  if ( v6 )
    v7 = v6 == 2;
  else
    v7 = 1;
  v8 = v7 + 1;
  v9 = ((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
  if ( v1 )
    v8 = v1;
  else
    v9 = v5;
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
    0);
  if ( !g_wil_details_testStates || !(unsigned int)wil_HasFeatureTestState(7960589, 0LL) )
  {
    if ( v1 )
    {
      do
        v12 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data;
      while ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) != (unsigned __int8)v4
           && v12 != _InterlockedCompareExchange(
                       &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
                       ((unsigned __int8)`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data ^ (unsigned __int8)(16 * v4)) & 0x30 ^ `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
                       `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data) );
    }
    else
    {
      v10 = (void *)(v8 | (v9 << 16) | (unsigned __int64)(unsigned int)(v4 << 8));
      do
      {
        v19[0] = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data;
        v11 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data;
      }
      while ( (unsigned int)wil_details_SetEnabledAndHasNotificationStateCallback(
                              (union wil_details_FeaturePropertyCache *)v19,
                              v10)
           && v11 != _InterlockedCompareExchange(
                       &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
                       v19[0],
                       v11) );
    }
  }
LABEL_25:
  v19[1] = 0;
  LOBYTE(v20) = 3;
  v24 = 0;
  v25 = v20;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
    0x79780Du,
    (const struct FEATURE_LOGGED_TRAITS *)&v24,
    1,
    3u);
  va_copy((va_list)v31, va);
  va_copy((va_list)&v31[1], va1);
  va_copy((va_list)&v31[2], va2);
  *(_QWORD *)v32 = retaddr;
  v33 = "shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp";
  v34 = 0LL;
  v35 = 756;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetCachedFeatureEnabledState();
  v21 = 0;
  LOBYTE(v22) = 3;
  v26 = 0;
  v27 = v22;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
    0x79780Du,
    (const struct FEATURE_LOGGED_TRAITS *)&v26,
    1,
    3u);
  LOBYTE(v13) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v13);
  v15 = ThreadLocalDataCache;
  *(_QWORD *)v28 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v30 = *((_DWORD *)ThreadLocalDataCache + 4);
    v29 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v29;
    v15 = *(struct wil::details_abi::ThreadLocalData **)v28;
  }
  v16 = lambda_31043bab68d029d4b2dc53516d0f9a2d_::operator()(v31);
  v17 = v16;
  if ( v16 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v16,
      (__int64)v28,
      (struct wil::ThreadErrorContext *)0x79780D,
      (const struct wil::FailureInfo *)v32);
  if ( v15 )
    *((_DWORD *)v15 + 4) = v30;
  if ( v17 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2F4,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v17);
  return (unsigned int)v17;
}
