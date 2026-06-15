/*
 * XREFs of ?ProcessComplete@CSpatialCrossProcessServerInputEndpoint@@UEAAJXZ @ 0x140062460
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005D9E0 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessServerInputEndpoint::ProcessComplete(
        CSpatialCrossProcessServerInputEndpoint *this)
{
  unsigned int v1; // ebx

  v1 = *((_BYTE *)this + 56) == 0 ? 0x887C0013 : 0;
  if ( !*((_BYTE *)this + 56) )
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessServerInputEndpoint::ProcessComplete", 134, v1);
  return v1;
}
