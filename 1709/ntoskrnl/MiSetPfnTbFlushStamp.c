/*
 * XREFs of MiSetPfnTbFlushStamp @ 0x1400280B0
 * Callers:
 *     MiGetPageTablePages @ 0x140027ECC (MiGetPageTablePages.c)
 *     MiFinalizePageAttribute @ 0x140028064 (MiFinalizePageAttribute.c)
 *     MiTradePage @ 0x140078860 (MiTradePage.c)
 *     MiSwapStackPage @ 0x1400CE138 (MiSwapStackPage.c)
 *     MiSwapNumaStandbyPage @ 0x1401365D0 (MiSwapNumaStandbyPage.c)
 *     MiPurgeBadFileOnlyPages @ 0x140223684 (MiPurgeBadFileOnlyPages.c)
 *     MiPerformFinalZeroing @ 0x14022A6E0 (MiPerformFinalZeroing.c)
 *     MiMapPageFileHash @ 0x1402320E8 (MiMapPageFileHash.c)
 *     MiAllocateDummyPage @ 0x14082C7C0 (MiAllocateDummyPage.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiSetPfnTbFlushStamp(__int64 a1, __int64 a2, int a3)
{
  char v3; // r9
  signed __int64 result; // rax
  signed __int64 v6; // rdx
  unsigned __int64 v7; // r9
  bool i; // zf
  signed __int64 v9; // rcx

  v3 = a2;
  if ( a3 == 1 )
  {
    result = 0xF00000000000000LL;
    *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ (a2 << 56)) & 0xF00000000000000LL;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24);
    v7 = (unsigned __int64)(v3 & 0xF) << 56;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v7 | v6 & 0xF0FFFFFFFFFFFFFFuLL, v6);
    for ( i = v6 == result; !i; i = v9 == result )
    {
      v9 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 24),
                 v7 | result & 0xF0FFFFFFFFFFFFFFuLL,
                 result);
    }
  }
  return result;
}
