/*
 * XREFs of sub_180089000 @ 0x180089000
 * Callers:
 *     sub_180027E0C @ 0x180027E0C (sub_180027E0C.c)
 *     TpReleasePool @ 0x18007E670 (TpReleasePool.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

_RTL_SRWLOCK *__fastcall sub_180089000(_RTL_SRWLOCK *a1)
{
  _RTL_SRWLOCK *Ptr; // rdi
  _QWORD *v3; // rax
  _RTL_SRWLOCK *result; // rax

  RtlAcquireSRWLockExclusive(a1 + 2);
  Ptr = (_RTL_SRWLOCK *)a1->Ptr;
  if ( *((_RTL_SRWLOCK **)a1->Ptr + 1) != a1 || (v3 = Ptr->Ptr, *((_RTL_SRWLOCK **)Ptr->Ptr + 1) != Ptr) )
    __fastfail(3u);
  a1->Ptr = v3;
  v3[1] = a1;
  RtlReleaseSRWLockExclusive(a1 + 2);
  result = 0LL;
  if ( Ptr != a1 )
    return Ptr;
  return result;
}
