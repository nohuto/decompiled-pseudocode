/*
 * XREFs of VidSchiMarkTdrFaultingDevice @ 0x1C00B62C8
 * Callers:
 *     VidSchiReportHwHang @ 0x1C002CA7C (VidSchiReportHwHang.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C000F4C8 (VidSchiMarkDeviceAsError.c)
 */

int __fastcall VidSchiMarkTdrFaultingDevice(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( a1 != *(_QWORD *)(v1 + 216) )
  {
    *(_BYTE *)(a1 + 164) = 1;
    LODWORD(v1) = VidSchiMarkDeviceAsError(a1, 7);
  }
  return v1;
}
