/*
 * XREFs of ndisPnPIrpSurpriseRemovalInner @ 0x1C00E199C
 * Callers:
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00E1888 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisQueuedPnPIrpSurpriseRemoval @ 0x1C00E1AD0 (ndisQueuedPnPIrpSurpriseRemoval.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisReturnQueuedLowPowerNbls @ 0x1C0011FC4 (ndisReturnQueuedLowPowerNbls.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C00A773C (ndisIssueNetEventSetPowerEvent.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00B5B80 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00B64CC (ndisInitializeNetPnPEvent.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00BBE98 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisPowerSaveStop @ 0x1C00BE7BC (ndisPowerSaveStop.c)
 *     ndisPnPRemoveDeviceEx @ 0x1C00BE914 (ndisPnPRemoveDeviceEx.c)
 */

void __fastcall ndisPnPIrpSurpriseRemovalInner(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 v2; // [rsp+30h] [rbp-C8h] BYREF
  int v3; // [rsp+38h] [rbp-C0h]

  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_q(0x26u, &WPP_7f404e1ae4803d6fc8eef9c80d758293_Traceguids, (__int64)a1);
  ndisPowerSaveStop(a1, 3);
  KeWaitForSingleObject(&a1->PowerD0CompleteEvent, Executive, 0, 0, 0LL);
  if ( a1->CurrentDevicePowerState != PowerDeviceD0 )
  {
    if ( (unsigned __int8)byte_1C0092614 >= 4u )
      WPP_SF_q(0x27u, &WPP_7f404e1ae4803d6fc8eef9c80d758293_Traceguids, (__int64)a1);
    if ( (a1->InfoFlags & 0x80000000) != 0 )
      ndisReturnQueuedLowPowerNbls((__int64)a1, 1);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)&a1->MiniportOwner);
    ndisIssueNetEventSetPowerEvent(a1, 1, 1);
  }
  ndisInitializeNetPnPEvent(&v2, 0LL);
  v3 = 2;
  ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, (__int64)&v2);
  a1->AdminStatus = NET_IF_ADMIN_STATUS_UP;
  ndisPnPRemoveDeviceEx(a1);
  ndisDereferenceMiniport((__int64)a1, 0x1Du);
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_q(0x28u, &WPP_7f404e1ae4803d6fc8eef9c80d758293_Traceguids, (__int64)a1);
}
