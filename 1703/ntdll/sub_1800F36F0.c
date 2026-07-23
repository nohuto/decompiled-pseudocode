/*
 * XREFs of sub_1800F36F0 @ 0x1800F36F0
 * Callers:
 *     sub_1800F3580 @ 0x1800F3580 (sub_1800F3580.c)
 *     sub_1800F3854 @ 0x1800F3854 (sub_1800F3854.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800F3370 @ 0x1800F3370 (sub_1800F3370.c)
 *     sub_1800F3C5C @ 0x1800F3C5C (sub_1800F3C5C.c)
 */

char __fastcall sub_1800F36F0(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  const void *v4; // rax
  _DWORD *Heap; // rax
  _DWORD *v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rbx
  const void *v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  __int64 *v14; // rcx

  v3 = a1 << 12;
  v4 = (const void *)sub_1800F3370((_QWORD *)qword_180159A30, a1 << 12);
  if ( v4 )
  {
    DbgPrint("Conflicting descriptors %p\n", v4);
    return 0;
  }
  Heap = RtlAllocateHeap(qword_180159A28, 0, 40LL * (dword_18015C738 - 1) + 64);
  v7 = Heap;
  if ( !Heap )
  {
    DbgPrint("Unable to allocate page descriptor\n");
    return 0;
  }
  v8 = dword_18015C738;
  v9 = (__int64)(Heap + 6);
  v10 = qword_18015C758;
  v11 = qword_18015C740;
  *Heap = 2;
  Heap[4] = v8;
  *((_QWORD *)Heap + 1) = v10;
  memmove(Heap + 6, v11, 40 * v8);
  if ( v10 != qword_18015C748 )
  {
    v12 = 0;
    if ( (int)v8 > 0 )
    {
      v13 = qword_18015C760;
      do
      {
        *(_QWORD *)(v9 + 8) = v9;
        *(_QWORD *)v9 = v9;
        if ( *(_QWORD *)(v9 + 16) != v13 )
        {
          v14 = (__int64 *)qword_180159A58;
          if ( *(__int64 **)qword_180159A58 != &qword_180159A50 )
            __fastfail(3u);
          *(_QWORD *)v9 = &qword_180159A50;
          *(_QWORD *)(v9 + 8) = v14;
          *v14 = v9;
          qword_180159A58 = v9;
          v13 = *(_QWORD *)(v9 + 16);
          *(_DWORD *)(v9 + 32) = 0;
          qword_18015C760 = v13;
        }
        ++v12;
        v9 += 40LL;
      }
      while ( v12 < (int)v8 );
    }
  }
  sub_1800F3C5C(qword_180159A30, v3, a2 << 12, v7);
  return 1;
}
