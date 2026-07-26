/*
 * XREFs of ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C0024664
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0014510 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C0014B80 (ndisMTopReceiveNetBufferLists.c)
 *     NdisFReturnNetBufferLists @ 0x1C0016840 (NdisFReturnNetBufferLists.c)
 *     NdisReturnNetBufferLists @ 0x1C0016B80 (NdisReturnNetBufferLists.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C0017D10 (NdisFIndicateReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C00226A0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0068490 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C0069780 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C006A170 (ndisMIndicateSplitNblChain.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C006AA30 (ndisReturnNetBufferListsInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisMarkNetBufferListCorrelationIdsAsUsed(_QWORD *a1)
{
  __int64 result; // rax

  while ( a1 )
  {
    result = 0x8000000000000000uLL;
    a1[31] |= 0x8000000000000000uLL;
    a1 = (_QWORD *)*a1;
  }
  return result;
}
