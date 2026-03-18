/*
 * XREFs of AcpiCheckSecureDevice @ 0x1C00A6D60
 * Callers:
 *     AcpiSdevIdentifierInterface @ 0x1C00A6DBC (AcpiSdevIdentifierInterface.c)
 * Callees:
 *     AcpiIsDeviceSecure @ 0x1C0096600 (AcpiIsDeviceSecure.c)
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
