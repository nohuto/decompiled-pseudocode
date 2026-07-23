/*
 * XREFs of sub_1800F948C @ 0x1800F948C
 * Callers:
 *     sub_1800F8F80 @ 0x1800F8F80 (sub_1800F8F80.c)
 *     sub_1800F916C @ 0x1800F916C (sub_1800F916C.c)
 *     sub_1800F9244 @ 0x1800F9244 (sub_1800F9244.c)
 *     sub_1800F931C @ 0x1800F931C (sub_1800F931C.c)
 *     sub_1800F94C0 @ 0x1800F94C0 (sub_1800F94C0.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall sub_1800F948C(_RTL_SRWLOCK *a1)
{
  if ( !byte_18015B388 )
    RtlAcquireSRWLockExclusive(a1);
  return 1;
}
