/*
 * XREFs of sub_180005D90 @ 0x180005D90
 * Callers:
 *     EtwDeliverDataBlock @ 0x180005750 (EtwDeliverDataBlock.c)
 *     EtwNotificationUnregister @ 0x180008040 (EtwNotificationUnregister.c)
 *     sub_180029AF4 @ 0x180029AF4 (sub_180029AF4.c)
 * Callees:
 *     sub_180005DCC @ 0x180005DCC (sub_180005DCC.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlRbRemoveNode @ 0x180021260 (RtlRbRemoveNode.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

LOGICAL __fastcall sub_180005D90(PVOID BaseAddress)
{
  LOGICAL result; // eax
  void *v3; // r8

  result = _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress + 13, 0xFFFFFFFF);
  if ( result == 1 )
  {
    sub_180005DCC(BaseAddress);
    RtlAcquireSRWLockExclusive(&stru_18015D380);
    RtlRbRemoveNode(&Parent, (PRTL_BALANCED_NODE)BaseAddress);
    RtlReleaseSRWLockExclusive(&stru_18015D380);
    *((_DWORD *)BaseAddress + 12) = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 5);
    v3 = (void *)*((_QWORD *)BaseAddress + 21);
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return result;
}
