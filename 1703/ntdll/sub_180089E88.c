/*
 * XREFs of sub_180089E88 @ 0x180089E88
 * Callers:
 *     sub_180089DC4 @ 0x180089DC4 (sub_180089DC4.c)
 *     sub_1800F6928 @ 0x1800F6928 (sub_1800F6928.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall sub_180089E88(unsigned __int64 a1)
{
  __int64 v2; // rdi
  char v3; // si
  signed __int64 result; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rax

  v2 = *(_WORD *)(a1 + 18) & 0xF;
  v3 = 0;
  RtlAcquireSRWLockExclusive(*(volatile signed __int64 **)(qword_18015C3F0 + 8 * v2));
  if ( (*(_DWORD *)(a1 + 20))-- == 1 )
  {
    v6 = *(_QWORD *)a1;
    v7 = *(_QWORD **)(a1 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || *v7 != a1 )
      __fastfail(3u);
    *v7 = v6;
    v3 = 1;
    *(_QWORD *)(v6 + 8) = v7;
    _InterlockedDecrement(&dword_18015C0D0);
  }
  result = RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_18015C3F0 + 8 * v2));
  if ( v3 )
    return RtlFreeHeap(qword_18015C450, 0, a1);
  return result;
}
