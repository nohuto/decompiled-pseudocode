/*
 * XREFs of LdrRemoveDllDirectory @ 0x18008AB30
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18008367C @ 0x18008367C (sub_18008367C.c)
 */

__int64 __fastcall LdrRemoveDllDirectory(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v5; // rdx
  _QWORD *v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rdi

  if ( (dword_1801596D4 & 4) == 0 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D3E0, a2, a3, a4);
  v5 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v6 = *(_QWORD **)(a1 + 8), *v6 != a1) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  word_1801564B8 += -2 - *(_WORD *)(a1 + 16);
  RtlReleaseSRWLockExclusive(&qword_18015D3E0);
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D3D8, v7, v8, v9);
  v10 = sub_18008367C(&qword_18015B2D0);
  RtlReleaseSRWLockExclusive(&qword_18015D3D8);
  if ( v10 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return 0LL;
}
