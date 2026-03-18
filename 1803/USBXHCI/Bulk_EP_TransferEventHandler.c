/*
 * XREFs of Bulk_EP_TransferEventHandler @ 0x1C002BDD0
 * Callers:
 *     <none>
 * Callees:
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C002CD8C (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C002D05C (Bulk_ProcessTransferEventWithED1.c)
 */

__int64 __fastcall Bulk_EP_TransferEventHandler(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    return Bulk_ProcessTransferEventWithED1(a1, a2);
  else
    return Bulk_ProcessTransferEventWithED0(a1, a2);
}
