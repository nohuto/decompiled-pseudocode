/*
 * XREFs of ?GetLatency@CSpatialCrossProcessBaseEndpoint@@UEAAJPEA_J@Z @ 0x14005EB70
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005D9E0 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetLatency(CSpatialCrossProcessBaseEndpoint *this, __int64 *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *((_BYTE *)this + 72) )
  {
    if ( a2 )
    {
      *a2 = *((_QWORD *)this + 14);
      return v2;
    }
    v2 = -2147467261;
  }
  else
  {
    v2 = -2005139437;
  }
  SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetLatency", 419, v2);
  return v2;
}
