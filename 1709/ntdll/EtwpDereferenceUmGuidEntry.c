/*
 * XREFs of EtwpDereferenceUmGuidEntry @ 0x180064118
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180036244 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwNotificationUnregister @ 0x180060B70 (EtwNotificationUnregister.c)
 *     EtwDeliverDataBlock @ 0x180063BC0 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18003A530 (RtlRbRemoveNode.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x1800642DC (EtwpAcquireGuidEntryExclusive.c)
 */

__int64 __fastcall EtwpDereferenceUmGuidEntry(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 *v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // r8

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 52), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    EtwpAcquireGuidEntryExclusive(a1, a2);
    RtlAcquireSRWLockExclusive((unsigned __int64)&EtwpProvLock, v4, v5, v6);
    RtlRbRemoveNode((__int64)&EtwpGuidEntryTable, (unsigned __int64 *)a1);
    RtlReleaseSRWLockExclusive(&EtwpProvLock);
    *(_DWORD *)(a1 + 48) = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 40));
    v7 = *(_QWORD *)(a1 + 168);
    if ( v7 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  return result;
}
