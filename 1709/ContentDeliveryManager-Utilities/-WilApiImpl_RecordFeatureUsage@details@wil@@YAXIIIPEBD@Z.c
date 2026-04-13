/*
 * XREFs of ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18000AC20
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x180007AF8 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     ?wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IG@Z @ 0x180008078 (-wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IG@Z.c)
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x180009FB0 (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x18000A3E4 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18000A640 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::WilApiImpl_RecordFeatureUsage(wil::details *this, int a2, unsigned int a3)
{
  unsigned __int16 v3; // bx
  unsigned int v4; // edi
  int v5; // eax
  HANDLE ProcessHeap; // rax
  unsigned int v7[14]; // [rsp+30h] [rbp-148h] BYREF
  LPVOID lpMem; // [rsp+68h] [rbp-110h]
  int v9; // [rsp+80h] [rbp-F8h]
  char v10[208]; // [rsp+90h] [rbp-E8h] BYREF

  v3 = a2;
  v4 = (unsigned int)this;
  if ( (_DWORD)this )
  {
    if ( !a3 )
      goto LABEL_11;
LABEL_16:
    wil::details::FeatureStateManager::RecordFeatureUsage(
      &wil::details::g_featureStateManager,
      (unsigned int)this,
      a2,
      a3);
    return;
  }
  if ( a3 )
    goto LABEL_16;
  if ( !a2 )
  {
    if ( !wil::details::g_processShutdownInProgress )
    {
      v5 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
      if ( wil::details::g_pfnRtlDllShutdownInProgress )
        v5 = wil::details::g_pfnRtlDllShutdownInProgress();
      if ( !v5
        && wil::details::FeatureStateManager::EnsureStateData((RTL_SRWLOCK *)&wil::details::g_featureStateManager) )
      {
        wil::details_abi::SubscriptionList::OnSignaled((LPCRITICAL_SECTION)&qword_18015C178[25], qword_18015C178);
      }
    }
    return;
  }
LABEL_11:
  if ( a2 == 254 )
    goto LABEL_16;
  if ( !g_wil_details_preventOnDemandStagingConfigReads
    && !(unsigned int)wil_details_StagingConfig_Load(v7, 0, 0xC8uLL, v10, 0) )
  {
    wil_details_StagingConfig_FireNotification(
      (struct wil_details_StagingConfig *)v7,
      (const struct __WIL__WNF_TYPE_ID *)v4,
      (const void *)v3);
    if ( v9 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
  }
}
