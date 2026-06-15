/*
 * XREFs of ?GetObjectMetadata@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z @ 0x14005BD9C
 * Callers:
 *     ?GetObjectMetadata@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x14005E000 (-GetObjectMetadata@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z.c)
 *     ?GetObjectMetadata@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x14005F3D0 (-GetObjectMetadata@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAXPEAI@Z.c)
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AB90 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetObjectMetadata(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int a2,
        unsigned int a3,
        void **a4,
        unsigned int *a5)
{
  __int64 v5; // r10
  unsigned int v6; // ebx
  __int64 v7; // r11
  int v8; // edx
  void *v9; // rax

  v5 = *((_QWORD *)this + 112);
  v6 = 0;
  v7 = a2;
  if ( !a4 )
  {
    v6 = -2147467261;
LABEL_11:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetObjectMetadata", 904, v6);
    return v6;
  }
  if ( a3 >= *(_DWORD *)(*(_QWORD *)v5 + 8LL) || a2 >= 2 )
  {
    v6 = -2147024809;
    goto LABEL_11;
  }
  v8 = *(_DWORD *)(*(_QWORD *)v5 + 16LL);
  if ( v8 )
    v9 = (void *)(*(_QWORD *)(v5 + 24 * v7 + 16) + a3 * v8);
  else
    v9 = 0LL;
  *a4 = v9;
  if ( a5 )
    *a5 = *(_DWORD *)(*(_QWORD *)v5 + 16LL);
  return v6;
}
