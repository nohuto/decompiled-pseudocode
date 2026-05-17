/*
 * XREFs of TppSimplepFree @ 0x180011F20
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x180035EC8 (TppCleanupGroupMemberDestroy.c)
 */

__int64 __fastcall TppSimplepFree(__int64 a1)
{
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x200000), a1);
}
