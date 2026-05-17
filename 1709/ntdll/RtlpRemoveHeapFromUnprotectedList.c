/*
 * XREFs of RtlpRemoveHeapFromUnprotectedList @ 0x18007AC80
 * Callers:
 *     RtlpMoveHeapBetweenLists @ 0x18004C75C (RtlpMoveHeapBetweenLists.c)
 * Callees:
 *     <none>
 */

void **__fastcall RtlpRemoveHeapFromUnprotectedList(__int64 a1)
{
  struct _PEB *v1; // r8
  void **result; // rax
  unsigned int NumberOfHeaps; // r9d
  void **v5; // r10
  void **v6; // rbx
  unsigned int v7; // r9d
  __int16 v8; // di
  __int16 v9; // si
  __int16 v10; // bp
  __int64 v11; // rcx
  __int16 v12; // r11

  v1 = NtCurrentPeb();
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    result = (void **)*(unsigned __int16 *)(a1 + 60);
  else
    result = (void **)*(unsigned __int16 *)(a1 + 208);
  NumberOfHeaps = v1->NumberOfHeaps;
  if ( NumberOfHeaps && (_WORD)result && (unsigned __int16)result <= NumberOfHeaps )
  {
    v5 = &v1->ProcessHeaps[(unsigned __int16)result - 1];
    v6 = &v1->ProcessHeaps[(unsigned __int16)result];
    v7 = NumberOfHeaps - (unsigned __int16)result;
    if ( v7 )
    {
      v8 = word_18015D68A;
      v9 = HIWORD(dword_18015D678);
      v10 = word_18015D66A;
      do
      {
        v11 = (__int64)*v6++;
        *v5 = (void *)v11;
        if ( *(_DWORD *)(v11 + 16) == -571548178 )
          v12 = *(_WORD *)(v11 + 60);
        else
          v12 = *(_WORD *)(v11 + 208);
        if ( v10 == v12 )
          v10 = v12 - 1;
        if ( v9 == v12 )
          v9 = v12 - 1;
        if ( v8 == v12 )
          v8 = v12 - 1;
        if ( *(_DWORD *)(v11 + 16) == -571548178 )
          --*(_WORD *)(v11 + 60);
        else
          --*(_WORD *)(v11 + 208);
        ++v5;
        --v7;
      }
      while ( v7 );
      word_18015D68A = v8;
      HIWORD(dword_18015D678) = v9;
      word_18015D66A = v10;
    }
    --v1->NumberOfHeaps;
    result = v1->ProcessHeaps;
    result[v1->NumberOfHeaps] = 0LL;
    if ( *(_DWORD *)(a1 + 16) == -571548178 )
      *(_WORD *)(a1 + 60) = 0;
    else
      *(_WORD *)(a1 + 208) = 0;
  }
  return result;
}
