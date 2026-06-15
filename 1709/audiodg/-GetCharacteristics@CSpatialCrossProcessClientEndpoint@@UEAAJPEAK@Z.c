/*
 * XREFs of ?GetCharacteristics@CSpatialCrossProcessClientEndpoint@@UEAAJPEAK@Z @ 0x1400604A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005D9E0 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientEndpoint::GetCharacteristics(
        CSpatialCrossProcessClientEndpoint *this,
        unsigned int *a2)
{
  unsigned int v2; // ebx

  if ( a2 )
    *a2 = 1;
  v2 = -2147467261;
  if ( a2 )
    return 0;
  else
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientEndpoint::GetCharacteristics", 311, -2147467261);
  return v2;
}
