/*
 * XREFs of TpTimerOutstandingCallbackCount @ 0x180011A00
 * Callers:
 *     RtlDeleteTimer @ 0x180011A50 (RtlDeleteTimer.c)
 *     RtlDeleteTimerQueueEx @ 0x1800152C0 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     TppTimerpValidateTimer @ 0x18000F9AC (TppTimerpValidateTimer.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall TpTimerOutstandingCallbackCount(__int64 a1)
{
  _RTL_SRWLOCK *v2; // rdi
  unsigned int v3; // ebx

  if ( !(unsigned int)TppTimerpValidateTimer((_PEB_LDR_DATA *)a1, 0LL, 0LL) )
    return 0LL;
  v2 = (_RTL_SRWLOCK *)(a1 + 240);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
  v3 = *(_DWORD *)(a1 + 56);
  RtlReleaseSRWLockExclusive(v2);
  return v3;
}
