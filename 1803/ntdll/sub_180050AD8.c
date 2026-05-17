/*
 * XREFs of sub_180050AD8 @ 0x180050AD8
 * Callers:
 *     sub_18004F9F4 @ 0x18004F9F4 (sub_18004F9F4.c)
 *     sub_1800503AC @ 0x1800503AC (sub_1800503AC.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_180050C1C @ 0x180050C1C (sub_180050C1C.c)
 *     sub_1800D0B18 @ 0x1800D0B18 (sub_1800D0B18.c)
 */

__int64 __fastcall sub_180050AD8(__int64 a1, __int64 a2, int *a3, __int64 a4, unsigned __int64 *a5)
{
  __int64 Heap; // rax
  unsigned __int64 v9; // rbx
  int v10; // edi
  int v11; // edx
  unsigned __int64 *v12; // rax

  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015C294 + 786432, 72LL);
  v9 = Heap;
  if ( !Heap )
    return 3221225495LL;
  *(_OWORD *)(Heap + 16) = *(_OWORD *)a1;
  *(_OWORD *)(Heap + 32) = *(_OWORD *)(a1 + 16);
  *(_QWORD *)(Heap + 48) = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(Heap + 24) < *(_QWORD *)(Heap + 16) )
  {
    v10 = -1073741701;
    goto LABEL_13;
  }
  if ( !a4 )
  {
    v11 = (*a3)++;
    goto LABEL_6;
  }
  v10 = sub_180050C1C(a3, a4);
  if ( v10 < 0 )
  {
LABEL_13:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
    return (unsigned int)v10;
  }
  v11 = *a3;
LABEL_6:
  **(_DWORD **)(v9 + 32) = v11;
  *(_DWORD *)(v9 + 64) = v11;
  *(_QWORD *)(v9 + 56) = a2;
  v12 = (unsigned __int64 *)off_1801565E0;
  if ( *off_1801565E0 != (_UNKNOWN *)&off_1801565D8 )
    __fastfail(3u);
  *(_QWORD *)v9 = &off_1801565D8;
  *(_QWORD *)(v9 + 8) = v12;
  *v12 = v9;
  off_1801565E0 = (_UNKNOWN **)v9;
  if ( a5 )
    *a5 = v9;
  return 0LL;
}
