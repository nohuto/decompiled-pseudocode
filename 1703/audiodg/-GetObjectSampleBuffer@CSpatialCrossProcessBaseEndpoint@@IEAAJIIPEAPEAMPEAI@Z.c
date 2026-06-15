/*
 * XREFs of ?GetObjectSampleBuffer@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAMPEAI@Z @ 0x14005BE94
 * Callers:
 *     ?GetObjectSampleBuffer@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAMPEAI@Z @ 0x14005E200 (-GetObjectSampleBuffer@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAMPEAI@Z.c)
 *     ?GetObjectSampleBuffer@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAMPEAI@Z @ 0x14005F4D0 (-GetObjectSampleBuffer@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAMPEAI@Z.c)
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AB90 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetObjectSampleBuffer(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int a2,
        unsigned int a3,
        float **a4,
        unsigned int *a5)
{
  __int64 v5; // r10
  unsigned int v6; // ebx

  v5 = *((_QWORD *)this + 112);
  v6 = 0;
  if ( !a4 )
  {
    v6 = -2147467261;
LABEL_8:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetObjectSampleBuffer", 854, v6);
    return v6;
  }
  if ( a3 >= *(_DWORD *)(*(_QWORD *)v5 + 8LL) || a2 >= 2 )
  {
    v6 = -2147024809;
    goto LABEL_8;
  }
  *a4 = (float *)(*(_QWORD *)(v5 + 24 * (a2 + 1LL)) + a3 * *(_DWORD *)(*(_QWORD *)v5 + 20LL));
  if ( a5 )
    *a5 = *(_DWORD *)(*(_QWORD *)v5 + 20LL) >> 2;
  return v6;
}
