/*
 * XREFs of ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180007400
 * Callers:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180007058 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180007934 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180007024 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180007604 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180015F14 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?RtlDllShutdownInProgress@details@wil@@YAEXZ @ 0x180015F60 (-RtlDllShutdownInProgress@details@wil@@YAEXZ.c)
 *     ?EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@AEA_N_J@Z @ 0x180017E90 (-EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV-$unique_any_t@V-$unique_storage@U-$resource_.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180057FDC (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800583B4 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x18005F2E4 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x1800B1D60 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x1800B2C00 (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800B2F38 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_.c)
 *     ?wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IGH@Z @ 0x1800B3B80 (-wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IGH@Z.c)
 */

void __fastcall wil::details::WilApiImpl_RecordFeatureUsage(wil::details *this, unsigned int a2, __int64 a3)
{
  int v3; // ebx
  int v4; // edi
  unsigned int v5; // esi
  unsigned int v6; // ebp
  PSRWLOCK v7; // rbx
  int v8; // eax
  char Ptr; // di
  int v10; // eax
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *v12; // rdi
  struct _TP_TIMER *v13; // rsi
  HANDLE ProcessHeap; // rax
  void *v15; // rcx
  int v16; // eax
  __int64 v17; // rbx
  RTL_SRWLOCK *v18; // rax
  DWORD LastError; // ebx
  void *v20; // [rsp+30h] [rbp-168h] BYREF
  _BYTE v21[56]; // [rsp+40h] [rbp-158h] BYREF
  LPVOID lpMem; // [rsp+78h] [rbp-120h]
  int v23; // [rsp+90h] [rbp-108h]
  _BYTE v24[208]; // [rsp+A0h] [rbp-F8h] BYREF

  v3 = a2 >> 31;
  v4 = a2 & 0x7FFFFFFF;
  v5 = a3;
  v6 = (unsigned int)this;
  if ( !(_DWORD)this )
  {
    if ( (_DWORD)a3 )
      goto LABEL_3;
    if ( !v4 )
    {
      if ( !wil::ProcessShutdownInProgress(this)
        && wil::details::FeatureStateManager::EnsureStateData((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager) )
      {
        wil::details_abi::SubscriptionList::OnSignaled((LPCRITICAL_SECTION)&SRWLock[25], SRWLock);
      }
      return;
    }
LABEL_23:
    if ( v4 != 254 )
    {
      if ( !g_wil_details_preventOnDemandStagingConfigReads
        && !(unsigned int)wil_details_StagingConfig_Load(v21, 0LL, a3, v24) )
      {
        wil_details_StagingConfig_FireNotification((struct wil_details_StagingConfig *)v21, v6, v4, v3);
        if ( v23 )
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
    goto LABEL_23;
LABEL_3:
  if ( wil::details::g_featureStateManager )
  {
    v7 = SRWLock;
    if ( SRWLock )
      goto LABEL_5;
    v15 = qword_18018AC60;
    if ( !qword_18018AC60 )
    {
      v20 = 0LL;
      v16 = wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(
              qword_18018AC58,
              &v20);
      v15 = qword_18018AC60;
      if ( v16 >= 0 )
      {
        if ( !qword_18018AC60 )
          v15 = v20;
        qword_18018AC60 = v15;
      }
    }
    v17 = ((unsigned __int64)v15 + 32) & -(__int64)(v15 != 0LL);
    AcquireSRWLockExclusive(&stru_18018AC70);
    v18 = SRWLock;
    if ( !SRWLock )
      v18 = (RTL_SRWLOCK *)v17;
    SRWLock = v18;
    ReleaseSRWLockExclusive(&stru_18018AC70);
    v7 = SRWLock;
    if ( SRWLock )
    {
LABEL_5:
      if ( v4 == 254 )
      {
        wil::details_abi::FeatureStateData::RecordUsage((wil::details_abi::FeatureStateData *)v7);
        Ptr = 1;
      }
      else
      {
        if ( (unsigned __int64)v4 >= 0xC8 && (v4 < 256 || (unsigned __int64)v4 >= 0x200) )
          return;
        AcquireSRWLockExclusive(v7);
        if ( (unsigned int)v4 <= 7 && (v8 = 204, _bittest(&v8, v4)) || (unsigned int)(v4 - 256) <= 0x7F )
        {
          wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,0>::RecordUsage(
            (wil::details_abi::RawUsageIndex *)&v7[1],
            v4,
            v6);
          Ptr = (char)v7[8].Ptr;
        }
        else
        {
          Ptr = wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,2>::RecordUsage(
                  &v7[9],
                  (unsigned int)v4,
                  v6,
                  v5);
        }
        ReleaseSRWLockExclusive(v7);
      }
      if ( Ptr && !wil::details::g_processShutdownInProgress )
      {
        v10 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
        if ( wil::details::g_pfnRtlDllShutdownInProgress )
        {
          if ( (char *)wil::details::g_pfnRtlDllShutdownInProgress == (char *)wil::details::RtlDllShutdownInProgress )
            LOBYTE(v10) = wil::details::RtlDllShutdownInProgress((wil::details *)wil::details::RtlDllShutdownInProgress);
          else
            LOBYTE(v10) = wil::details::g_pfnRtlDllShutdownInProgress();
          v10 = (unsigned __int8)v10;
        }
        if ( !v10 )
        {
          AcquireSRWLockExclusive(&stru_18018AC70);
          if ( !byte_18018AC91 )
          {
            if ( !pti )
            {
              ThreadpoolTimer = CreateThreadpoolTimer(
                                  (PTP_TIMER_CALLBACK)lambda_2586d60923f8412dce879009b83555c3_::_lambda_invoker_cdecl_,
                                  &wil::details::g_featureStateManager,
                                  0LL);
              v12 = pti;
              v13 = ThreadpoolTimer;
              if ( pti )
              {
                LastError = GetLastError();
                wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v12);
                SetLastError(LastError);
              }
              pti = v13;
            }
            wil::details::EnsureCoalescedTimer_SetTimer(&pti, &byte_18018AC91, 300000LL);
          }
          ReleaseSRWLockExclusive(&stru_18018AC70);
        }
      }
    }
  }
}
