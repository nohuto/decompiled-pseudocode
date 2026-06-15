/*
 * XREFs of ?GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005ED60
 * Callers:
 *     ?GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x1400620F0 (-GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@.c)
 * Callees:
 *     ?LogGetAvailableObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDI@Z @ 0x14005CBDC (-LogGetAvailableObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDI@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005D9E0 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14005EED8 (-GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 *     ?ValidateBlockDescriptors@CSpatialCrossProcessBaseEndpoint@@AEAAJXZ @ 0x14005FD08 (-ValidateBlockDescriptors@CSpatialCrossProcessBaseEndpoint@@AEAAJXZ.c)
 *     ?ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@1@@Z @ 0x14005FD58 (-ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@1@@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForProcessing(
        const struct CSpatialCrossProcessBaseEndpoint::ControlData **this,
        unsigned int *a2,
        unsigned int *a3)
{
  int Index; // ebx
  const struct CSpatialCrossProcessBaseEndpoint::ControlData *v7; // rdx
  unsigned int v8; // r8d
  unsigned int v9; // eax
  unsigned int v10; // esi

  *a3 = 0;
  *a2 = 0;
  Index = CSpatialCrossProcessBaseEndpoint::ValidateControlData((CSpatialCrossProcessBaseEndpoint *)this, this[110]);
  if ( Index >= 0 )
  {
    Index = CSpatialCrossProcessBaseEndpoint::ValidateBlockDescriptors((CSpatialCrossProcessBaseEndpoint *)this);
    if ( Index >= 0 )
    {
      Index = CSpatialCrossProcessBaseEndpoint::GetPingPongReadIndex((CSpatialCrossProcessBaseEndpoint *)this, a2);
      if ( Index >= 0 )
      {
        v7 = this[110];
        v8 = *((_DWORD *)v7 + 130) + *((_DWORD *)v7 + 131);
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)v7 + *a2 + 8, 0, 0);
        v10 = v9;
        if ( v9 <= v8 )
        {
          CSpatialCrossProcessEndpointTraceLogger::LogGetAvailableObjectCount(
            (CSpatialCrossProcessEndpointTraceLogger *)(this + 48),
            "ServerProc",
            v9);
          *a3 = v10;
          return (unsigned int)Index;
        }
        Index = -2147418113;
      }
    }
  }
  SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForProcessing", 830, Index);
  return (unsigned int)Index;
}
