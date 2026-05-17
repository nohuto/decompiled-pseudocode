/*
 * XREFs of sub_18007F390 @ 0x18007F390
 * Callers:
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     sub_18002235C @ 0x18002235C (sub_18002235C.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall sub_18007F390(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D070, a2, a3, a4);
  sub_18002235C(a1, a2);
  return RtlReleaseSRWLockExclusive(&qword_18015D070);
}
