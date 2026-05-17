/*
 * XREFs of sub_180089000 @ 0x180089000
 * Callers:
 *     sub_180027E0C @ 0x180027E0C (sub_180027E0C.c)
 *     TpReleasePool @ 0x18007E670 (TpReleasePool.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

volatile signed __int64 *__fastcall sub_180089000(
        volatile signed __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  volatile signed __int64 *v5; // rdi
  volatile signed __int64 v6; // rax
  volatile signed __int64 *result; // rax

  RtlAcquireSRWLockExclusive((unsigned __int64)(a1 + 2), a2, a3, a4);
  v5 = (volatile signed __int64 *)*a1;
  if ( *(volatile signed __int64 **)(*a1 + 8) != a1 || (v6 = *v5, *(volatile signed __int64 **)(*v5 + 8) != v5) )
    __fastfail(3u);
  *a1 = v6;
  *(_QWORD *)(v6 + 8) = a1;
  RtlReleaseSRWLockExclusive(a1 + 2);
  result = 0LL;
  if ( v5 != a1 )
    return v5;
  return result;
}
