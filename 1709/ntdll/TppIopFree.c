/*
 * XREFs of TppIopFree @ 0x18000A900
 * Callers:
 *     <none>
 * Callees:
 *     TpAdjustBindingCount @ 0x18000C7D8 (TpAdjustBindingCount.c)
 *     TppCleanupGroupMemberDestroy @ 0x180035EC8 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 */

__int64 __fastcall TppIopFree(__int64 a1)
{
  TpAdjustBindingCount(*(_QWORD *)(a1 + 144), 0xFFFFFFFFLL);
  *(_QWORD *)(a1 + 256) = 0LL;
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x40000), a1);
}
