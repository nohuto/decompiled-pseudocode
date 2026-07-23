/*
 * XREFs of sub_180058A00 @ 0x180058A00
 * Callers:
 *     sub_180058844 @ 0x180058844 (sub_180058844.c)
 *     sub_1800588D4 @ 0x1800588D4 (sub_1800588D4.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 */

__int64 __fastcall sub_180058A00(__int64 a1, _RTL_SRWLOCK *a2)
{
  if ( (*(_BYTE *)(a1 + 72) & 4) != 0 )
    return 1LL;
  RtlAcquireSRWLockShared(a2);
  return 0LL;
}
