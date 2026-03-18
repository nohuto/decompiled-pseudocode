/*
 * XREFs of ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180079B20
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180079B9C (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x180079BD4 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180079C8C (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x180133ED4 (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IG@Z @ 0x180135278 (-wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IG@Z.c)
 *     ?wil_details_StagingConfig_Free@@YAXPEAUwil_details_StagingConfig@@@Z @ 0x180135408 (-wil_details_StagingConfig_Free@@YAXPEAUwil_details_StagingConfig@@@Z.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x18013543C (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 */

void __fastcall wil::details::WilApiImpl_RecordFeatureUsage(wil::details *this, unsigned int a2, __int64 a3)
{
  unsigned __int16 v3; // bx
  unsigned int v4; // edi
  _BYTE v5[96]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v6[208]; // [rsp+90h] [rbp-E8h] BYREF

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
        wil::details_abi::SubscriptionList::OnSignaled((LPCRITICAL_SECTION)&qword_180272048[25], qword_180272048);
      }
      return;
    }
  }
  if ( a2 == 254 )
    goto LABEL_3;
  if ( !g_wil_details_preventOnDemandStagingConfigReads
    && !(unsigned int)wil_details_StagingConfig_Load(v5, 0LL, a3, v6) )
  {
    wil_details_StagingConfig_FireNotification((struct wil_details_StagingConfig *)v5, v4, v3);
    wil_details_StagingConfig_Free((struct wil_details_StagingConfig *)v5);
  }
}
