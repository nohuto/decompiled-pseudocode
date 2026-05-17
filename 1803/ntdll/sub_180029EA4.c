/*
 * XREFs of sub_180029EA4 @ 0x180029EA4
 * Callers:
 *     sub_180024408 @ 0x180024408 (sub_180024408.c)
 *     RtlDeleteCriticalSection @ 0x180029D90 (RtlDeleteCriticalSection.c)
 *     RtlDeleteResource @ 0x180029F00 (RtlDeleteResource.c)
 *     RtlInitializeResource @ 0x18005C7A0 (RtlInitializeResource.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall sub_180029EA4(PSLIST_ENTRY ListEntry)
{
  if ( LOWORD(stru_18015D0E0.Alignment) >= 0xAu
    && (&unk_18015AC20 > (_UNKNOWN *)ListEntry || ListEntry >= (PSLIST_ENTRY)&dword_18015ADA0) )
  {
    return (PSLIST_ENTRY)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)ListEntry);
  }
  else
  {
    return RtlInterlockedPushEntrySList_0(&stru_18015D0E0, ListEntry);
  }
}
