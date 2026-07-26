/*
 * XREFs of ndisGetMiniportFromObject @ 0x1C00B89F8
 * Callers:
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00B860C (ndisDeliverNetPnPEventSynchronously.c)
 *     ndisReportTimeoutWaitingForExternalDriver @ 0x1C00FC560 (ndisReportTimeoutWaitingForExternalDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetMiniportFromObject(__int64 a1)
{
  if ( !a1 )
    return 0LL;
  if ( *(_BYTE *)a1 == 5 )
    return *(_QWORD *)(a1 + 32);
  if ( *(_BYTE *)a1 != 17 )
  {
    if ( *(_BYTE *)a1 == 18 )
      return *(_QWORD *)(a1 + 16);
    return 0LL;
  }
  return a1;
}
