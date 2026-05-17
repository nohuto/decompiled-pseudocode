/*
 * XREFs of TppQueueRemoveHead @ 0x18008D900
 * Callers:
 *     TppWorkerThread @ 0x18000CFC0 (TppWorkerThread.c)
 *     TpReleasePool @ 0x180081D20 (TpReleasePool.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

volatile signed __int64 *__fastcall TppQueueRemoveHead(
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
