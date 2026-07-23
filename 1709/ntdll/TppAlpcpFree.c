/*
 * XREFs of TppAlpcpFree @ 0x180013A50
 * Callers:
 *     <none>
 * Callees:
 *     TpAdjustBindingCount @ 0x18000C7D8 (TpAdjustBindingCount.c)
 *     TppCleanupGroupMemberDestroy @ 0x180035EC8 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall TppAlpcpFree(__int64 a1)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)(a1 - 72);
  TpAdjustBindingCount(*(_QWORD *)(a1 + 144), 0xFFFFFFFF);
  v2[7] = 0LL;
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x80000, v2);
}
