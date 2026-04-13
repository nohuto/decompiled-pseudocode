/*
 * XREFs of ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800A2620
 * Callers:
 *     ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18006A2C0 (-RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInt.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180003CBC (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180007E94 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18000C128 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18001883C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wi.c)
 *     _lambda_245d84deaf182427ab842afa126b70f8_::operator() @ 0x1800A27FC (_lambda_245d84deaf182427ab842afa126b70f8_--operator().c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void CreativeFramework::CommonHelper::RegisterBackgroundTaskWithWnfTrigger(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // rsi
  wil::details_abi *v4; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v6; // rbx
  int v7; // eax
  int v8; // edi
  volatile signed __int32 *v9; // rbx
  _DWORD v10[3]; // [rsp+38h] [rbp-A9h] BYREF
  __int16 v11; // [rsp+44h] [rbp-9Dh]
  int v12; // [rsp+48h] [rbp-99h] BYREF
  __int16 v13; // [rsp+4Ch] [rbp-95h]
  struct wil::details_abi::ThreadLocalData *v14; // [rsp+50h] [rbp-91h] BYREF
  int v15; // [rsp+58h] [rbp-89h]
  int v16; // [rsp+5Ch] [rbp-85h]
  _QWORD v17[3]; // [rsp+60h] [rbp-81h] BYREF
  __int16 v18; // [rsp+78h] [rbp-69h]
  _QWORD v19[11]; // [rsp+80h] [rbp-61h] BYREF
  __int64 v20; // [rsp+D8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+3Fh]
  __int64 v22; // [rsp+128h] [rbp+47h] BYREF
  __int64 v23; // [rsp+130h] [rbp+4Fh] BYREF
  __int64 v24; // [rsp+140h] [rbp+5Fh] BYREF
  va_list va; // [rsp+140h] [rbp+5Fh]
  __int64 v26; // [rsp+148h] [rbp+67h] BYREF
  va_list va1; // [rsp+148h] [rbp+67h]
  __int64 v28; // [rsp+150h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+150h] [rbp+6Fh]
  __int64 v30; // [rsp+158h] [rbp+77h] BYREF
  va_list va3; // [rsp+158h] [rbp+77h]
  __int64 v32; // [rsp+160h] [rbp+7Fh]
  va_list va4; // [rsp+168h] [rbp+87h] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v24 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v26 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v28 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v30 = va_arg(va4, _QWORD);
  v32 = va_arg(va4, _QWORD);
  v23 = a2;
  v22 = a1;
  v19[9] = -2LL;
  v20 = a3;
  v3 = v32;
  v19[10] = v32;
  LOBYTE(v10[0]) = 0;
  v19[0] = &v20;
  va_copy((va_list)&v19[1], va1);
  va_copy((va_list)&v19[2], va);
  va_copy((va_list)&v19[3], va3);
  v19[4] = &v22;
  v19[5] = &v23;
  va_copy((va_list)&v19[6], va2);
  v19[7] = v10;
  v19[8] = v32;
  v17[0] = retaddr;
  v17[1] = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp";
  v17[2] = 0LL;
  v18 = 224;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetCachedFeatureEnabledState();
  v10[2] = 0;
  LOBYTE(v11) = 3;
  v12 = 0;
  v13 = v11;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
    0x79780Du,
    (const struct FEATURE_LOGGED_TRAITS *)&v12,
    1,
    3u);
  LOBYTE(v4) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v4);
  v6 = ThreadLocalDataCache;
  v14 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v16 = *((_DWORD *)ThreadLocalDataCache + 4);
    v15 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v15;
    v6 = v14;
  }
  v7 = lambda_245d84deaf182427ab842afa126b70f8_::operator()(v19);
  v8 = v7;
  if ( v7 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v7,
      (__int64)&v14,
      (struct wil::ThreadErrorContext *)0x79780D,
      (const struct wil::FailureInfo *)v17);
  if ( v6 )
    *((_DWORD *)v6 + 4) = v16;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE0,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v8);
    JUMPOUT(0x1800A27FALL);
  }
  v9 = *(volatile signed __int32 **)(v3 + 8);
  if ( v9 && _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
    if ( !_InterlockedDecrement(v9 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
  }
}
