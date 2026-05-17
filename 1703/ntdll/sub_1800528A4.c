/*
 * XREFs of sub_1800528A4 @ 0x1800528A4
 * Callers:
 *     sub_18001AF94 @ 0x18001AF94 (sub_18001AF94.c)
 *     EtwDeliverDataBlock @ 0x1800523B0 (EtwDeliverDataBlock.c)
 *     EtwNotificationUnregister @ 0x18005FD10 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlRbRemoveNode @ 0x180028010 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180052A74 @ 0x180052A74 (sub_180052A74.c)
 */

__int64 __fastcall sub_1800528A4(unsigned __int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 52), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    sub_180052A74(a1);
    RtlAcquireSRWLockExclusive(&qword_18015C348);
    RtlRbRemoveNode((__int64)&qword_18015C328, (unsigned __int64 *)a1);
    RtlReleaseSRWLockExclusive(&qword_18015C348);
    *(_DWORD *)(a1 + 48) = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 40));
    v3 = *(_QWORD *)(a1 + 168);
    if ( v3 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  return result;
}
