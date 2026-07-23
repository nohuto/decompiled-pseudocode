/*
 * XREFs of sub_18005C9A4 @ 0x18005C9A4
 * Callers:
 *     sub_180059DC0 @ 0x180059DC0 (sub_180059DC0.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_18005C9A4(PVOID *HeapHandle, unsigned __int16 a2)
{
  char *Heap; // rax
  char *v5; // rsi
  PVOID v6; // rdx

  if ( a2 <= *((_WORD *)HeapHandle + 200) )
    return 0LL;
  Heap = (char *)RtlAllocateHeap(HeapHandle, 0x80000Au, 2LL * a2);
  v5 = Heap;
  if ( Heap )
  {
    *(Heap - 1) = 1;
    v6 = HeapHandle[49];
    if ( v6 )
    {
      memmove(Heap, v6, 2LL * *((unsigned __int16 *)HeapHandle + 200));
      RtlFreeHeap(HeapHandle, 2u, HeapHandle[49]);
    }
    HeapHandle[49] = v5;
    *((_WORD *)HeapHandle + 200) = a2;
    return 0LL;
  }
  return 3221225495LL;
}
