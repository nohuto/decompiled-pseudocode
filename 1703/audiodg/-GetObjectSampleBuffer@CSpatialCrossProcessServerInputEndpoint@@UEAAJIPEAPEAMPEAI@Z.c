/*
 * XREFs of ?GetObjectSampleBuffer@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAMPEAI@Z @ 0x14005F4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AB90 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetObjectSampleBuffer@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAMPEAI@Z @ 0x14005BE94 (-GetObjectSampleBuffer@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAMPEAI@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessServerInputEndpoint::GetObjectSampleBuffer(
        CSpatialCrossProcessServerInputEndpoint *this,
        unsigned int a2,
        float **a3,
        unsigned int *a4)
{
  int ObjectSampleBuffer; // ebx

  if ( !*((_BYTE *)this + 56) )
  {
    ObjectSampleBuffer = -2005139437;
LABEL_8:
    SpatialCPTraceLoggingErrorHelper(
      "CSpatialCrossProcessServerInputEndpoint::GetObjectSampleBuffer",
      68,
      ObjectSampleBuffer);
    return (unsigned int)ObjectSampleBuffer;
  }
  if ( !*((_BYTE *)this + 1144) )
  {
    ObjectSampleBuffer = -2147418113;
    goto LABEL_8;
  }
  if ( a2 >= *((_DWORD *)this + 285) )
  {
    ObjectSampleBuffer = -2147024809;
    goto LABEL_8;
  }
  ObjectSampleBuffer = CSpatialCrossProcessBaseEndpoint::GetObjectSampleBuffer(
                         (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 16),
                         *((_DWORD *)this + 284),
                         a2,
                         a3,
                         a4);
  if ( ObjectSampleBuffer < 0 )
    goto LABEL_8;
  return (unsigned int)ObjectSampleBuffer;
}
