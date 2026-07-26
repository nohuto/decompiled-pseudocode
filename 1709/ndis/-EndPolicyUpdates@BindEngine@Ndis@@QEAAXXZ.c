/*
 * XREFs of ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88
 * Callers:
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0010D44 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C001F834 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     NdisEnumerateFilterModules @ 0x1C0058060 (NdisEnumerateFilterModules.c)
 *     _lambda_0d2db57bd675860c54d9f09e8902a9dd_::operator() @ 0x1C005B5C4 (_lambda_0d2db57bd675860c54d9f09e8902a9dd_--operator().c)
 *     ?ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C005B7C4 (-ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005C364 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisWdfMiniportDataPathStart @ 0x1C0061A10 (NdisWdfMiniportDataPathStart.c)
 *     ndisBindRequest @ 0x1C0064BA0 (ndisBindRequest.c)
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00AAD20 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00AB254 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00B12D8 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00B5798 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00BA9E4 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BB0D0 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00BF7E0 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00BFB08 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BFD0C (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ndisFSetRestartAttributes @ 0x1C00C3FB0 (ndisFSetRestartAttributes.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00E2F40 (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00E43B8 (ndisIMInitializeDeviceInstance_ea_1C00E43B8.c)
 *     ?ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z @ 0x1C00E4E70 (-ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z.c)
 *     ?ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00E4F6C (-ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisQueuedStatusUnbindAdapter @ 0x1C00E6690 (ndisQueuedStatusUnbindAdapter.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00E76B4 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMQueuedPromoteMiniport@@YAXPEAX@Z @ 0x1C00E7860 (-ndisMQueuedPromoteMiniport@@YAXPEAX@Z.c)
 *     NdisMSetMiniportSecondary @ 0x1C00E7B30 (NdisMSetMiniportSecondary.c)
 *     NdisWdfMiniportDataPathPause @ 0x1C00E9CC0 (NdisWdfMiniportDataPathPause.c)
 *     _lambda_55dd5fd2ac8d6f91724a8900c7ec63ca_::_lambda_invoker_cdecl_ @ 0x1C00F4500 (_lambda_55dd5fd2ac8d6f91724a8900c7ec63ca_--_lambda_invoker_cdecl_.c)
 *     ndisPnPRemoveDevice @ 0x1C00FE208 (ndisPnPRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 *     ndisPnPNotifyBinding @ 0x1C0102070 (ndisPnPNotifyBinding.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01021E4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     NdisOpenAdapterEx @ 0x1C0103020 (NdisOpenAdapterEx.c)
 *     ndisAddDevice @ 0x1C0103FA8 (ndisAddDevice.c)
 *     ndisPnPNotifyAllTransports @ 0x1C0104EDC (ndisPnPNotifyAllTransports.c)
 *     ndisDevicePowerOn @ 0x1C01053F0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C01058B0 (ndisDevicePowerDown.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C010B350 (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     ?ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000F194 (-ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C00B5080 (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 *     ?PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00BC3D0 (-PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BC5C4 (-UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z @ 0x1C00BC828 (-MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z.c)
 *     ?UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BCA24 (-UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BCB84 (-UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00BCDE8 (-CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BCF38 (-CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BD178 (-UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BD35C (-CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BD41C (-CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BD5B4 (-ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BD728 (-ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?PauseMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BD868 (-PauseMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BDA20 (-RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CheckMissingModifyingFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BDB64 (-CheckMissingModifyingFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 */

void __fastcall Ndis::BindEngine::EndPolicyUpdates(Ndis::BindEngine *this)
{
  char v2; // bp
  _NDIS_MINIPORT_BLOCK *m_miniport; // rsi
  struct _NDIS_MINIPORT_BLOCK *v4; // rcx
  struct Ndis::BindStack *v5; // rdx
  struct _NDIS_MINIPORT_BLOCK *v6; // rdx
  struct Ndis::BindStack *v7; // rdx
  struct Ndis::BindStack *v8; // rdx
  struct _NDIS_MINIPORT_BLOCK *v9; // rdx
  struct Ndis::BindStack *v10; // rdx
  struct Ndis::BindStack *v11; // rdx
  struct Ndis::BindStack *v12; // rdx
  struct Ndis::BindStack *v13; // r8
  struct Ndis::BindStack *v14; // rdx
  struct Ndis::BindStack *v15; // rdx
  struct Ndis::BindStack *v16; // rdx
  bool v17; // r8
  struct Ndis::BindStack *v18; // rdx
  struct Ndis::BindStack *v19; // r8
  struct Ndis::BindStack *v20; // rdx

  v2 = 0;
  do
  {
    m_miniport = this->m_miniport;
    v2 |= this->m_isDirty;
    v4 = this->m_miniport;
    this->m_isDirty = 0;
    if ( ndisMDoesMiniportNeedCoNdisNdProxy(v4) )
      ndisBindEnumerateProtocolDrivers(
        (void (__fastcall *)(__int64, volatile signed __int32 **))lambda_a13a88d06c7c63155a98f7d7ba7090a7_::_lambda_invoker_cdecl_,
        (__int64)m_miniport);
    Ndis::BindRules::ReEnableTemporaryUnbind((Ndis::BindRules *)&m_miniport->Bindings, v5);
    Ndis::BindRules::ReStartTemporaryPause((Ndis::BindRules *)m_miniport, v6);
    Ndis::BindRules::CheckForDriverLoaded((Ndis::BindRules *)&m_miniport->Bindings, v7);
    Ndis::BindRules::CheckForVBusDependency((Ndis::BindRules *)&m_miniport->Bindings, v8);
    Ndis::BindRules::UnbindIncompatibleDriversForMacChange((Ndis::BindRules *)m_miniport, v9);
    Ndis::BindRules::CheckMissingModifyingFilter((Ndis::BindRules *)&m_miniport->Bindings, v10);
    Ndis::BindRules::RetryProtocolBindingsAfterMiniportChange((Ndis::BindRules *)&m_miniport->Bindings, v11);
    Ndis::BindRules::CheckMissingMandatoryFilter((Ndis::BindRules *)&m_miniport->Bindings, v12);
    Ndis::BindRules::CoalesceFilterAttachDuringBoot(
      (Ndis::BindRules *)m_miniport,
      (struct _NDIS_MINIPORT_BLOCK *)&m_miniport->Bindings,
      v13);
    Ndis::BindRules::UnbindOnAttach((Ndis::BindRules *)&m_miniport->Bindings, v14);
    Ndis::BindRules::UnbindOnDetach((Ndis::BindRules *)&m_miniport->Bindings, v15);
    LOBYTE(v16) = m_miniport->InitMode != 0;
    Ndis::BindRules::MakeOptionalFiltersMandatoryDuringBoot((Ndis::BindRules *)&m_miniport->Bindings, v16, v17);
    Ndis::BindRules::UnbindMiniportStack((Ndis::BindRules *)&m_miniport->Bindings, v18);
    Ndis::BindRules::PauseNeededForBind(
      (Ndis::BindRules *)m_miniport,
      (struct _NDIS_MINIPORT_BLOCK *)&m_miniport->Bindings,
      v19);
    Ndis::BindRules::PauseMiniportStack((Ndis::BindRules *)&m_miniport->Bindings, v20);
  }
  while ( this->m_isDirty );
  this->m_isDirty = v2;
  ExReleasePushLockExclusiveEx(&this->m_lock, 0LL);
  KeLeaveCriticalRegion();
}
