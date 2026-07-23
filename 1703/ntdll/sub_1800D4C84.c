/*
 * XREFs of sub_1800D4C84 @ 0x1800D4C84
 * Callers:
 *     sub_18003E520 @ 0x18003E520 (sub_18003E520.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180058280 @ 0x180058280 (sub_180058280.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_1800D4C84(const void **a1, unsigned int a2, bool *a3)
{
  unsigned __int64 v5; // rbp
  PVOID ProcessHeap; // r15
  WCHAR *Heap; // rax
  unsigned int v8; // ebx
  WCHAR *v9; // rdi

  v5 = a2;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = (WCHAR *)RtlAllocateHeap(ProcessHeap, 0, *(unsigned __int16 *)a1);
  v8 = 0;
  v9 = Heap;
  if ( Heap )
  {
    *a3 = 1;
    memmove(Heap, a1[1], *(unsigned __int16 *)a1);
    v9[v5 >> 1] = 46;
    v9[((unsigned int)v5 >> 1) + 1] = 0;
    *a3 = !sub_180058280(v9, 1);
    RtlFreeHeap(ProcessHeap, 0, v9);
  }
  else
  {
    *a3 = 0;
    return (unsigned int)-1073741801;
  }
  return v8;
}
