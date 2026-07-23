/*
 * XREFs of sub_18008350C @ 0x18008350C
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     sub_18001BB44 @ 0x18001BB44 (sub_18001BB44.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_18008350C(__int64 a1, __int64 a2)
{
  RtlAcquireSRWLockExclusive(&stru_18015C040);
  sub_18001BB44(a1, a2);
  RtlReleaseSRWLockExclusive(&stru_18015C040);
}
