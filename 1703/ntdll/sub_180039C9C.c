/*
 * XREFs of sub_180039C9C @ 0x180039C9C
 * Callers:
 *     sub_180039E20 @ 0x180039E20 (sub_180039E20.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     RtlAddRefActivationContext @ 0x1800184D0 (RtlAddRefActivationContext.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlGetActiveActivationContext @ 0x18007A760 (RtlGetActiveActivationContext.c)
 */

char *__fastcall sub_180039C9C(__int64 a1)
{
  char *Heap; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rdi
  int v5; // ebp
  __int64 v6; // rsi
  _ACTIVATION_CONTEXT *v7; // rsi
  bool v8; // zf

  Heap = (char *)RtlAllocateHeap(HeapHandle, (dword_18015B268 + 0x40000) | 8, 0x120uLL);
  if ( Heap )
  {
    v3 = RtlAllocateHeap(HeapHandle, (dword_18015B268 + 0x40000) | 8, 0x50uLL);
    v4 = v3;
    if ( v3 )
    {
      LOBYTE(v5) = 0;
      *((_QWORD *)Heap + 19) = v3;
      if ( a1 )
      {
        *((_QWORD *)Heap + 22) = a1;
        *((_DWORD *)Heap + 68) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
        v5 = *(_DWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 48) = Heap;
        v6 = *(_QWORD *)(a1 + 40);
        if ( v6 )
        {
          v7 = *(_ACTIVATION_CONTEXT **)(v6 + 136);
          if ( v7 )
          {
            RtlAddRefActivationContext(v7);
            *((_QWORD *)Heap + 17) = v7;
          }
        }
        else
        {
          RtlGetActiveActivationContext((PACTIVATION_CONTEXT)(Heap + 136));
          *((_DWORD *)Heap + 67) = 4;
        }
      }
      *((_QWORD *)Heap + 15) = Heap + 112;
      *((_QWORD *)Heap + 14) = Heap + 112;
      v4[1] = v4;
      *v4 = v4;
      *((_QWORD *)Heap + 20) = v4;
      *((_QWORD *)Heap + 21) = v4;
      *v4 = Heap + 160;
      v4[1] = Heap + 160;
      *((_QWORD *)Heap + 18) = 0LL;
      v8 = dword_18015C018 == 1;
      *((_DWORD *)v4 + 6) = 1;
      *((_DWORD *)Heap + 69) = 2;
      if ( v8 && CriticalSection.OwningThread != NtCurrentTeb()->ClientId.UniqueThread )
        *((_DWORD *)Heap + 26) |= 0x20u;
      if ( (v5 & 4) != 0 )
        *((_DWORD *)Heap + 26) |= 0x10000000u;
      if ( (v5 & 0x40) == 0 )
        *((_DWORD *)Heap + 26) |= 4u;
      *((_WORD *)Heap + 54) = 6;
    }
    else
    {
      RtlFreeHeap(HeapHandle, 0, Heap);
      return 0LL;
    }
  }
  return Heap;
}
