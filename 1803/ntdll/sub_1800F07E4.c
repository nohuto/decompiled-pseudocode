/*
 * XREFs of sub_1800F07E4 @ 0x1800F07E4
 * Callers:
 *     sub_1800F0670 @ 0x1800F0670 (sub_1800F0670.c)
 *     sub_1800F0948 @ 0x1800F0948 (sub_1800F0948.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800F044C @ 0x1800F044C (sub_1800F044C.c)
 *     sub_1800F0D74 @ 0x1800F0D74 (sub_1800F0D74.c)
 */

char __fastcall sub_1800F07E4(__int64 a1, __int64 a2)
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
  v4 = (const void *)sub_1800F044C((_QWORD *)qword_18015AA78, a1 << 12);
  if ( v4 )
  {
    DbgPrint("Conflicting descriptors %p\n", v4);
    return 0;
  }
  Heap = RtlAllocateHeap(qword_18015AA70, 0, 40LL * (dword_18015D768 - 1) + 64);
  v7 = Heap;
  if ( !Heap )
  {
    DbgPrint("Unable to allocate page descriptor\n");
    return 0;
  }
  v8 = dword_18015D768;
  v9 = (__int64)(Heap + 6);
  v10 = qword_18015D788;
  v11 = qword_18015D770;
  *Heap = 2;
  Heap[4] = v8;
  *((_QWORD *)Heap + 1) = v10;
  memmove(Heap + 6, v11, 40 * v8);
  if ( v10 != qword_18015D778 )
  {
    v12 = 0;
    if ( (int)v8 > 0 )
    {
      v13 = qword_18015D790;
      do
      {
        *(_QWORD *)(v9 + 8) = v9;
        *(_QWORD *)v9 = v9;
        if ( *(_QWORD *)(v9 + 16) != v13 )
        {
          v14 = (__int64 *)qword_18015AA98;
          if ( *(__int64 **)qword_18015AA98 != &qword_18015AA90 )
            __fastfail(3u);
          *(_QWORD *)v9 = &qword_18015AA90;
          *(_QWORD *)(v9 + 8) = v14;
          *v14 = v9;
          qword_18015AA98 = v9;
          v13 = *(_QWORD *)(v9 + 16);
          *(_DWORD *)(v9 + 32) = 0;
          qword_18015D790 = v13;
        }
        ++v12;
        v9 += 40LL;
      }
      while ( v12 < (int)v8 );
    }
  }
  sub_1800F0D74(qword_18015AA78, v3, a2 << 12, v7);
  return 1;
}
