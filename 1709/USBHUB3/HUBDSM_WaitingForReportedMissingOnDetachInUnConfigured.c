/*
 * XREFs of HUBDSM_WaitingForReportedMissingOnDetachInUnConfigured @ 0x1C001A2C0
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_NotifyDeviceDisconnected @ 0x1C00132A8 (HUBPDO_NotifyDeviceDisconnected.c)
 *     HUBPDO_ReportDeviceAsMissing @ 0x1C0016500 (HUBPDO_ReportDeviceAsMissing.c)
 */

__int64 __fastcall HUBDSM_WaitingForReportedMissingOnDetachInUnConfigured(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBPDO_NotifyDeviceDisconnected(v1);
  if ( *(_QWORD *)(v1 + 2152) )
    USBD_MarkDeviceAsDisconnected(v1);
  HUBPDO_ReportDeviceAsMissing(v1);
  return 1000LL;
}
