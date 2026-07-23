/*
 * XREFs of _ResCDupString @ 0x18008EA74
 * Callers:
 *     ResCKeOpenRuntimeView @ 0x18001AFA0 (ResCKeOpenRuntimeView.c)
 *     ResCKeCreateRuntimeView @ 0x18010BBAC (ResCKeCreateRuntimeView.c)
 *     ResCSegmentCreateMapping @ 0x18010C908 (ResCSegmentCreateMapping.c)
 *     ResCCreateCultureMap @ 0x1801112C4 (ResCCreateCultureMap.c)
 *     ResCLoadCultureMap @ 0x1801116E4 (ResCLoadCultureMap.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

char *__fastcall ResCDupString(_WORD *Src)
{
  _WORD *v2; // rax
  int i; // ebx
  char *Heap; // rsi
  size_t v5; // rbx
  char *result; // rax

  if ( Src )
  {
    v2 = Src;
    for ( i = 0; i < 260; ++i )
    {
      if ( !*v2 )
        break;
      ++v2;
    }
    if ( i >= 260 )
    {
      RtlSetLastWin32Error(87);
    }
    else
    {
      Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 2LL * (i + 1));
      if ( Heap )
      {
        v5 = 2LL * i;
        memmove(Heap, Src, v5);
        result = Heap;
        *(_WORD *)&Heap[v5] = 0;
        return result;
      }
    }
  }
  return 0LL;
}
