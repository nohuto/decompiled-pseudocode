/*
 * XREFs of sub_180086AA0 @ 0x180086AA0
 * Callers:
 *     sub_18000FF10 @ 0x18000FF10 (sub_18000FF10.c)
 *     sub_180013820 @ 0x180013820 (sub_180013820.c)
 *     sub_1800198E4 @ 0x1800198E4 (sub_1800198E4.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_180086AA0(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rcx

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(qword_18015C008 + 48));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFF) == 1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v3 = *(_QWORD **)(a1 + 16);
    if ( *(_QWORD *)(v2 + 8) != a1 + 8 || *v3 != a1 + 8 )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_18015C008 + 48));
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
  }
  else
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_18015C008 + 48));
  }
}
