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
  unsigned int v10; // edx
  __int64 Heap; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // rax

  v10 = (dword_18015C294 + 0x40000) | 8;
  *a6 = 0LL;
  Heap = RtlAllocateHeap(qword_18015C288, v10, *(unsigned __int16 *)a1 + 194LL);
  v13 = Heap;
  if ( Heap )
  {
    *(_QWORD *)(Heap + 176) = -1LL;
    *(_QWORD *)(Heap + 40) = a7;
    *(_QWORD *)(Heap + 48) = a5;
    *(_QWORD *)(Heap + 8) = Heap + 192;
    *(_DWORD *)(Heap + 32) = a3 | 0x8000;
    *(_QWORD *)(Heap + 16) = a2;
    *(_WORD *)Heap = *(_WORD *)a1;
    *(_WORD *)(Heap + 2) = *(_WORD *)a1 + 2;
    memmove((void *)(Heap + 192), a1[1], *(unsigned __int16 *)a1);
    *(_WORD *)(*(_QWORD *)(v13 + 8) + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0;
    v14 = sub_180040F58(v13);
    *a6 = v14;
    if ( v14 )
    {
      *(_DWORD *)(v14 + 268) = a4;
      sub_18003BC9C(0, v13, 0x14ACu);
    }
    else
    {
      RtlFreeHeap(qword_18015C288, 0, v13);
    }
  }
  return *a6 == 0 ? 0xC0000017 : 0;
}
