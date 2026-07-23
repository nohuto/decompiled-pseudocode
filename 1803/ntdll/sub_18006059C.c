/*
 * XREFs of sub_18006059C @ 0x18006059C
 * Callers:
 *     sub_180060414 @ 0x180060414 (sub_180060414.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall sub_18006059C(_RTL_SRWLOCK *a1, char a2)
{
  if ( (a2 & 1) == 0 )
    RtlReleaseSRWLockExclusive(a1 + 3);
}
