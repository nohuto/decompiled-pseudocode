/*
 * XREFs of ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C001F834
 * Callers:
 *     ndisSetDevicePower @ 0x1C001FA4C (ndisSetDevicePower.c)
 *     ndisSetSystemPower @ 0x1C00C6804 (ndisSetSystemPower.c)
 * Callees:
 *     ndisMSwapOpenHandlers @ 0x1C0010ACC (ndisMSwapOpenHandlers.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     ndisRequestWaitWake @ 0x1C00AE030 (ndisRequestWaitWake.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BAD34 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAF88 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BBF04 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00C63E8 (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C00C641C (ndisIssueNetEventSetPowerEvent.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C00C64C0 (ndisNotifyDevicePowerStateChange.c)
 *     ndisMInvokeDevicePowerNotify @ 0x1C00C6600 (ndisMInvokeDevicePowerNotify.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FA9CC (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisPrepForLowPower(struct _NDIS_MINIPORT_BLOCK *Context, unsigned int a2)
{
  unsigned int v4; // edi
  unsigned int FilterPnPFlags; // edx
  KIRQL v6; // al
  KIRQL v7; // bp
  unsigned int PnPFlags; // ecx
  _QWORD v10[20]; // [rsp+20h] [rbp-A8h] BYREF

  v4 = 0;
  ndisMInvokeDevicePowerNotify();
  ndisNotifyDevicePowerStateChange(Context, a2);
  if ( (Context->PnPFlags & 0x20) != 0 )
    ndisIssueNetEventSetPowerEvent(Context);
  FilterPnPFlags = Context->FilterPnPFlags;
  if ( (FilterPnPFlags & 0x80u) == 0 || (Context->PnPFlags & 0x20) == 0 )
  {
    Context->FilterPnPFlags = FilterPnPFlags | 0x100;
    Ndis::BindEngine::BeginPolicyUpdates(&Context->BindEngine);
    if ( Ndis::BindState::SetPause(&Context->Bindings.Miniport, DatapathPaused, PauseReason_LowPower)
      && (unsigned __int8)byte_1C0098763 >= 4u )
    {
      ndisGetBindLinkNameForTracing(Context, (struct NDIS_PNPTRACE_LOCALS *)v10);
      WPP_SF_Zq(88LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, v10[1], v10[0]);
    }
    Ndis::BindEngine::EndPolicyUpdates(&Context->BindEngine);
    Ndis::BindEngine::ApplyBindChanges(&Context->BindEngine, RunSynchronous, 0);
  }
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Acquire(&Context->MiniportOwner, 1LL);
  if ( (Context->PnPFlags & 0x20) != 0 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&Context->Lock);
    Context->MiniportThread = KeGetCurrentThread();
    v7 = v6;
    Context->LockDbg = 1706997;
    ndisMSwapOpenHandlers((__int64)Context, 4u);
    if ( Context->WaitWakeIrp )
      Context->PnPFlags &= ~0x400u;
    Context->MiniportThread = 0LL;
    Context->LockDbg = 0;
    KeReleaseSpinLock(&Context->Lock, v7);
    PnPFlags = Context->PnPFlags;
    if ( (PnPFlags & 0x400) != 0 && (Context->Flags & 0x80u) == 0 )
    {
      Context->PnPFlags = PnPFlags & 0xFFFFFBFF;
      if ( (unsigned __int8)byte_1C0098755 >= 4u )
        WPP_SF_q(89LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, Context);
      v4 = ndisRequestWaitWake(Context, (PREQUEST_POWER_COMPLETE)ndisGenericWaitWakeCallback);
      if ( (unsigned __int8)byte_1C0098755 >= 4u )
        WPP_SF_qq(90LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, Context, Context->WaitWakeIrp);
    }
  }
  return v4;
}
