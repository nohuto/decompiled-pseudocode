/*
 * XREFs of ?GetFramesPerPacket@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z @ 0x14005E390
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AE50 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetFramesPerPacket@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAI@Z @ 0x14005BF70 (-GetFramesPerPacket@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAI@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetFramesPerPacket(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned int *a2)
{
  unsigned int FramesPerPacket; // ebx
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  FramesPerPacket = 0;
  if ( *((_BYTE *)this + 72) )
  {
    if ( a2 )
    {
      if ( *((_BYTE *)this + 1072) )
      {
        *a2 = *((_DWORD *)this + 267);
        return FramesPerPacket;
      }
      FramesPerPacket = CSpatialCrossProcessBaseEndpoint::GetFramesPerPacket(this, &v5);
      if ( (FramesPerPacket & 0x80000000) == 0 )
      {
        *a2 = v5;
        return FramesPerPacket;
      }
    }
    else
    {
      FramesPerPacket = -2147467261;
    }
  }
  else
  {
    FramesPerPacket = -2005139437;
  }
  SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientOutputEndpoint::GetFramesPerPacket", 48, FramesPerPacket);
  return FramesPerPacket;
}
