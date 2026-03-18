/*
 * XREFs of VidSchiMarkTdrFaultingDevice @ 0x1C00BFB90
 * Callers:
 *     VidSchiReportHwHang @ 0x1C0034304 (VidSchiReportHwHang.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C0012DA4 (VidSchiMarkDeviceAsError.c)
 */

void __fastcall VidSchiMarkTdrFaultingDevice(__int64 a1)
{
  if ( a1 != *(_QWORD *)(*(_QWORD *)(a1 + 32) + 216LL) )
  {
    *(_BYTE *)(a1 + 188) = 1;
    VidSchiMarkDeviceAsError(a1, 7);
  }
}
