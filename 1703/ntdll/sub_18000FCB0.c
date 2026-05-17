/*
 * XREFs of sub_18000FCB0 @ 0x18000FCB0
 * Callers:
 *     sub_18000C298 @ 0x18000C298 (sub_18000C298.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_18000FCB0(__int64 a1, unsigned __int16 a2)
{
  char *Heap; // rax
  char *v5; // rsi
  const void *v6; // rdx

  if ( a2 <= *(_WORD *)(a1 + 400) )
    return 0LL;
  Heap = (char *)RtlAllocateHeap(a1, 8388618LL, 2LL * a2);
  v5 = Heap;
  if ( Heap )
  {
    *(Heap - 1) = 1;
    v6 = *(const void **)(a1 + 392);
    if ( v6 )
    {
      memmove(Heap, v6, 2LL * *(unsigned __int16 *)(a1 + 400));
      RtlFreeHeap(a1, 2LL);
    }
    *(_QWORD *)(a1 + 392) = v5;
    *(_WORD *)(a1 + 400) = a2;
    return 0LL;
  }
  return 3221225495LL;
}
