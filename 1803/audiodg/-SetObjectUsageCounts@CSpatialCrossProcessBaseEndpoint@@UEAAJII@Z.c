/*
 * XREFs of ?SetObjectUsageCounts@CSpatialCrossProcessBaseEndpoint@@UEAAJII@Z @ 0x14005D1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?LogAsarUsageReporting@CSpatialCrossProcessEndpointTraceLogger@@QEAAXII@Z @ 0x140059DC0 (-LogAsarUsageReporting@CSpatialCrossProcessEndpointTraceLogger@@QEAAXII@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AE50 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CheckResourceLimits@CSpatialCrossProcessBaseEndpoint@@IEAAXI@Z @ 0x14005B9C0 (-CheckResourceLimits@CSpatialCrossProcessBaseEndpoint@@IEAAXI@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::SetObjectUsageCounts(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int a2,
        unsigned int a3,
        const GUID *a4)
{
  unsigned int v7; // ebx
  __int64 v8; // r8

  v7 = -2005139437;
  CSpatialCrossProcessEndpointTraceLogger::LogAsarUsageReporting(
    (CSpatialCrossProcessBaseEndpoint *)((char *)this + 360),
    a2,
    a3,
    a4);
  v8 = *((_QWORD *)this + 107);
  if ( !v8 )
    goto LABEL_5;
  if ( a2 + a3 > *(_DWORD *)(v8 + 524) )
  {
    v7 = -2005139346;
LABEL_5:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::SetObjectUsageCounts", 1029, v7);
    return v7;
  }
  _InterlockedExchange64((volatile __int64 *)(v8 + 64), __SPAIR64__(a3, a2));
  CSpatialCrossProcessBaseEndpoint::CheckResourceLimits((CSpatialCrossProcessBaseEndpoint *)((char *)this - 24), a3);
  return 0;
}
