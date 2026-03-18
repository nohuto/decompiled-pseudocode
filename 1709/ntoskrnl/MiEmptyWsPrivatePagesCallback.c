/*
 * XREFs of MiEmptyWsPrivatePagesCallback @ 0x140215640
 * Callers:
 *     <none>
 * Callees:
 *     MiEmptyWorkingSetHelper @ 0x140010BF0 (MiEmptyWorkingSetHelper.c)
 *     MiFreeWsleList @ 0x140052390 (MiFreeWsleList.c)
 *     MiRelockWorkingSetExclusive @ 0x1400661C0 (MiRelockWorkingSetExclusive.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     MiWorkingSetIsContended @ 0x1400EBDF0 (MiWorkingSetIsContended.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     KeShouldYieldProcessor @ 0x1401091E0 (KeShouldYieldProcessor.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

char __fastcall MiEmptyWsPrivatePagesCallback(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rsi
  unsigned __int64 i; // rbx
  __int64 PteShadow; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rdx
  LOGICAL ShouldYieldProcessor; // eax
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)a1;
  for ( i = a2; i <= a3; i += 8LL )
  {
    PteShadow = *(_QWORD *)i;
    if ( i >= 0xFFFFF6FB7DBED000uLL && i <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow();
    v13 = PteShadow;
    if ( (PteShadow & 1) != 0 )
    {
      v8 = MI_GET_PAGE_FRAME_FROM_PTE(&v13);
      if ( MiIsPfnInline(v8)
        && (*(_QWORD *)(48 * v9 - 0x58000000000LL + 40) & 0x200000000000000LL) == 0
        && (*(_QWORD *)(48 * v9 - 0x58000000000LL + 8) | 0x8000000000000000uLL) == i
        && (MiGetWsleContents(6 * v9, (__int64)(i << 25) >> 16) & 0xF) != 8 )
      {
        MiEmptyWorkingSetHelper(v3, i, *(_QWORD *)(a1 + 16));
      }
    }
  }
  v10 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v10 + 12) )
  {
    MiFreeWsleList(v3, v10, 0);
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 12LL) = 0;
  }
  if ( (unsigned int)MiWorkingSetIsContended(v3) || (ShouldYieldProcessor = KeShouldYieldProcessor()) != 0 )
    LOBYTE(ShouldYieldProcessor) = MiRelockWorkingSetExclusive(v3, *(_BYTE *)(a1 + 8));
  return ShouldYieldProcessor;
}
