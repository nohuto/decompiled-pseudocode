/*
 * XREFs of ndisPnPIrpSurpriseRemovalInner @ 0x1C00EB838
 * Callers:
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00EB720 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisQueuedPnPIrpSurpriseRemoval @ 0x1C00EB970 (ndisQueuedPnPIrpSurpriseRemoval.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ndisReturnQueuedLowPowerNbls @ 0x1C001F938 (ndisReturnQueuedLowPowerNbls.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ndisPnPRemoveDeviceEx @ 0x1C00AA814 (ndisPnPRemoveDeviceEx.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00C4168 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00C44BC (ndisInitializeNetPnPEvent.c)
 *     ndisPowerSaveStop @ 0x1C00C61B0 (ndisPowerSaveStop.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00C6398 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisIssueNetEventSetPowerEvent @ 0x1C00C641C (ndisIssueNetEventSetPowerEvent.c)
 */

void __fastcall ndisPnPIrpSurpriseRemovalInner(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 v2; // [rsp+30h] [rbp-C8h] BYREF
  int v3; // [rsp+38h] [rbp-C0h]

  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0x26u, &WPP_c43bece8f9e83cce6c35b7786f97099d_Traceguids, (__int64)a1);
  ndisPowerSaveStop(a1, 3);
  KeWaitForSingleObject(&a1->PowerD0CompleteEvent, Executive, 0, 0, 0LL);
  if ( a1->CurrentDevicePowerState != PowerDeviceD0 )
  {
    if ( (unsigned __int8)byte_1C0098754 >= 4u )
      WPP_SF_q(0x27u, &WPP_c43bece8f9e83cce6c35b7786f97099d_Traceguids, (__int64)a1);
    if ( (a1->InfoFlags & 0x80000000) != 0 )
      ndisReturnQueuedLowPowerNbls((__int64)a1, 1);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)&a1->MiniportOwner);
    ndisIssueNetEventSetPowerEvent(a1, 1, 1);
  }
  ndisInitializeNetPnPEvent(&v2, 0LL);
  v3 = 2;
  ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, (__int64)&v2);
  a1->AdminStatus = NET_IF_ADMIN_STATUS_UP;
  ndisPnPRemoveDeviceEx((ULONG_PTR)a1);
  ndisDereferenceMiniport((__int64)a1, 0x1Du);
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0x28u, &WPP_c43bece8f9e83cce6c35b7786f97099d_Traceguids, (__int64)a1);
}
