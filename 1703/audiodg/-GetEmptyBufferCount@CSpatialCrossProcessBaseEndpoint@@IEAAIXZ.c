/*
 * XREFs of ?GetEmptyBufferCount@CSpatialCrossProcessBaseEndpoint@@IEAAIXZ @ 0x14005EA90
 * Callers:
 *     ?EmptyBufferMonitorThread@CSpatialCrossProcessServerEndpoint@@AEAAXXZ @ 0x14005E97C (-EmptyBufferMonitorThread@CSpatialCrossProcessServerEndpoint@@AEAAXXZ.c)
 * Callees:
 *     ?LogEmptyBufferCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z @ 0x140059CD4 (-LogEmptyBufferCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z.c)
 *     ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x14005C350 (-GetState@PingPongState@@AEBA-AW4State@1@XZ.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetEmptyBufferCount(CSpatialCrossProcessBaseEndpoint *this)
{
  __int64 v1; // r11
  unsigned int v2; // ebx
  const GUID *v3; // r8
  const GUID *v4; // r9

  v2 = `PingPongState::GetEmptyBufferCount'::`2'::emptyBufferCount_[(unsigned int)PingPongState::GetState((__int64)this + 168)];
  CSpatialCrossProcessEndpointTraceLogger::LogEmptyBufferCount(
    (CSpatialCrossProcessEndpointTraceLogger *)(v1 + 384),
    v2,
    v3,
    v4);
  return v2;
}
