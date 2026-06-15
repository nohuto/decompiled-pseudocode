/*
 * XREFs of ?GetStreamStatus@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAW4SpatialStreamStatus@@@Z @ 0x14005E7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AB90 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005D334 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetStreamStatus(
        CSpatialCrossProcessClientOutputEndpoint *this,
        enum SpatialStreamStatus *a2)
{
  unsigned int v2; // ebx
  char IsRunning; // al
  _DWORD *v4; // r10

  v2 = 0;
  if ( *((_BYTE *)this + 56) )
  {
    if ( a2 )
    {
      IsRunning = CSpatialCrossProcessBaseEndpoint::IsRunning((CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 16));
      *v4 = IsRunning != 0;
      return v2;
    }
    v2 = -2147467261;
  }
  else
  {
    v2 = -2005139437;
  }
  SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientOutputEndpoint::GetStreamStatus", 288, v2);
  return v2;
}
