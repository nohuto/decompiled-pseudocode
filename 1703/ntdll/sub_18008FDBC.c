/*
 * XREFs of sub_18008FDBC @ 0x18008FDBC
 * Callers:
 *     sub_180028830 @ 0x180028830 (sub_180028830.c)
 *     TpReleasePool @ 0x1800827E0 (TpReleasePool.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

_RTL_SRWLOCK *__fastcall sub_18008FDBC(_RTL_SRWLOCK *a1)
{
  _RTL_SRWLOCK *Ptr; // rdi
  _RTL_SRWLOCK **v3; // rax
  _RTL_SRWLOCK *result; // rax

  RtlAcquireSRWLockExclusive(a1 + 2);
  Ptr = (_RTL_SRWLOCK *)a1->Ptr;
  v3 = *(_RTL_SRWLOCK ***)a1->Ptr;
  if ( *((_RTL_SRWLOCK **)a1->Ptr + 1) != a1 || v3[1] != Ptr )
    __fastfail(3u);
  a1->Ptr = v3;
  v3[1] = a1;
  RtlReleaseSRWLockExclusive(a1 + 2);
  result = 0LL;
  if ( Ptr != a1 )
    return Ptr;
  return result;
}
