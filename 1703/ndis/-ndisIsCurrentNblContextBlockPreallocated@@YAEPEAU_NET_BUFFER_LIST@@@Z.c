/*
 * XREFs of ?ndisIsCurrentNblContextBlockPreallocated@@YAEPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0010CB0
 * Callers:
 *     NdisFreeNetBufferListContext @ 0x1C0010A30 (NdisFreeNetBufferListContext.c)
 *     NdisAllocateNetBufferListContext @ 0x1C0010B20 (NdisAllocateNetBufferListContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsCurrentNblContextBlockPreallocated(struct _NET_BUFFER_LIST *a1)
{
  int v1; // edx

  v1 = *((_DWORD *)a1->NdisPoolHandle + 15);
  return (v1 & 2) != 0 && a1->Context == (_NET_BUFFER_LIST_CONTEXT *)((char *)a1 + ((v1 & 1) != 0 ? 544LL : 368LL));
}
