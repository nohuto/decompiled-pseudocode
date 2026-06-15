/*
 * XREFs of ?GetObjectSampleBuffer@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAMPEAI@Z @ 0x14005C294
 * Callers:
 *     ?GetObjectSampleBuffer@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAMPEAI@Z @ 0x14005E600 (-GetObjectSampleBuffer@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAMPEAI@Z.c)
 *     ?GetObjectSampleBuffer@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAMPEAI@Z @ 0x14005F980 (-GetObjectSampleBuffer@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAMPEAI@Z.c)
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AE50 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetObjectSampleBuffer(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int a2,
        unsigned int a3,
        float **a4,
        unsigned int *a5)
{
  unsigned int v5; // ebx
  __int64 v7; // r8

  v5 = 0;
  if ( !a4 )
  {
    v5 = -2147467261;
LABEL_8:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetObjectSampleBuffer", 855, v5);
    return v5;
  }
  v7 = *((_QWORD *)this + 112);
  if ( a3 >= *(_DWORD *)(*(_QWORD *)v7 + 8LL) || a2 >= 2 )
  {
    v5 = -2147024809;
    goto LABEL_8;
  }
  *a4 = (float *)(*(_QWORD *)(v7 + 24 * (a2 + 1LL)) + a3 * *(_DWORD *)(*(_QWORD *)v7 + 20LL));
  if ( a5 )
    *a5 = *(_DWORD *)(*(_QWORD *)v7 + 20LL) >> 2;
  return v5;
}
