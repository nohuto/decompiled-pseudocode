/*
 * XREFs of MiGetPageSlist @ 0x1400AA3F0
 * Callers:
 *     MiGetFreeOrZeroPageAnyColor @ 0x1400E6CC0 (MiGetFreeOrZeroPageAnyColor.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     MiArePageContentsZero @ 0x140264DE4 (MiArePageContentsZero.c)
 *     MiSetFreshPfnFromFreeList @ 0x140265454 (MiSetFreshPfnFromFreeList.c)
 */

PSLIST_ENTRY __fastcall MiGetPageSlist(__int64 a1, unsigned int a2, __int16 a3)
{
  int v3; // r12d
  int *v4; // r14
  int v6; // r13d
  unsigned int v7; // ebp
  int i; // ebx
  _SLIST_HEADER *v9; // rcx
  PSLIST_ENTRY v10; // rdi
  PSLIST_ENTRY result; // rax

  v3 = dword_1403CB6D8;
  v4 = (int *)&MiZeroThenZero;
  v6 = 16;
  if ( (a3 & 0x4000) == 0 )
    v6 = 1;
  v7 = a2;
  if ( (a3 & 2) == 0 )
    v4 = (int *)&MiFreeThenFree;
LABEL_5:
  for ( i = *v4; ; i = v4[1] )
  {
    v9 = (_SLIST_HEADER *)(16LL * v7 + *(_QWORD *)(a1 + 8LL * i + 4136));
    if ( LOWORD(v9->Alignment) )
    {
      v10 = RtlpInterlockedPopEntrySList(v9);
      if ( v10 )
        break;
    }
    if ( i == v4[1] )
    {
      v7 = v7 & ~v3 | v3 & (v7 + v6);
      if ( v7 != a2 )
        goto LABEL_5;
      return 0LL;
    }
  }
  v10[1].Next = (_SLIST_ENTRY *)ZeroPte;
  if ( i )
  {
    MiSetFreshPfnFromFreeList(v10);
  }
  else if ( (MiFlags & 0x80u) != 0 && (++dword_1403CBEAC & MmPageValidationFrequency) == 0 )
  {
    MiArePageContentsZero((__int64)&v10[0x5800000000LL] / 48);
    result = v10;
    v10->Next = 0LL;
    return result;
  }
  v10->Next = 0LL;
  return v10;
}
