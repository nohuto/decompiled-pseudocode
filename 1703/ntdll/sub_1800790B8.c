/*
 * XREFs of sub_1800790B8 @ 0x1800790B8
 * Callers:
 *     sub_180079080 @ 0x180079080 (sub_180079080.c)
 *     sub_1800D75C8 @ 0x1800D75C8 (sub_1800D75C8.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800790E8 @ 0x1800790E8 (sub_1800790E8.c)
 */

signed __int64 __fastcall sub_1800790B8(__int64 a1)
{
  __int64 v2; // rcx

  RtlAcquireSRWLockExclusive(&qword_18015C248);
  sub_1800790E8(v2, a1);
  return RtlReleaseSRWLockExclusive(&qword_18015C248);
}
