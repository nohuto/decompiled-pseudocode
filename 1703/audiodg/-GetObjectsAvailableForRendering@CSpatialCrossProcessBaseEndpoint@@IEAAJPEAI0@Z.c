/*
 * XREFs of ?GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005BFE0
 * Callers:
 *     ?GetAvailableObjectCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z @ 0x14005DCA0 (-GetAvailableObjectCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z.c)
 * Callees:
 *     ?LogGetAvailableObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDI@Z @ 0x140059D60 (-LogGetAvailableObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDI@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AB90 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14005BBC8 (-GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 *     ?GetPingPongWriteIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14005C1B0 (-GetPingPongWriteIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForRendering(
        const struct CSpatialCrossProcessBaseEndpoint::ControlData **this,
        unsigned int *a2,
        unsigned int *a3)
{
  int GrantedDynamicObjectCount; // ebx

  *a2 = 0;
  GrantedDynamicObjectCount = CSpatialCrossProcessBaseEndpoint::GetGrantedDynamicObjectCount(this, a3);
  if ( GrantedDynamicObjectCount >= 0 )
  {
    *((_DWORD *)this + 36) = _InterlockedCompareExchange((volatile signed __int32 *)this[110] + 13, 0, 0);
    GrantedDynamicObjectCount = CSpatialCrossProcessBaseEndpoint::GetPingPongWriteIndex(
                                  (CSpatialCrossProcessBaseEndpoint *)this,
                                  a2);
  }
  CSpatialCrossProcessEndpointTraceLogger::LogGetAvailableObjectCount(
    (CSpatialCrossProcessEndpointTraceLogger *)(this + 48),
    "ClientRender",
    *a3);
  if ( GrantedDynamicObjectCount < 0 )
  {
    *a3 = 0;
    SpatialCPTraceLoggingErrorHelper(
      "CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForRendering",
      783,
      GrantedDynamicObjectCount);
  }
  return (unsigned int)GrantedDynamicObjectCount;
}
