/*
 * XREFs of sub_18000DB30 @ 0x18000DB30
 * Callers:
 *     sub_18000D844 @ 0x18000D844 (sub_18000D844.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_18000DB30(__int64 a1)
{
  unsigned __int16 v1; // di
  __int64 v3; // rax
  _QWORD *v4; // rsi
  __int64 result; // rax
  struct _PEB *v6; // rcx
  SIZE_T v7; // r8
  _QWORD *Heap; // rax

  v1 = word_18015BFA0;
  v3 = 208LL;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    v3 = 36LL;
  *(_WORD *)(v3 + a1) = -1;
  if ( v1 != word_180158DE0 )
  {
    v4 = Src;
LABEL_5:
    result = v1;
    word_18015BFA0 = v1 + 1;
    v4[v1] = a1;
    return result;
  }
  v6 = NtCurrentPeb();
  v7 = 8LL * (unsigned __int16)(2 * word_180158DE0);
  word_180158DE0 *= 2;
  Heap = RtlAllocateHeap(v6->ProcessHeap, 0, v7);
  v4 = Heap;
  if ( Heap )
  {
    v1 = word_18015BFA0;
    memmove(Heap, Src, 8LL * (unsigned __int16)word_18015BFA0);
    if ( Src != &unk_180159AC0 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Src);
      v1 = word_18015BFA0;
    }
    Src = v4;
    goto LABEL_5;
  }
  result = (unsigned __int16)word_18015BFA0;
  word_180158DE0 = word_18015BFA0;
  return result;
}
