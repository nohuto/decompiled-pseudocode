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

void __fastcall RtlpDecRefWnfNameSubscription(char *BaseAddress)
{
  __int64 v2; // rcx
  char **v3; // r8
  PVOID *v4; // rdx
  void *v5; // r8

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(qword_1801600A8 + 8));
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 7);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress + 27, 0xFFFFFFFF) == 1 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v2 = (__int64)NtCurrentPeb()->SharedData + 564;
    else
      v2 = 2147353486LL;
    if ( *(_BYTE *)v2 )
      RtlpWnfETWEventNameSubRundown(*((_QWORD *)BaseAddress + 2), BaseAddress);
    NtUnsubscribeWnfStateChange((PCWNF_STATE_NAME)BaseAddress + 2);
    v3 = (char **)*((_QWORD *)BaseAddress + 4);
    if ( v3[1] != BaseAddress + 32 || (v4 = (PVOID *)*((_QWORD *)BaseAddress + 5), *v4 != BaseAddress + 32) )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = (char *)v4;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 7);
    v5 = (void *)*((_QWORD *)BaseAddress + 15);
    if ( v5 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  else
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 7);
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_1801600A8 + 8));
}
