/*
 * XREFs of ndisMStartInitMode @ 0x1C00CA514
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     NdisSetTimer @ 0x1C0024D00 (NdisSetTimer.c)
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
