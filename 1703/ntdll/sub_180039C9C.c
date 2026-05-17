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

unsigned __int64 __fastcall sub_180039C9C(__int64 a1)
{
  unsigned __int64 Heap; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  int v5; // ebp
  __int64 v6; // rsi
  volatile signed __int32 *v7; // rsi
  bool v8; // zf

  Heap = RtlAllocateHeap(qword_18015B328, (dword_18015B268 + 0x40000) | 8u, 288LL);
  if ( Heap )
  {
    v3 = RtlAllocateHeap(qword_18015B328, (dword_18015B268 + 0x40000) | 8u, 80LL);
    v4 = v3;
    if ( v3 )
    {
      LOBYTE(v5) = 0;
      *(_QWORD *)(Heap + 152) = v3;
      if ( a1 )
      {
        *(_QWORD *)(Heap + 176) = a1;
        *(_DWORD *)(Heap + 272) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
        v5 = *(_DWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 48) = Heap;
        v6 = *(_QWORD *)(a1 + 40);
        if ( v6 )
        {
          v7 = *(volatile signed __int32 **)(v6 + 136);
          if ( v7 )
          {
            RtlAddRefActivationContext(v7);
            *(_QWORD *)(Heap + 136) = v7;
          }
        }
        else
        {
          RtlGetActiveActivationContext(Heap + 136);
          *(_DWORD *)(Heap + 268) = 4;
        }
      }
      *(_QWORD *)(Heap + 120) = Heap + 112;
      *(_QWORD *)(Heap + 112) = Heap + 112;
      *(_QWORD *)(v4 + 8) = v4;
      *(_QWORD *)v4 = v4;
      *(_QWORD *)(Heap + 160) = v4;
      *(_QWORD *)(Heap + 168) = v4;
      *(_QWORD *)v4 = Heap + 160;
      *(_QWORD *)(v4 + 8) = Heap + 160;
      *(_QWORD *)(Heap + 144) = 0LL;
      v8 = dword_18015C018 == 1;
      *(_DWORD *)(v4 + 24) = 1;
      *(_DWORD *)(Heap + 276) = 2;
      if ( v8 && (HANDLE)qword_180155590 != NtCurrentTeb()->ClientId.UniqueThread )
        *(_DWORD *)(Heap + 104) |= 0x20u;
      if ( (v5 & 4) != 0 )
        *(_DWORD *)(Heap + 104) |= 0x10000000u;
      if ( (v5 & 0x40) == 0 )
        *(_DWORD *)(Heap + 104) |= 4u;
      *(_WORD *)(Heap + 108) = 6;
    }
    else
    {
      RtlFreeHeap(qword_18015B328, 0, Heap);
      return 0LL;
    }
  }
  return Heap;
}
