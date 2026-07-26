/*
 * XREFs of ??1NDIS_ADDDEVICE_PARAMETERS@@QEAA@XZ @ 0x1C00168BC
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00B6980 (ndisPnPAddDevice.c)
 *     ndisLWMCreateMiniport @ 0x1C00EC7B8 (ndisLWMCreateMiniport.c)
 * Callees:
 *     <none>
 */

void __fastcall NDIS_ADDDEVICE_PARAMETERS::~NDIS_ADDDEVICE_PARAMETERS(NDIS_ADDDEVICE_PARAMETERS *this)
{
  Rtl::KString *Myptr; // rcx
  Rtl::KString *v3; // rcx
  Rtl::KString *v4; // rcx
  Rtl::KString *v5; // rcx

  Myptr = this->IfDescr._Myptr;
  if ( Myptr )
    ExFreePoolWithTag(Myptr, 0x7274534Bu);
  v3 = this->LegacyImFilterClass._Myptr;
  if ( v3 )
    ExFreePoolWithTag(v3, 0x7274534Bu);
  v4 = this->ExportName._Myptr;
  if ( v4 )
    ExFreePoolWithTag(v4, 0x7274534Bu);
  v5 = this->ComponentId._Myptr;
  if ( v5 )
    ExFreePoolWithTag(v5, 0x7274534Bu);
}
