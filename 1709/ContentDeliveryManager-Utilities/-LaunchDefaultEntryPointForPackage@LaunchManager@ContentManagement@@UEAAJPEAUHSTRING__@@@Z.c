/*
 * XREFs of ?LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180010490
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
 *     _lambda_44f31b07f68475fa3ec0b53957591ebd_::operator() @ 0x1800106E8 (_lambda_44f31b07f68475fa3ec0b53957591ebd_--operator().c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180016294 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wi.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::LaunchManager::LaunchDefaultEntryPointForPackage(
        ContentManagement::LaunchManager *this,
        HSTRING a2)
{
  int v2; // ebx
  int v3; // eax
  int v4; // ecx
  int v5; // edi
  unsigned int v6; // ecx
  bool v7; // al
  unsigned int v8; // esi
  int v9; // eax
  wil::details_abi *v10; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v12; // rbx
  int v13; // eax
  int v14; // edi
  __int16 v16; // [rsp+24h] [rbp-5Ch]
  __int16 v17; // [rsp+2Ch] [rbp-54h]
  int v18; // [rsp+30h] [rbp-50h] BYREF
  __int16 v19; // [rsp+34h] [rbp-4Ch]
  int v20; // [rsp+38h] [rbp-48h] BYREF
  __int16 v21; // [rsp+3Ch] [rbp-44h]
  int v22[2]; // [rsp+40h] [rbp-40h] BYREF
  int v23; // [rsp+48h] [rbp-38h]
  int v24; // [rsp+4Ch] [rbp-34h]
  HSTRING *v25; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v26[2]; // [rsp+58h] [rbp-28h] BYREF
  const char *v27; // [rsp+60h] [rbp-20h]
  __int64 v28; // [rsp+68h] [rbp-18h]
  __int16 v29; // [rsp+70h] [rbp-10h]
  __int64 v30; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  HSTRING v32; // [rsp+B8h] [rbp+38h] BYREF
  signed __int32 v33; // [rsp+C0h] [rbp+40h]
  int v34; // [rsp+C8h] [rbp+48h] BYREF

  v32 = a2;
  v30 = -2LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
    goto LABEL_21;
  v2 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 3;
  if ( g_wil_details_internalGetFeatureEnabledState )
  {
    v3 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_internalGetFeatureEnabledState)(7960589LL, 0LL);
  }
  else
  {
    if ( !g_wil_details_apiGetFeatureEnabledState )
    {
      v4 = 0;
      goto LABEL_10;
    }
    if ( (unsigned int)wil_HasFeatureTestState(7960589, (enum wil_FeatureEnabledState *)&v34) )
    {
      v4 = v34;
      goto LABEL_10;
    }
    v3 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_apiGetFeatureEnabledState)(7960589LL, 0LL);
  }
  v4 = v3;
LABEL_10:
  v5 = ((v4 & 0x80u) != 0) + 1;
  v6 = v4 & 0xFFFFFF7F;
  if ( v6 )
    v7 = v6 == 2;
  else
    v7 = 1;
  v8 = v7 + 1;
  if ( v2 )
    v8 = v2;
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
        v33 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data;
        v9 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data;
        if ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) == (unsigned __int8)v5 )
          break;
        v33 = ((unsigned __int8)`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data ^ (unsigned __int8)(16 * v5)) & 0x30 ^ `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data;
      }
      while ( v9 != _InterlockedCompareExchange(
                      &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
                      v33,
                      `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data) );
    }
    else
    {
      wil_details_SetEnabledAndHasNotificationStateProperties(
        &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
        v8,
        v5);
    }
  }
LABEL_21:
  LOBYTE(v16) = 3;
  v18 = 0;
  v19 = v16;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
    0x79780Du,
    (const struct FEATURE_LOGGED_TRAITS *)&v18,
    3);
  v25 = &v32;
  *(_QWORD *)v26 = retaddr;
  v27 = "shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp";
  v28 = 0LL;
  v29 = 788;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetCachedFeatureEnabledState();
  LOBYTE(v17) = 3;
  v20 = 0;
  v21 = v17;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
    0x79780Du,
    (const struct FEATURE_LOGGED_TRAITS *)&v20,
    3);
  LOBYTE(v10) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v10);
  v12 = ThreadLocalDataCache;
  *(_QWORD *)v22 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v24 = *((_DWORD *)ThreadLocalDataCache + 4);
    v23 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v23;
    v12 = *(struct wil::details_abi::ThreadLocalData **)v22;
  }
  v13 = lambda_44f31b07f68475fa3ec0b53957591ebd_::operator()(&v25);
  v14 = v13;
  if ( v13 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v13,
      (__int64)v22,
      (struct wil::ThreadErrorContext *)0x79780D,
      (const struct wil::FailureInfo *)v26);
  if ( v12 )
    *((_DWORD *)v12 + 4) = v24;
  if ( v14 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x314,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v14);
  return (unsigned int)v14;
}
