/*
 * XREFs of sub_1800F6FAC @ 0x1800F6FAC
 * Callers:
 *     sub_1800F6A80 @ 0x1800F6A80 (sub_1800F6A80.c)
 *     sub_1800F6C6C @ 0x1800F6C6C (sub_1800F6C6C.c)
 *     sub_1800F6D48 @ 0x1800F6D48 (sub_1800F6D48.c)
 *     sub_1800F6E20 @ 0x1800F6E20 (sub_1800F6E20.c)
 *     sub_1800F6FC4 @ 0x1800F6FC4 (sub_1800F6FC4.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall sub_1800F6FAC(_RTL_SRWLOCK *a1)
{
  if ( !byte_18015C3A8 )
    RtlReleaseSRWLockExclusive(a1);
}
