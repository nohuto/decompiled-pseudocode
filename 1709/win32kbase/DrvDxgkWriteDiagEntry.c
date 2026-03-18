/*
 * XREFs of DrvDxgkWriteDiagEntry @ 0x1C0067180
 * Callers:
 *     xxxUserChangeDisplaySettings @ 0x1C0064CF0 (xxxUserChangeDisplaySettings.c)
 *     ?LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKHH_KJJW4_DXGK_DIAG_CDS_STAGE@@I1@Z @ 0x1C0065FBC (-LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKH.c)
 *     DrvLogDiagDisplayChange @ 0x1C0066240 (DrvLogDiagDisplayChange.c)
 *     LogDiagSDC @ 0x1C0067094 (LogDiagSDC.c)
 *     PowerUnDimMonitor @ 0x1C0077E70 (PowerUnDimMonitor.c)
 *     PowerDimUndimResend @ 0x1C00786C8 (PowerDimUndimResend.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00A4550 (DrvDxgkLogCodePointPacket.c)
 *     PowerDimMonitor @ 0x1C00DD2FC (PowerDimMonitor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 DrvDxgkWriteDiagEntry()
{
  return ((__int64 (*)(void))qword_1C01906E0)();
}
