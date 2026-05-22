/*
 * XREFs of ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800128D0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x18000FFD4 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     ?wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IGH@Z @ 0x180010524 (-wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IGH@Z.c)
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x180011DAC (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x180012038 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x1800121BC (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::WilApiImpl_RecordFeatureUsage(wil::details *this, unsigned int a2, __int64 a3)
{
  int v3; // esi
  int v4; // ebx
  unsigned int v5; // edi
  int v6; // eax
  HANDLE ProcessHeap; // rax
  unsigned int v8[14]; // [rsp+30h] [rbp-148h] BYREF
  LPVOID lpMem; // [rsp+68h] [rbp-110h]
  int v10; // [rsp+80h] [rbp-F8h]
  _BYTE v11[208]; // [rsp+90h] [rbp-E8h] BYREF

  v3 = a2 >> 31;
  v4 = a2 & 0x7FFFFFFF;
  v5 = (unsigned int)this;
  if ( (_DWORD)this )
  {
    if ( !(_DWORD)a3 )
      goto LABEL_11;
LABEL_16:
    wil::details::FeatureStateManager::RecordFeatureUsage(
      &wil::details::g_featureStateManager,
      (unsigned int)this,
      v4,
      a3);
    return;
  }
  if ( (_DWORD)a3 )
    goto LABEL_16;
  if ( !v4 )
  {
    if ( !wil::details::g_processShutdownInProgress )
    {
      v6 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
      if ( wil::details::g_pfnRtlDllShutdownInProgress )
        v6 = wil::details::g_pfnRtlDllShutdownInProgress();
      if ( !v6
        && wil::details::FeatureStateManager::EnsureStateData((RTL_SRWLOCK *)&wil::details::g_featureStateManager) )
      {
        wil::details_abi::SubscriptionList::OnSignaled((LPCRITICAL_SECTION)&qword_180134628[25], qword_180134628);
      }
    }
    return;
  }
LABEL_11:
  if ( v4 == 254 )
    goto LABEL_16;
  if ( !g_wil_details_preventOnDemandStagingConfigReads && !(unsigned int)wil_details_StagingConfig_Load(v8, 0, a3, v11) )
  {
    wil_details_StagingConfig_FireNotification(
      (struct wil_details_StagingConfig *)v8,
      (const struct __WIL__WNF_TYPE_ID *)v5,
      (const void *)(unsigned __int16)v4,
      v3);
    if ( v10 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
  }
}
