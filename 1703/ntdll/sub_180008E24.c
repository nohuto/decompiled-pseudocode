/*
 * XREFs of sub_180008E24 @ 0x180008E24
 * Callers:
 *     RtlDeleteResource @ 0x180008CC0 (RtlDeleteResource.c)
 *     RtlDeleteCriticalSection @ 0x180008D10 (RtlDeleteCriticalSection.c)
 *     RtlInitializeResource @ 0x18000F220 (RtlInitializeResource.c)
 *     sub_18000F30C @ 0x18000F30C (sub_18000F30C.c)
 * Callees:
 *     <none>
 */

LOGICAL __fastcall sub_180008E24(PSLIST_ENTRY ListEntry)
{
  if ( LOWORD(ListHead.Alignment) >= 0xAu
    && (&unk_180159BE0 > (_UNKNOWN *)ListEntry || ListEntry >= (PSLIST_ENTRY)&dword_180159D60) )
  {
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, ListEntry);
  }
  else
  {
    return (unsigned int)RtlInterlockedPushEntrySList_0(&ListHead, ListEntry);
  }
}
