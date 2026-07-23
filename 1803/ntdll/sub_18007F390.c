/*
 * XREFs of sub_18007F390 @ 0x18007F390
 * Callers:
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     sub_18002235C @ 0x18002235C (sub_18002235C.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_18007F390(__int64 a1, __int64 a2)
{
  RtlAcquireSRWLockExclusive(&stru_18015D070);
  sub_18002235C(a1, a2);
  RtlReleaseSRWLockExclusive(&stru_18015D070);
}
