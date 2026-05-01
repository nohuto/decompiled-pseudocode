/*
 * XREFs of CrmSubscriberNotify @ 0x180034B54
 * Callers:
 *     CrmSubscriberReadyQueueAdd @ 0x18003491C (CrmSubscriberReadyQueueAdd.c)
 *     CrmSubscriberReadyQueueRemove @ 0x180034A18 (CrmSubscriberReadyQueueRemove.c)
 * Callees:
 *     CrmLogSubscriberNotify @ 0x180034B9C (CrmLogSubscriberNotify.c)
 */

__int64 __fastcall CrmSubscriberNotify(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  unsigned int v5; // eax
  unsigned int v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  if ( *(_DWORD *)(a1 + 72) || *(_DWORD *)(a1 + 76) )
  {
    RtlAcquireSRWLockExclusive(a1 + 16);
    *(_DWORD *)(a1 + 24) = GetCurrentThreadId();
    v5 = RtlPublishWnfStateData(*(_QWORD *)(a1 + 72), 0LL, &v6, 4LL, 0LL);
    *(_DWORD *)(a1 + 24) = 0;
    v3 = v5;
    RtlReleaseSRWLockExclusive(a1 + 16);
    a2 = v6;
  }
  else
  {
    v3 = 0;
  }
  return CrmLogSubscriberNotify(a1, a2, v3);
}
