/*
 * XREFs of StageQueue_Release @ 0x1C0021F70
 * Callers:
 *     Isoch_CompleteStaleTransfers @ 0x1C00279F4 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_CompleteTransfers @ 0x1C0027C6C (Isoch_CompleteTransfers.c)
 *     Isoch_MapStage @ 0x1C002868C (Isoch_MapStage.c)
 *     Isoch_PrepareStage @ 0x1C0028BB4 (Isoch_PrepareStage.c)
 *     Isoch_Stage_CompleteTD @ 0x1C002A500 (Isoch_Stage_CompleteTD.c)
 *     Isoch_Stage_MapIntoRing @ 0x1C002AEC0 (Isoch_Stage_MapIntoRing.c)
 *     Bulk_CompleteTransfers @ 0x1C002D8DC (Bulk_CompleteTransfers.c)
 *     Bulk_MapStage @ 0x1C002E7B4 (Bulk_MapStage.c)
 *     Bulk_PrepareStage @ 0x1C002EC3C (Bulk_PrepareStage.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C002F58C (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C002FA50 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StageQueue_Release(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v3; // ecx
  __int64 result; // rax

  --a1[2];
  v3 = a1[4];
  if ( a2 == &a1[v3 * *a1 + 16] )
  {
    result = (v3 + 1) / (unsigned int)a1[1];
    a1[4] = (v3 + 1) % (unsigned int)a1[1];
  }
  else
  {
    result = (unsigned int)((a1[1] + a1[3] - 1) / a1[1]);
    a1[3] = (a1[1] + a1[3] - 1) % a1[1];
  }
  return result;
}
