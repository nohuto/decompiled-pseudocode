/*
 * XREFs of HUBMISC_RemoveDeviceInfoFromGlobalChildList @ 0x1C0028794
 * Callers:
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff @ 0x1C00192B0 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff.c)
 *     HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup @ 0x1C0019360 (HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup.c)
 *     HUBDSM_RemovingDeviceInfoFromGlobalListOnReportedMissingOnHubStopOnDetach @ 0x1C0019960 (HUBDSM_RemovingDeviceInfoFromGlobalListOnReportedMissingOnHubStopOnDetach.c)
 *     HUBDSM_WaitingForPDOD0ExitOnDetachInUnConfigured @ 0x1C001A250 (HUBDSM_WaitingForPDOD0ExitOnDetachInUnConfigured.c)
 *     HUBDSM_RequestingDeviceCycleInReportingToPnp @ 0x1C001C990 (HUBDSM_RequestingDeviceCycleInReportingToPnp.c)
 *     HUBPDO_EvtDeviceSurpriseRemoval @ 0x1C006B240 (HUBPDO_EvtDeviceSurpriseRemoval.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_RemoveDeviceInfoFromGlobalChildList(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 2152) )
    return USBD_RemoveDeviceFromGlobalList();
  v1 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(v1 + 204) & 0x200) != 0 )
    _InterlockedAnd((volatile signed __int32 *)(v1 + 1336), 0xFFFFFFBF);
  if ( *(_QWORD *)(a1 + 2152) )
    return USBD_RemoveDeviceFromGlobalList();
  return result;
}
