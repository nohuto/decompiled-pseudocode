/*
 * XREFs of StageQueue_ForwardScanGetNextStage @ 0x1C001F7E0
 * Callers:
 *     Isoch_CompleteStaleTransfers @ 0x1C0025464 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_CompleteTransfers @ 0x1C00256DC (Isoch_CompleteTransfers.c)
 *     Isoch_FindTrbMatch @ 0x1C0025D64 (Isoch_FindTrbMatch.c)
 *     Isoch_Stage_Find @ 0x1C002852C (Isoch_Stage_Find.c)
 *     Isoch_Transfer_CompleteStaleStages @ 0x1C0029BD4 (Isoch_Transfer_CompleteStaleStages.c)
 *     Bulk_CompleteTransfers @ 0x1C002B38C (Bulk_CompleteTransfers.c)
 *     Bulk_FindStage @ 0x1C002BE60 (Bulk_FindStage.c)
 *     Bulk_IsTransferEventLikelyDuplicate_Internal @ 0x1C002C190 (Bulk_IsTransferEventLikelyDuplicate_Internal.c)
 *     Bulk_ValidateStagePointer @ 0x1C002F684 (Bulk_ValidateStagePointer.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall StageQueue_ForwardScanGetNextStage(unsigned __int8 *a1)
{
  unsigned __int8 *v2; // r9
  unsigned __int8 v3; // cl
  int v4; // edx
  __int64 v5; // rax

  v2 = 0LL;
  v3 = a1[6];
  if ( v3 )
  {
    v4 = a1[5];
    v5 = v4 * (unsigned int)*a1;
    a1[6] = v3 - 1;
    v2 = &a1[v5 + 16];
    a1[5] = (v4 + 1) % (unsigned int)a1[1];
  }
  return v2;
}
