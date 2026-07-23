/*
 * XREFs of sub_1800FD1F4 @ 0x1800FD1F4
 * Callers:
 *     sub_1800FD134 @ 0x1800FD134 (sub_1800FD134.c)
 *     sub_1801042E8 @ 0x1801042E8 (sub_1801042E8.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 sub_1800FD1F4()
{
  RtlAcquireSRWLockExclusive(&stru_18015D2E0);
  if ( (dword_18015D2E8 & 1) == 0 )
  {
    dword_18015D2E8 = 3;
    qword_18015D2F0 = 0LL;
    qword_18015D320 = (__int64)sub_1800FC910;
    qword_18015D328 = (__int64)sub_1800FC940;
    qword_18015D2F8 = 0LL;
    qword_18015D300 = 0LL;
    qword_18015D308 = 0LL;
    qword_18015D318 = 0LL;
    qword_18015D310 = 0LL;
    qword_18015D330 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&stru_18015D2E0);
  return 1LL;
}
