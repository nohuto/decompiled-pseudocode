/*
 * XREFs of sub_180040E38 @ 0x180040E38
 * Callers:
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_180040D60 @ 0x180040D60 (sub_180040D60.c)
 *     sub_1800C9BC0 @ 0x1800C9BC0 (sub_1800C9BC0.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_18003BC9C @ 0x18003BC9C (sub_18003BC9C.c)
 *     sub_180040F58 @ 0x180040F58 (sub_180040F58.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_180040E38(const void **a1, __int64 a2, int a3, int a4, __int64 a5, __int64 *a6, __int64 a7)
{
  ULONG v10; // edx
  _QWORD *Heap; // rax
  _QWORD *v13; // rbx
  __int64 v14; // rax

  v10 = (Flags + 0x40000) | 8;
  *a6 = 0LL;
  Heap = RtlAllocateHeap(HeapHandle, v10, *(unsigned __int16 *)a1 + 194LL);
  v13 = Heap;
  if ( Heap )
  {
    Heap[22] = -1LL;
    Heap[5] = a7;
    Heap[6] = a5;
    Heap[1] = Heap + 24;
    *((_DWORD *)Heap + 8) = a3 | 0x8000;
    Heap[2] = a2;
    *(_WORD *)Heap = *(_WORD *)a1;
    *((_WORD *)Heap + 1) = *(_WORD *)a1 + 2;
    memmove(Heap + 24, a1[1], *(unsigned __int16 *)a1);
    *(_WORD *)(v13[1] + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0;
    v14 = sub_180040F58(v13);
    *a6 = v14;
    if ( v14 )
    {
      *(_DWORD *)(v14 + 268) = a4;
      sub_18003BC9C(0, (__int64)v13, 0x14ACu);
    }
    else
    {
      RtlFreeHeap(HeapHandle, 0, v13);
    }
  }
  return *a6 == 0 ? 0xC0000017 : 0;
}
