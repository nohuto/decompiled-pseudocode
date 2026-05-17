/*
 * XREFs of sub_1800F94A8 @ 0x1800F94A8
 * Callers:
 *     sub_1800F8F80 @ 0x1800F8F80 (sub_1800F8F80.c)
 *     sub_1800F916C @ 0x1800F916C (sub_1800F916C.c)
 *     sub_1800F9244 @ 0x1800F9244 (sub_1800F9244.c)
 *     sub_1800F931C @ 0x1800F931C (sub_1800F931C.c)
 *     sub_1800F94C0 @ 0x1800F94C0 (sub_1800F94C0.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall sub_1800F94A8(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  if ( !byte_18015B388 )
    return RtlReleaseSRWLockExclusive(a1);
  return result;
}
