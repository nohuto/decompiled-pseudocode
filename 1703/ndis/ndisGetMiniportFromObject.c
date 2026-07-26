/*
 * XREFs of ndisGetMiniportFromObject @ 0x1C00B56D4
 * Callers:
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00B54E4 (ndisDeliverNetPnPEventSynchronously.c)
 *     ndisReportTimeoutWaitingForExternalDriver @ 0x1C00F0274 (ndisReportTimeoutWaitingForExternalDriver.c)
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
