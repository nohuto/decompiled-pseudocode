/*
 * XREFs of sub_180058FA4 @ 0x180058FA4
 * Callers:
 *     RtlDeregisterWaitEx @ 0x180058270 (RtlDeregisterWaitEx.c)
 * Callees:
 *     sub_180025954 @ 0x180025954 (sub_180025954.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall sub_180058FA4(__int64 a1)
{
  __int64 v1; // rbx
  volatile signed __int64 *v2; // rdi
  unsigned __int64 v3; // rdx
  unsigned __int64 *v4; // r8
  __int64 v5; // r9

  v1 = a1;
  sub_180025954(a1, 0LL, 0LL);
  v2 = (volatile signed __int64 *)(v1 + 240);
  RtlAcquireSRWLockExclusive(v1 + 240, v3, v4, v5);
  LODWORD(v1) = *(_DWORD *)(v1 + 56);
  RtlReleaseSRWLockExclusive(v2);
  return (unsigned int)v1;
}
