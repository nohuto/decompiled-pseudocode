/*
 * XREFs of sub_18006059C @ 0x18006059C
 * Callers:
 *     sub_180060414 @ 0x180060414 (sub_180060414.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall sub_18006059C(__int64 a1, char a2)
{
  signed __int64 result; // rax

  if ( (a2 & 1) == 0 )
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 24));
  return result;
}
