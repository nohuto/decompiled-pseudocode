/*
 * XREFs of RtlpDecRefWnfNameSubscription @ 0x18000B87C
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x18000A2F0 (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18000BEA4 (RtlpWnfProcessCurrentDescriptor.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     NtUnsubscribeWnfStateChange @ 0x1800A3910 (NtUnsubscribeWnfStateChange.c)
 *     RtlpWnfETWEventNameSubRundown @ 0x1800DDD28 (RtlpWnfETWEventNameSubRundown.c)
 */

__int64 __fastcall RtlpDecRefWnfNameSubscription(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // rdx
  __int64 v8; // r8

  RtlAcquireSRWLockExclusive(qword_1801600A8 + 8);
  RtlAcquireSRWLockExclusive(a1 + 56);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 108), 0xFFFFFFFF) == 1 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v3, v2) )
      v5 = (__int64)NtCurrentPeb()->SharedData + 564;
    else
      v5 = 2147353486LL;
    if ( *(_BYTE *)v5 )
      RtlpWnfETWEventNameSubRundown(*(_QWORD *)(a1 + 16), a1);
    NtUnsubscribeWnfStateChange(a1 + 16);
    v6 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(v6 + 8) != a1 + 32 || (v7 = *(_QWORD **)(a1 + 40), *v7 != a1 + 32) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    RtlReleaseSRWLockExclusive(a1 + 56);
    v8 = *(_QWORD *)(a1 + 120);
    if ( v8 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v8);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
  }
  else
  {
    RtlReleaseSRWLockExclusive(a1 + 56);
  }
  return RtlReleaseSRWLockExclusive(qword_1801600A8 + 8);
}
