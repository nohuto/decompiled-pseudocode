/*
 * XREFs of StageQueue_Release @ 0x1C001F820
 * Callers:
 *     Isoch_CompleteStaleTransfers @ 0x1C0025464 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_CompleteTransfers @ 0x1C00256DC (Isoch_CompleteTransfers.c)
 *     Isoch_MapStage @ 0x1C00260E4 (Isoch_MapStage.c)
 *     Isoch_PrepareStage @ 0x1C0026610 (Isoch_PrepareStage.c)
 *     Isoch_Stage_CompleteTD @ 0x1C0027F88 (Isoch_Stage_CompleteTD.c)
 *     Isoch_Stage_MapIntoRing @ 0x1C002894C (Isoch_Stage_MapIntoRing.c)
 *     Bulk_CompleteTransfers @ 0x1C002B38C (Bulk_CompleteTransfers.c)
 *     Bulk_MapStage @ 0x1C002C278 (Bulk_MapStage.c)
 *     Bulk_PrepareStage @ 0x1C002C70C (Bulk_PrepareStage.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C002D05C (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C002D524 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StageQueue_Release(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v2; // eax
  int v3; // r10d
  unsigned int v4; // r9d
  __int64 result; // rax

  v2 = *a1;
  v3 = a1[4];
  --a1[2];
  v4 = a1[1];
  if ( a2 == &a1[v3 * v2 + 16] )
  {
    result = (v3 + 1) / v4;
    a1[4] = (v3 + 1) % v4;
  }
  else
  {
    result = (unsigned int)((int)(v4 + a1[3] - 1) / (int)v4);
    a1[3] = (int)(v4 + a1[3] - 1) % (int)v4;
  }
  return result;
}
