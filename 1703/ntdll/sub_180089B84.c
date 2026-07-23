/*
 * XREFs of sub_180089B84 @ 0x180089B84
 * Callers:
 *     sub_180095910 @ 0x180095910 (sub_180095910.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180089C50 @ 0x180089C50 (sub_180089C50.c)
 *     sub_180089EF4 @ 0x180089EF4 (sub_180089EF4.c)
 */

void __fastcall sub_180089B84(__int64 a1, __int64 a2)
{
  _QWORD *Heap; // rbx
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax

  Heap = RtlAllocateHeap(qword_18015C450, 0, 0x28uLL);
  if ( Heap )
  {
    v5 = (unsigned int)sub_180089EF4(a2);
    Heap[2] = a1;
    Heap[3] = a2;
    v6 = sub_180089C50();
    Heap[4] = v6;
    if ( v6 )
    {
      v7 = v5 & 0xF;
      RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18015C3E8 + 8 * v7));
      v8 = qword_18015C438 + 16 * v5;
      v9 = *(_QWORD *)v8;
      if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 )
        __fastfail(3u);
      *Heap = v9;
      Heap[1] = v8;
      *(_QWORD *)(v9 + 8) = Heap;
      *(_QWORD *)v8 = Heap;
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18015C3E8 + 8 * v7));
    }
    else
    {
      RtlFreeHeap(qword_18015C450, 0, Heap);
    }
  }
}
