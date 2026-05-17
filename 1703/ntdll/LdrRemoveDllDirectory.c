/*
 * XREFs of LdrRemoveDllDirectory @ 0x18008D020
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180089230 @ 0x180089230 (sub_180089230.c)
 */

__int64 __fastcall LdrRemoveDllDirectory(unsigned __int64 a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax
  unsigned __int64 v4; // rdi

  if ( (dword_180158674 & 4) == 0 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive(&qword_18015C3A8);
  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD **)(a1 + 8);
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || *v3 != a1 )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  word_1801553E8 += -2 - *(_WORD *)(a1 + 16);
  RtlReleaseSRWLockExclusive(&qword_18015C3A8);
  RtlAcquireSRWLockExclusive(&qword_18015C3A0);
  v4 = sub_180089230(&qword_18015A2D0);
  RtlReleaseSRWLockExclusive(&qword_18015C3A0);
  if ( v4 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return 0LL;
}
