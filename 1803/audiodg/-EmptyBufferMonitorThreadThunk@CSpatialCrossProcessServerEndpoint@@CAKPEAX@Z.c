/*
 * XREFs of ?EmptyBufferMonitorThreadThunk@CSpatialCrossProcessServerEndpoint@@CAKPEAX@Z @ 0x14005EE80
 * Callers:
 *     <none>
 * Callees:
 *     ?EmptyBufferMonitorThread@CSpatialCrossProcessServerEndpoint@@AEAAXXZ @ 0x14005ED80 (-EmptyBufferMonitorThread@CSpatialCrossProcessServerEndpoint@@AEAAXXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessServerEndpoint::EmptyBufferMonitorThreadThunk(HANDLE *Parameter)
{
  CSpatialCrossProcessServerEndpoint::EmptyBufferMonitorThread(Parameter);
  return 0LL;
}
