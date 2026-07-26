/*
 * XREFs of ?ndisLastNblInNblChain@@YAPEAU_NET_BUFFER_LIST@@PEAU1@@Z @ 0x1C0024688
 * Callers:
 *     ndisMTopReceiveNetBufferLists @ 0x1C0014B80 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C00226A0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0068490 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C0069780 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C006A170 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     <none>
 */

struct _NET_BUFFER_LIST *__fastcall ndisLastNblInNblChain(struct _NET_BUFFER_LIST *a1)
{
  struct _NET_BUFFER_LIST *i; // rax

  for ( i = (struct _NET_BUFFER_LIST *)a1->Link.Alignment; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
    a1 = i;
  return a1;
}
