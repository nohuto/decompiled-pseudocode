/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180055170
 * Callers:
 *     ?EnsureImpl@Dwm3DRECompositorThunk@@AEAAXXZ @ 0x1800424C0 (-EnsureImpl@Dwm3DRECompositorThunk@@AEAAXXZ.c)
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x1800441D0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180048000 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004BFF0 (--1CVisual@@MEAA@XZ.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18005D3B0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800BAE58 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18001B364 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800558E8 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x1800BB5B8 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x1800BB9B8 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x1800BBBCC (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x1800BBCCC (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePro.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x1800BBD88 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x1800BC404 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800BC430 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@AEA_N_J@Z @ 0x1800C8984 (-EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV-$unique_any_t@V-$unique_storage@U-$resource_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800C89C0 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800DCD88 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_.c)
 *     ?wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IGH@Z @ 0x1800DCDB8 (-wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IGH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x180142538 (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 */

void __fastcall wil::details::RecordFeatureUsageCallback(
        wil::details *this,
        union wil_details_FeaturePropertyCache *a2,
        union wil_details_FeaturePropertyCache *a3,
        struct wil_details_RecordUsageResult *a4)
{
  unsigned int v5; // ebp
  unsigned int v6; // esi
  void (*v7)(unsigned int, unsigned int, unsigned int, const char *); // rax
  unsigned int v8; // r14d
  signed int v9; // r14d
  _BYTE *v10; // rdi
  char v11; // si
  __int64 (*ProcAddress)(void); // rax
  int v13; // eax
  HMODULE NtDllModuleHandle; // rax
  PTP_TIMER ThreadpoolTimer; // rax
  void (*v16)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax
  char *v17; // rax
  bool v18; // sf
  char *v19; // rdi
  void *v20; // rax
  __int64 v21; // rdx
  char *v22; // [rsp+30h] [rbp-178h] BYREF

  v5 = (unsigned int)this;
  if ( a2 )
  {
    if ( *(_DWORD *)a3 )
      wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        &wil::details::g_enabledStateManager,
        (unsigned int)this,
        a2);
    v6 = *((_DWORD *)a3 + 1);
    if ( !v6 )
      goto LABEL_5;
    v7 = g_wil_details_internalRecordFeatureUsage;
    v8 = *((_DWORD *)a3 + 2);
    if ( g_wil_details_internalRecordFeatureUsage )
    {
      if ( (char *)g_wil_details_internalRecordFeatureUsage == (char *)wil::details::WilApiImpl_RecordFeatureUsage )
      {
        v9 = v8 & 0x7FFFFFFF;
        if ( !wil::details::g_featureStateManager )
          goto LABEL_5;
        v10 = *(&xmmword_1802D6A10 + 1);
        if ( !*(&xmmword_1802D6A10 + 1) )
        {
          v17 = (char *)xmmword_1802D6A10;
          if ( !xmmword_1802D6A10 )
          {
            v22 = 0LL;
            v18 = (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(
                         qword_1802D6A08,
                         &v22) < 0;
            v17 = (char *)xmmword_1802D6A10;
            if ( !v18 )
            {
              if ( !xmmword_1802D6A10 )
                v17 = v22;
              xmmword_1802D6A10 = v17;
            }
          }
          v19 = v17 + 32;
          if ( !v17 )
            v19 = 0LL;
          AcquireSRWLockExclusive(&stru_1802D6A20);
          v20 = *(&xmmword_1802D6A10 + 1);
          if ( !*(&xmmword_1802D6A10 + 1) )
            v20 = v19;
          *(&xmmword_1802D6A10 + 1) = v20;
          ReleaseSRWLockExclusive(&stru_1802D6A20);
          v10 = *(&xmmword_1802D6A10 + 1);
          if ( !*(&xmmword_1802D6A10 + 1) )
            goto LABEL_5;
        }
        if ( v9 == 254 )
        {
          wil::details_abi::FeatureStateData::RecordUsage((wil::details_abi::FeatureStateData *)v10);
LABEL_21:
          if ( !wil::details::g_processShutdownInProgress )
          {
            ProcAddress = (__int64 (*)(void))wil::details::g_pfnRtlDllShutdownInProgress;
            if ( !wil::details::g_pfnRtlDllShutdownInProgress )
              goto LABEL_27;
            if ( (char *)wil::details::g_pfnRtlDllShutdownInProgress != (char *)wil::details::RtlDllShutdownInProgress
              || (ProcAddress = (__int64 (*)(void))`wil::details::RtlDllShutdownInProgress'::`2'::s_pfnRtlDllShutdownInProgress) != 0LL
              || (NtDllModuleHandle = wil_details_GetNtDllModuleHandle(),
                  ProcAddress = GetProcAddress(NtDllModuleHandle, "RtlDllShutdownInProgress"),
                  (`wil::details::RtlDllShutdownInProgress'::`2'::s_pfnRtlDllShutdownInProgress = (__int64)ProcAddress) != 0) )
            {
              LOBYTE(ProcAddress) = ProcAddress();
            }
            if ( !(_BYTE)ProcAddress )
            {
LABEL_27:
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
          goto LABEL_5;
        }
        if ( (unsigned __int64)v9 < 0xC8 || v9 >= 256 && (unsigned __int64)v9 < 0x200 )
        {
          AcquireSRWLockExclusive((PSRWLOCK)v10);
          if ( (unsigned int)(v9 - 256) <= 0x7F || (unsigned int)v9 <= 7 && (v13 = 204, _bittest(&v13, v9)) )
          {
            wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,0>::RecordUsage((wil::details_abi::RawUsageIndex *)(v10 + 8));
            v11 = v10[64];
          }
          else
          {
            v11 = wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,2>::RecordUsage(
                    v10 + 72,
                    (unsigned int)v9,
                    v5,
                    v6);
          }
          ReleaseSRWLockExclusive((PSRWLOCK)v10);
          if ( v11 )
            goto LABEL_21;
        }
LABEL_5:
        if ( !*((_DWORD *)a3 + 4) && wil::details::g_enabledStateManager )
        {
          AcquireSRWLockExclusive(&stru_1802D6B18);
          if ( !qword_1802D6B38 )
          {
            v16 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
            qword_1802D6B38 = 0LL;
            if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
              || (v16 = g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
            {
              ((void (__fastcall *)(__int64 *, __int64 (__fastcall *)(), __int64))v16)(
                &qword_1802D6B38,
                lambda_87c8d85798ea78242f0953b15d7cc197_::_lambda_invoker_cdecl_,
                -1LL);
            }
          }
          ReleaseSRWLockExclusive(&stru_1802D6B18);
        }
        return;
      }
    }
    else
    {
      v7 = g_wil_details_apiRecordFeatureUsage;
      if ( !g_wil_details_apiRecordFeatureUsage )
        goto LABEL_5;
    }
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(v5, v8, v6, 0LL);
    goto LABEL_5;
  }
  v21 = *((unsigned int *)a3 + 2);
  LODWORD(v21) = v21 | 0x80000000;
  if ( !*((_DWORD *)a3 + 5) )
    v21 = *((unsigned int *)a3 + 2);
  wil::details::WilApi_RecordFeatureUsage(this, v21, 0LL);
}
