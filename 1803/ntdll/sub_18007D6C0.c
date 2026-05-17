/*
 * XREFs of sub_18007D6C0 @ 0x18007D6C0
 * Callers:
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall sub_18007D6C0(_QWORD *a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v5; // rdx
  _QWORD *v6; // rcx

  RtlAcquireSRWLockExclusive(a1[6] + 72LL, a2, a3, a4);
  v5 = a1[2];
  v6 = (_QWORD *)a1[3];
  if ( *(_QWORD **)(v5 + 8) != a1 + 2 || (_QWORD *)*v6 != a1 + 2 )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1[6] + 72LL));
}
