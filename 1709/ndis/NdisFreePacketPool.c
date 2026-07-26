/*
 * XREFs of NdisFreePacketPool @ 0x1C0050D40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ndisFreePacketPool @ 0x1C0051138 (ndisFreePacketPool_ea_1C0051138.c)
 */

void __stdcall NdisFreePacketPool(NDIS_HANDLE PoolHandle)
{
  if ( (unsigned __int8)byte_1C009875C >= 4u )
    WPP_SF_q(0xCu, &WPP_2149d9bc815e3bedf819412f93ade2f1_Traceguids, (__int64)PoolHandle);
  ndisFreePacketPool((struct _NDIS_PKT_POOL *)PoolHandle);
  if ( (unsigned __int8)byte_1C009875C >= 4u )
    WPP_SF_q(0xDu, &WPP_2149d9bc815e3bedf819412f93ade2f1_Traceguids, (__int64)PoolHandle);
}
