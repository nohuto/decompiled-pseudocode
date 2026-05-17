/*
 * XREFs of sub_180059294 @ 0x180059294
 * Callers:
 *     sub_1800584E4 @ 0x1800584E4 (sub_1800584E4.c)
 *     sub_180058BC8 @ 0x180058BC8 (sub_180058BC8.c)
 * Callees:
 *     sub_180004D78 @ 0x180004D78 (sub_180004D78.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_1800593D8 @ 0x1800593D8 (sub_1800593D8.c)
 */

__int64 __fastcall sub_180059294(__int64 a1, __int64 a2, int *a3, __int64 a4, unsigned __int64 *a5)
{
  __int64 Heap; // rax
  unsigned __int64 v9; // rbx
  int v10; // edi
  int v11; // edx
  unsigned __int64 *v12; // rax

  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015B268 + 786432, 72LL);
  v9 = Heap;
  if ( !Heap )
    return 3221225495LL;
  *(_OWORD *)(Heap + 16) = *(_OWORD *)a1;
  *(_OWORD *)(Heap + 32) = *(_OWORD *)(a1 + 16);
  *(_QWORD *)(Heap + 48) = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(Heap + 24) < *(_QWORD *)(Heap + 16) )
  {
    v10 = -1073741701;
    goto LABEL_14;
  }
  if ( !a4 )
  {
    v11 = (*a3)++;
    goto LABEL_6;
  }
  v10 = sub_1800593D8(a3, a4);
  if ( v10 < 0 )
  {
LABEL_14:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
    return (unsigned int)v10;
  }
  v11 = *a3;
LABEL_6:
  **(_DWORD **)(v9 + 32) = v11;
  *(_DWORD *)(v9 + 64) = v11;
  *(_QWORD *)(v9 + 56) = a2;
  v12 = (unsigned __int64 *)off_1801555D8;
  if ( *off_1801555D8 != (_UNKNOWN *)&off_1801555D0 )
    __fastfail(3u);
  *(_QWORD *)v9 = &off_1801555D0;
  *(_QWORD *)(v9 + 8) = v12;
  *v12 = v9;
  off_1801555D8 = (_UNKNOWN **)v9;
  if ( a5 )
    *a5 = v9;
  return 0LL;
}
