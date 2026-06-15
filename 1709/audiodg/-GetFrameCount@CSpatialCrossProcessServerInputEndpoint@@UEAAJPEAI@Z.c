/*
 * XREFs of ?GetFrameCount@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAI@Z @ 0x140062060
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005D9E0 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x140060104 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessServerInputEndpoint::GetFrameCount(
        CSpatialCrossProcessServerInputEndpoint *this,
        unsigned int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r10
  signed __int32 *v4; // r11
  signed __int32 v5; // eax

  v2 = 0;
  if ( !*((_BYTE *)this + 56) )
  {
    v2 = -2005139437;
LABEL_5:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessServerInputEndpoint::GetFrameCount", 216, v2);
    return v2;
  }
  if ( !a2 )
  {
    v2 = -2147467261;
    goto LABEL_5;
  }
  if ( CSpatialCrossProcessBaseEndpoint::IsRunning((CSpatialCrossProcessServerInputEndpoint *)((char *)this - 16))
    && *(_BYTE *)(v3 + 1144) )
  {
    v5 = _InterlockedCompareExchange(
           (volatile signed __int32 *)(*(_QWORD *)(v3 + 864) + 4LL * *(unsigned int *)(v3 + 1136) + 56),
           0,
           0);
  }
  else
  {
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v3 + 864) + 52LL), 0, 0);
  }
  *v4 = v5;
  if ( !v5 )
    *v4 = *(_DWORD *)(v3 + 60);
  return v2;
}
