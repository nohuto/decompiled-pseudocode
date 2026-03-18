/*
 * XREFs of ?__private_IsVariantEqual@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@SA_NW4Variant_DwmHintingPpm@@W4VariantReportingKind@2@_N@Z @ 0x180052D60
 * Callers:
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x1800441D0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180048000 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18005D3B0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x18005EB8C (-FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z.c)
 * Callees:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180055480 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800558E8 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CA?AW4Variant_DwmHintingPpm@@XZ @ 0x1800BA1F8 (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CA-AW4Variant_.c)
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x1800BAF00 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
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

_BOOL8 __fastcall wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::__private_IsVariantEqual(unsigned __int8 a1)
{
  char v2; // di
  bool v3; // si
  unsigned int v4; // r15d
  int v5; // eax
  unsigned int v6; // r14d
  __int64 v7; // rax
  void (__fastcall *v8)(wil::details *__hidden, unsigned int, unsigned int, unsigned int, const char *); // rcx
  unsigned int v9; // r14d
  __int64 v10; // rax
  unsigned int v11; // ebx
  void (*v13)(unsigned int, unsigned int, unsigned int, const char *); // rax
  signed int v14; // r13d
  _BYTE *v15; // r12
  char v16; // r14
  FARPROC ProcAddress; // rax
  unsigned __int8 (__fastcall *v18)(wil::details *__hidden); // rcx
  char v19; // al
  void (*v20)(unsigned int, unsigned int, unsigned int, const char *); // rax
  signed int v21; // edi
  _BYTE *v22; // r14
  char v23; // bl
  FARPROC v24; // rax
  unsigned __int8 (__fastcall *v25)(wil::details *__hidden); // rcx
  char v26; // al
  int v27; // eax
  int v28; // eax
  PTP_TIMER ThreadpoolTimer; // rax
  PTP_TIMER v30; // rax
  HMODULE NtDllModuleHandle; // rax
  void (*v32)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax
  HMODULE v33; // rax
  void (*v34)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax
  char *v35; // rax
  bool v36; // sf
  char *v37; // r12
  char *v38; // rax
  char *v39; // r14
  void *v40; // rax
  void *v41; // rax
  enum wil_VariantReportingKind *v42; // [rsp+30h] [rbp-59h]
  unsigned __int64 v43; // [rsp+40h] [rbp-49h]
  int v44; // [rsp+50h] [rbp-39h] BYREF
  __int16 v45; // [rsp+54h] [rbp-35h]
  unsigned int v46; // [rsp+58h] [rbp-31h] BYREF
  __int16 v47; // [rsp+5Ch] [rbp-2Dh]
  unsigned int v48; // [rsp+60h] [rbp-29h]
  char *v49; // [rsp+68h] [rbp-21h] BYREF
  _BYTE v50[24]; // [rsp+70h] [rbp-19h] BYREF
  __int128 v51; // [rsp+88h] [rbp-1h] BYREF
  __int64 v52; // [rsp+98h] [rbp+Fh]
  __int64 v53; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v54; // [rsp+A8h] [rbp+1Fh]
  int v55; // [rsp+B0h] [rbp+27h]
  int v56; // [rsp+B4h] [rbp+2Bh]

  v2 = ((__int64 (*)(void))wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetCachedVariantState)();
  v3 = v2 == (char)a1;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0 )
    ((void (*)(void))wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetCachedVariantState)();
  LOBYTE(v45) = 3;
  v46 = 0;
  v47 = v45;
  v44 = 2;
  if ( v2 == a1 )
  {
    v5 = 320;
    v4 = 1;
  }
  else
  {
    v4 = 0;
    v5 = 256;
  }
  v6 = v5 + a1;
  v48 = v6;
  v7 = wil_details_RecordUsageInPropertyCache(
         v50,
         &`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data,
         v6);
  v8 = wil::details::WilApiImpl_RecordFeatureUsage;
  v51 = *(_OWORD *)v7;
  v52 = *(_QWORD *)(v7 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage != (char *)wil::details::RecordFeatureUsageCallback )
    {
      g_wil_details_recordFeatureUsage(
        0xC36614u,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data,
        (struct wil_details_RecordUsageResult *)&v51);
LABEL_12:
      v8 = (void (__fastcall *)(wil::details *__hidden, unsigned int, unsigned int, unsigned int, const char *))`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data;
      if ( (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0x20 )
      {
        v55 = 0;
        v56 = (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data >> 2) & 1;
        v53 = 0LL;
        v54 = v6;
        ((void (__fastcall *)(__int64, _QWORD, __int64 *))g_wil_details_recordFeatureUsage)(12805652LL, 0LL, &v53);
      }
      goto LABEL_14;
    }
    if ( (_DWORD)v51 )
      wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        &wil::details::g_enabledStateManager,
        0xC36614u,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data);
    v9 = DWORD1(v51);
    if ( !DWORD1(v51) )
    {
LABEL_10:
      if ( !(_DWORD)v52 && wil::details::g_enabledStateManager )
      {
        AcquireSRWLockExclusive(&stru_1802D6B18);
        if ( !qword_1802D6B38 )
        {
          v32 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
          qword_1802D6B38 = 0LL;
          if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
            || (v32 = g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
          {
            ((void (__fastcall *)(__int64 *, __int64 (__fastcall *)(), __int64))v32)(
              &qword_1802D6B38,
              lambda_87c8d85798ea78242f0953b15d7cc197_::_lambda_invoker_cdecl_,
              -1LL);
          }
        }
        ReleaseSRWLockExclusive(&stru_1802D6B18);
      }
      v6 = v48;
      goto LABEL_12;
    }
    v13 = g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage )
    {
      if ( (char *)g_wil_details_internalRecordFeatureUsage == (char *)wil::details::WilApiImpl_RecordFeatureUsage )
      {
        v14 = DWORD2(v51) & 0x7FFFFFFF;
        if ( !wil::details::g_featureStateManager )
          goto LABEL_10;
        v15 = *(&xmmword_1802D6A10 + 1);
        if ( *(&xmmword_1802D6A10 + 1) )
        {
LABEL_42:
          if ( v14 == 254 )
          {
            wil::details_abi::FeatureStateData::RecordUsage((wil::details_abi::FeatureStateData *)v15);
          }
          else
          {
            if ( (unsigned __int64)v14 >= 0xC8 && (v14 < 256 || (unsigned __int64)v14 >= 0x200) )
              goto LABEL_10;
            AcquireSRWLockExclusive((PSRWLOCK)v15);
            if ( (unsigned int)(v14 - 256) <= 0x7F || (unsigned int)v14 <= 7 && (v27 = 204, _bittest(&v27, v14)) )
            {
              wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,0>::RecordUsage((wil::details_abi::RawUsageIndex *)(v15 + 8));
              v16 = v15[64];
            }
            else
            {
              v16 = wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,2>::RecordUsage(
                      v15 + 72,
                      (unsigned int)v14,
                      12805652LL,
                      v9);
            }
            ReleaseSRWLockExclusive((PSRWLOCK)v15);
            if ( !v16 )
              goto LABEL_10;
          }
          if ( !wil::details::g_processShutdownInProgress )
          {
            ProcAddress = (FARPROC)wil::details::g_pfnRtlDllShutdownInProgress;
            if ( !wil::details::g_pfnRtlDllShutdownInProgress
              || ((v18 = wil::details::RtlDllShutdownInProgress,
                   (char *)wil::details::g_pfnRtlDllShutdownInProgress != (char *)wil::details::RtlDllShutdownInProgress)
               || (ProcAddress = (FARPROC)`wil::details::RtlDllShutdownInProgress'::`2'::s_pfnRtlDllShutdownInProgress) != 0LL
               || (NtDllModuleHandle = wil_details_GetNtDllModuleHandle(),
                   ProcAddress = GetProcAddress(NtDllModuleHandle, "RtlDllShutdownInProgress"),
                   (`wil::details::RtlDllShutdownInProgress'::`2'::s_pfnRtlDllShutdownInProgress = (__int64)ProcAddress) != 0)
                ? (v19 = ((__int64 (__fastcall *)(_QWORD))ProcAddress)(v18))
                : (v19 = 0),
                  !v19) )
            {
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
          goto LABEL_10;
        }
        v35 = (char *)xmmword_1802D6A10;
        if ( xmmword_1802D6A10 )
          goto LABEL_106;
        v49 = 0LL;
        v36 = (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(
                     qword_1802D6A08,
                     &v49) < 0;
        v35 = (char *)xmmword_1802D6A10;
        if ( !v36 )
        {
          if ( xmmword_1802D6A10 )
            goto LABEL_106;
          v35 = v49;
          xmmword_1802D6A10 = v49;
        }
        if ( !v35 )
        {
          v37 = 0LL;
LABEL_116:
          AcquireSRWLockExclusive(&stru_1802D6A20);
          v40 = *(&xmmword_1802D6A10 + 1);
          if ( !*(&xmmword_1802D6A10 + 1) )
            v40 = v37;
          *(&xmmword_1802D6A10 + 1) = v40;
          ReleaseSRWLockExclusive(&stru_1802D6A20);
          v15 = *(&xmmword_1802D6A10 + 1);
          if ( !*(&xmmword_1802D6A10 + 1) )
            goto LABEL_10;
          goto LABEL_42;
        }
LABEL_106:
        v37 = v35 + 32;
        goto LABEL_116;
      }
    }
    else
    {
      v13 = g_wil_details_apiRecordFeatureUsage;
      if ( !g_wil_details_apiRecordFeatureUsage )
        goto LABEL_10;
    }
    ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, int))v13)(12805652LL, DWORD2(v51), DWORD1(v51), 0LL, 1);
    goto LABEL_10;
  }
LABEL_14:
  if ( !(_DWORD)v52 && g_wil_details_pfnFeatureLoggingHook )
  {
    LOBYTE(v42) = a1;
    if ( (char *)g_wil_details_pfnFeatureLoggingHook == (char *)wil::details::FeatureLoggingHook )
      wil::details::FeatureLoggingHook(
        (wil::details *)0xC36614,
        (unsigned int)&v46,
        0LL,
        (const struct FEATURE_ERROR *)v4,
        0LL,
        (const enum wil_ReportingKind *)&v44,
        v42,
        1,
        v43);
    else
      g_wil_details_pfnFeatureLoggingHook(
        0xC36614u,
        (const struct FEATURE_LOGGED_TRAITS *)&v46,
        0LL,
        v4,
        0LL,
        (const enum wil_VariantReportingKind *)&v44,
        a1,
        1uLL);
  }
  if ( !v2 && a1 )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetCachedVariantState(v8);
    v46 = 0;
    LOBYTE(v45) = 3;
    v47 = v45;
    v44 = 2;
    v10 = wil_details_RecordUsageInPropertyCache(
            v50,
            &`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data,
            320LL);
    v51 = *(_OWORD *)v10;
    v52 = *(_QWORD *)(v10 + 16);
    if ( !g_wil_details_recordFeatureUsage )
      goto LABEL_30;
    if ( (char *)g_wil_details_recordFeatureUsage != (char *)wil::details::RecordFeatureUsageCallback )
    {
      g_wil_details_recordFeatureUsage(
        0xC36614u,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data,
        (struct wil_details_RecordUsageResult *)&v51);
LABEL_28:
      if ( (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0x20 )
      {
        v55 = 0;
        v56 = (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data >> 2) & 1;
        v53 = 0LL;
        v54 = 320LL;
        ((void (__fastcall *)(__int64, _QWORD, __int64 *))g_wil_details_recordFeatureUsage)(12805652LL, 0LL, &v53);
      }
LABEL_30:
      if ( !(_DWORD)v52 && g_wil_details_pfnFeatureLoggingHook )
        g_wil_details_pfnFeatureLoggingHook(
          0xC36614u,
          (const struct FEATURE_LOGGED_TRAITS *)&v46,
          0LL,
          1,
          0LL,
          (const enum wil_VariantReportingKind *)&v44,
          0,
          1uLL);
      return v3;
    }
    if ( (_DWORD)v51 )
      wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        &wil::details::g_enabledStateManager,
        0xC36614u,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data);
    v11 = DWORD1(v51);
    if ( !DWORD1(v51) )
    {
LABEL_27:
      if ( !(_DWORD)v52 && wil::details::g_enabledStateManager )
      {
        AcquireSRWLockExclusive(&stru_1802D6B18);
        if ( !qword_1802D6B38 )
        {
          v34 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
          qword_1802D6B38 = 0LL;
          if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
            || (v34 = g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
          {
            ((void (__fastcall *)(__int64 *, __int64 (__fastcall *)(), __int64))v34)(
              &qword_1802D6B38,
              lambda_87c8d85798ea78242f0953b15d7cc197_::_lambda_invoker_cdecl_,
              -1LL);
          }
        }
        ReleaseSRWLockExclusive(&stru_1802D6B18);
      }
      goto LABEL_28;
    }
    v20 = g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage )
    {
      if ( (char *)g_wil_details_internalRecordFeatureUsage == (char *)wil::details::WilApiImpl_RecordFeatureUsage )
      {
        v21 = DWORD2(v51) & 0x7FFFFFFF;
        if ( !wil::details::g_featureStateManager )
          goto LABEL_27;
        v22 = *(&xmmword_1802D6A10 + 1);
        if ( *(&xmmword_1802D6A10 + 1) )
        {
LABEL_62:
          if ( v21 == 254 )
          {
            wil::details_abi::FeatureStateData::RecordUsage((wil::details_abi::FeatureStateData *)v22);
          }
          else
          {
            if ( (unsigned __int64)v21 >= 0xC8 && (v21 < 256 || (unsigned __int64)v21 >= 0x200) )
              goto LABEL_27;
            AcquireSRWLockExclusive((PSRWLOCK)v22);
            if ( (unsigned int)(v21 - 256) <= 0x7F || (unsigned int)v21 <= 7 && (v28 = 204, _bittest(&v28, v21)) )
            {
              wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,0>::RecordUsage((wil::details_abi::RawUsageIndex *)(v22 + 8));
              v23 = v22[64];
            }
            else
            {
              v23 = wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,2>::RecordUsage(
                      v22 + 72,
                      (unsigned int)v21,
                      12805652LL,
                      v11);
            }
            ReleaseSRWLockExclusive((PSRWLOCK)v22);
            if ( !v23 )
              goto LABEL_27;
          }
          if ( !wil::details::g_processShutdownInProgress )
          {
            v24 = (FARPROC)wil::details::g_pfnRtlDllShutdownInProgress;
            if ( !wil::details::g_pfnRtlDllShutdownInProgress
              || ((v25 = wil::details::RtlDllShutdownInProgress,
                   (char *)wil::details::g_pfnRtlDllShutdownInProgress != (char *)wil::details::RtlDllShutdownInProgress)
               || (v24 = (FARPROC)`wil::details::RtlDllShutdownInProgress'::`2'::s_pfnRtlDllShutdownInProgress) != 0LL
               || (v33 = wil_details_GetNtDllModuleHandle(),
                   v24 = GetProcAddress(v33, "RtlDllShutdownInProgress"),
                   (`wil::details::RtlDllShutdownInProgress'::`2'::s_pfnRtlDllShutdownInProgress = (__int64)v24) != 0)
                ? (v26 = ((__int64 (__fastcall *)(_QWORD))v24)(v25))
                : (v26 = 0),
                  !v26) )
            {
              AcquireSRWLockExclusive(&stru_1802D6A20);
              if ( !byte_1802D6A41 )
              {
                if ( !(_QWORD)xmmword_1802D6A30 )
                {
                  v30 = CreateThreadpoolTimer(
                          lambda_2586d60923f8412dce879009b83555c3_::_lambda_invoker_cdecl_,
                          &wil::details::g_featureStateManager,
                          0LL);
                  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
                    &xmmword_1802D6A30,
                    v30);
                }
                wil::details::EnsureCoalescedTimer_SetTimer(&xmmword_1802D6A30, &byte_1802D6A41, 300000LL);
              }
              ReleaseSRWLockExclusive(&stru_1802D6A20);
            }
          }
          goto LABEL_27;
        }
        v38 = (char *)xmmword_1802D6A10;
        if ( xmmword_1802D6A10 )
          goto LABEL_112;
        v49 = 0LL;
        v36 = (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(
                     qword_1802D6A08,
                     &v49) < 0;
        v38 = (char *)xmmword_1802D6A10;
        if ( !v36 )
        {
          if ( xmmword_1802D6A10 )
            goto LABEL_112;
          v38 = v49;
          xmmword_1802D6A10 = v49;
        }
        if ( !v38 )
        {
          v39 = 0LL;
LABEL_127:
          AcquireSRWLockExclusive(&stru_1802D6A20);
          v41 = *(&xmmword_1802D6A10 + 1);
          if ( !*(&xmmword_1802D6A10 + 1) )
            v41 = v39;
          *(&xmmword_1802D6A10 + 1) = v41;
          ReleaseSRWLockExclusive(&stru_1802D6A20);
          v22 = *(&xmmword_1802D6A10 + 1);
          if ( !*(&xmmword_1802D6A10 + 1) )
            goto LABEL_27;
          goto LABEL_62;
        }
LABEL_112:
        v39 = v38 + 32;
        goto LABEL_127;
      }
    }
    else
    {
      v20 = g_wil_details_apiRecordFeatureUsage;
      if ( !g_wil_details_apiRecordFeatureUsage )
        goto LABEL_27;
    }
    ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, int))v20)(12805652LL, DWORD2(v51), DWORD1(v51), 0LL, 1);
    goto LABEL_27;
  }
  return v3;
}
