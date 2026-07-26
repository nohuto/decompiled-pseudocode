/*
 * XREFs of ndisPnPIrpSurpriseRemovalInner @ 0x1C00EE3E8
 * Callers:
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00EE2C8 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisQueuedPnPIrpSurpriseRemoval @ 0x1C00EE520 (ndisQueuedPnPIrpSurpriseRemoval.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisReturnQueuedLowPowerNbls @ 0x1C000F744 (ndisReturnQueuedLowPowerNbls.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C00B05E4 (ndisIssueNetEventSetPowerEvent.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00B0E0C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisPowerSaveStop @ 0x1C00B11E8 (ndisPowerSaveStop.c)
 *     ndisPnPRemoveDeviceEx @ 0x1C00B1DD0 (ndisPnPRemoveDeviceEx.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00BFB6C (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00C261C (ndisInitializeNetPnPEvent.c)
 */

void __fastcall ndisPnPIrpSurpriseRemovalInner(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // [rsp+30h] [rbp-C8h] BYREF
  int v5; // [rsp+38h] [rbp-C0h]

  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0x26u, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, (__int64)a1);
  ndisPowerSaveStop(a1, 3);
  KeWaitForSingleObject(&a1->PowerD0CompleteEvent, Executive, 0, 0, 0LL);
  if ( a1->CurrentDevicePowerState != PowerDeviceD0 )
  {
    if ( (unsigned __int8)byte_1C0099614 >= 4u )
      WPP_SF_q(0x27u, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, (__int64)a1);
    if ( (a1->InfoFlags & 0x80000000) != 0 )
      ndisReturnQueuedLowPowerNbls((__int64)a1, 1);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)&a1->MiniportOwner);
    ndisIssueNetEventSetPowerEvent(a1, 1, 1);
  }
  ndisInitializeNetPnPEvent(&v4, 0LL);
  v5 = 2;
  ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, (__int64)&v4);
  a1->AdminStatus = NET_IF_ADMIN_STATUS_UP;
  ndisPnPRemoveDeviceEx(a1);
  ndisDereferenceMiniport((__int64)a1, 0x1Du, v2, v3);
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0x28u, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, (__int64)a1);
}
