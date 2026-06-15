/*
 * XREFs of ?GetGrantedObjectCount@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAI@Z @ 0x14005C0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?LogGetGrantedCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z @ 0x14005A0D0 (-LogGetGrantedCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AE50 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetGrantedObjectCount(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int *a2,
        __int64 a3,
        const GUID *a4)
{
  __int64 v4; // r8
  unsigned int v5; // ebx
  int v6; // eax

  v4 = *((_QWORD *)this + 107);
  v5 = -2005139437;
  if ( !v4 )
    goto LABEL_5;
  if ( !a2 )
  {
    v5 = -2147467261;
LABEL_5:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetGrantedObjectCount", 1060, v5);
    return v5;
  }
  v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 28), 0, 0);
  *a2 = v6;
  CSpatialCrossProcessEndpointTraceLogger::LogGetGrantedCount(
    (CSpatialCrossProcessBaseEndpoint *)((char *)this + 360),
    v6,
    v4,
    a4);
  return 0;
}
