/*
 * XREFs of sub_180089248 @ 0x180089248
 * Callers:
 *     sub_18003D640 @ 0x18003D640 (sub_18003D640.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_18004F794 @ 0x18004F794 (sub_18004F794.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_180089248(const void **a1, unsigned int a2, bool *a3)
{
  PVOID ProcessHeap; // r15
  WCHAR *Heap; // rax
  unsigned int v8; // ebx
  WCHAR *v9; // rdi

  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = (WCHAR *)RtlAllocateHeap(ProcessHeap, 0, *(unsigned __int16 *)a1);
  v8 = 0;
  v9 = Heap;
  if ( Heap )
  {
    *a3 = 1;
    memmove(Heap, a1[1], *(unsigned __int16 *)a1);
    v9[(unsigned __int64)a2 >> 1] = 46;
    v9[(a2 >> 1) + 1] = 0;
    *a3 = !sub_18004F794(v9, 1);
    RtlFreeHeap(ProcessHeap, 0, v9);
  }
  else
  {
    *a3 = 0;
    return (unsigned int)-1073741801;
  }
  return v8;
}
