/*
 * XREFs of Endpoint_HaltedCompletionCode @ 0x1C0011F18
 * Callers:
 *     Endpoint_TransferEventHandler @ 0x1C00144C0 (Endpoint_TransferEventHandler.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C0022114 (Control_ProcessTransferEventWithED0.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C0022404 (Control_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C002CD8C (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C002D05C (Bulk_ProcessTransferEventWithED1.c)
 * Callees:
 *     <none>
 */

bool __fastcall Endpoint_HaltedCompletionCode(__m128i **a1, unsigned int a2)
{
  bool result; // al
  __int64 v3; // rcx

  result = 1;
  if ( (((*a1)[17].m128i_i64[0] & 0x4000000000000000LL) == 0 || a2 != 199)
    && ((_mm_srli_si128((*a1)[17], 8).m128i_u8[0] & 0x20) == 0 || a2 != 198) )
  {
    if ( a2 > 0x24 )
      return 0;
    v3 = 0x150000045CLL;
    if ( !_bittest64(&v3, a2) )
      return 0;
  }
  return result;
}
