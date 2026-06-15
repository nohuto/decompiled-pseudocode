/*
 * XREFs of ?GetCharacteristics@CSpatialCrossProcessClientEndpoint@@UEAAJPEAK@Z @ 0x14005DA80
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AE50 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientEndpoint::GetCharacteristics(
        CSpatialCrossProcessClientEndpoint *this,
        unsigned int *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
  {
    *a2 = 1;
  }
  else
  {
    v2 = -2147467261;
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientEndpoint::GetCharacteristics", 311, -2147467261);
  }
  return v2;
}
