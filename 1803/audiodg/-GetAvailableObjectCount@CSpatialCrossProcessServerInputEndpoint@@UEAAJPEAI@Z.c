/*
 * XREFs of ?GetAvailableObjectCount@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAI@Z @ 0x14005F5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AE50 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005D6E8 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessServerInputEndpoint::GetAvailableObjectCount(
        CSpatialCrossProcessServerInputEndpoint *this,
        unsigned int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r10
  _DWORD *v4; // r11

  v2 = *((_DWORD *)this + 289);
  *a2 = 0;
  if ( !*((_BYTE *)this + 56) )
  {
    v2 = -2005139437;
LABEL_10:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessServerInputEndpoint::GetAvailableObjectCount", 49, v2);
    return v2;
  }
  if ( CSpatialCrossProcessBaseEndpoint::IsRunning((CSpatialCrossProcessServerInputEndpoint *)((char *)this - 16)) )
  {
    if ( *(_BYTE *)(v3 + 1152) )
      *v4 = *(_DWORD *)(v3 + 1148);
    if ( v2 != -2005139433 && v2 != -2005139358 && v2 >= 2 )
      goto LABEL_10;
  }
  else
  {
    return (unsigned int)-2005139433;
  }
  return v2;
}
