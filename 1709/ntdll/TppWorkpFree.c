/*
 * XREFs of TppWorkpFree @ 0x180010800
 * Callers:
 *     TppWorkCallbackEpilog @ 0x18000EDF0 (TppWorkCallbackEpilog.c)
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x180035EC8 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 */

__int64 __fastcall TppWorkpFree(__int64 a1)
{
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x200000), a1);
}
