/*
 * XREFs of ?LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180010EF0
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
 *     _lambda_47f64c4ce0d1f65716eee3214602f056_::operator() @ 0x1800111A4 (_lambda_47f64c4ce0d1f65716eee3214602f056_--operator().c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18001883C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wi.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::LaunchManager::LaunchDefaultEntryPointForPackage(
        ContentManagement::LaunchManager *this,
        HSTRING a2)
{
  int v2; // edi
  unsigned int v3; // eax
  unsigned int v4; // ecx
  int v5; // ebx
  int v6; // edx
  unsigned int v7; // ecx
  bool v8; // al
  unsigned int v9; // r14d
  unsigned int v10; // esi
  void *v11; // rbx
  signed __int32 v12; // edi
  int v13; // eax
  wil::details_abi *v14; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v16; // rbx
  int v17; // eax
  int v18; // edi
  __int16 v20; // [rsp+34h] [rbp-45h]
  __int16 v21; // [rsp+3Ch] [rbp-3Dh]
  unsigned int v22; // [rsp+40h] [rbp-39h] BYREF
  int v23; // [rsp+44h] [rbp-35h] BYREF
  __int16 v24; // [rsp+48h] [rbp-31h]
  int v25; // [rsp+4Ch] [rbp-2Dh] BYREF
  __int16 v26; // [rsp+50h] [rbp-29h]
  int v27[2]; // [rsp+58h] [rbp-21h] BYREF
  int v28; // [rsp+60h] [rbp-19h]
  int v29; // [rsp+64h] [rbp-15h]
  HSTRING *v30; // [rsp+68h] [rbp-11h] BYREF
  unsigned int v31[2]; // [rsp+70h] [rbp-9h] BYREF
  const char *v32; // [rsp+78h] [rbp-1h]
  __int64 v33; // [rsp+80h] [rbp+7h]
  __int16 v34; // [rsp+88h] [rbp+Fh]
  __int64 v35; // [rsp+90h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  HSTRING v37; // [rsp+E8h] [rbp+6Fh] BYREF
  signed __int32 v38; // [rsp+F0h] [rbp+77h]
  signed __int32 v39; // [rsp+F8h] [rbp+7Fh] BYREF

  v37 = a2;
  v35 = -2LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
    goto LABEL_25;
  v2 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 3;
  if ( g_wil_details_internalGetFeatureEnabledState )
  {
    v3 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_internalGetFeatureEnabledState)(7960589LL, 0LL);
LABEL_4:
    v4 = v3;
    goto LABEL_10;
  }
  if ( g_wil_details_apiGetFeatureEnabledState )
  {
    if ( !(unsigned int)wil_HasFeatureTestState(7960589, (enum wil_FeatureEnabledState *)&v22) )
    {
      v3 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_apiGetFeatureEnabledState)(7960589LL, 0LL);
      goto LABEL_4;
    }
    v4 = v22;
  }
  else
  {
    v4 = 0;
  }
LABEL_10:
  v5 = ((v4 & 0x80u) != 0) + 1;
  v6 = (v4 >> 6) & 1;
  v7 = v4 & 0xFFFFFF3F;
  if ( v7 )
    v8 = v7 == 2;
  else
    v8 = 1;
  v9 = v8 + 1;
  v10 = ((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
  if ( v2 )
    v9 = v2;
  else
    v10 = v6;
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
    0);
  if ( !g_wil_details_testStates || !(unsigned int)wil_HasFeatureTestState(7960589, 0LL) )
  {
    if ( v2 )
    {
      do
      {
        v38 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data;
        v13 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data;
        if ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) == (unsigned __int8)v5 )
          break;
        v38 = ((unsigned __int8)`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data ^ (unsigned __int8)(16 * v5)) & 0x30 ^ `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data;
      }
      while ( v13 != _InterlockedCompareExchange(
                       &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
                       v38,
                       `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data) );
    }
    else
    {
      v11 = (void *)(v9 | (v10 << 16) | (unsigned __int64)(unsigned int)(v5 << 8));
      do
      {
        v39 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data;
        v12 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data;
      }
      while ( (unsigned int)wil_details_SetEnabledAndHasNotificationStateCallback(
                              (union wil_details_FeaturePropertyCache *)&v39,
                              v11)
           && v12 != _InterlockedCompareExchange(
                       &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
                       v39,
                       v12) );
    }
  }
LABEL_25:
  LOBYTE(v20) = 3;
  v23 = 0;
  v24 = v20;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
    0x79780Du,
    (const struct FEATURE_LOGGED_TRAITS *)&v23,
    1,
    3u);
  v30 = &v37;
  *(_QWORD *)v31 = retaddr;
  v32 = "shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp";
  v33 = 0LL;
  v34 = 815;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetCachedFeatureEnabledState();
  LOBYTE(v21) = 3;
  v25 = 0;
  v26 = v21;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
    0x79780Du,
    (const struct FEATURE_LOGGED_TRAITS *)&v25,
    1,
    3u);
  LOBYTE(v14) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v14);
  v16 = ThreadLocalDataCache;
  *(_QWORD *)v27 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v29 = *((_DWORD *)ThreadLocalDataCache + 4);
    v28 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v28;
    v16 = *(struct wil::details_abi::ThreadLocalData **)v27;
  }
  v17 = lambda_47f64c4ce0d1f65716eee3214602f056_::operator()(&v30);
  v18 = v17;
  if ( v17 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v17,
      (__int64)v27,
      (struct wil::ThreadErrorContext *)0x79780D,
      (const struct wil::FailureInfo *)v31);
  if ( v16 )
    *((_DWORD *)v16 + 4) = v29;
  if ( v18 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x32F,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v18);
  return (unsigned int)v18;
}
