/*
 * XREFs of ndisMStartInitMode @ 0x1C00AD2D4
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisSetTimer @ 0x1C0002A50 (NdisSetTimer.c)
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 */

void __fastcall ndisMStartInitMode(__int64 a1)
{
  if ( ndisReferenceMiniport(a1) )
  {
    *(_BYTE *)(a1 + 1995) = 1;
    *(_QWORD *)(a1 + 2144) = ndisMDispatchReceiveNetBufferListsWithLock;
    *(_QWORD *)(a1 + 2152) = ndisMDispatchReceiveNetBufferListsWithLock;
    *(_BYTE *)(a1 + 2673) = 0;
    KeClearEvent((PRKEVENT)(a1 + 2992));
    NdisSetTimer((PNDIS_TIMER)(a1 + 2784), 0x7530u);
  }
}
