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

signed __int64 __fastcall sub_1800F6FAC(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  if ( !byte_18015C3A8 )
    return RtlReleaseSRWLockExclusive(a1);
  return result;
}
