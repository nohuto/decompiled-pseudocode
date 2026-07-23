/*
 * XREFs of TppWorkpFree @ 0x180010800
 * Callers:
 *     TppWorkCallbackEpilog @ 0x18000EDF0 (TppWorkCallbackEpilog.c)
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x180035EC8 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall TppWorkpFree(PVOID BaseAddress)
{
  TppCleanupGroupMemberDestroy(BaseAddress);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, BaseAddress);
}
