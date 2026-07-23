/*
 * XREFs of sub_180003048 @ 0x180003048
 * Callers:
 *     sub_18005D9D8 @ 0x18005D9D8 (sub_18005D9D8.c)
 *     sub_180109064 @ 0x180109064 (sub_180109064.c)
 *     sub_180109C20 @ 0x180109C20 (sub_180109C20.c)
 *     sub_18010DE7C @ 0x18010DE7C (sub_18010DE7C.c)
 *     sub_18010E294 @ 0x18010E294 (sub_18010E294.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

char *__fastcall sub_180003048(_WORD *Src)
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
