/*
 * XREFs of sub_1800F34C8 @ 0x1800F34C8
 * Callers:
 *     sub_1800F3FB0 @ 0x1800F3FB0 (sub_1800F3FB0.c)
 *     sub_1800F4094 @ 0x1800F4094 (sub_1800F4094.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall sub_1800F34C8(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v5; // rdi
  char v6; // si
  __int64 v8; // rax
  _QWORD *v9; // rcx
  signed __int64 result; // rax

  v5 = *(_WORD *)(a1 + 18) & 0xF;
  v6 = 0;
  RtlAcquireSRWLockExclusive(*(_QWORD *)(qword_18015D7E0 + 8 * v5), a2, a3, a4);
  if ( (*(_DWORD *)(a1 + 20))-- == 1 )
  {
    v8 = *(_QWORD *)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v9 = *(_QWORD **)(a1 + 8), *v9 != a1) )
      __fastfail(3u);
    *v9 = v8;
    v6 = 1;
    *(_QWORD *)(v8 + 8) = v9;
    _InterlockedDecrement(&dword_18015D728);
  }
  result = RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_18015D7E0 + 8 * v5));
  if ( v6 )
    return RtlFreeHeap(qword_18015D7E8, 0, a1);
  return result;
}
