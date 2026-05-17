/*
 * XREFs of TpTimerOutstandingCallbackCount @ 0x180058FF0
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x1800550D0 (RtlDeleteTimerQueueEx.c)
 *     RtlDeleteTimer @ 0x180057EA0 (RtlDeleteTimer.c)
 * Callees:
 *     sub_180025DA4 @ 0x180025DA4 (sub_180025DA4.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall TpTimerOutstandingCallbackCount(__int64 a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 *v3; // r8
  __int64 v4; // r9
  volatile signed __int64 *v5; // rdi
  unsigned int v6; // ebx

  if ( !(unsigned int)sub_180025DA4((struct _PEB_LDR_DATA *)a1, 0LL, 0LL) )
    return 0LL;
  v5 = (volatile signed __int64 *)(a1 + 240);
  RtlAcquireSRWLockExclusive(a1 + 240, v2, v3, v4);
  v6 = *(_DWORD *)(a1 + 56);
  RtlReleaseSRWLockExclusive(v5);
  return v6;
}
