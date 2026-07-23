/*
 * XREFs of sub_180104F6C @ 0x180104F6C
 * Callers:
 *     sub_180053748 @ 0x180053748 (sub_180053748.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180050A54 @ 0x180050A54 (sub_180050A54.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_180104F6C(__int64 a1, __int64 a2, int a3)
{
  __int64 *v3; // rdi
  unsigned int v4; // r15d
  int v5; // ebp
  __int64 *v6; // r9
  unsigned int v7; // r10d
  int v9; // ecx
  int v10; // edx
  unsigned int v11; // edx
  _DWORD *Heap; // rsi
  __int64 *v13; // rbx
  unsigned int v14; // r14d
  __int64 *i; // rcx
  __int64 v16; // rax
  int v18; // [rsp+80h] [rbp+18h] BYREF

  v3 = (__int64 *)(a1 + 480);
  v4 = a3 - *(_DWORD *)(a2 + 48);
  v5 = 0;
  v6 = *(__int64 **)(a1 + 480);
  v7 = 0;
  while ( v6 != v3 )
  {
    v9 = *((_DWORD *)v6 + 4);
    v10 = *((_DWORD *)v6 + 10);
    v6 = (__int64 *)*v6;
    v11 = 16 * v9 + v10 + 4;
    if ( v7 > v11 )
      v11 = v7;
    v7 = v11;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v7);
  if ( Heap )
  {
    v13 = (__int64 *)*v3;
    while ( v13 != v3 )
    {
      *Heap = *((_DWORD *)v13 + 4);
      v14 = 1;
      for ( i = (__int64 *)v13[3]; i != v13 + 3; i = (__int64 *)*i )
      {
        v16 = v14 * 4;
        v14 += 4;
        *(_OWORD *)((char *)Heap + v16) = *((_OWORD *)i + 1);
      }
      memmove(&Heap[v14], (char *)v13 + 44, *((unsigned int *)v13 + 10));
      v5 = sub_180050A54(a2, 67, (_QWORD *)(a2 + 88), Heap, v14 * 4 + *((_DWORD *)v13 + 10), v4, &v18);
      if ( v5 < 0 )
        break;
      v13 = (__int64 *)*v13;
      v4 -= (v18 + 7) & 0xFFFFFFF8;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v5;
}
