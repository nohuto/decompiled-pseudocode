/*
 * XREFs of sub_18001327C @ 0x18001327C
 * Callers:
 *     sub_1800132E0 @ 0x1800132E0 (sub_1800132E0.c)
 * Callees:
 *     TpSetWaitEx @ 0x180017300 (TpSetWaitEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall sub_18001327C(__int64 a1, int a2)
{
  RtlAcquireSRWLockExclusive(a1 + 16);
  if ( (*(_BYTE *)(a1 + 8) & 8) == 0 && (!a2 || a2 == 258) )
    TpSetWaitEx(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 72), 0LL);
  return RtlReleaseSRWLockExclusive(a1 + 16);
}
