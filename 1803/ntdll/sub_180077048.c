/*
 * XREFs of sub_180077048 @ 0x180077048
 * Callers:
 *     sub_180076EF0 @ 0x180076EF0 (sub_180076EF0.c)
 * Callees:
 *     TpSetWaitEx @ 0x180025710 (TpSetWaitEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall sub_180077048(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  int v4; // edi

  v4 = a2;
  RtlAcquireSRWLockExclusive(a1 + 16, a2, a3, a4);
  if ( (*(_BYTE *)(a1 + 8) & 8) == 0 && (!v4 || v4 == 258) )
    TpSetWaitEx(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 56), *(_QWORD **)(a1 + 72), 0LL);
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 16));
}
