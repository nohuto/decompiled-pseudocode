/*
 * XREFs of ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180055680
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800558E8 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x1800BB5B8 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x1800BB9B8 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x1800BBBCC (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
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

void __fastcall wil::details::WilApiImpl_RecordFeatureUsage(wil::details *this, int a2, __int64 a3)
{
  unsigned int v3; // ebp
  BOOL v4; // ebx
  unsigned int v5; // esi
  int v6; // edi
  _BYTE *v7; // rbx
  char v8; // di
  __int64 (*ProcAddress)(void); // rax
  int v10; // eax
  HMODULE NtDllModuleHandle; // rax
  PTP_TIMER ThreadpoolTimer; // rax
  HANDLE ProcessHeap; // rax
  char *v14; // rax
  bool v15; // sf
  char *v16; // rbx
  void *v17; // rax
  char *v18; // [rsp+30h] [rbp-168h] BYREF
  _BYTE v19[56]; // [rsp+40h] [rbp-158h] BYREF
  LPVOID lpMem; // [rsp+78h] [rbp-120h]
  int v21; // [rsp+90h] [rbp-108h]
  char v22[208]; // [rsp+A0h] [rbp-F8h] BYREF

  v3 = a3;
  v4 = a2 < 0;
  v5 = (unsigned int)this;
  v6 = a2 & 0x7FFFFFFF;
  if ( !(_DWORD)this )
  {
    if ( (_DWORD)a3 )
      goto LABEL_3;
    if ( !v6 )
    {
      if ( !wil::ProcessShutdownInProgress(this)
        && wil::details::FeatureStateManager::EnsureStateData((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager) )
      {
        wil::details_abi::SubscriptionList::OnSignaled(
          (LPCRITICAL_SECTION)*(&xmmword_1802D6A10 + 1) + 5,
          (PSRWLOCK)*(&xmmword_1802D6A10 + 1));
      }
      return;
    }
LABEL_29:
    if ( v6 != 254 )
    {
      if ( !g_wil_details_preventOnDemandStagingConfigReads
        && !(unsigned int)wil_details_StagingConfig_Load(v19, 0LL, a3, v22) )
      {
        wil_details_StagingConfig_FireNotification((struct wil_details_StagingConfig *)v19, v5, v6, v4);
        if ( v21 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, lpMem);
        }
      }
      return;
    }
    goto LABEL_3;
  }
  if ( !(_DWORD)a3 )
    goto LABEL_29;
LABEL_3:
  if ( wil::details::g_featureStateManager )
  {
    v7 = *(&xmmword_1802D6A10 + 1);
    if ( *(&xmmword_1802D6A10 + 1) )
      goto LABEL_5;
    v14 = (char *)xmmword_1802D6A10;
    if ( !xmmword_1802D6A10 )
    {
      v18 = 0LL;
      v15 = (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(
                   qword_1802D6A08,
                   &v18) < 0;
      v14 = (char *)xmmword_1802D6A10;
      if ( !v15 )
      {
        if ( !xmmword_1802D6A10 )
          v14 = v18;
        xmmword_1802D6A10 = v14;
      }
    }
    v16 = v14 + 32;
    if ( !v14 )
      v16 = 0LL;
    AcquireSRWLockExclusive(&stru_1802D6A20);
    v17 = *(&xmmword_1802D6A10 + 1);
    if ( !*(&xmmword_1802D6A10 + 1) )
      v17 = v16;
    *(&xmmword_1802D6A10 + 1) = v17;
    ReleaseSRWLockExclusive(&stru_1802D6A20);
    v7 = *(&xmmword_1802D6A10 + 1);
    if ( *(&xmmword_1802D6A10 + 1) )
    {
LABEL_5:
      if ( v6 == 254 )
      {
        wil::details_abi::FeatureStateData::RecordUsage((wil::details_abi::FeatureStateData *)v7);
      }
      else
      {
        if ( (unsigned __int64)v6 >= 0xC8 && (v6 < 256 || (unsigned __int64)v6 >= 0x200) )
          return;
        AcquireSRWLockExclusive((PSRWLOCK)v7);
        if ( (unsigned int)(v6 - 256) <= 0x7F || (unsigned int)v6 <= 7 && (v10 = 204, _bittest(&v10, v6)) )
        {
          wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,0>::RecordUsage((wil::details_abi::RawUsageIndex *)(v7 + 8));
          v8 = v7[64];
        }
        else
        {
          v8 = wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,2>::RecordUsage(
                 v7 + 72,
                 (unsigned int)v6,
                 v5,
                 v3);
        }
        ReleaseSRWLockExclusive((PSRWLOCK)v7);
        if ( !v8 )
          return;
      }
      if ( !wil::details::g_processShutdownInProgress )
      {
        ProcAddress = (__int64 (*)(void))wil::details::g_pfnRtlDllShutdownInProgress;
        if ( !wil::details::g_pfnRtlDllShutdownInProgress )
          goto LABEL_18;
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
LABEL_18:
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
    }
  }
}
