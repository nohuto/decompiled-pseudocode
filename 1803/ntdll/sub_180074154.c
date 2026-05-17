/*
 * XREFs of sub_180074154 @ 0x180074154
 * Callers:
 *     sub_180074114 @ 0x180074114 (sub_180074114.c)
 *     sub_1800DAFC0 @ 0x1800DAFC0 (sub_1800DAFC0.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180074184 @ 0x180074184 (sub_180074184.c)
 */

signed __int64 __fastcall sub_180074154(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v5; // rcx

  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D288, a2, a3, a4);
  sub_180074184(v5, a1);
  return RtlReleaseSRWLockExclusive(&qword_18015D288);
}
