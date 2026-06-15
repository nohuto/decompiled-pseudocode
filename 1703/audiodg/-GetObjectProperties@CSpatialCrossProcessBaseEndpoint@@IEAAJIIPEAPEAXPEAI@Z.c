/*
 * XREFs of ?GetObjectProperties@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z @ 0x14005BE1C
 * Callers:
 *     ?GetObjectProperties@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x14005E100 (-GetObjectProperties@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z.c)
 *     ?GetObjectProperties@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x14005F450 (-GetObjectProperties@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAXPEAI@Z.c)
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AB90 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetObjectProperties(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int a2,
        unsigned int a3,
        void **a4,
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
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetObjectProperties", 879, v6);
    return v6;
  }
  if ( a3 >= *(_DWORD *)(*(_QWORD *)v5 + 8LL) || a2 >= 2 )
  {
    v6 = -2147024809;
    goto LABEL_8;
  }
  *a4 = (void *)(*(_QWORD *)(v5 + 24LL * a2 + 8) + a3 * *(_DWORD *)(*(_QWORD *)v5 + 12LL));
  if ( a5 )
    *a5 = *(_DWORD *)(*(_QWORD *)v5 + 12LL);
  return v6;
}
