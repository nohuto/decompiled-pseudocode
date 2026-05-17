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

signed __int64 __fastcall sub_180086AA0(unsigned __int64 a1)
{
  __int64 v3; // rdx
  _QWORD *v4; // rcx

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(qword_18015C008 + 48));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFF) != 1 )
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_18015C008 + 48));
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD **)(a1 + 16);
  if ( *(_QWORD *)(v3 + 8) != a1 + 8 || *v4 != a1 + 8 )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_18015C008 + 48));
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
