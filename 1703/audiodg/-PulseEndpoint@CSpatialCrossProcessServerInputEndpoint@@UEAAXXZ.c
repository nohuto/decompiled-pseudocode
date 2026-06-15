/*
 * XREFs of ?PulseEndpoint@CSpatialCrossProcessServerInputEndpoint@@UEAAXXZ @ 0x14005F600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSpatialCrossProcessServerInputEndpoint::PulseEndpoint(HANDLE *this)
{
  if ( *((_BYTE *)this - 1016) )
    SetEvent(*(this - 20));
  else
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessServerInputEndpoint::PulseEndpoint", 356, -2005139437);
}
