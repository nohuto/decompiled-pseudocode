/*
 * XREFs of sub_1800FD1A4 @ 0x1800FD1A4
 * Callers:
 *     sub_1800FD134 @ 0x1800FD134 (sub_1800FD134.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180060204 @ 0x180060204 (sub_180060204.c)
 *     sub_18010CCC8 @ 0x18010CCC8 (sub_18010CCC8.c)
 */

void sub_1800FD1A4()
{
  RtlAcquireSRWLockExclusive(&stru_18015D2E0);
  if ( (dword_18015D2E8 & 1) != 0 )
  {
    dword_18015D2E8 = 0;
    sub_180060204((__int64 (__fastcall *)(_QWORD, _QWORD))sub_1800FD450, 0LL, 2);
    sub_18010CCC8(&qword_18015D2F0);
  }
  RtlReleaseSRWLockExclusive(&stru_18015D2E0);
}
