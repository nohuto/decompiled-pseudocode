/*
 * XREFs of Bulk_IsTransferEventLikelyDuplicate_Internal @ 0x1C002E6CC
 * Callers:
 *     Bulk_EP_IsTransferEventLikelyDuplicate @ 0x1C002E010 (Bulk_EP_IsTransferEventLikelyDuplicate.c)
 *     Bulk_ValidateED0TrbPointerOnMismatch @ 0x1C0031A38 (Bulk_ValidateED0TrbPointerOnMismatch.c)
 * Callees:
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0021F30 (StageQueue_ForwardScanGetNextStage.c)
 *     TR_DoesSegmentContainDequeuePointer @ 0x1C0022B74 (TR_DoesSegmentContainDequeuePointer.c)
 */

char __fastcall Bulk_IsTransferEventLikelyDuplicate_Internal(_QWORD *a1, signed __int64 a2, _BYTE *a3)
{
  char v3; // bl
  signed __int64 v5; // r11
  __int64 v7; // rdi
  unsigned __int8 *i; // r10
  unsigned __int8 *NextStage; // rax
  unsigned __int8 **v10; // r10

  v3 = 0;
  *a3 = 0;
  v5 = a2;
  if ( (_QWORD *)a1[26] != a1 + 26 )
  {
    v7 = a1[27];
    if ( TR_DoesSegmentContainDequeuePointer(v7, 0, 0xFFFFFFFF, a2) )
      goto LABEL_9;
  }
  for ( i = (unsigned __int8 *)a1[46]; ; i = *v10 )
  {
    if ( a1 + 46 == (_QWORD *)i )
    {
      v7 = a1[22];
      goto LABEL_8;
    }
    i[133] = i[132];
    i[134] = i[130];
    NextStage = StageQueue_ForwardScanGetNextStage(i + 128);
    if ( NextStage )
      break;
  }
  v7 = *((_QWORD *)NextStage + 12);
LABEL_8:
  if ( TR_DoesSegmentContainDequeuePointer(v7, 0, 0xFFFFFFFF, v5) )
  {
LABEL_9:
    v3 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 16)
                    + 16LL * (unsigned int)((unsigned __int64)(v5 - *(_QWORD *)(v7 + 24)) >> 4)
                    + 12) & 0xFC00) == 0x2000 )
      *a3 = 1;
  }
  return v3;
}
