/*
 * XREFs of ndisIMInitializeDeviceInstance @ 0x1C00E43B8
 * Callers:
 *     ndisStartDeviceSynchronous @ 0x1C00C0AB8 (ndisStartDeviceSynchronous.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C00E3E00 (NdisIMInitializeDeviceInstanceEx.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BAD34 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BBF04 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisPnPStartDevice @ 0x1C00C0924 (ndisPnPStartDevice.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C103C (ndisMSetMiniportReadyForBinding.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00C6398 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisReinitializeMiniportBlock @ 0x1C010DA28 (ndisReinitializeMiniportBlock.c)
 */

__int64 __fastcall ndisIMInitializeDeviceInstance(char *DeferredContext, __int64 a2)
{
  __int64 v4; // r8
  unsigned int v5; // ebx

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x23u, &WPP_666d18e4e4b135fd66b72aa04d21ecd1_Traceguids, DeferredContext, a2);
  ndisReinitializeMiniportBlock(DeferredContext);
  if ( (unsigned __int8)DeferredContext[32] < 6u )
  {
    *((_DWORD *)DeferredContext + 973) = 0;
    *((_DWORD *)DeferredContext + 976) = 0;
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)(DeferredContext + 5256));
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(DeferredContext + 5160, 0LL);
    if ( Ndis::BindState::SetPause((Ndis::BindState *)(DeferredContext + 5064), DatapathRunning, PauseReason_LowPower)
      && (unsigned __int8)byte_1C0098763 >= 4u )
    {
      WPP_SF_Zq(
        0x24u,
        &WPP_666d18e4e4b135fd66b72aa04d21ecd1_Traceguids,
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
    WPP_SF_qqd(0x25u, &WPP_666d18e4e4b135fd66b72aa04d21ecd1_Traceguids, DeferredContext, a2, v5);
  return v5;
}
