/*
 * XREFs of ?GetAllocatedObjectCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI0@Z @ 0x14005DC30
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AB90 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetAllocatedObjectCount(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned int *a2,
        unsigned int *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( *((_BYTE *)this + 56) )
  {
    if ( a2 && a3 )
    {
      *a2 = *(_DWORD *)(*((_QWORD *)this + 108) + 512LL);
      *a3 = *(_DWORD *)(*((_QWORD *)this + 108) + 516LL);
      return v3;
    }
    v3 = -2147467261;
  }
  else
  {
    v3 = -2005139437;
  }
  SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientOutputEndpoint::GetAllocatedObjectCount", 267, v3);
  return v3;
}
