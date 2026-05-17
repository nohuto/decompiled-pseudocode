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

__int64 __fastcall sub_180005D90(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 52), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    sub_180005DCC(a1);
    RtlAcquireSRWLockExclusive(&unk_18015D380);
    RtlRbRemoveNode(&qword_18015D360, a1);
    RtlReleaseSRWLockExclusive(&unk_18015D380);
    *(_DWORD *)(a1 + 48) = 0;
    RtlReleaseSRWLockExclusive(a1 + 40);
    v3 = *(_QWORD *)(a1 + 168);
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v3);
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
  }
  return result;
}
