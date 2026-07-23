/*
 * XREFs of sub_18002DE34 @ 0x18002DE34
 * Callers:
 *     sub_18002A46C @ 0x18002A46C (sub_18002A46C.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_18002DE34(__int64 a1)
{
  unsigned __int16 v1; // di
  __int64 v3; // rax
  _QWORD *v4; // rsi
  __int64 result; // rax
  struct _PEB *v6; // rcx
  SIZE_T v7; // r8
  _QWORD *Heap; // rax

  v1 = word_18015D010;
  v3 = 60LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v3 = 208LL;
  *(_WORD *)(v3 + a1) = -1;
  if ( v1 != word_180159750 )
  {
    v4 = off_180156A38;
LABEL_5:
    result = v1;
    word_18015D010 = v1 + 1;
    v4[v1] = a1;
    return result;
  }
  v6 = NtCurrentPeb();
  v7 = 8LL * (unsigned __int16)(2 * word_180159750);
  word_180159750 *= 2;
  Heap = RtlAllocateHeap(v6->ProcessHeap, 0, v7);
  v4 = Heap;
  if ( Heap )
  {
    v1 = word_18015D010;
    memmove(Heap, off_180156A38, 8LL * (unsigned __int16)word_18015D010);
    if ( off_180156A38 != &unk_18015AB00 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, off_180156A38);
      v1 = word_18015D010;
    }
    off_180156A38 = v4;
    goto LABEL_5;
  }
  result = (unsigned __int16)word_18015D010;
  word_180159750 = word_18015D010;
  return result;
}
