/*
 * XREFs of TppJobpFree @ 0x180014300
 * Callers:
 *     <none>
 * Callees:
 *     TpAdjustBindingCount @ 0x18000C7D8 (TpAdjustBindingCount.c)
 *     TppCleanupGroupMemberDestroy @ 0x180035EC8 (TppCleanupGroupMemberDestroy.c)
 */

__int64 __fastcall TppJobpFree(__int64 a1)
{
  TpAdjustBindingCount(*(_QWORD *)(a1 + 144), 0xFFFFFFFF);
  *(_QWORD *)(a1 - 16) = 0LL;
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 3407872), a1 - 72);
}
