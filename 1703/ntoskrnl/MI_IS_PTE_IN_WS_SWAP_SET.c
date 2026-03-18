/*
 * XREFs of MI_IS_PTE_IN_WS_SWAP_SET @ 0x1400224C0
 * Callers:
 *     MiDeletePteList @ 0x1400C5000 (MiDeletePteList.c)
 *     MiWriteCompletePfn @ 0x1400CB520 (MiWriteCompletePfn.c)
 *     MiDecommitPages @ 0x1400D2D20 (MiDecommitPages.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     MiReservePageFileSpace @ 0x140104518 (MiReservePageFileSpace.c)
 *     MiAddToReservationCluster @ 0x14013A21C (MiAddToReservationCluster.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_IS_PTE_IN_WS_SWAP_SET(__int64 a1, _WORD *a2)
{
  __int16 v2; // cx

  v2 = *(_WORD *)(*(_QWORD *)(a1 + 8LL * ((unsigned __int8)HIBYTE(*a2) >> 4) + 5600) + 204LL);
  return (v2 & 0x10) != 0 || (v2 & 0x20) != 0 && (*(_QWORD *)a2 & 2) != 0;
}
