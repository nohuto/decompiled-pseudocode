/*
 * XREFs of sub_180075CF8 @ 0x180075CF8
 * Callers:
 *     sub_180075C44 @ 0x180075C44 (sub_180075C44.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     ZwQueryVirtualMemory @ 0x18009AF20 (ZwQueryVirtualMemory.c)
 */

char __fastcall sub_180075CF8(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  char v3; // bl
  unsigned __int64 v4; // rbp
  unsigned __int64 Heap; // rsi
  unsigned int v6; // ecx
  __int64 v7; // rax
  unsigned int v8; // ecx
  __int64 v9; // rax

  v2 = ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12;
  v3 = 0;
  v4 = a1 & 0xFFFFFFFFFFFFF000uLL;
  Heap = RtlAllocateHeap(qword_18015C288, (dword_18015C294 + 1572864) | 8u, 16 * v2);
  if ( !Heap )
    return 1;
  v6 = 0;
  if ( v2 )
  {
    v7 = 0LL;
    do
    {
      ++v6;
      *(_QWORD *)(Heap + 16 * v7) = v4;
      v4 += 4096LL;
      v7 = v6;
    }
    while ( v6 < v2 );
  }
  if ( (int)ZwQueryVirtualMemory(-1LL, 0LL, 4LL, Heap, 16 * v2, 0LL) < 0 )
    goto LABEL_13;
  v8 = 0;
  if ( v2 )
  {
    v9 = 0LL;
    while ( (*(_DWORD *)(Heap + 16 * v9 + 8) & 0x40000000) != 0 )
    {
      v9 = ++v8;
      if ( v8 >= v2 )
        goto LABEL_10;
    }
LABEL_13:
    v3 = 1;
  }
LABEL_10:
  RtlFreeHeap(qword_18015C288, 0, Heap);
  return v3;
}
