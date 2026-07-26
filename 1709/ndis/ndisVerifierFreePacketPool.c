/*
 * XREFs of ndisVerifierFreePacketPool @ 0x1C0066300
 * Callers:
 *     <none>
 * Callees:
 *     ndisFreePacketPool @ 0x1C0051138 (ndisFreePacketPool_ea_1C0051138.c)
 */

void __fastcall ndisVerifierFreePacketPool(struct _NDIS_PKT_POOL *a1)
{
  ndisFreePacketPool(a1);
}
