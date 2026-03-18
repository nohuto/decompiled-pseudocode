/*
 * XREFs of AcpiCheckSecureDevice @ 0x1C00A4254
 * Callers:
 *     AcpiSdevIdentifierInterface @ 0x1C00A42B0 (AcpiSdevIdentifierInterface.c)
 * Callees:
 *     AcpiIsDeviceSecure @ 0x1C008E07C (AcpiIsDeviceSecure.c)
 */

bool __fastcall AcpiCheckSecureDevice(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 952) & 0x80000000) == 0 )
  {
    if ( AcpiIsDeviceSecure(a1) )
      *(_QWORD *)(a1 + 952) |= 0x2000000000uLL;
    *(_QWORD *)(a1 + 952) |= 0x80000000uLL;
  }
  return (*(_QWORD *)(a1 + 952) & 0x2000000000LL) != 0;
}
