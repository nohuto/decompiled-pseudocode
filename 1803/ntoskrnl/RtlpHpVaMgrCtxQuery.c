/*
 * XREFs of RtlpHpVaMgrCtxQuery @ 0x140296D6C
 * Callers:
 *     RtlpHpGetOwnerHeap @ 0x140294C68 (RtlpHpGetOwnerHeap.c)
 * Callees:
 *     RtlSparseArrayElementAllocated @ 0x14029DD14 (RtlSparseArrayElementAllocated.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxQuery(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rcx

  v5 = RtlSparseArrayElementAllocated(a1 + 16, (unsigned __int64)(a2 - *(_QWORD *)(a1 + 8)) >> 20);
  if ( !v5 )
    NT_ASSERT("Range != ((void *)0)");
  v6 = (*(_BYTE *)v5 & 4) == 0;
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  if ( v6 )
    v7 = *(unsigned __int16 *)(v5 + 24);
  else
    v7 = *(_QWORD *)(v5 + 24);
  *(_QWORD *)a3 = v7 << 20;
  v8 = 6LL * *(unsigned __int8 *)(v5 + 1);
  *(_DWORD *)(a3 + 8) = (*(unsigned __int8 *)(a1 + 48LL * *(unsigned __int8 *)(v5 + 1) + 158) >> 1) & 3;
  *(_DWORD *)(a3 + 12) = *(unsigned __int8 *)(a1 + 8 * v8 + 157);
  *(_QWORD *)(a3 + 16) = *(_QWORD *)(v5 + 8);
  return 0LL;
}
