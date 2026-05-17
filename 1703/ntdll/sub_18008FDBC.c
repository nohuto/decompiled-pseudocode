/*
 * XREFs of sub_18008FDBC @ 0x18008FDBC
 * Callers:
 *     sub_180028830 @ 0x180028830 (sub_180028830.c)
 *     TpReleasePool @ 0x1800827E0 (TpReleasePool.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

volatile signed __int64 *__fastcall sub_18008FDBC(volatile signed __int64 *a1)
{
  volatile signed __int64 *v2; // rdi
  volatile signed __int64 v3; // rax
  volatile signed __int64 *result; // rax

  RtlAcquireSRWLockExclusive(a1 + 2);
  v2 = (volatile signed __int64 *)*a1;
  v3 = **(_QWORD **)a1;
  if ( *(volatile signed __int64 **)(*a1 + 8) != a1 || *(volatile signed __int64 **)(v3 + 8) != v2 )
    __fastfail(3u);
  *a1 = v3;
  *(_QWORD *)(v3 + 8) = a1;
  RtlReleaseSRWLockExclusive(a1 + 2);
  result = 0LL;
  if ( v2 != a1 )
    return v2;
  return result;
}
