/*
 * XREFs of ndisIMInitializeDeviceInstance @ 0x1C00E5C1C
 * Callers:
 *     ndisStartDeviceSynchronous @ 0x1C00C6274 (ndisStartDeviceSynchronous.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C00E5660 (NdisIMInitializeDeviceInstanceEx.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BBF78 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC060 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BCF40 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00BFB6C (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C67C8 (ndisMSetMiniportReadyForBinding.c)
 *     ndisPnPStartDevice @ 0x1C00C6974 (ndisPnPStartDevice.c)
 *     ndisReinitializeMiniportBlock @ 0x1C010F99C (ndisReinitializeMiniportBlock.c)
 */

__int64 __fastcall ndisIMInitializeDeviceInstance(char *DeferredContext, __int64 a2)
{
  __int64 v4; // r8
  unsigned int v5; // ebx

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x23u, &WPP_f15752027639342d7f4a984ed5eb2bc7_Traceguids, DeferredContext, a2);
  ndisReinitializeMiniportBlock(DeferredContext);
  if ( (unsigned __int8)DeferredContext[32] < 6u )
  {
    *((_DWORD *)DeferredContext + 973) = 0;
    *((_DWORD *)DeferredContext + 976) = 0;
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)(DeferredContext + 5256));
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(DeferredContext + 5160, 0LL);
    if ( Ndis::BindState::SetPause((Ndis::BindState *)(DeferredContext + 5064), DatapathRunning, PauseReason_LowPower)
      && (unsigned __int8)byte_1C0099623 >= 4u )
    {
      WPP_SF_Zq(
        0x24u,
        &WPP_f15752027639342d7f4a984ed5eb2bc7_Traceguids,
        *((const wchar_t **)DeferredContext + 485),
        DeferredContext);
    }
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(DeferredContext + 5136));
    Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(DeferredContext + 5136), RunSynchronous, 0);
  }
  *((_QWORD *)DeferredContext + 247) = a2;
  v5 = ndisPnPStartDevice(DeferredContext, 0LL, v4);
  if ( v5 )
    v5 = -1073741823;
  else
    ndisMSetMiniportReadyForBinding(
      (__int64)DeferredContext,
      1,
      Reason_RemovingMiniport|Reason_DriverNotReady,
      RunSynchronous);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqd(0x25u, &WPP_f15752027639342d7f4a984ed5eb2bc7_Traceguids, DeferredContext, a2, v5);
  return v5;
}
