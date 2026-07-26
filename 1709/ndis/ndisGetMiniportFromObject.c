/*
 * XREFs of ndisGetMiniportFromObject @ 0x1C00B55AC
 * Callers:
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C00B5310 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ndisReportTimeoutWaitingForExternalDriver @ 0x1C00F99B4 (ndisReportTimeoutWaitingForExternalDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetMiniportFromObject(__int64 a1)
{
  if ( !a1 )
    return 0LL;
  if ( *(_BYTE *)a1 == 5 )
    return *(_QWORD *)(a1 + 32);
  if ( *(_BYTE *)a1 == 17 )
    return a1;
  if ( *(_BYTE *)a1 != 18 )
    return 0LL;
  return *(_QWORD *)(a1 + 16);
}
