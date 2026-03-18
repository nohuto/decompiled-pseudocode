/*
 * XREFs of ?PrepareForCalculation@CExpression@@MEAAXPEA_N@Z @ 0x180054130
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180055480 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800558E8 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800BA904 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSa.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x1800BBBCC (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x1800BBCCC (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePro.c)
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x1800BC404 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800BC430 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@AEA_N_J@Z @ 0x1800C8984 (-EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV-$unique_any_t@V-$unique_storage@U-$resource_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800C89C0 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800DCD88 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CExpression::PrepareForCalculation(CExpression *this, bool *a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned int v6; // esi
  bool v7; // al
  void (*v8)(unsigned int, unsigned int, unsigned int, const char *); // rax
  signed int v9; // r15d
  _BYTE *v10; // rdi
  char v11; // si
  FARPROC ProcAddress; // rax
  unsigned __int8 (__fastcall *v13)(wil::details *__hidden); // rcx
  int v14; // eax
  HMODULE NtDllModuleHandle; // rax
  PTP_TIMER ThreadpoolTimer; // rax
  void (*v17)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax
  char *v18; // rax
  bool v19; // sf
  char *v20; // rdi
  void *v21; // rax
  int v22; // [rsp+50h] [rbp-39h] BYREF
  __int16 v23; // [rsp+54h] [rbp-35h]
  int v24; // [rsp+58h] [rbp-31h] BYREF
  __int16 v25; // [rsp+5Ch] [rbp-2Dh]
  char *v26; // [rsp+60h] [rbp-29h] BYREF
  char v27[24]; // [rsp+68h] [rbp-21h] BYREF
  __int128 v28; // [rsp+80h] [rbp-9h] BYREF
  __int64 v29; // [rsp+90h] [rbp+7h]
  _QWORD v30[2]; // [rsp+98h] [rbp+Fh] BYREF
  int v31; // [rsp+A8h] [rbp+1Fh]
  int v32; // [rsp+ACh] [rbp+23h]

  if ( !CCommonRegistryData::m_fOptimizeForDirtyExpressions )
  {
    *a2 = 1;
    return;
  }
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetCachedFeatureEnabledState(
      this,
      a2,
      a3);
  LOBYTE(v23) = 3;
  v24 = 0;
  v25 = v23;
  v22 = 3;
  v5 = wil_details_RecordUsageInPropertyCache(
         v27,
         &`wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetFeaturePropertyCache'::`2'::data,
         2LL);
  v28 = *(_OWORD *)v5;
  v29 = *(_QWORD *)(v5 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage != (char *)wil::details::RecordFeatureUsageCallback )
    {
      g_wil_details_recordFeatureUsage(
        0xD17946u,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetFeaturePropertyCache'::`2'::data,
        (struct wil_details_RecordUsageResult *)&v28);
LABEL_10:
      if ( (`wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
      {
        v31 = 0;
        v32 = (`wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
        v30[0] = 0LL;
        v30[1] = 2LL;
        ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(13728070LL, 0LL, v30);
      }
      goto LABEL_12;
    }
    if ( (_DWORD)v28 )
      wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        &wil::details::g_enabledStateManager,
        0xD17946u,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetFeaturePropertyCache'::`2'::data);
    v6 = DWORD1(v28);
    if ( !DWORD1(v28) )
    {
LABEL_9:
      if ( !(_DWORD)v29 && wil::details::g_enabledStateManager )
      {
        AcquireSRWLockExclusive(&stru_1802D6B18);
        if ( !qword_1802D6B38 )
        {
          v17 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
          qword_1802D6B38 = 0LL;
          if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
            || (v17 = g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
          {
            ((void (__fastcall *)(__int64 *, __int64 (__fastcall *)(), __int64))v17)(
              &qword_1802D6B38,
              lambda_87c8d85798ea78242f0953b15d7cc197_::_lambda_invoker_cdecl_,
              -1LL);
          }
        }
        ReleaseSRWLockExclusive(&stru_1802D6B18);
      }
      goto LABEL_10;
    }
    v8 = g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage )
    {
      if ( (char *)g_wil_details_internalRecordFeatureUsage == (char *)wil::details::WilApiImpl_RecordFeatureUsage )
      {
        v9 = DWORD2(v28) & 0x7FFFFFFF;
        if ( !wil::details::g_featureStateManager )
          goto LABEL_9;
        v10 = *(&xmmword_1802D6A10 + 1);
        if ( !*(&xmmword_1802D6A10 + 1) )
        {
          v18 = (char *)xmmword_1802D6A10;
          if ( !xmmword_1802D6A10 )
          {
            v26 = 0LL;
            v19 = (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(
                         qword_1802D6A08,
                         &v26) < 0;
            v18 = (char *)xmmword_1802D6A10;
            if ( !v19 )
            {
              if ( !xmmword_1802D6A10 )
                v18 = v26;
              xmmword_1802D6A10 = v18;
            }
          }
          v20 = v18 + 32;
          if ( !v18 )
            v20 = 0LL;
          AcquireSRWLockExclusive(&stru_1802D6A20);
          v21 = *(&xmmword_1802D6A10 + 1);
          if ( !*(&xmmword_1802D6A10 + 1) )
            v21 = v20;
          *(&xmmword_1802D6A10 + 1) = v21;
          ReleaseSRWLockExclusive(&stru_1802D6A20);
          v10 = *(&xmmword_1802D6A10 + 1);
          if ( !*(&xmmword_1802D6A10 + 1) )
            goto LABEL_9;
        }
        if ( v9 == 254 )
        {
          wil::details_abi::FeatureStateData::RecordUsage((wil::details_abi::FeatureStateData *)v10);
        }
        else
        {
          if ( (unsigned __int64)v9 >= 0xC8 && (v9 < 256 || (unsigned __int64)v9 >= 0x200) )
            goto LABEL_9;
          AcquireSRWLockExclusive((PSRWLOCK)v10);
          if ( (unsigned int)(v9 - 256) <= 0x7F || (unsigned int)v9 <= 7 && (v14 = 204, _bittest(&v14, v9)) )
          {
            wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,0>::RecordUsage((wil::details_abi::RawUsageIndex *)(v10 + 8));
            v11 = v10[64];
          }
          else
          {
            v11 = wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,2>::RecordUsage(
                    v10 + 72,
                    (unsigned int)v9,
                    13728070LL,
                    v6);
          }
          ReleaseSRWLockExclusive((PSRWLOCK)v10);
          if ( !v11 )
            goto LABEL_9;
        }
        if ( !wil::details::g_processShutdownInProgress )
        {
          ProcAddress = (FARPROC)wil::details::g_pfnRtlDllShutdownInProgress;
          if ( !wil::details::g_pfnRtlDllShutdownInProgress )
            goto LABEL_36;
          v13 = wil::details::RtlDllShutdownInProgress;
          if ( (char *)wil::details::g_pfnRtlDllShutdownInProgress != (char *)wil::details::RtlDllShutdownInProgress
            || (ProcAddress = (FARPROC)`wil::details::RtlDllShutdownInProgress'::`2'::s_pfnRtlDllShutdownInProgress) != 0LL
            || (NtDllModuleHandle = wil_details_GetNtDllModuleHandle(),
                ProcAddress = GetProcAddress(NtDllModuleHandle, "RtlDllShutdownInProgress"),
                (`wil::details::RtlDllShutdownInProgress'::`2'::s_pfnRtlDllShutdownInProgress = (__int64)ProcAddress) != 0) )
          {
            LOBYTE(ProcAddress) = ((__int64 (__fastcall *)(_QWORD))ProcAddress)(v13);
          }
          if ( !(_BYTE)ProcAddress )
          {
LABEL_36:
            AcquireSRWLockExclusive(&stru_1802D6A20);
            if ( !byte_1802D6A41 )
            {
              if ( !(_QWORD)xmmword_1802D6A30 )
              {
                ThreadpoolTimer = CreateThreadpoolTimer(
                                    lambda_2586d60923f8412dce879009b83555c3_::_lambda_invoker_cdecl_,
                                    &wil::details::g_featureStateManager,
                                    0LL);
                wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
                  &xmmword_1802D6A30,
                  ThreadpoolTimer);
              }
              wil::details::EnsureCoalescedTimer_SetTimer(&xmmword_1802D6A30, &byte_1802D6A41, 300000LL);
            }
            ReleaseSRWLockExclusive(&stru_1802D6A20);
          }
        }
        goto LABEL_9;
      }
    }
    else
    {
      v8 = g_wil_details_apiRecordFeatureUsage;
      if ( !g_wil_details_apiRecordFeatureUsage )
        goto LABEL_9;
    }
    ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, int))v8)(13728070LL, DWORD2(v28), DWORD1(v28), 0LL, 1);
    goto LABEL_9;
  }
LABEL_12:
  if ( !(_DWORD)v29 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0xD17946u,
      (const struct FEATURE_LOGGED_TRAITS *)&v24,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v22,
      0LL,
      0,
      1uLL);
  if ( *((_QWORD *)this + 51) )
    v7 = 1;
  else
    v7 = *((_QWORD *)this + 34) > *((_QWORD *)this + 20);
  *a2 = v7;
}
