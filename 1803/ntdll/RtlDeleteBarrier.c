/*
 * XREFs of RtlDeleteBarrier @ 0x1800E6590
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlDeleteBarrier(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  signed __int64 result; // rax

  v4 = (a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v4 )
  {
    RtlAcquireSRWLockExclusive(v4 + 8, a2, a3, a4);
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v4 + 8));
  }
  return result;
}
