/*
 * XREFs of ?GetObjectMetadata@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x140062270
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005D9E0 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetObjectMetadata@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z @ 0x14005EBEC (-GetObjectMetadata@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessServerInputEndpoint::GetObjectMetadata(
        CSpatialCrossProcessServerInputEndpoint *this,
        unsigned int a2,
        void **a3,
        unsigned int *a4)
{
  int ObjectMetadata; // ebx

  if ( !*((_BYTE *)this + 56) )
  {
    ObjectMetadata = -2005139437;
LABEL_8:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessServerInputEndpoint::GetObjectMetadata", 120, ObjectMetadata);
    return (unsigned int)ObjectMetadata;
  }
  if ( !*((_BYTE *)this + 1144) )
  {
    ObjectMetadata = -2147418113;
    goto LABEL_8;
  }
  if ( a2 >= *((_DWORD *)this + 285) )
  {
    ObjectMetadata = -2147024809;
    goto LABEL_8;
  }
  ObjectMetadata = CSpatialCrossProcessBaseEndpoint::GetObjectMetadata(
                     (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 16),
                     *((_DWORD *)this + 284),
                     a2,
                     a3,
                     a4);
  if ( ObjectMetadata < 0 )
    goto LABEL_8;
  return (unsigned int)ObjectMetadata;
}
