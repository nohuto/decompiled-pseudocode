/*
 * XREFs of ?ZeroOutObject@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z @ 0x14005D440
 * Callers:
 *     ?GetObjectMetadata@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x14005E400 (-GetObjectMetadata@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z.c)
 *     ?GetObjectProperties@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x14005E500 (-GetObjectProperties@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z.c)
 *     ?GetObjectSampleBuffer@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAMPEAI@Z @ 0x14005E600 (-GetObjectSampleBuffer@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAMPEAI@Z.c)
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AE50 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ZeroOutObject@SpatialBlock@@QEAAJII@Z @ 0x14005D474 (-ZeroOutObject@SpatialBlock@@QEAAJII@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::ZeroOutObject(
        SpatialBlock **this,
        unsigned int a2,
        unsigned int a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = SpatialBlock::ZeroOutObject(this[112], a2, a3);
  v4 = v3;
  if ( v3 < 0 )
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::ZeroOutObject", 924, v3);
  return v4;
}
