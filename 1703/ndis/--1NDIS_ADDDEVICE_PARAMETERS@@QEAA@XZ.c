/*
 * XREFs of ??1NDIS_ADDDEVICE_PARAMETERS@@QEAA@XZ @ 0x1C0014430
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00A9500 (ndisPnPAddDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall NDIS_ADDDEVICE_PARAMETERS::~NDIS_ADDDEVICE_PARAMETERS(NDIS_ADDDEVICE_PARAMETERS *this)
{
  Rtl::KString *Myptr; // rcx
  Rtl::KString *v3; // rcx
  Rtl::KString *v4; // rcx

  Myptr = this->LegacyImFilterClass._Myptr;
  if ( Myptr )
    ExFreePoolWithTag(Myptr, 0x7274534Bu);
  v3 = this->ExportName._Myptr;
  if ( v3 )
    ExFreePoolWithTag(v3, 0x7274534Bu);
  v4 = this->ComponentId._Myptr;
  if ( v4 )
    ExFreePoolWithTag(v4, 0x7274534Bu);
}
