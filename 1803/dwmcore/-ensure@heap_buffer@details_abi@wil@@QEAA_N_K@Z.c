/*
 * XREFs of ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1800BC200
 * Callers:
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800558E8 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180058360 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1800BC1A0 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall wil::details_abi::heap_buffer::ensure(wil::details_abi::heap_buffer *this, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *((_QWORD *)this + 2) - *(_QWORD *)this;
  if ( a2 + *((_QWORD *)this + 1) - *(_QWORD *)this < v2 )
    return 1;
  if ( a2 < 2 * v2 )
    a2 = 2 * v2;
  return wil::details_abi::heap_buffer::reserve(this, a2);
}
