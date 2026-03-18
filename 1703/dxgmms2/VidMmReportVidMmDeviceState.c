/*
 * XREFs of VidMmReportVidMmDeviceState @ 0x1C001ED70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall VidMmReportVidMmDeviceState(VIDMM_DEVICE *a1)
{
  VIDMM_DEVICE::ReportState(a1);
}
