/*
 * XREFs of HUBMISC_RemoveDeviceInfoFromGlobalChildList @ 0x1C0029470
 * Callers:
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff @ 0x1C0019DE0 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff.c)
 *     HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup @ 0x1C0019E90 (HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup.c)
 *     HUBDSM_RemovingDeviceInfoFromGlobalListOnReportedMissingOnHubStopOnDetach @ 0x1C001A490 (HUBDSM_RemovingDeviceInfoFromGlobalListOnReportedMissingOnHubStopOnDetach.c)
 *     HUBDSM_WaitingForPDOD0ExitOnDetachInUnConfigured @ 0x1C001AD60 (HUBDSM_WaitingForPDOD0ExitOnDetachInUnConfigured.c)
 *     HUBDSM_RequestingDeviceCycleInReportingToPnp @ 0x1C001D310 (HUBDSM_RequestingDeviceCycleInReportingToPnp.c)
 *     HUBPDO_EvtDeviceSurpriseRemoval @ 0x1C006B150 (HUBPDO_EvtDeviceSurpriseRemoval.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_RemoveDeviceInfoFromGlobalChildList(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = *(_QWORD *)(a1 + 2152);
  if ( result )
    return USBD_RemoveDeviceFromGlobalList();
  v2 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(v2 + 204) & 0x200) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v2 + 1336), 0xFFFFFFBF);
    result = *(_QWORD *)(a1 + 2152);
    if ( result )
      return USBD_RemoveDeviceFromGlobalList();
  }
  return result;
}
