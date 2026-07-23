/*
 * XREFs of sub_1800F6F90 @ 0x1800F6F90
 * Callers:
 *     sub_1800F6A80 @ 0x1800F6A80 (sub_1800F6A80.c)
 *     sub_1800F6C6C @ 0x1800F6C6C (sub_1800F6C6C.c)
 *     sub_1800F6D48 @ 0x1800F6D48 (sub_1800F6D48.c)
 *     sub_1800F6E20 @ 0x1800F6E20 (sub_1800F6E20.c)
 *     sub_1800F6FC4 @ 0x1800F6FC4 (sub_1800F6FC4.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall sub_1800F6F90(_RTL_SRWLOCK *a1)
{
  if ( !byte_18015C3A8 )
    RtlAcquireSRWLockExclusive(a1);
  return 1;
}
