/*
 * XREFs of MiEmptyWsPrivatePagesCallback @ 0x14007C430
 * Callers:
 *     <none>
 * Callees:
 *     KeShouldYieldProcessor @ 0x14000D660 (KeShouldYieldProcessor.c)
 *     MiRelockWorkingSetExclusive @ 0x1400406A4 (MiRelockWorkingSetExclusive.c)
 *     MiWorkingSetIsContended @ 0x14007A1C0 (MiWorkingSetIsContended.c)
 *     MiEmptyWorkingSetHelper @ 0x14007C56C (MiEmptyWorkingSetHelper.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiFreeWsleList @ 0x1400D6F10 (MiFreeWsleList.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

char __fastcall MiEmptyWsPrivatePagesCallback(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rsi
  unsigned __int64 i; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rdx
  LOGICAL ShouldYieldProcessor; // eax
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)a1;
  for ( i = a2; i <= a3; i += 8LL )
  {
    v15 = MI_READ_PTE_LOCK_FREE(i);
    if ( (v15 & 1) != 0 )
    {
      v7 = MI_READ_PTE_LOCK_FREE(&v15);
      if ( (unsigned int)MiIsPfnInline((v7 >> 12) & 0xFFFFFFFFFLL, v8, v9, (v7 >> 12) & 0xFFFFFFFFFLL) )
      {
        if ( (*(_QWORD *)(48 * v10 - 0x58000000000LL + 40) & 0x200000000000000LL) == 0
          && (*(_QWORD *)(48 * v10 - 0x58000000000LL + 8) | 0x8000000000000000uLL) == i
          && (MiGetWsleContents(6 * v10, (__int64)(i << 25) >> 16) & 0xF) != 8 )
        {
          MiEmptyWorkingSetHelper(v3, i, *(_QWORD *)(a1 + 16));
        }
      }
    }
  }
  v11 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v11 + 12) )
  {
    MiFreeWsleList(v3, v11, 0LL);
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 12LL) = 0;
  }
  if ( (unsigned int)MiWorkingSetIsContended(v3) || (ShouldYieldProcessor = KeShouldYieldProcessor()) != 0 )
  {
    LOBYTE(v12) = *(_BYTE *)(a1 + 8);
    LOBYTE(ShouldYieldProcessor) = MiRelockWorkingSetExclusive(v3, v12);
  }
  return ShouldYieldProcessor;
}
