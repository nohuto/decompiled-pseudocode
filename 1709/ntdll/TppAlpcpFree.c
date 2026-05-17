/*
 * XREFs of TppAlpcpFree @ 0x180013A50
 * Callers:
 *     <none>
 * Callees:
 *     TpAdjustBindingCount @ 0x18000C7D8 (TpAdjustBindingCount.c)
 *     TppCleanupGroupMemberDestroy @ 0x180035EC8 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 */

__int64 __fastcall TppAlpcpFree(__int64 a1)
{
  __int64 v2; // rdi

  v2 = a1 - 72;
  TpAdjustBindingCount(*(_QWORD *)(a1 + 144), 0xFFFFFFFF);
  *(_QWORD *)(v2 + 56) = 0LL;
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x80000), v2);
}
