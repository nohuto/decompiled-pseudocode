/*
 * XREFs of MiSlistGetFreePage @ 0x1400B82CC
 * Callers:
 *     MiRemovePageAnyColor @ 0x1400B80E0 (MiRemovePageAnyColor.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     MiArePageContentsZero @ 0x140264DE4 (MiArePageContentsZero.c)
 *     MiSetFreshPfnFromFreeList @ 0x140265454 (MiSetFreshPfnFromFreeList.c)
 */

PSLIST_ENTRY __fastcall MiSlistGetFreePage(__int64 a1, int *a2, unsigned int a3)
{
  int v3; // edi
  __int64 v6; // rsi
  _SLIST_HEADER *v7; // rcx
  PSLIST_ENTRY v8; // rbx

  v3 = *a2;
  v6 = 16LL * a3;
  while ( 1 )
  {
    v7 = (_SLIST_HEADER *)(v6 + *(_QWORD *)(a1 + 8LL * v3 + 4136));
    if ( LOWORD(v7->Alignment) )
    {
      v8 = RtlpInterlockedPopEntrySList(v7);
      if ( v8 )
        break;
    }
    if ( v3 == a2[1] )
      return 0LL;
    v3 = a2[1];
  }
  v8[1].Next = (_SLIST_ENTRY *)ZeroPte;
  if ( v3 )
  {
    MiSetFreshPfnFromFreeList(v8);
  }
  else if ( (MiFlags & 0x80u) != 0 && (++dword_1403CBEAC & MmPageValidationFrequency) == 0 )
  {
    MiArePageContentsZero((__int64)&v8[0x5800000000LL] / 48);
  }
  v8->Next = 0LL;
  return v8;
}
