/*
 * XREFs of sub_180074154 @ 0x180074154
 * Callers:
 *     sub_180074114 @ 0x180074114 (sub_180074114.c)
 *     sub_1800DAFC0 @ 0x1800DAFC0 (sub_1800DAFC0.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180074184 @ 0x180074184 (sub_180074184.c)
 */

void __fastcall sub_180074154(__int64 a1)
{
  __int64 v2; // rcx

  RtlAcquireSRWLockExclusive(&Address);
  sub_180074184(v2, a1);
  RtlReleaseSRWLockExclusive(&Address);
}
