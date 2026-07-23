/*
 * XREFs of sub_180109740 @ 0x180109740
 * Callers:
 *     sub_180109568 @ 0x180109568 (sub_180109568.c)
 *     sub_18010E4A8 @ 0x18010E4A8 (sub_18010E4A8.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_180109740(int a1, unsigned int *a2)
{
  __int64 result; // rax
  unsigned int v5; // eax
  unsigned __int64 v6; // rdi
  SIZE_T v7; // r8
  PVOID Heap; // rax
  PVOID v9; // rsi

  if ( !a2 || !*((_QWORD *)a2 + 1) )
    return 0LL;
  v5 = a2[1];
  if ( *a2 == v5 )
  {
    v6 = 2LL * v5;
    if ( v6 <= 0xFFFFFFFF )
    {
      v7 = 4LL * (unsigned int)v6;
      if ( v7 <= 0xFFFFFFFF )
      {
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
        v9 = Heap;
        if ( Heap )
        {
          memmove(Heap, *((const void **)a2 + 1), 4LL * a2[1]);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *((PVOID *)a2 + 1));
          *((_QWORD *)a2 + 1) = v9;
          a2[1] = v6;
          goto LABEL_9;
        }
      }
    }
    return 0LL;
  }
LABEL_9:
  *(_DWORD *)(*((_QWORD *)a2 + 1) + 4LL * *a2) = a1;
  result = 1LL;
  ++*a2;
  return result;
}
