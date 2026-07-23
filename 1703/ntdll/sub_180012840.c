/*
 * XREFs of sub_180012840 @ 0x180012840
 * Callers:
 *     RtlDeregisterWaitEx @ 0x180012890 (RtlDeregisterWaitEx.c)
 * Callees:
 *     sub_180017610 @ 0x180017610 (sub_180017610.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall sub_180012840(__int64 a1)
{
  __int64 v1; // rbx
  _RTL_SRWLOCK *v2; // rdi

  v1 = a1;
  sub_180017610(a1, 0LL, 0LL);
  v2 = (_RTL_SRWLOCK *)(v1 + 240);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v1 + 240));
  LODWORD(v1) = *(_DWORD *)(v1 + 56);
  RtlReleaseSRWLockExclusive(v2);
  return (unsigned int)v1;
}
