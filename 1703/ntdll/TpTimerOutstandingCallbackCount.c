/*
 * XREFs of TpTimerOutstandingCallbackCount @ 0x180010F30
 * Callers:
 *     RtlDeleteTimer @ 0x180010F80 (RtlDeleteTimer.c)
 *     RtlDeleteTimerQueueEx @ 0x180086B40 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     sub_18001770C @ 0x18001770C (sub_18001770C.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall TpTimerOutstandingCallbackCount(__int64 a1)
{
  _RTL_SRWLOCK *v2; // rdi
  unsigned int v3; // ebx

  if ( !(unsigned int)sub_18001770C(a1, 0LL, 0LL) )
    return 0LL;
  v2 = (_RTL_SRWLOCK *)(a1 + 240);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
  v3 = *(_DWORD *)(a1 + 56);
  RtlReleaseSRWLockExclusive(v2);
  return v3;
}
