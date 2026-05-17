/*
 * XREFs of sub_180039E20 @ 0x180039E20
 * Callers:
 *     sub_18001AA5C @ 0x18001AA5C (sub_18001AA5C.c)
 *     sub_180041A60 @ 0x180041A60 (sub_180041A60.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180039C9C @ 0x180039C9C (sub_180039C9C.c)
 *     sub_18003CA5C @ 0x18003CA5C (sub_18003CA5C.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_180039E20(
        const void **a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned __int64 *a6,
        __int64 a7)
{
  unsigned int v10; // edx
  __int64 Heap; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax

  v10 = (dword_18015B268 + 0x40000) | 8;
  *a6 = 0LL;
  Heap = RtlAllocateHeap(qword_18015B328, v10, *(unsigned __int16 *)a1 + 162LL);
  v13 = Heap;
  if ( Heap )
  {
    *(_QWORD *)(Heap + 32) = a7;
    *(_QWORD *)(Heap + 40) = a5;
    *(_QWORD *)(Heap + 8) = Heap + 160;
    *(_DWORD *)(Heap + 24) = a3 | 0x8000;
    *(_QWORD *)(Heap + 16) = a2;
    *(_WORD *)Heap = *(_WORD *)a1;
    *(_WORD *)(Heap + 2) = *(_WORD *)a1 + 2;
    memmove((void *)(Heap + 160), a1[1], *(unsigned __int16 *)a1);
    *(_WORD *)(*(_QWORD *)(v13 + 8) + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0;
    v14 = sub_180039C9C(v13);
    *a6 = v14;
    if ( v14 )
    {
      *(_DWORD *)(v14 + 268) = a4;
      sub_18003CA5C(0LL, v13, 5292LL);
    }
    else
    {
      RtlFreeHeap(qword_18015B328, 0, v13);
    }
  }
  return *a6 == 0 ? 0xC0000017 : 0;
}
