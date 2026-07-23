/*
 * XREFs of sub_1800FE9E4 @ 0x1800FE9E4
 * Callers:
 *     sub_1800FE980 @ 0x1800FE980 (sub_1800FE980.c)
 * Callees:
 *     sub_1800059EC @ 0x1800059EC (sub_1800059EC.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180109E7C @ 0x180109E7C (sub_180109E7C.c)
 */

void sub_1800FE9E4()
{
  RtlAcquireSRWLockExclusive(&stru_18015C2A0);
  if ( (dword_18015C2A8 & 1) != 0 )
  {
    dword_18015C2A8 = 0;
    sub_1800059EC((__int64)sub_1800FEC20, 0LL, 2);
    sub_180109E7C(&dword_18015C2B0);
  }
  RtlReleaseSRWLockExclusive(&stru_18015C2A0);
}
