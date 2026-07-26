/*
 * XREFs of ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BBF78
 * Callers:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C000F640 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C001D470 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisEnumerateFilterModules @ 0x1C0058770 (NdisEnumerateFilterModules.c)
 *     _lambda_1f70e7b164a43a0d336a36d71bfafc03_::_lambda_invoker_cdecl_ @ 0x1C005BCD0 (_lambda_1f70e7b164a43a0d336a36d71bfafc03_--_lambda_invoker_cdecl_.c)
 *     _lambda_ca1e2bc5e6e9f1385062736cf79e2ec3_::operator() @ 0x1C005BD18 (_lambda_ca1e2bc5e6e9f1385062736cf79e2ec3_--operator().c)
 *     ?ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C005BF18 (-ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005CC08 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisWdfMiniportDataPathStart @ 0x1C0062370 (NdisWdfMiniportDataPathStart.c)
 *     ndisBindRequest @ 0x1C0065704 (ndisBindRequest.c)
 *     _lambda_adb42f86cf839cbbe3c588eaa9665cd9_::_lambda_invoker_cdecl_ @ 0x1C00AC080 (_lambda_adb42f86cf839cbbe3c588eaa9665cd9_--_lambda_invoker_cdecl_.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C00B05E4 (ndisIssueNetEventSetPowerEvent.c)
 *     _lambda_3586b9b7f2fd6000f93b66a493a8f736_::_lambda_invoker_cdecl_ @ 0x1C00C1150 (_lambda_3586b9b7f2fd6000f93b66a493a8f736_--_lambda_invoker_cdecl_.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00C2300 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00C26E8 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C67C8 (ndisMSetMiniportReadyForBinding.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00E46B0 (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00E5C1C (ndisIMInitializeDeviceInstance_ea_1C00E5C1C.c)
 *     ?ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z @ 0x1C00E66D0 (-ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z.c)
 *     ?ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00E67C8 (-ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisQueuedStatusUnbindAdapter @ 0x1C00E8000 (ndisQueuedStatusUnbindAdapter.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00E90F0 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMQueuedPromoteMiniport@@YAXPEAX@Z @ 0x1C00E92A0 (-ndisMQueuedPromoteMiniport@@YAXPEAX@Z.c)
 *     NdisMSetMiniportSecondary @ 0x1C00E9570 (NdisMSetMiniportSecondary.c)
 *     NdisWdfMiniportDataPathPause @ 0x1C00EC200 (NdisWdfMiniportDataPathPause.c)
 *     _lambda_55dd5fd2ac8d6f91724a8900c7ec63ca_::_lambda_invoker_cdecl_ @ 0x1C00F70F0 (_lambda_55dd5fd2ac8d6f91724a8900c7ec63ca_--_lambda_invoker_cdecl_.c)
 *     ndisDevicePowerOn @ 0x1C0100560 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C0100A70 (ndisDevicePowerDown.c)
 *     ndisPnPRemoveDevice @ 0x1C0101968 (ndisPnPRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C010D2D0 (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     ndisSelectiveSuspendClearStop @ 0x1C00715E4 (ndisSelectiveSuspendClearStop.c)
 *     ndisSelectiveSuspendStop @ 0x1C0071928 (ndisSelectiveSuspendStop.c)
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C007291C (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C0072FFC (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?DispatchPendingWork@BindEngine@Ndis@@AEAAXW4CallRunMode@@AEAVKLockThisExclusive@@@Z @ 0x1C00BC18C (-DispatchPendingWork@BindEngine@Ndis@@AEAAXW4CallRunMode@@AEAVKLockThisExclusive@@@Z.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE20 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 *     ?Wait@?$KWaitEventBase@U?$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ @ 0x1C00EE788 (-Wait@-$KWaitEventBase@U-$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ.c)
 */

void __fastcall Ndis::BindEngine::ApplyBindChanges(Ndis::BindEngine *this, enum CallRunMode a2, char a3)
{
  bool v6; // zf
  _NDIS_MINIPORT_BLOCK *m_miniport; // rbx
  _NDIS_MINIPORT_BLOCK *v8; // rbx
  KLockHolder v9; // [rsp+20h] [rbp-28h] BYREF

  if ( a3 && a2 == RunSynchronous )
  {
    m_miniport = this->m_miniport;
    if ( this->m_miniport->SelectiveSuspend )
      ndisSelectiveSuspendStop(this->m_miniport, 13);
    if ( m_miniport->AoAc )
      ndisAoAcStop(m_miniport, 13, RunAsynchronous);
  }
  v9.m_Lock = &this->m_lock;
  KeEnterCriticalRegion();
  v9.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(&this->m_lock, 0LL);
  v6 = this->m_bindThread == 0LL;
  v9.m_State = Exclusive;
  if ( v6 )
  {
    Ndis::BindEngine::DispatchPendingWork(this, a2, (struct KLockThisExclusive *)&v9);
  }
  else
  {
    KLockHolder::ReleaseExclusive(&v9);
    if ( a2 == RunSynchronous )
      KWaitEventBase<wistd::integral_constant<enum _EVENT_TYPE,0>>::Wait(&this->m_bindCompleteEvent);
  }
  if ( a3 && a2 == RunSynchronous )
  {
    v8 = this->m_miniport;
    if ( this->m_miniport->SelectiveSuspend )
      ndisSelectiveSuspendClearStop((__int64)this->m_miniport, 13);
    if ( v8->AoAc )
      ndisAoAcClearStop(v8, NdisSSBindChanges);
  }
  KLockHolder::~KLockHolder(&v9);
}
