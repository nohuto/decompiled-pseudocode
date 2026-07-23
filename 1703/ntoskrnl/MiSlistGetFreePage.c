/*
 * XREFs of MiSlistGetFreePage @ 0x14001DFF8
 * Callers:
 *     MiGetFreeOrZeroPage @ 0x1400BBDA0 (MiGetFreeOrZeroPage.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiSetFreshPfnFromFreeList @ 0x14017D268 (MiSetFreshPfnFromFreeList.c)
 *     KeCheckForZeroPage @ 0x140185210 (KeCheckForZeroPage.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     MiPageNotZero @ 0x14021F048 (MiPageNotZero.c)
 */

__int64 __fastcall MiSlistGetFreePage(__int64 a1, int a2, int a3, unsigned int a4)
{
  __int64 v5; // r14
  int v6; // ebp
  __int64 v7; // r15
  __int64 i; // rdi
  _SLIST_HEADER *v9; // rcx
  PSLIST_ENTRY v10; // rax
  _QWORD *p_Next; // rbx
  ULONG_PTR v12; // rsi
  __int64 v13; // rdx
  char v15; // [rsp+58h] [rbp+10h] BYREF

  v5 = 16LL * a4;
  v6 = a2;
  v7 = a3;
  for ( i = a2; ; i = v7 )
  {
    v9 = (_SLIST_HEADER *)(v5 + *(_QWORD *)(a1 + 8 * i + 3944));
    if ( LOWORD(v9->Alignment) )
    {
      v10 = RtlpInterlockedPopEntrySList(v9);
      p_Next = &v10->Next;
      if ( v10 )
        break;
    }
    if ( i == v7 )
      return -1LL;
    v6 = v7;
  }
  v10[1].Next = 0LL;
  if ( v6 )
  {
    MiSetFreshPfnFromFreeList(v10);
  }
  else if ( (MiFlags & 0x80u) != 0
         && (BYTE3(v10[2].Next) & 0x40) == 0
         && (++dword_14036CA18 & MmPageValidationFrequency) == 0 )
  {
    if ( KeGetCurrentPrcb()->HyperPte )
    {
      v12 = MiMapPageInHyperSpaceWorker((__int64)&v10[0x5800000000LL] / 48, &v15, 0x80000000LL);
      if ( KeCheckForZeroPage(v12) )
        MiPageNotZero(v12, (__int64)(p_Next + 0xB000000000LL) / 48);
      LOBYTE(v13) = v15;
      MiUnmapPageInHyperSpaceWorker(v12, v13, 0x80000000LL);
    }
  }
  *p_Next = 0LL;
  return (__int64)(p_Next + 0xB000000000LL) / 48;
}
