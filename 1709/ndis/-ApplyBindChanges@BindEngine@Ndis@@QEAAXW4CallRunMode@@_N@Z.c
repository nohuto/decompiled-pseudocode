/*
 * XREFs of ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BAD34
 * Callers:
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0010D44 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C001F834 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     NdisEnumerateFilterModules @ 0x1C0058060 (NdisEnumerateFilterModules.c)
 *     _lambda_1f70e7b164a43a0d336a36d71bfafc03_::_lambda_invoker_cdecl_ @ 0x1C005B5A0 (_lambda_1f70e7b164a43a0d336a36d71bfafc03_--_lambda_invoker_cdecl_.c)
 *     _lambda_0d2db57bd675860c54d9f09e8902a9dd_::operator() @ 0x1C005B5C4 (_lambda_0d2db57bd675860c54d9f09e8902a9dd_--operator().c)
 *     ?ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C005B7C4 (-ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005C364 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisWdfMiniportDataPathStart @ 0x1C0061A10 (NdisWdfMiniportDataPathStart.c)
 *     ndisBindRequest @ 0x1C0064BA0 (ndisBindRequest.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BFD0C (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C103C (ndisMSetMiniportReadyForBinding.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00C5BE8 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C00C641C (ndisIssueNetEventSetPowerEvent.c)
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
 *     _lambda_28a615441be2ea9fc307386fd4fcfbda_::_lambda_invoker_cdecl_ @ 0x1C00FA020 (_lambda_28a615441be2ea9fc307386fd4fcfbda_--_lambda_invoker_cdecl_.c)
 *     ndisPnPRemoveDevice @ 0x1C00FE208 (ndisPnPRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 *     ndisDevicePowerOn @ 0x1C01053F0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C01058B0 (ndisDevicePowerDown.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C010B350 (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     ndisSelectiveSuspendClearStop @ 0x1C0070D84 (ndisSelectiveSuspendClearStop.c)
 *     ndisSelectiveSuspendStop @ 0x1C00710C8 (ndisSelectiveSuspendStop.c)
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00720A8 (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C0072780 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00BAFC4 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDC84 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ReleaseShared@KLockHolder@@QEAAXXZ @ 0x1C00DA0C0 (-ReleaseShared@KLockHolder@@QEAAXXZ.c)
 *     ?Wait@?$KWaitEventBase@U?$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ @ 0x1C00EBBD4 (-Wait@-$KWaitEventBase@U-$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ.c)
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
    if ( this->m_isDirty )
    {
      KeClearEvent(&this->m_bindCompleteEvent.m_event);
      if ( a2 == RunAsynchronous )
      {
        this->m_bindThread = (_KTHREAD *)1;
        ExQueueWorkItem(&this->m_asyncBindWorkItem.m_workitem, NormalWorkQueue);
      }
      else
      {
        this->m_bindThread = KeGetCurrentThread();
        Ndis::BindEngine::UpdateBindings(this, (struct KLockThisExclusive *)&v9);
        KLockHolder::ReleaseExclusive(&v9);
      }
    }
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
  if ( v9.m_State == Shared )
  {
    KLockHolder::ReleaseShared(&v9);
  }
  else if ( v9.m_State == Exclusive )
  {
    ExReleasePushLockExclusiveEx(v9.m_Lock, 0LL);
LABEL_10:
    KeLeaveCriticalRegion();
    return;
  }
  if ( v9.m_Region.m_Entered )
    goto LABEL_10;
}
