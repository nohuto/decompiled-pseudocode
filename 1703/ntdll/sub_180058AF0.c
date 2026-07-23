/*
 * XREFs of sub_180058AF0 @ 0x180058AF0
 * Callers:
 *     sub_180058844 @ 0x180058844 (sub_180058844.c)
 *     sub_180058A44 @ 0x180058A44 (sub_180058A44.c)
 *     sub_1800EF328 @ 0x1800EF328 (sub_1800EF328.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall sub_180058AF0(__int64 a1, _RTL_SRWLOCK *a2)
{
  if ( (*(_BYTE *)(a1 + 72) & 4) != 0 )
    return 1LL;
  RtlAcquireSRWLockExclusive(a2);
  return 0LL;
}
