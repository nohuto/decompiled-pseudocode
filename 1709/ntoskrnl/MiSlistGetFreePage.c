/*
 * XREFs of MiSlistGetFreePage @ 0x1400C807C
 * Callers:
 *     MiRemovePageAnyColor @ 0x1400C7CB8 (MiRemovePageAnyColor.c)
 *     MiGetPageSlist @ 0x1400C7FE4 (MiGetPageSlist.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     KeCheckForZeroPage @ 0x140184CB0 (KeCheckForZeroPage.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     MiPageNotZero @ 0x14022A530 (MiPageNotZero.c)
 *     MiSetFreshPfnFromFreeList @ 0x14022A964 (MiSetFreshPfnFromFreeList.c)
 */

_QWORD *__fastcall MiSlistGetFreePage(__int64 a1, int *a2, unsigned int a3)
{
  int v3; // edi
  __int64 v6; // rsi
  _SLIST_HEADER *v7; // rcx
  PSLIST_ENTRY v8; // rax
  _QWORD *p_Next; // rbx
  ULONG_PTR v10; // rsi
  __int64 v11; // rdx
  char v13; // [rsp+50h] [rbp+18h] BYREF

  v3 = *a2;
  v6 = 16LL * a3;
  while ( 1 )
  {
    v7 = (_SLIST_HEADER *)(v6 + *(_QWORD *)(a1 + 8LL * v3 + 4072));
    if ( LOWORD(v7->Alignment) )
    {
      v8 = RtlpInterlockedPopEntrySList(v7);
      p_Next = &v8->Next;
      if ( v8 )
        break;
    }
    if ( v3 == a2[1] )
      return 0LL;
    v3 = a2[1];
  }
  v8[1].Next = 0LL;
  if ( v3 )
  {
    MiSetFreshPfnFromFreeList(v8);
  }
  else if ( (MiFlags & 0x80u) != 0
         && (BYTE3(v8[2].Next) & 0x40) == 0
         && (++dword_140388C10 & MmPageValidationFrequency) == 0 )
  {
    if ( KeGetCurrentPrcb()->HyperPte )
    {
      v10 = MiMapPageInHyperSpaceWorker((__int64)&v8[0x5800000000LL] / 48, &v13, 0x80000000LL);
      if ( KeCheckForZeroPage(v10) )
        MiPageNotZero(v10, (__int64)(p_Next + 0xB000000000LL) / 48);
      LOBYTE(v11) = v13;
      MiUnmapPageInHyperSpaceWorker(v10, v11, 0x80000000LL);
    }
  }
  *p_Next = 0LL;
  return p_Next;
}
