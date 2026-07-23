/*
 * XREFs of sub_1800F3EDC @ 0x1800F3EDC
 * Callers:
 *     sub_1800F39A0 @ 0x1800F39A0 (sub_1800F39A0.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800F38FC @ 0x1800F38FC (sub_1800F38FC.c)
 *     sub_1800F41DC @ 0x1800F41DC (sub_1800F41DC.c)
 */

void __fastcall sub_1800F3EDC(__int64 a1, __int64 a2)
{
  _QWORD *Heap; // rbx
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax

  Heap = RtlAllocateHeap(qword_18015D7E8, 0, 0x28uLL);
  if ( Heap )
  {
    v5 = (unsigned int)sub_1800F38FC(a2);
    Heap[2] = a1;
    Heap[3] = a2;
    v6 = sub_1800F41DC();
    Heap[4] = v6;
    if ( v6 )
    {
      v7 = v5 & 0xF;
      RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18015D7C8 + 8 * v7));
      v8 = qword_18015D720 + 16 * v5;
      v9 = *(_QWORD *)v8;
      if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 )
        __fastfail(3u);
      *Heap = v9;
      Heap[1] = v8;
      *(_QWORD *)(v9 + 8) = Heap;
      *(_QWORD *)v8 = Heap;
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18015D7C8 + 8 * v7));
    }
    else
    {
      RtlFreeHeap(qword_18015D7E8, 0, Heap);
    }
  }
}
