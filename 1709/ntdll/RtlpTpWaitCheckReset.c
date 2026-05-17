/*
 * XREFs of RtlpTpWaitCheckReset @ 0x18000B308
 * Callers:
 *     RtlpTpWaitCallback @ 0x18000B370 (RtlpTpWaitCallback.c)
 * Callees:
 *     TpSetWaitEx @ 0x18000F630 (TpSetWaitEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlpTpWaitCheckReset(__int64 a1, int a2)
{
  RtlAcquireSRWLockExclusive(a1 + 16);
  if ( (*(_BYTE *)(a1 + 8) & 8) == 0 && (!a2 || a2 == 258) )
    TpSetWaitEx(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 72), 0LL);
  return RtlReleaseSRWLockExclusive(a1 + 16);
}
