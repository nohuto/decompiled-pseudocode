/*
 * XREFs of ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180031720
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18003179C (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x180031838 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x1800318F0 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x18003F908 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x1800681E0 (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IG@Z @ 0x1800689E0 (-wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IG@Z.c)
 */

void __fastcall wil::details::WilApiImpl_RecordFeatureUsage(wil::details *this, unsigned int a2, __int64 a3)
{
  unsigned __int16 v3; // bx
  unsigned int v4; // edi
  HANDLE ProcessHeap; // rax
  _BYTE v6[56]; // [rsp+30h] [rbp-148h] BYREF
  LPVOID lpMem; // [rsp+68h] [rbp-110h]
  int v8; // [rsp+80h] [rbp-F8h]
  _BYTE v9[208]; // [rsp+90h] [rbp-E8h] BYREF

  v3 = a2;
  v4 = (unsigned int)this;
  if ( (_DWORD)this )
  {
    if ( (_DWORD)a3 )
    {
LABEL_3:
      wil::details::FeatureStateManager::RecordFeatureUsage(
        &wil::details::g_featureStateManager,
        (unsigned int)this,
        a2,
        (unsigned int)a3);
      return;
    }
  }
  else
  {
    if ( (_DWORD)a3 )
      goto LABEL_3;
    if ( !a2 )
    {
      if ( !wil::ProcessShutdownInProgress(this)
        && wil::details::FeatureStateManager::EnsureStateData((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager) )
      {
        wil::details_abi::SubscriptionList::OnSignaled((LPCRITICAL_SECTION)&SRWLock[25], SRWLock);
      }
      return;
    }
  }
  if ( a2 == 254 )
    goto LABEL_3;
  if ( !g_wil_details_preventOnDemandStagingConfigReads
    && !(unsigned int)wil_details_StagingConfig_Load(v6, 0LL, a3, v9) )
  {
    wil_details_StagingConfig_FireNotification((struct wil_details_StagingConfig *)v6, v4, v3);
    if ( v8 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
  }
}
