/*
 * XREFs of WPP_SF_dq @ 0x140056DA4
 * Callers:
 *     ?ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ @ 0x140016940 (-ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ.c)
 *     ?SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ @ 0x140061E88 (-SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_dq(TRACEHANDLE a1, USHORT a2, const GUID *a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return TraceMessage(a1, 0x2Bu, a3, a2, &v5, 4LL, va, 8LL, 0LL);
}
