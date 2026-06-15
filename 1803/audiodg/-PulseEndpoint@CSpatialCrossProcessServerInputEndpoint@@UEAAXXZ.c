/*
 * XREFs of ?PulseEndpoint@CSpatialCrossProcessServerInputEndpoint@@UEAAXXZ @ 0x14005FAB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSpatialCrossProcessServerInputEndpoint::PulseEndpoint(HANDLE *this)
{
  if ( *((_BYTE *)this - 1024) )
    SetEvent(*(this - 20));
  else
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessServerInputEndpoint::PulseEndpoint", 396, -2005139437);
}
