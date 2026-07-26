/*
 * XREFs of NdisFreePacketPool @ 0x1C0052000
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisFreePacketPool @ 0x1C0052348 (ndisFreePacketPool_ea_1C0052348.c)
 */

void __stdcall NdisFreePacketPool(NDIS_HANDLE PoolHandle)
{
  if ( (unsigned __int8)byte_1C009261C >= 4u )
    WPP_SF_q(0xCu, &WPP_2149d9bc815e3bedf819412f93ade2f1_Traceguids, (__int64)PoolHandle);
  ndisFreePacketPool((struct _NDIS_PKT_POOL *)PoolHandle);
  if ( (unsigned __int8)byte_1C009261C >= 4u )
    WPP_SF_q(0xDu, &WPP_2149d9bc815e3bedf819412f93ade2f1_Traceguids, (__int64)PoolHandle);
}
