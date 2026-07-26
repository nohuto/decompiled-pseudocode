/*
 * XREFs of ndisVerifierFreePacketPool @ 0x1C0066DF0
 * Callers:
 *     <none>
 * Callees:
 *     ndisFreePacketPool @ 0x1C0051AD8 (ndisFreePacketPool_ea_1C0051AD8.c)
 */

void __fastcall ndisVerifierFreePacketPool(struct _NDIS_PKT_POOL *a1)
{
  ndisFreePacketPool(a1);
}
