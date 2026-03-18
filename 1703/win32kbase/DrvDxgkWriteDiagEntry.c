/*
 * XREFs of DrvDxgkWriteDiagEntry @ 0x1C0057C30
 * Callers:
 *     xxxUserChangeDisplaySettings @ 0x1C0055910 (xxxUserChangeDisplaySettings.c)
 *     ?LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKHH_KJJW4_DXGK_DIAG_CDS_STAGE@@I1@Z @ 0x1C0056AE0 (-LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKH.c)
 *     DrvLogDiagDisplayChange @ 0x1C0056D60 (DrvLogDiagDisplayChange.c)
 *     LogDiagSDC @ 0x1C0057B04 (LogDiagSDC.c)
 *     PowerDimUndimResend @ 0x1C0062AF0 (PowerDimUndimResend.c)
 *     PowerUnDimMonitor @ 0x1C00656EC (PowerUnDimMonitor.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C009B960 (DrvDxgkLogCodePointPacket.c)
 *     PowerDimMonitor @ 0x1C00D7114 (PowerDimMonitor.c)
 * Callees:
 *     <none>
 */

__int64 DrvDxgkWriteDiagEntry()
{
  return ((__int64 (*)(void))qword_1C018BA78)();
}
