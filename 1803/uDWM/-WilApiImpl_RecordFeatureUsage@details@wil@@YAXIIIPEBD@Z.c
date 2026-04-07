/*
 * XREFs of ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800051D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x180005260 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18003576C (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180039434 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x180042708 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x18006E100 (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IGH@Z @ 0x18006EFC0 (-wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IGH@Z.c)
 */

void __fastcall wil::details::WilApiImpl_RecordFeatureUsage(wil::details *this, unsigned int a2, __int64 a3)
{
  int v3; // esi
  unsigned int v4; // ebx
  unsigned int v5; // edi
  HANDLE ProcessHeap; // rax
  _BYTE v7[56]; // [rsp+30h] [rbp-148h] BYREF
  LPVOID lpMem; // [rsp+68h] [rbp-110h]
  int v9; // [rsp+80h] [rbp-F8h]
  _BYTE v10[208]; // [rsp+90h] [rbp-E8h] BYREF

  v3 = a2 >> 31;
  v4 = a2 & 0x7FFFFFFF;
  v5 = (unsigned int)this;
  if ( (_DWORD)this )
  {
    if ( (_DWORD)a3 )
    {
LABEL_3:
      wil::details::FeatureStateManager::RecordFeatureUsage(
        &wil::details::g_featureStateManager,
        (unsigned int)this,
        v4,
        (unsigned int)a3);
      return;
    }
  }
  else
  {
    if ( (_DWORD)a3 )
      goto LABEL_3;
    if ( !v4 )
    {
      if ( !wil::ProcessShutdownInProgress(this)
        && wil::details::FeatureStateManager::EnsureStateData((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager) )
      {
        wil::details_abi::SubscriptionList::OnSignaled(
          (LPCRITICAL_SECTION)*(&xmmword_1800C9E90 + 1) + 5,
          (PSRWLOCK)*(&xmmword_1800C9E90 + 1));
      }
      return;
    }
  }
  if ( v4 == 254 )
    goto LABEL_3;
  if ( !g_wil_details_preventOnDemandStagingConfigReads
    && !(unsigned int)wil_details_StagingConfig_Load(v7, 0LL, a3, v10) )
  {
    wil_details_StagingConfig_FireNotification((struct wil_details_StagingConfig *)v7, v5, v4, v3);
    if ( v9 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
  }
}
