/*
 * XREFs of TpCallbackSendAlpcMessageOnCompletion @ 0x180070B50
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

__int64 __fastcall TpCallbackSendAlpcMessageOnCompletion(__int64 a1, __int64 a2, int a3, unsigned __int16 *a4)
{
  __int64 v8; // rax
  unsigned int v9; // r14d
  PVOID Heap; // rax

  if ( a1 && (v8 = *(_QWORD *)(a1 + 136)) != 0 && *(_QWORD *)(v8 + 272) == a2 && (*(_BYTE *)(a1 + 228) & 1) == 0 )
  {
    v9 = a4[1];
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, dword_18015C000 + 0x80000, a4[1]);
    *(_QWORD *)(a1 + 208) = Heap;
    if ( Heap )
    {
      memmove(Heap, a4, v9);
      *(_QWORD *)(a1 + 216) = a2;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 136) + 280LL));
      *(_DWORD *)(a1 + 228) |= 1u;
      *(_DWORD *)(a1 + 224) = a3 | 0x40000;
      return 0LL;
    }
    else
    {
      return 3221225495LL;
    }
  }
  else
  {
    sub_1801058B8(a1, a2);
    return 3221225485LL;
  }
}
