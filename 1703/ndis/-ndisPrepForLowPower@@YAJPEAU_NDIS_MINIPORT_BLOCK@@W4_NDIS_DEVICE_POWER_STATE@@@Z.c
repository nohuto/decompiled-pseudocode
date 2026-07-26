/*
 * XREFs of ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0011DF4
 * Callers:
 *     ndisSetDevicePower @ 0x1C0012104 (ndisSetDevicePower.c)
 *     ndisSetSystemPower @ 0x1C00A79CC (ndisSetSystemPower.c)
 * Callees:
 *     ndisMSwapOpenHandlers @ 0x1C001C474 (ndisMSwapOpenHandlers.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00A75C8 (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C00A75FC (ndisNotifyDevicePowerStateChange.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C00A773C (ndisIssueNetEventSetPowerEvent.c)
 *     ndisMInvokeDevicePowerNotify @ 0x1C00A7C40 (ndisMInvokeDevicePowerNotify.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00B2868 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2948 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2A48 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00B3704 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisRequestWaitWake @ 0x1C00BDE48 (ndisRequestWaitWake.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00F14D8 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisPrepForLowPower(struct _NDIS_MINIPORT_BLOCK *Context, unsigned int a2)
{
  unsigned int v4; // edi
  unsigned int FilterPnPFlags; // edx
  KIRQL v6; // al
  __int64 v7; // rdx
  KIRQL v8; // bp
  unsigned int PnPFlags; // ecx
  _QWORD v11[20]; // [rsp+20h] [rbp-A8h] BYREF

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
      && (unsigned __int8)byte_1C0092623 >= 4u )
    {
      ndisGetBindLinkNameForTracing(Context, (struct NDIS_PNPTRACE_LOCALS *)v11);
      WPP_SF_Zq(88LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, v11[1], v11[0]);
    }
    Ndis::BindEngine::EndPolicyUpdates(&Context->BindEngine);
    Ndis::BindEngine::ApplyBindChanges(&Context->BindEngine, RunSynchronous, 0);
  }
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Acquire(&Context->MiniportOwner, 1LL);
  if ( (Context->PnPFlags & 0x20) != 0 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&Context->Lock);
    LOBYTE(v7) = 4;
    Context->MiniportThread = KeGetCurrentThread();
    v8 = v6;
    Context->LockDbg = 1707006;
    ndisMSwapOpenHandlers(Context, v7);
    if ( Context->WaitWakeIrp )
      Context->PnPFlags &= ~0x400u;
    Context->MiniportThread = 0LL;
    Context->LockDbg = 0;
    KeReleaseSpinLock(&Context->Lock, v8);
    PnPFlags = Context->PnPFlags;
    if ( (PnPFlags & 0x400) != 0 && (Context->Flags & 0x80u) == 0 )
    {
      Context->PnPFlags = PnPFlags & 0xFFFFFBFF;
      if ( (unsigned __int8)byte_1C0092615 >= 4u )
        WPP_SF_q(89LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, Context);
      v4 = ndisRequestWaitWake(Context, ndisGenericWaitWakeCallback);
      if ( (unsigned __int8)byte_1C0092615 >= 4u )
        WPP_SF_qq(90LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, Context, Context->WaitWakeIrp);
    }
  }
  return v4;
}
